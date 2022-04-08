using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Controls the first person camera attached to the player
/// </summary>
public class FirstPersonCameraController : MonoBehaviour
{
    [Tooltip("First person camera")]
    private Camera fpCamera;

    [Tooltip("Quaternion containing the camera rotation")]
    private Quaternion cameraRotation;

    [Header("First person camera parameters")]
    [Tooltip("Max angle at which the player is able to look behind")]
    [SerializeField] private int angleMax = 85;
    [Tooltip("Mouse sensitivity along the Y axis")]
    [Range(2, 10)]
    [SerializeField]  private float yMouseSensitivity = 3f;
    [Tooltip("Mouse smoothness of the rotation")]
    [Range(10, 30)]
    [SerializeField] private float ySmoothRotation = 20f;

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

    private void UnlockCursor()
    {
        // Unlock the cursor in the middle of the screen
        Cursor.lockState = CursorLockMode.None;

        // Makes the cursor visible
        Cursor.visible = true;
    }

    /// <summary>
    /// Clamps the rotation around the Y axis between -50� and 50�
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
        // Gets the mouse X position and clamps it
        float yRotation = Mathf.Clamp( Input.GetAxis("Mouse X") * yMouseSensitivity * 1f , -yMouseSensitivity , yMouseSensitivity);
        // Gets the camera rotation
        float cameraYRot = Mathf.Abs(fpCamera.transform.localRotation.y);
        // If the player looks behind, reduces his rotation speed to avoid to exceed the maximum rotation angle
        if (cameraYRot > (float)angleMax / 100 && yRotation* fpCamera.transform.localRotation.y > 0)
            yRotation = Mathf.Clamp(yRotation, -yMouseSensitivity + cameraYRot * yMouseSensitivity, yMouseSensitivity - cameraYRot * yMouseSensitivity);

        // Gets the new camera's rotation
        cameraRotation *= Quaternion.Euler(0f, yRotation, 0f);
        cameraRotation = ClampRotation(cameraRotation);

        // Slerps to the new rotation
        fpCamera.transform.localRotation = Quaternion.Slerp(fpCamera.transform.localRotation, cameraRotation, ySmoothRotation * Time.deltaTime);
    }

    /// <summary>
    /// Locks the cursor and gets the initial parameters
    /// </summary>
    void Start()
    {
        // Locks the cursor
        LockCursor();

        // Initializes the camera
        fpCamera = GetComponent<Camera>();

        // Initializes the camera's rotation
        cameraRotation = fpCamera.transform.localRotation;

        if (DataManager.InstanceDataManager != null && DataManager.InstanceDataManager.yMouseSensitivity != 0)
        {
            yMouseSensitivity = DataManager.InstanceDataManager.yMouseSensitivity;
            ySmoothRotation = DataManager.InstanceDataManager.ySmoothRotation;
        }
    }


    private void LateUpdate()
    {
        // Gets the look rotation of the camera
        LookRotation();


        if (Input.GetMouseButtonDown(1))
        {
            LockCursor();
        }

        else if (Input.GetKeyDown(KeyCode.Escape))
        {
            UnlockCursor();
        }
    }    

}
