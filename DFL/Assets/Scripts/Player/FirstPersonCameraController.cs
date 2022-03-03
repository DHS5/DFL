using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Controls the first person camera attached to the player
/// </summary>
public class FirstPersonCameraController : MonoBehaviour
{
    [Tooltip("First person camera")]
    [SerializeField] private Camera fpCamera;

    [Tooltip("Quaternion containing the camera rotation")]
    private Quaternion cameraRotation;

    // Parameters for the look rotation (configurable in the inspector)
    [SerializeField] private int angleMax = 50;
    [SerializeField]  private float yMouseSensitivity = 5f;
    [SerializeField] private float ySmoothRotation = 10f;

    /// <summary>
    /// Locks the cursor and makes it invisible
    /// </summary>
    private void LockCursor()
    {
        // Lock the cursor in the middle of the screen
        Cursor.lockState = CursorLockMode.Locked;

        // Makes the cursor invisible
        Cursor.visible = false;
    }

    /// <summary>
    /// Clamps the rotation around the Y axis between -50° and 50°
    /// Also keeps the rotation stable during the run
    /// </summary>
    /// <param name="rot">Original quaternion</param>
    /// <returns>Clamped quaternion</returns>
    private Quaternion ClampRotation(Quaternion rot)
    {
        // Normalize the original quaternion
        rot.y /= rot.w;
        rot.w = 1;

        // Keeps it stable around the X and Z axis
        rot = Quaternion.Euler(10f, rot.eulerAngles.y, 0f);

        // Clamps the Y rotation in the angleMax range
        float angleY = 2.0f * Mathf.Rad2Deg * Mathf.Atan(rot.y);
        angleY = Mathf.Clamp(angleY, -angleMax, angleMax);
        rot.y = Mathf.Tan(0.5f * Mathf.Deg2Rad * angleY);

        // Returns the usable quaternion
        return rot;
    }

    /// <summary>
    /// Makes the camera look in the direction of the cursor
    /// </summary>
    private void LookRotation()
    {
        // Gets the mouse X position
        float yRotation = Input.GetAxis("Mouse X") * yMouseSensitivity * 1f;

        // Gets the new camera's rotation
        cameraRotation *= Quaternion.Euler(0f, yRotation, 0f);
        cameraRotation = ClampRotation(cameraRotation);

        // Slerps to the new rotation
        fpCamera.transform.localRotation = Quaternion.Slerp(fpCamera.transform.localRotation, cameraRotation, ySmoothRotation * Time.deltaTime);
    }

    /// <summary>
    /// Called on the player's creation
    /// </summary>
    void Start()
    {
        // Lock the cursor
        LockCursor();

        // Initialize the camera's rotation
        cameraRotation = fpCamera.transform.localRotation;
    }

    // Update is called once per frame
    void LateUpdate()
    {
        // Update the new camera's look rotation
        LookRotation();
    }
}
