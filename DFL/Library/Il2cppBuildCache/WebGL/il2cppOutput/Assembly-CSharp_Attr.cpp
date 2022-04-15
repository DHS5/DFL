#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// UnityEngine.HeaderAttribute
struct HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB;
// UnityEngine.HideInInspector
struct HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA;
// UnityEngine.RangeAttribute
struct RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25;
// System.String
struct String_t;
// UnityEngine.TooltipAttribute
struct TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// UnityEngine.HideInInspector
struct HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.HeaderAttribute
struct HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String UnityEngine.HeaderAttribute::header
	String_t* ___header_0;

public:
	inline static int32_t get_offset_of_header_0() { return static_cast<int32_t>(offsetof(HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB, ___header_0)); }
	inline String_t* get_header_0() const { return ___header_0; }
	inline String_t** get_address_of_header_0() { return &___header_0; }
	inline void set_header_0(String_t* value)
	{
		___header_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___header_0), (void*)value);
	}
};


// UnityEngine.RangeAttribute
struct RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.Single UnityEngine.RangeAttribute::min
	float ___min_0;
	// System.Single UnityEngine.RangeAttribute::max
	float ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5, ___max_1)); }
	inline float get_max_1() const { return ___max_1; }
	inline float* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(float value)
	{
		___max_1 = value;
	}
};


// UnityEngine.TooltipAttribute
struct TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String UnityEngine.TooltipAttribute::tooltip
	String_t* ___tooltip_0;

public:
	inline static int32_t get_offset_of_tooltip_0() { return static_cast<int32_t>(offsetof(TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B, ___tooltip_0)); }
	inline String_t* get_tooltip_0() const { return ___tooltip_0; }
	inline String_t** get_address_of_tooltip_0() { return &___tooltip_0; }
	inline void set_tooltip_0(String_t* value)
	{
		___tooltip_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tooltip_0), (void*)value);
	}
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void UnityEngine.SerializeField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3 (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.HideInInspector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9 (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042 (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * __this, String_t* ___tooltip0, const RuntimeMethod* method);
// System.Void UnityEngine.HeaderAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * __this, String_t* ___header0, const RuntimeMethod* method);
// System.Void UnityEngine.RangeAttribute::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000 (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * __this, float ___min0, float ___max1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
static void AssemblyU2DCSharp_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[0];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[1];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[2];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
}
static void ZombieCameraLogic_tB6471565555B49079972C92AABAA1362095EAD61_CustomAttributesCacheGenerator_m_target(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ZombieCharacterControl_t0C327E98E53BF692AC3520AF27E51B597BCE38FC_CustomAttributesCacheGenerator_m_moveSpeed(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ZombieCharacterControl_t0C327E98E53BF692AC3520AF27E51B597BCE38FC_CustomAttributesCacheGenerator_m_turnSpeed(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ZombieCharacterControl_t0C327E98E53BF692AC3520AF27E51B597BCE38FC_CustomAttributesCacheGenerator_m_animator(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ZombieCharacterControl_t0C327E98E53BF692AC3520AF27E51B597BCE38FC_CustomAttributesCacheGenerator_m_rigidBody(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ZombieCharacterControl_t0C327E98E53BF692AC3520AF27E51B597BCE38FC_CustomAttributesCacheGenerator_m_controlMode(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ZombieFree_t8086901CD9983C1AFF0202A431AA51790A216632_CustomAttributesCacheGenerator_m_cameraLogic(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Bonus_tEDF6605668C94B63374905863C67A4F35DE64764_CustomAttributesCacheGenerator_bonusManager(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x42\x6F\x6E\x75\x73\x20\x4D\x61\x6E\x61\x67\x65\x72\x20\x6F\x66\x20\x74\x68\x65\x20\x67\x61\x6D\x65"), NULL);
	}
}
static void Bonus_tEDF6605668C94B63374905863C67A4F35DE64764_CustomAttributesCacheGenerator_player(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x47\x61\x6D\x65\x20\x6F\x62\x6A\x65\x63\x74\x20\x6F\x66\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72"), NULL);
	}
}
static void Bonus_tEDF6605668C94B63374905863C67A4F35DE64764_CustomAttributesCacheGenerator_playerC(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x50\x6C\x61\x79\x65\x72\x43\x6F\x6E\x74\x72\x6F\x6C\x6C\x65\x72\x20\x6F\x66\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72\xA\x62\x6F\x6E\x75\x73\x53\x70\x65\x65\x64\x20\x2F\x20\x62\x6F\x6E\x75\x73\x4A\x75\x6D\x70"), NULL);
	}
}
static void Bonus_tEDF6605668C94B63374905863C67A4F35DE64764_CustomAttributesCacheGenerator_playerG(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x50\x6C\x61\x79\x65\x72\x47\x61\x6D\x65\x70\x6C\x61\x79\x20\x6F\x66\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72\xA\x69\x73\x43\x68\x61\x73\x61\x62\x6C\x65\x20\x2F\x20\x69\x73\x49\x6E\x76\x69\x6E\x63\x69\x62\x6C\x65"), NULL);
	}
}
static void Bonus_tEDF6605668C94B63374905863C67A4F35DE64764_CustomAttributesCacheGenerator_bonusTime(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Bonus_tEDF6605668C94B63374905863C67A4F35DE64764_CustomAttributesCacheGenerator_bonusColor(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void BonusManager_tA1D115EF7F8D235367B09302DEA268ED271CE42D_CustomAttributesCacheGenerator_gameManager(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x69\x6E\x67\x6C\x65\x74\x6F\x6E\x20\x49\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x74\x68\x65\x20\x47\x61\x6D\x65\x4D\x61\x6E\x61\x67\x65\x72"), NULL);
	}
}
static void BonusManager_tA1D115EF7F8D235367B09302DEA268ED271CE42D_CustomAttributesCacheGenerator_bonusPrefabs(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void JumpBonus_tF0FDD1072AEE53BB7E1DD7F375A17EB2E64579D4_CustomAttributesCacheGenerator_bonusJumpPower(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void SpeedBonus_tD3DB9099FD5D76E8CC959312A79B77C7CD497D45_CustomAttributesCacheGenerator_bonusSpeed(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void CameraAnimator_tF75E996BF90152E5CF6D308E9DD2380E5C3CA6C7_CustomAttributesCacheGenerator_runAnim(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x41\x6E\x69\x6D\x61\x74\x69\x6F\x6E\x73"), NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x41\x6E\x69\x6D\x61\x74\x69\x6F\x6E\x20\x52\x75\x6E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[2];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void CameraAnimator_tF75E996BF90152E5CF6D308E9DD2380E5C3CA6C7_CustomAttributesCacheGenerator_sprintAnim(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void CameraAnimator_tF75E996BF90152E5CF6D308E9DD2380E5C3CA6C7_CustomAttributesCacheGenerator_jukeRightAnim(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
	}
}
static void CameraAnimator_tF75E996BF90152E5CF6D308E9DD2380E5C3CA6C7_CustomAttributesCacheGenerator_jukeLeftAnim(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void CameraAnimator_tF75E996BF90152E5CF6D308E9DD2380E5C3CA6C7_CustomAttributesCacheGenerator_spinRightAnim(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void CameraAnimator_tF75E996BF90152E5CF6D308E9DD2380E5C3CA6C7_CustomAttributesCacheGenerator_spinLeftAnim(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void CameraAnimator_tF75E996BF90152E5CF6D308E9DD2380E5C3CA6C7_CustomAttributesCacheGenerator_cameraAccPostProcess(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x50\x6F\x73\x74\x20\x50\x72\x6F\x63\x65\x73\x73\x69\x6E\x67"), NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x50\x6F\x73\x74\x2D\x50\x72\x6F\x63\x65\x73\x73\x69\x6E\x67\x20\x65\x66\x66\x65\x63\x74\x20\x6F\x66\x20\x74\x68\x65\x20\x61\x63\x63\x65\x6C\x65\x72\x61\x74\x69\x6F\x6E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[2];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void CameraAnimator_tF75E996BF90152E5CF6D308E9DD2380E5C3CA6C7_CustomAttributesCacheGenerator_isJuking(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void CameraAnimator_tF75E996BF90152E5CF6D308E9DD2380E5C3CA6C7_CustomAttributesCacheGenerator_jukeSpeed(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void CameraAnimator_tF75E996BF90152E5CF6D308E9DD2380E5C3CA6C7_CustomAttributesCacheGenerator_isSpining(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void FirstPersonCameraController_t8C284C0361D050AF7C5EF16F67D023294E74F24C_CustomAttributesCacheGenerator_gameManager(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x69\x6E\x67\x6C\x65\x74\x6F\x6E\x20\x49\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x74\x68\x65\x20\x47\x61\x6D\x65\x4D\x61\x6E\x61\x67\x65\x72"), NULL);
	}
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[2];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x66\x75\x6C\x20\x73\x63\x72\x69\x70\x74\x73"), NULL);
	}
}
static void FirstPersonCameraController_t8C284C0361D050AF7C5EF16F67D023294E74F24C_CustomAttributesCacheGenerator_fpCamera(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x46\x69\x72\x73\x74\x20\x70\x65\x72\x73\x6F\x6E\x20\x63\x61\x6D\x65\x72\x61"), NULL);
	}
}
static void FirstPersonCameraController_t8C284C0361D050AF7C5EF16F67D023294E74F24C_CustomAttributesCacheGenerator_cameraRotation(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x51\x75\x61\x74\x65\x72\x6E\x69\x6F\x6E\x20\x63\x6F\x6E\x74\x61\x69\x6E\x69\x6E\x67\x20\x74\x68\x65\x20\x63\x61\x6D\x65\x72\x61\x20\x72\x6F\x74\x61\x74\x69\x6F\x6E"), NULL);
	}
}
static void FirstPersonCameraController_t8C284C0361D050AF7C5EF16F67D023294E74F24C_CustomAttributesCacheGenerator_angleMax(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x46\x69\x72\x73\x74\x20\x70\x65\x72\x73\x6F\x6E\x20\x63\x61\x6D\x65\x72\x61\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x73"), NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x61\x78\x20\x61\x6E\x67\x6C\x65\x20\x61\x74\x20\x77\x68\x69\x63\x68\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72\x20\x69\x73\x20\x61\x62\x6C\x65\x20\x74\x6F\x20\x6C\x6F\x6F\x6B\x20\x62\x65\x68\x69\x6E\x64"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[2];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FirstPersonCameraController_t8C284C0361D050AF7C5EF16F67D023294E74F24C_CustomAttributesCacheGenerator_yMouseSensitivity(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x6F\x75\x73\x65\x20\x73\x65\x6E\x73\x69\x74\x69\x76\x69\x74\x79\x20\x61\x6C\x6F\x6E\x67\x20\x74\x68\x65\x20\x59\x20\x61\x78\x69\x73"), NULL);
	}
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[1];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 2.0f, 10.0f, NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[2];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FirstPersonCameraController_t8C284C0361D050AF7C5EF16F67D023294E74F24C_CustomAttributesCacheGenerator_ySmoothRotation(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x6F\x75\x73\x65\x20\x73\x6D\x6F\x6F\x74\x68\x6E\x65\x73\x73\x20\x6F\x66\x20\x74\x68\x65\x20\x72\x6F\x74\x61\x74\x69\x6F\x6E"), NULL);
	}
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[1];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 10.0f, 30.0f, NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[2];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_CustomAttributesCacheGenerator_U3CInstanceDataManagerU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_CustomAttributesCacheGenerator_gameMode(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x47\x61\x6D\x65\x20\x4D\x6F\x64\x65\x20\x74\x6F\x20\x70\x61\x73\x73\x20\x74\x6F\x20\x74\x68\x65\x20\x47\x61\x6D\x65\x4D\x61\x6E\x61\x67\x65\x72"), NULL);
	}
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[1];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_CustomAttributesCacheGenerator_difficulty(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x44\x69\x66\x66\x69\x63\x75\x6C\x74\x79\x20\x74\x6F\x20\x70\x61\x73\x73\x20\x74\x6F\x20\x74\x68\x65\x20\x47\x61\x6D\x65\x4D\x61\x6E\x61\x67\x65\x72"), NULL);
	}
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[1];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_CustomAttributesCacheGenerator_options(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x47\x61\x6D\x65\x20\x6F\x70\x74\x69\x6F\x6E\x73\x20\x74\x6F\x20\x70\x61\x73\x73\x20\x74\x6F\x20\x74\x68\x65\x20\x47\x61\x6D\x65\x4D\x61\x6E\x61\x67\x65\x72"), NULL);
	}
}
static void DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_CustomAttributesCacheGenerator_yMouseSensitivity(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_CustomAttributesCacheGenerator_ySmoothRotation(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_CustomAttributesCacheGenerator_DataManager_get_InstanceDataManager_m340DDA0673AED48742FCE0DA3F1FF73373E9C16F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_CustomAttributesCacheGenerator_DataManager_set_InstanceDataManager_m05AB51AD347D0A8984CFE932E74590CCFC17D5D0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EnemiesManager_tC4CE46E95ABA3298DB13759862DD5D47B3EDAB24_CustomAttributesCacheGenerator_gameManager(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x69\x6E\x67\x6C\x65\x74\x6F\x6E\x20\x49\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x74\x68\x65\x20\x47\x61\x6D\x65\x4D\x61\x6E\x61\x67\x65\x72"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void EnemiesManager_tC4CE46E95ABA3298DB13759862DD5D47B3EDAB24_CustomAttributesCacheGenerator_gameUIManager(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x55\x49\x20\x4D\x61\x6E\x61\x67\x65\x72\x20\x6F\x66\x20\x74\x68\x65\x20\x67\x61\x6D\x65"), NULL);
	}
}
static void EnemiesManager_tC4CE46E95ABA3298DB13759862DD5D47B3EDAB24_CustomAttributesCacheGenerator_field(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x63\x72\x69\x70\x74\x20\x6F\x66\x20\x74\x68\x65\x20\x66\x69\x65\x6C\x64"), NULL);
	}
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[1];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void EnemiesManager_tC4CE46E95ABA3298DB13759862DD5D47B3EDAB24_CustomAttributesCacheGenerator_wingmenPrefabs(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x66\x65\x6E\x64\x65\x72\x73"), NULL);
	}
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[1];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x45\x6E\x65\x6D\x79\x27\x73\x20\x70\x72\x65\x66\x61\x62\x20\x6C\x69\x73\x74\x73"), NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[2];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4C\x69\x73\x74\x20\x6F\x66\x20\x74\x68\x65\x20\x57\x69\x6E\x67\x6D\x65\x6E\x27\x73\x20\x70\x72\x65\x66\x61\x62\x73"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[3];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void EnemiesManager_tC4CE46E95ABA3298DB13759862DD5D47B3EDAB24_CustomAttributesCacheGenerator_linemenPrefabs(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4C\x69\x73\x74\x20\x6F\x66\x20\x74\x68\x65\x20\x42\x69\x67\x6D\x65\x6E\x27\x73\x20\x70\x72\x65\x66\x61\x62\x73"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void EnemiesManager_tC4CE46E95ABA3298DB13759862DD5D47B3EDAB24_CustomAttributesCacheGenerator_classicZPrefabs(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4C\x69\x73\x74\x20\x6F\x66\x20\x74\x68\x65\x20\x63\x6C\x61\x73\x73\x69\x63\x20\x7A\x6F\x6D\x62\x69\x65\x27\x73\x20\x70\x72\x65\x66\x61\x62\x73"), NULL);
	}
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[2];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x5A\x6F\x6D\x62\x69\x65\x73"), NULL);
	}
}
static void EnemiesManager_tC4CE46E95ABA3298DB13759862DD5D47B3EDAB24_CustomAttributesCacheGenerator_sleepingZPrefabs(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4C\x69\x73\x74\x20\x6F\x66\x20\x74\x68\x65\x20\x73\x6C\x65\x65\x70\x69\x6E\x67\x20\x7A\x6F\x6D\x62\x69\x65\x27\x73\x20\x70\x72\x65\x66\x61\x62\x73"), NULL);
	}
}
static void EnemiesManager_tC4CE46E95ABA3298DB13759862DD5D47B3EDAB24_CustomAttributesCacheGenerator_waveNumber(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x57\x61\x76\x65\x20\x6E\x75\x6D\x62\x65\x72\x20\x28\x2D\x2D\x3E\x20\x64\x69\x66\x66\x69\x63\x75\x6C\x74\x79\x29"), NULL);
	}
}
static void Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_enemy(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x47\x61\x6D\x65\x20\x4F\x62\x6A\x65\x63\x74\x20\x6F\x66\x20\x74\x68\x65\x20\x65\x6E\x65\x6D\x79"), NULL);
	}
}
static void Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_navMeshAgent(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x61\x76\x20\x4D\x65\x73\x68\x20\x41\x67\x65\x6E\x74\x20\x6F\x66\x20\x74\x68\x65\x20\x65\x6E\x65\x6D\x79"), NULL);
	}
}
static void Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_player(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x47\x61\x6D\x65\x20\x4F\x62\x6A\x65\x63\x74\x20\x6F\x66\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72"), NULL);
	}
}
static void Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_intelligence(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x42\x65\x68\x61\x76\x69\x6F\x75\x72\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x73"), NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4C\x65\x76\x65\x6C\x20\x6F\x66\x20\x69\x6E\x74\x65\x6C\x6C\x69\x67\x65\x6E\x63\x65\x20\x6F\x66\x20\x74\x68\x65\x20\x65\x6E\x65\x6D\x79\x20\x28\x61\x6E\x74\x69\x63\x69\x70\x61\x74\x69\x6F\x6E\x20\x6F\x66\x20\x74\x68\x65\x20\x66\x75\x74\x75\x72\x65\x20\x70\x6F\x73\x69\x74\x69\x6F\x6E\x29"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[2];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_reactivity(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4C\x65\x76\x65\x6C\x20\x6F\x66\x20\x72\x65\x61\x63\x74\x69\x76\x69\x74\x79\x20\x6F\x66\x20\x74\x68\x65\x20\x65\x6E\x65\x6D\x79\x20\x28\x74\x69\x6D\x65\x20\x62\x65\x74\x77\x65\x65\x6E\x20\x6E\x65\x77\x20\x64\x65\x73\x74\x69\x6E\x61\x74\x69\x6F\x6E\x27\x73\x20\x73\x65\x74\x74\x69\x6E\x67\x73\x29"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_reactivityM(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x52\x65\x61\x63\x74\x69\x76\x69\x74\x79\x20\x6D\x75\x6C\x74\x69\x70\x6C\x69\x65\x72"), NULL);
	}
}
static void Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_attentionRadius(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x52\x61\x64\x69\x75\x73\x20\x61\x72\x6F\x75\x6E\x64\x20\x74\x68\x65\x20\x65\x6E\x65\x6D\x79\x20\x69\x6E\x20\x77\x68\x69\x63\x68\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72\x20\x67\x65\x74\x73\x20\x74\x68\x65\x20\x65\x6E\x65\x6D\x79\x27\x73\x20\x61\x74\x74\x65\x6E\x74\x69\x6F\x6E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_chaseRadius(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x52\x61\x64\x69\x75\x73\x20\x61\x72\x6F\x75\x6E\x64\x20\x74\x68\x65\x20\x65\x6E\x65\x6D\x79\x20\x69\x6E\x20\x77\x68\x69\x63\x68\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72\x20\x61\x63\x74\x69\x76\x61\x74\x65\x73\x20\x74\x68\x65\x20\x65\x6E\x65\x6D\x79\x27\x73\x20\x63\x68\x61\x73\x65"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_attackRadius(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x52\x61\x64\x69\x75\x73\x20\x61\x72\x6F\x75\x6E\x64\x20\x74\x68\x65\x20\x65\x6E\x65\x6D\x79\x20\x69\x6E\x20\x77\x68\x69\x63\x68\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72\x20\x61\x63\x74\x69\x76\x61\x74\x65\x73\x20\x74\x68\x65\x20\x65\x6E\x65\x6D\x79\x27\x73\x20\x61\x74\x74\x61\x63\x6B"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_attackSpeedM(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x41\x74\x74\x61\x63\x6B\x20\x73\x70\x65\x65\x64\x20\x6D\x75\x6C\x74\x69\x70\x6C\x69\x65\x72"), NULL);
	}
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[2];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x50\x68\x79\x73\x69\x63\x61\x6C\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x73"), NULL);
	}
}
static void Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_attackSpeed(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x57\x68\x65\x74\x68\x65\x72\x20\x74\x68\x65\x20\x65\x6E\x65\x6D\x79\x20\x69\x73\x20\x69\x6E\x20\x61\x74\x74\x61\x63\x6B\x20\x73\x70\x65\x65\x64"), NULL);
	}
}
static void Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_size(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x69\x7A\x65\x20\x6F\x66\x20\x74\x68\x65\x20\x65\x6E\x65\x6D\x79"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_playerPosition(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x50\x6F\x73\x69\x74\x69\x6F\x6E\x20\x6F\x66\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72"), NULL);
	}
}
static void Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_playerDirection(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x44\x69\x72\x65\x63\x74\x69\x6F\x6E\x20\x6F\x66\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72"), NULL);
	}
}
static void Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_toPlayerDirection(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x44\x69\x72\x65\x63\x74\x69\x6F\x6E\x20\x66\x72\x6F\x6D\x20\x74\x68\x65\x20\x65\x6E\x65\x6D\x79\x20\x74\x6F\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72"), NULL);
	}
}
static void Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_distance(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x44\x69\x73\x74\x61\x6E\x63\x65\x20\x62\x65\x74\x77\x65\x65\x6E\x20\x74\x68\x65\x20\x65\x6E\x65\x6D\x79\x20\x61\x6E\x64\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72"), NULL);
	}
}
static void Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_toPlayerAngle(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x41\x6E\x67\x6C\x65\x20\x62\x65\x74\x77\x65\x65\x6E\x20\x74\x68\x65\x20\x65\x6E\x65\x6D\x79\x20\x61\x6E\x64\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72"), NULL);
	}
}
static void Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_destination(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x73\x74\x69\x6E\x61\x74\x69\x6F\x6E\x20\x6F\x66\x20\x74\x68\x65\x20\x65\x6E\x65\x6D\x79\x20\x28\x6F\x6E\x20\x74\x68\x65\x20\x6E\x61\x76\x20\x6D\x65\x73\x68\x29"), NULL);
	}
}
static void EnvironmentManager_t1A965A44AAC72B34D9F6B96200BE561C9D2211FE_CustomAttributesCacheGenerator_gameManager(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x69\x6E\x67\x6C\x65\x74\x6F\x6E\x20\x49\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x74\x68\x65\x20\x47\x61\x6D\x65\x4D\x61\x6E\x61\x67\x65\x72"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void EnvironmentManager_t1A965A44AAC72B34D9F6B96200BE561C9D2211FE_CustomAttributesCacheGenerator_skyboxes(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void EnvironmentManager_t1A965A44AAC72B34D9F6B96200BE561C9D2211FE_CustomAttributesCacheGenerator_directionnalLights(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Field_tC6B3BDE43EF1B7CE3258A84CB186FE2711431153_CustomAttributesCacheGenerator_fieldMaterials(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x74\x72\x75\x63\x74\x20\x63\x6F\x6E\x74\x61\x69\x6E\x69\x6E\x67\x20\x74\x68\x65\x20\x6D\x61\x74\x65\x72\x69\x61\x6C\x73\x20\x74\x6F\x20\x75\x73\x65\x20\x6F\x6E\x20\x74\x68\x65\x20\x66\x69\x65\x6C\x64"), NULL);
	}
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[1];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void Field_tC6B3BDE43EF1B7CE3258A84CB186FE2711431153_CustomAttributesCacheGenerator_grass(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x50\x72\x65\x66\x61\x62\x20\x6F\x62\x6A\x65\x63\x74\x73\x20\x6F\x66\x20\x74\x68\x65\x20\x66\x69\x65\x6C\x64"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Field_tC6B3BDE43EF1B7CE3258A84CB186FE2711431153_CustomAttributesCacheGenerator_endzone1(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Field_tC6B3BDE43EF1B7CE3258A84CB186FE2711431153_CustomAttributesCacheGenerator_endzone2(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Field_tC6B3BDE43EF1B7CE3258A84CB186FE2711431153_CustomAttributesCacheGenerator_barrierL(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Field_tC6B3BDE43EF1B7CE3258A84CB186FE2711431153_CustomAttributesCacheGenerator_barrierR(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Field_tC6B3BDE43EF1B7CE3258A84CB186FE2711431153_CustomAttributesCacheGenerator_goalpost1Base(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Field_tC6B3BDE43EF1B7CE3258A84CB186FE2711431153_CustomAttributesCacheGenerator_goalpost1Metal(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Field_tC6B3BDE43EF1B7CE3258A84CB186FE2711431153_CustomAttributesCacheGenerator_goalpost2Base(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Field_tC6B3BDE43EF1B7CE3258A84CB186FE2711431153_CustomAttributesCacheGenerator_goalpost2Metal(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Field_tC6B3BDE43EF1B7CE3258A84CB186FE2711431153_CustomAttributesCacheGenerator_fieldZone(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x5A\x6F\x6E\x65\x73\x20\x6F\x66\x20\x74\x68\x65\x20\x66\x69\x65\x6C\x64"), NULL);
	}
}
static void Field_tC6B3BDE43EF1B7CE3258A84CB186FE2711431153_CustomAttributesCacheGenerator_enemies(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4C\x69\x73\x74\x20\x6F\x66\x20\x74\x68\x65\x20\x65\x6E\x65\x6D\x69\x65\x73\x20\x6F\x6E\x20\x74\x68\x65\x20\x66\x69\x65\x6C\x64"), NULL);
	}
}
static void FieldManager_t6F22058E311E1C81DD93162D866DAB5140B2DB15_CustomAttributesCacheGenerator_gameManager(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x69\x6E\x67\x6C\x65\x74\x6F\x6E\x20\x49\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x74\x68\x65\x20\x47\x61\x6D\x65\x4D\x61\x6E\x61\x67\x65\x72"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FieldManager_t6F22058E311E1C81DD93162D866DAB5140B2DB15_CustomAttributesCacheGenerator_surface(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[1];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x61\x76\x20\x4D\x65\x73\x68\x20\x53\x75\x72\x66\x61\x63\x65"), NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[2];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x61\x76\x20\x4D\x65\x73\x68\x20\x53\x75\x72\x66\x61\x63\x65\x20\x6F\x66\x20\x74\x68\x65\x20\x63\x75\x72\x72\x65\x6E\x74\x20\x66\x69\x65\x6C\x64"), NULL);
	}
}
static void FieldManager_t6F22058E311E1C81DD93162D866DAB5140B2DB15_CustomAttributesCacheGenerator_fieldPrefab(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x45\x6E\x76\x69\x72\x6F\x6E\x6D\x65\x6E\x74\x20\x70\x72\x65\x66\x61\x62\x73"), NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x50\x72\x65\x66\x61\x62\x20\x6F\x66\x20\x74\x68\x65\x20\x66\x69\x65\x6C\x64"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[2];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FieldManager_t6F22058E311E1C81DD93162D866DAB5140B2DB15_CustomAttributesCacheGenerator_stadiumPrefab(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x50\x72\x65\x66\x61\x62\x20\x6F\x66\x20\x74\x68\x65\x20\x53\x74\x61\x64\x69\x75\x6D"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FieldManager_t6F22058E311E1C81DD93162D866DAB5140B2DB15_CustomAttributesCacheGenerator_fieldMaterialList(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[1];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x4C\x69\x73\x74\x20\x6F\x66\x20\x66\x69\x65\x6C\x64\x20\x6D\x61\x74\x65\x72\x69\x61\x6C\x73"), NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[2];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4C\x69\x73\x74\x20\x6F\x66\x20\x74\x68\x65\x20\x73\x74\x72\x75\x63\x74\x20\x63\x6F\x6E\x74\x61\x69\x6E\x69\x6E\x67\x20\x74\x68\x65\x20\x6D\x61\x74\x65\x72\x69\x61\x6C\x73\x20\x74\x6F\x20\x75\x73\x65\x20\x6F\x6E\x20\x74\x68\x65\x20\x66\x69\x65\x6C\x64"), NULL);
	}
}
static void FieldManager_t6F22058E311E1C81DD93162D866DAB5140B2DB15_CustomAttributesCacheGenerator_field(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x43\x75\x72\x72\x65\x6E\x74\x20\x66\x69\x65\x6C\x64\x20\x67\x61\x6D\x65\x20\x6F\x62\x6A\x65\x63\x74"), NULL);
	}
}
static void FieldManager_t6F22058E311E1C81DD93162D866DAB5140B2DB15_CustomAttributesCacheGenerator_stadium(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x43\x75\x72\x72\x65\x6E\x74\x20\x73\x74\x61\x64\x69\x75\x6D\x20\x67\x61\x6D\x65\x20\x6F\x62\x6A\x65\x63\x74"), NULL);
	}
}
static void FieldManager_t6F22058E311E1C81DD93162D866DAB5140B2DB15_CustomAttributesCacheGenerator_formerField(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x46\x6F\x72\x6D\x65\x72\x20\x66\x69\x65\x6C\x64\x20\x67\x61\x6D\x65\x20\x6F\x62\x6A\x65\x63\x74"), NULL);
	}
}
static void FieldManager_t6F22058E311E1C81DD93162D866DAB5140B2DB15_CustomAttributesCacheGenerator_formerStadium(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x46\x6F\x72\x6D\x65\x72\x20\x73\x74\x61\x64\x69\x75\x6D\x20\x67\x61\x6D\x65\x20\x6F\x62\x6A\x65\x63\x74"), NULL);
	}
}
static void FieldManager_t6F22058E311E1C81DD93162D866DAB5140B2DB15_CustomAttributesCacheGenerator_fieldPosition(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x56\x65\x63\x74\x6F\x72\x20\x33\x20\x63\x6F\x6E\x74\x61\x69\x6E\x69\x6E\x67\x20\x74\x68\x65\x20\x70\x6F\x73\x69\x74\x69\x6F\x6E\x20\x6F\x66\x20\x74\x68\x65\x20\x61\x63\x74\x75\x61\x6C\x20\x66\x69\x65\x6C\x64"), NULL);
	}
}
static void FieldManager_t6F22058E311E1C81DD93162D866DAB5140B2DB15_CustomAttributesCacheGenerator_fieldDistance(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x56\x65\x63\x74\x6F\x72\x20\x33\x20\x67\x69\x76\x69\x6E\x67\x20\x74\x68\x65\x20\x64\x69\x73\x74\x61\x6E\x63\x65\x20\x62\x65\x74\x77\x65\x65\x6E\x20\x74\x68\x65\x20\x70\x6F\x73\x69\x74\x69\x6F\x6E\x20\x6F\x66\x20\x32\x20\x66\x69\x65\x6C\x64\x73"), NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_U3CInstanceGameManagerU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_gameMode(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x43\x75\x72\x72\x65\x6E\x74\x20\x67\x61\x6D\x65\x20\x6D\x6F\x64\x65"), NULL);
	}
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[1];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x47\x61\x6D\x65\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x73"), NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_difficulty(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x43\x75\x72\x72\x65\x6E\x74\x20\x67\x61\x6D\x65\x20\x64\x69\x66\x66\x69\x63\x75\x6C\x74\x79"), NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_options(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x43\x75\x72\x72\x65\x6E\x74\x20\x67\x61\x6D\x65\x20\x6F\x70\x74\x69\x6F\x6E\x73"), NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_enemiesRange(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x52\x61\x6E\x67\x65\x20\x6F\x66\x20\x64\x69\x66\x66\x65\x72\x65\x6E\x74\x20\x65\x6E\x65\x6D\x69\x65\x73\x20\x74\x68\x61\x74\x20\x63\x61\x6E\x20\x73\x70\x61\x77\x6E\x20\x69\x6E\x20\x6F\x6E\x65\x20\x77\x61\x76\x65"), NULL);
	}
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[1];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 0.0f, 5.0f, NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_gameOn(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x57\x68\x65\x74\x68\x65\x72\x20\x74\x68\x65\x20\x67\x61\x6D\x65\x20\x69\x73\x20\x72\x75\x6E\x6E\x69\x6E\x67"), NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_gameOver(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x57\x68\x65\x74\x68\x65\x72\x20\x74\x68\x65\x20\x67\x61\x6D\x65\x20\x69\x73\x20\x6F\x76\x65\x72"), NULL);
	}
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[1];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_fieldManager(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x47\x61\x6D\x65\x20\x6D\x61\x6E\x61\x67\x65\x72\x73"), NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x46\x69\x65\x6C\x64\x20\x4D\x61\x6E\x61\x67\x65\x72\x20\x6F\x66\x20\x74\x68\x65\x20\x67\x61\x6D\x65"), NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_environmentManager(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x45\x6E\x76\x69\x72\x6F\x6E\x6D\x65\x6E\x74\x20\x4D\x61\x6E\x61\x67\x65\x72\x20\x6F\x66\x20\x74\x68\x65\x20\x67\x61\x6D\x65"), NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_enemiesManager(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x45\x6E\x65\x6D\x69\x65\x73\x20\x4D\x61\x6E\x61\x67\x65\x72\x20\x6F\x66\x20\x74\x68\x65\x20\x67\x61\x6D\x65"), NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_teamManager(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x65\x61\x6D\x20\x4D\x61\x6E\x61\x67\x65\x72\x20\x6F\x66\x20\x74\x68\x65\x20\x67\x61\x6D\x65"), NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_gameUIManager(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x55\x49\x20\x4D\x61\x6E\x61\x67\x65\x72\x20\x6F\x66\x20\x74\x68\x65\x20\x67\x61\x6D\x65"), NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_objectifManager(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4F\x62\x6A\x65\x63\x74\x69\x66\x20\x4D\x61\x6E\x61\x67\x65\x72\x20\x6F\x66\x20\x74\x68\x65\x20\x67\x61\x6D\x65"), NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_obstacleManager(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4F\x62\x73\x74\x61\x63\x6C\x65\x20\x4D\x61\x6E\x61\x67\x65\x72\x20\x6F\x66\x20\x74\x68\x65\x20\x67\x61\x6D\x65"), NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_bonusManager(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x42\x6F\x6E\x75\x73\x20\x4D\x61\x6E\x61\x67\x65\x72\x20\x6F\x66\x20\x74\x68\x65\x20\x67\x61\x6D\x65"), NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_dataManager(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x44\x61\x74\x61\x20\x4D\x61\x6E\x61\x67\x65\x72\x20\x6F\x66\x20\x74\x68\x65\x20\x67\x61\x6D\x65"), NULL);
	}
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[1];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_currentField(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x43\x75\x72\x72\x65\x6E\x74\x20\x66\x69\x65\x6C\x64\x20\x6F\x66\x20\x74\x68\x65\x20\x67\x61\x6D\x65"), NULL);
	}
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[1];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_player(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x50\x6C\x61\x79\x65\x72"), NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x50\x6C\x61\x79\x65\x72\x20\x47\x61\x6D\x65\x20\x4F\x62\x6A\x65\x63\x74"), NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_GameManager_get_InstanceGameManager_m1A7C75334D30D693E086A813B498A2A609D03A15(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_GameManager_set_InstanceGameManager_m746EACF0311E89D99B74A93D50DC593E33635192(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Objectif_tEB15E692CA059F253FC06203F42475F6D9DFAB24_CustomAttributesCacheGenerator_objectifManager(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4F\x62\x6A\x65\x63\x74\x69\x66\x20\x4D\x61\x6E\x61\x67\x65\x72\x20\x6F\x66\x20\x74\x68\x65\x20\x67\x61\x6D\x65"), NULL);
	}
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[1];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void ObjectifManager_tCF4E750707F5D8EF147DF275E74D821193060D42_CustomAttributesCacheGenerator_gameManager(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x69\x6E\x67\x6C\x65\x74\x6F\x6E\x20\x49\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x74\x68\x65\x20\x47\x61\x6D\x65\x4D\x61\x6E\x61\x67\x65\x72"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ObjectifManager_tCF4E750707F5D8EF147DF275E74D821193060D42_CustomAttributesCacheGenerator_player(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x47\x61\x6D\x65\x20\x6F\x62\x6A\x65\x63\x74\x20\x6F\x66\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ObjectifManager_tCF4E750707F5D8EF147DF275E74D821193060D42_CustomAttributesCacheGenerator_objectifPrefab(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x50\x72\x65\x66\x61\x62\x20\x6F\x66\x20\x74\x68\x65\x20\x6F\x62\x6A\x65\x63\x74\x69\x66"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ObjectifManager_tCF4E750707F5D8EF147DF275E74D821193060D42_CustomAttributesCacheGenerator_objectives(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x51\x75\x65\x75\x65\x20\x6F\x66\x20\x6F\x62\x6A\x65\x63\x74\x69\x76\x65\x73"), NULL);
	}
}
static void ObjectifManager_tCF4E750707F5D8EF147DF275E74D821193060D42_CustomAttributesCacheGenerator_currentObjectif(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x43\x75\x72\x72\x65\x6E\x74\x20\x6F\x62\x6A\x65\x63\x74\x69\x66\x20\x66\x6F\x72\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72\x20\x74\x6F\x20\x67\x6F\x20\x74\x68\x72\x6F\x75\x67\x68"), NULL);
	}
}
static void ObstacleManager_tCF5F5184030C7FBE67D473667D6D74F3464AB288_CustomAttributesCacheGenerator_gameManager(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x69\x6E\x67\x6C\x65\x74\x6F\x6E\x20\x49\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x74\x68\x65\x20\x47\x61\x6D\x65\x4D\x61\x6E\x61\x67\x65\x72"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ObstacleManager_tCF5F5184030C7FBE67D473667D6D74F3464AB288_CustomAttributesCacheGenerator_obstaclePrefabs(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x50\x72\x65\x66\x61\x62\x73\x20\x6F\x66\x20\x74\x68\x65\x20\x6F\x62\x73\x74\x61\x63\x6C\x65\x73"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ObstacleManager_tCF5F5184030C7FBE67D473667D6D74F3464AB288_CustomAttributesCacheGenerator_obstaclesLimit(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_gameManager(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x66\x75\x6C\x20\x73\x63\x72\x69\x70\x74\x73"), NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x69\x6E\x67\x6C\x65\x74\x6F\x6E\x20\x49\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x74\x68\x65\x20\x47\x61\x6D\x65\x4D\x61\x6E\x61\x67\x65\x72"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[2];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_playerGameplay(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x43\x6F\x6E\x74\x72\x6F\x6C\x73\x20\x74\x68\x65\x20\x67\x61\x6D\x65\x70\x6C\x61\x79\x20\x6F\x66\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72"), NULL);
	}
}
static void PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_cameraAnimator(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x41\x6E\x69\x6D\x61\x74\x6F\x72\x20\x73\x63\x72\x69\x70\x74\x20\x6F\x66\x20\x74\x68\x65\x20\x63\x61\x6D\x65\x72\x61"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_freeze(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x57\x68\x65\x74\x68\x65\x72\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72\x20\x69\x73\x20\x66\x72\x65\x65\x7A\x65\x64"), NULL);
	}
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[1];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_playerBody(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x42\x6F\x64\x79\x20\x6F\x66\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72"), NULL);
	}
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[1];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x66\x75\x6C\x20\x67\x61\x6D\x65\x20\x6F\x62\x6A\x65\x63\x74\x73"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[2];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_playerCamera(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x43\x61\x6D\x65\x72\x61\x20\x61\x74\x74\x61\x63\x68\x65\x64\x20\x74\x6F\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72"), NULL);
	}
}
static void PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_playerRigidbody(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x52\x69\x67\x69\x64\x62\x6F\x64\x79\x20\x6F\x66\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72"), NULL);
	}
}
static void PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_velocity(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x56\x65\x6C\x6F\x63\x69\x74\x79\x20\x6F\x66\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72"), NULL);
	}
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[1];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_speed(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x43\x6F\x6E\x74\x72\x6F\x6C\x6C\x65\x72\x20\x76\x61\x72\x69\x61\x62\x6C\x65\x73\x20\x6F\x66\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72"), NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x46\x6F\x72\x77\x61\x72\x64\x20\x73\x70\x65\x65\x64\x20\x6F\x66\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[2];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_sideSpeedM(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x69\x64\x65\x20\x73\x70\x65\x65\x64\x20\x6D\x75\x6C\x74\x69\x70\x6C\x69\x65\x72\x20\x6F\x66\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_jukeSpeedM(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4A\x75\x6B\x65\x20\x73\x70\x65\x65\x64\x20\x6D\x75\x6C\x74\x69\x70\x6C\x69\x65\x72\x20\x6F\x66\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72"), NULL);
	}
}
static void PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_spinSpeedM(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x70\x69\x6E\x20\x73\x70\x65\x65\x64\x20\x6D\x75\x6C\x74\x69\x70\x6C\x69\x65\x72\x20\x6F\x66\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_sideSpeedAccD(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x69\x64\x65\x20\x73\x70\x65\x65\x64\x20\x61\x63\x63\x65\x6C\x65\x72\x61\x74\x69\x6F\x6E\x20\x64\x69\x76\x69\x64\x65\x72\x20\x6F\x66\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_accelerationM(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x41\x63\x63\x65\x6C\x65\x72\x61\x74\x69\x6F\x6E\x20\x6D\x75\x6C\x74\x69\x70\x6C\x69\x65\x72\x20\x6F\x66\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_isAccelerating(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x49\x73\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72\x20\x61\x63\x63\x65\x6C\x65\x72\x61\x74\x69\x6E\x67"), NULL);
	}
}
static void PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_canAccelerate(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x49\x73\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72\x20\x61\x62\x6C\x65\x20\x74\x6F\x20\x61\x63\x63\x65\x6C\x65\x72\x61\x74\x65"), NULL);
	}
}
static void PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_accelerationTime(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x63\x6F\x6E\x64\x73\x20\x61\x63\x63\x65\x6C\x65\x72\x61\x74\x69\x6E\x67"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_waitToAccelerateTime(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x63\x6F\x6E\x64\x73\x20\x77\x61\x69\x74\x69\x6E\x67\x20\x74\x6F\x20\x61\x63\x63\x65\x6C\x65\x72\x61\x74\x65"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_canJump(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x57\x68\x65\x74\x68\x65\x72\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72\x20\x63\x61\x6E\x20\x6A\x75\x6D\x70"), NULL);
	}
}
static void PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_jumpPower(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x56\x65\x63\x74\x6F\x72\x33\x20\x63\x6F\x6E\x74\x61\x69\x6E\x69\x6E\x67\x20\x74\x68\x65\x20\x6A\x75\x6D\x70\x27\x73\x20\x70\x6F\x77\x65\x72"), NULL);
	}
}
static void PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_jumpHeight(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x48\x65\x69\x67\x68\x74\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72\x20\x69\x73\x20\x72\x65\x61\x63\x68\x69\x6E\x67\x20\x77\x68\x65\x6E\x20\x6A\x75\x6D\x70\x69\x6E\x67"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_gravityScale(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x47\x72\x61\x76\x69\x74\x79\x20\x6D\x75\x6C\x74\x69\x70\x6C\x69\x65\x72"), NULL);
	}
}
static void PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_bonusSpeed(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x42\x6F\x6E\x75\x73\x20\x73\x70\x65\x65\x64\x20\x61\x74\x74\x72\x69\x62\x75\x74\x65\x20\x6F\x66\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72\x20\x28\x63\x68\x61\x6E\x67\x65\x64\x20\x62\x79\x20\x74\x68\x65\x20\x62\x6F\x6E\x75\x73\x29"), NULL);
	}
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[1];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_bonusJump(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x42\x6F\x6E\x75\x73\x20\x6A\x75\x6D\x70\x20\x61\x74\x74\x72\x69\x62\x75\x74\x65\x20\x6F\x66\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72\x20\x28\x63\x68\x61\x6E\x67\x65\x64\x20\x62\x79\x20\x74\x68\x65\x20\x62\x6F\x6E\x75\x73\x29"), NULL);
	}
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[1];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void PlayerGameplay_tC9C00E5D33750DC39DB04CCC8EFA49255DF0063E_CustomAttributesCacheGenerator_gameManager(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x69\x6E\x67\x6C\x65\x74\x6F\x6E\x20\x49\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x74\x68\x65\x20\x47\x61\x6D\x65\x4D\x61\x6E\x61\x67\x65\x72"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void PlayerGameplay_tC9C00E5D33750DC39DB04CCC8EFA49255DF0063E_CustomAttributesCacheGenerator_lifeNumber(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x50\x6C\x61\x79\x65\x72\x27\x73\x20\x6E\x75\x6D\x62\x65\x72\x20\x6F\x66\x20\x6C\x69\x66\x65"), NULL);
	}
}
static void PlayerGameplay_tC9C00E5D33750DC39DB04CCC8EFA49255DF0063E_CustomAttributesCacheGenerator_isChasable(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x57\x68\x65\x74\x68\x65\x72\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72\x20\x69\x73\x20\x69\x6E\x20\x61\x20\x7A\x6F\x6E\x65\x20\x77\x68\x65\x72\x65\x20\x68\x65\x27\x73\x20\x63\x68\x61\x73\x61\x62\x6C\x65"), NULL);
	}
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[1];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void PlayerGameplay_tC9C00E5D33750DC39DB04CCC8EFA49255DF0063E_CustomAttributesCacheGenerator_isInvincible(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x57\x68\x65\x74\x68\x65\x72\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72\x20\x69\x73\x20\x69\x6E\x76\x69\x6E\x63\x69\x62\x6C\x65\x20\x28\x62\x6F\x6E\x75\x73\x29"), NULL);
	}
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[1];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void PlayerGameplay_tC9C00E5D33750DC39DB04CCC8EFA49255DF0063E_CustomAttributesCacheGenerator_isVisible(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x57\x68\x65\x74\x68\x65\x72\x20\x74\x68\x65\x20\x70\x6C\x61\x79\x65\x72\x20\x69\x73\x20\x76\x69\x73\x69\x62\x6C\x65"), NULL);
	}
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[1];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void Attackers_tB6D51BD003E41836A90993949FAA14505B9476BC_CustomAttributesCacheGenerator_teamManager(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
	}
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[1];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void Attackers_tB6D51BD003E41836A90993949FAA14505B9476BC_CustomAttributesCacheGenerator_player(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void Attackers_tB6D51BD003E41836A90993949FAA14505B9476BC_CustomAttributesCacheGenerator_playerProtectionRadius(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void Attackers_tB6D51BD003E41836A90993949FAA14505B9476BC_CustomAttributesCacheGenerator_hasDefender(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void Attackers_tB6D51BD003E41836A90993949FAA14505B9476BC_CustomAttributesCacheGenerator_target(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_CustomAttributesCacheGenerator_gameManager(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x69\x6E\x67\x6C\x65\x74\x6F\x6E\x20\x49\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x74\x68\x65\x20\x47\x61\x6D\x65\x4D\x61\x6E\x61\x67\x65\x72"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_CustomAttributesCacheGenerator_fieldManager(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x46\x69\x65\x6C\x64\x20\x4D\x61\x6E\x61\x67\x65\x72\x20\x6F\x66\x20\x74\x68\x65\x20\x67\x61\x6D\x65"), NULL);
	}
}
static void TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_CustomAttributesCacheGenerator_enemiesManager(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x45\x6E\x65\x6D\x79\x20\x4D\x61\x6E\x61\x67\x65\x72\x20\x6F\x66\x20\x74\x68\x65\x20\x67\x61\x6D\x65"), NULL);
	}
}
static void TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_CustomAttributesCacheGenerator_player(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_CustomAttributesCacheGenerator_attackersPrefabs(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_CustomAttributesCacheGenerator_freeAttackers(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4C\x69\x73\x74\x20\x6F\x66\x20\x74\x68\x65\x20\x74\x65\x61\x6D\x27\x73\x20\x61\x74\x74\x61\x63\x6B\x65\x72\x73\x20\x63\x75\x72\x72\x65\x6E\x74\x6C\x79\x20\x66\x72\x65\x65"), NULL);
	}
}
static void TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_CustomAttributesCacheGenerator_busyAttackers(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4C\x69\x73\x74\x20\x6F\x66\x20\x74\x68\x65\x20\x74\x65\x61\x6D\x27\x73\x20\x61\x74\x74\x61\x63\x6B\x65\x72\x73\x20\x63\x75\x72\x72\x65\x6E\x74\x6C\x79\x20\x62\x75\x73\x79"), NULL);
	}
}
static void TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_CustomAttributesCacheGenerator_enemies(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4C\x69\x73\x74\x20\x6F\x66\x20\x74\x68\x65\x20\x65\x6E\x65\x6D\x69\x65\x73\x20\x63\x75\x72\x72\x65\x6E\x74\x6C\x79\x20\x6E\x6F\x74\x20\x74\x61\x6B\x65\x6E\x20\x63\x61\x72\x65\x20\x6F\x66"), NULL);
	}
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[1];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_CustomAttributesCacheGenerator_playerProtectionRadius(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_CustomAttributesCacheGenerator_teamReactivity(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GameUIManager_t75EB00DD04AF3363BC195261ED40B0BAE0C982F5_CustomAttributesCacheGenerator_gameManager(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x69\x6E\x67\x6C\x65\x74\x6F\x6E\x20\x49\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x74\x68\x65\x20\x47\x61\x6D\x65\x4D\x61\x6E\x61\x67\x65\x72"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GameUIManager_t75EB00DD04AF3363BC195261ED40B0BAE0C982F5_CustomAttributesCacheGenerator_screens(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x47\x61\x6D\x65\x20\x55\x49\x20\x73\x63\x72\x65\x65\x6E\x73\xA\x30\x20\x2D\x2D\x3E\x20\x67\x61\x6D\x65\x20\x73\x63\x72\x65\x65\x6E\xA\x31\x20\x2D\x2D\x3E\x20\x72\x65\x73\x74\x61\x72\x74\x20\x73\x63\x72\x65\x65\x6E"), NULL);
	}
}
static void GameUIManager_t75EB00DD04AF3363BC195261ED40B0BAE0C982F5_CustomAttributesCacheGenerator_waveNumberTexts(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x57\x61\x76\x65\x20\x6E\x75\x6D\x62\x65\x72\x20\x55\x49\x20\x74\x65\x78\x74"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GameUIManager_t75EB00DD04AF3363BC195261ED40B0BAE0C982F5_CustomAttributesCacheGenerator_accelerationBars(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x55\x49\x20\x63\x6F\x6D\x70\x6F\x6E\x65\x6E\x74\x73\x20\x6F\x66\x20\x74\x68\x65\x20\x61\x63\x63\x65\x6C\x65\x72\x61\x74\x69\x6F\x6E\x20\x62\x61\x72"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GameUIManager_t75EB00DD04AF3363BC195261ED40B0BAE0C982F5_CustomAttributesCacheGenerator_bonusBar(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x55\x49\x20\x63\x6F\x6D\x70\x6F\x6E\x65\x6E\x74\x73\x20\x6F\x66\x20\x74\x68\x65\x20\x62\x6F\x6E\x75\x73\x20\x62\x61\x72"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GameUIManager_t75EB00DD04AF3363BC195261ED40B0BAE0C982F5_CustomAttributesCacheGenerator_lifeBonuses(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x55\x49\x20\x63\x6F\x6D\x70\x6F\x6E\x65\x6E\x74\x73\x20\x6F\x66\x20\x74\x68\x65\x20\x6C\x69\x66\x65\x20\x62\x6F\x6E\x75\x73\x65\x73"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GameUIManager_t75EB00DD04AF3363BC195261ED40B0BAE0C982F5_CustomAttributesCacheGenerator_accBarAnim(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GameUIManager_t75EB00DD04AF3363BC195261ED40B0BAE0C982F5_CustomAttributesCacheGenerator_bonusBarAnim(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void MainMenuUIManager_t68AFA2F1D5DD31692867D7643B196473C4009DAF_CustomAttributesCacheGenerator_sensitivitySlider(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void MainMenuUIManager_t68AFA2F1D5DD31692867D7643B196473C4009DAF_CustomAttributesCacheGenerator_smoothRotationSlider(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_AssemblyU2DCSharp_AttributeGenerators[];
const CustomAttributesCacheGenerator g_AssemblyU2DCSharp_AttributeGenerators[177] = 
{
	ZombieCameraLogic_tB6471565555B49079972C92AABAA1362095EAD61_CustomAttributesCacheGenerator_m_target,
	ZombieCharacterControl_t0C327E98E53BF692AC3520AF27E51B597BCE38FC_CustomAttributesCacheGenerator_m_moveSpeed,
	ZombieCharacterControl_t0C327E98E53BF692AC3520AF27E51B597BCE38FC_CustomAttributesCacheGenerator_m_turnSpeed,
	ZombieCharacterControl_t0C327E98E53BF692AC3520AF27E51B597BCE38FC_CustomAttributesCacheGenerator_m_animator,
	ZombieCharacterControl_t0C327E98E53BF692AC3520AF27E51B597BCE38FC_CustomAttributesCacheGenerator_m_rigidBody,
	ZombieCharacterControl_t0C327E98E53BF692AC3520AF27E51B597BCE38FC_CustomAttributesCacheGenerator_m_controlMode,
	ZombieFree_t8086901CD9983C1AFF0202A431AA51790A216632_CustomAttributesCacheGenerator_m_cameraLogic,
	Bonus_tEDF6605668C94B63374905863C67A4F35DE64764_CustomAttributesCacheGenerator_bonusManager,
	Bonus_tEDF6605668C94B63374905863C67A4F35DE64764_CustomAttributesCacheGenerator_player,
	Bonus_tEDF6605668C94B63374905863C67A4F35DE64764_CustomAttributesCacheGenerator_playerC,
	Bonus_tEDF6605668C94B63374905863C67A4F35DE64764_CustomAttributesCacheGenerator_playerG,
	Bonus_tEDF6605668C94B63374905863C67A4F35DE64764_CustomAttributesCacheGenerator_bonusTime,
	Bonus_tEDF6605668C94B63374905863C67A4F35DE64764_CustomAttributesCacheGenerator_bonusColor,
	BonusManager_tA1D115EF7F8D235367B09302DEA268ED271CE42D_CustomAttributesCacheGenerator_gameManager,
	BonusManager_tA1D115EF7F8D235367B09302DEA268ED271CE42D_CustomAttributesCacheGenerator_bonusPrefabs,
	JumpBonus_tF0FDD1072AEE53BB7E1DD7F375A17EB2E64579D4_CustomAttributesCacheGenerator_bonusJumpPower,
	SpeedBonus_tD3DB9099FD5D76E8CC959312A79B77C7CD497D45_CustomAttributesCacheGenerator_bonusSpeed,
	CameraAnimator_tF75E996BF90152E5CF6D308E9DD2380E5C3CA6C7_CustomAttributesCacheGenerator_runAnim,
	CameraAnimator_tF75E996BF90152E5CF6D308E9DD2380E5C3CA6C7_CustomAttributesCacheGenerator_sprintAnim,
	CameraAnimator_tF75E996BF90152E5CF6D308E9DD2380E5C3CA6C7_CustomAttributesCacheGenerator_jukeRightAnim,
	CameraAnimator_tF75E996BF90152E5CF6D308E9DD2380E5C3CA6C7_CustomAttributesCacheGenerator_jukeLeftAnim,
	CameraAnimator_tF75E996BF90152E5CF6D308E9DD2380E5C3CA6C7_CustomAttributesCacheGenerator_spinRightAnim,
	CameraAnimator_tF75E996BF90152E5CF6D308E9DD2380E5C3CA6C7_CustomAttributesCacheGenerator_spinLeftAnim,
	CameraAnimator_tF75E996BF90152E5CF6D308E9DD2380E5C3CA6C7_CustomAttributesCacheGenerator_cameraAccPostProcess,
	CameraAnimator_tF75E996BF90152E5CF6D308E9DD2380E5C3CA6C7_CustomAttributesCacheGenerator_isJuking,
	CameraAnimator_tF75E996BF90152E5CF6D308E9DD2380E5C3CA6C7_CustomAttributesCacheGenerator_jukeSpeed,
	CameraAnimator_tF75E996BF90152E5CF6D308E9DD2380E5C3CA6C7_CustomAttributesCacheGenerator_isSpining,
	FirstPersonCameraController_t8C284C0361D050AF7C5EF16F67D023294E74F24C_CustomAttributesCacheGenerator_gameManager,
	FirstPersonCameraController_t8C284C0361D050AF7C5EF16F67D023294E74F24C_CustomAttributesCacheGenerator_fpCamera,
	FirstPersonCameraController_t8C284C0361D050AF7C5EF16F67D023294E74F24C_CustomAttributesCacheGenerator_cameraRotation,
	FirstPersonCameraController_t8C284C0361D050AF7C5EF16F67D023294E74F24C_CustomAttributesCacheGenerator_angleMax,
	FirstPersonCameraController_t8C284C0361D050AF7C5EF16F67D023294E74F24C_CustomAttributesCacheGenerator_yMouseSensitivity,
	FirstPersonCameraController_t8C284C0361D050AF7C5EF16F67D023294E74F24C_CustomAttributesCacheGenerator_ySmoothRotation,
	DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_CustomAttributesCacheGenerator_U3CInstanceDataManagerU3Ek__BackingField,
	DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_CustomAttributesCacheGenerator_gameMode,
	DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_CustomAttributesCacheGenerator_difficulty,
	DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_CustomAttributesCacheGenerator_options,
	DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_CustomAttributesCacheGenerator_yMouseSensitivity,
	DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_CustomAttributesCacheGenerator_ySmoothRotation,
	EnemiesManager_tC4CE46E95ABA3298DB13759862DD5D47B3EDAB24_CustomAttributesCacheGenerator_gameManager,
	EnemiesManager_tC4CE46E95ABA3298DB13759862DD5D47B3EDAB24_CustomAttributesCacheGenerator_gameUIManager,
	EnemiesManager_tC4CE46E95ABA3298DB13759862DD5D47B3EDAB24_CustomAttributesCacheGenerator_field,
	EnemiesManager_tC4CE46E95ABA3298DB13759862DD5D47B3EDAB24_CustomAttributesCacheGenerator_wingmenPrefabs,
	EnemiesManager_tC4CE46E95ABA3298DB13759862DD5D47B3EDAB24_CustomAttributesCacheGenerator_linemenPrefabs,
	EnemiesManager_tC4CE46E95ABA3298DB13759862DD5D47B3EDAB24_CustomAttributesCacheGenerator_classicZPrefabs,
	EnemiesManager_tC4CE46E95ABA3298DB13759862DD5D47B3EDAB24_CustomAttributesCacheGenerator_sleepingZPrefabs,
	EnemiesManager_tC4CE46E95ABA3298DB13759862DD5D47B3EDAB24_CustomAttributesCacheGenerator_waveNumber,
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_enemy,
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_navMeshAgent,
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_player,
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_intelligence,
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_reactivity,
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_reactivityM,
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_attentionRadius,
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_chaseRadius,
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_attackRadius,
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_attackSpeedM,
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_attackSpeed,
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_size,
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_playerPosition,
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_playerDirection,
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_toPlayerDirection,
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_distance,
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_toPlayerAngle,
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_CustomAttributesCacheGenerator_destination,
	EnvironmentManager_t1A965A44AAC72B34D9F6B96200BE561C9D2211FE_CustomAttributesCacheGenerator_gameManager,
	EnvironmentManager_t1A965A44AAC72B34D9F6B96200BE561C9D2211FE_CustomAttributesCacheGenerator_skyboxes,
	EnvironmentManager_t1A965A44AAC72B34D9F6B96200BE561C9D2211FE_CustomAttributesCacheGenerator_directionnalLights,
	Field_tC6B3BDE43EF1B7CE3258A84CB186FE2711431153_CustomAttributesCacheGenerator_fieldMaterials,
	Field_tC6B3BDE43EF1B7CE3258A84CB186FE2711431153_CustomAttributesCacheGenerator_grass,
	Field_tC6B3BDE43EF1B7CE3258A84CB186FE2711431153_CustomAttributesCacheGenerator_endzone1,
	Field_tC6B3BDE43EF1B7CE3258A84CB186FE2711431153_CustomAttributesCacheGenerator_endzone2,
	Field_tC6B3BDE43EF1B7CE3258A84CB186FE2711431153_CustomAttributesCacheGenerator_barrierL,
	Field_tC6B3BDE43EF1B7CE3258A84CB186FE2711431153_CustomAttributesCacheGenerator_barrierR,
	Field_tC6B3BDE43EF1B7CE3258A84CB186FE2711431153_CustomAttributesCacheGenerator_goalpost1Base,
	Field_tC6B3BDE43EF1B7CE3258A84CB186FE2711431153_CustomAttributesCacheGenerator_goalpost1Metal,
	Field_tC6B3BDE43EF1B7CE3258A84CB186FE2711431153_CustomAttributesCacheGenerator_goalpost2Base,
	Field_tC6B3BDE43EF1B7CE3258A84CB186FE2711431153_CustomAttributesCacheGenerator_goalpost2Metal,
	Field_tC6B3BDE43EF1B7CE3258A84CB186FE2711431153_CustomAttributesCacheGenerator_fieldZone,
	Field_tC6B3BDE43EF1B7CE3258A84CB186FE2711431153_CustomAttributesCacheGenerator_enemies,
	FieldManager_t6F22058E311E1C81DD93162D866DAB5140B2DB15_CustomAttributesCacheGenerator_gameManager,
	FieldManager_t6F22058E311E1C81DD93162D866DAB5140B2DB15_CustomAttributesCacheGenerator_surface,
	FieldManager_t6F22058E311E1C81DD93162D866DAB5140B2DB15_CustomAttributesCacheGenerator_fieldPrefab,
	FieldManager_t6F22058E311E1C81DD93162D866DAB5140B2DB15_CustomAttributesCacheGenerator_stadiumPrefab,
	FieldManager_t6F22058E311E1C81DD93162D866DAB5140B2DB15_CustomAttributesCacheGenerator_fieldMaterialList,
	FieldManager_t6F22058E311E1C81DD93162D866DAB5140B2DB15_CustomAttributesCacheGenerator_field,
	FieldManager_t6F22058E311E1C81DD93162D866DAB5140B2DB15_CustomAttributesCacheGenerator_stadium,
	FieldManager_t6F22058E311E1C81DD93162D866DAB5140B2DB15_CustomAttributesCacheGenerator_formerField,
	FieldManager_t6F22058E311E1C81DD93162D866DAB5140B2DB15_CustomAttributesCacheGenerator_formerStadium,
	FieldManager_t6F22058E311E1C81DD93162D866DAB5140B2DB15_CustomAttributesCacheGenerator_fieldPosition,
	FieldManager_t6F22058E311E1C81DD93162D866DAB5140B2DB15_CustomAttributesCacheGenerator_fieldDistance,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_U3CInstanceGameManagerU3Ek__BackingField,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_gameMode,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_difficulty,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_options,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_enemiesRange,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_gameOn,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_gameOver,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_fieldManager,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_environmentManager,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_enemiesManager,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_teamManager,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_gameUIManager,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_objectifManager,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_obstacleManager,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_bonusManager,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_dataManager,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_currentField,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_player,
	Objectif_tEB15E692CA059F253FC06203F42475F6D9DFAB24_CustomAttributesCacheGenerator_objectifManager,
	ObjectifManager_tCF4E750707F5D8EF147DF275E74D821193060D42_CustomAttributesCacheGenerator_gameManager,
	ObjectifManager_tCF4E750707F5D8EF147DF275E74D821193060D42_CustomAttributesCacheGenerator_player,
	ObjectifManager_tCF4E750707F5D8EF147DF275E74D821193060D42_CustomAttributesCacheGenerator_objectifPrefab,
	ObjectifManager_tCF4E750707F5D8EF147DF275E74D821193060D42_CustomAttributesCacheGenerator_objectives,
	ObjectifManager_tCF4E750707F5D8EF147DF275E74D821193060D42_CustomAttributesCacheGenerator_currentObjectif,
	ObstacleManager_tCF5F5184030C7FBE67D473667D6D74F3464AB288_CustomAttributesCacheGenerator_gameManager,
	ObstacleManager_tCF5F5184030C7FBE67D473667D6D74F3464AB288_CustomAttributesCacheGenerator_obstaclePrefabs,
	ObstacleManager_tCF5F5184030C7FBE67D473667D6D74F3464AB288_CustomAttributesCacheGenerator_obstaclesLimit,
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_gameManager,
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_playerGameplay,
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_cameraAnimator,
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_freeze,
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_playerBody,
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_playerCamera,
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_playerRigidbody,
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_velocity,
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_speed,
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_sideSpeedM,
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_jukeSpeedM,
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_spinSpeedM,
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_sideSpeedAccD,
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_accelerationM,
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_isAccelerating,
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_canAccelerate,
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_accelerationTime,
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_waitToAccelerateTime,
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_canJump,
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_jumpPower,
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_jumpHeight,
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_gravityScale,
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_bonusSpeed,
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_CustomAttributesCacheGenerator_bonusJump,
	PlayerGameplay_tC9C00E5D33750DC39DB04CCC8EFA49255DF0063E_CustomAttributesCacheGenerator_gameManager,
	PlayerGameplay_tC9C00E5D33750DC39DB04CCC8EFA49255DF0063E_CustomAttributesCacheGenerator_lifeNumber,
	PlayerGameplay_tC9C00E5D33750DC39DB04CCC8EFA49255DF0063E_CustomAttributesCacheGenerator_isChasable,
	PlayerGameplay_tC9C00E5D33750DC39DB04CCC8EFA49255DF0063E_CustomAttributesCacheGenerator_isInvincible,
	PlayerGameplay_tC9C00E5D33750DC39DB04CCC8EFA49255DF0063E_CustomAttributesCacheGenerator_isVisible,
	Attackers_tB6D51BD003E41836A90993949FAA14505B9476BC_CustomAttributesCacheGenerator_teamManager,
	Attackers_tB6D51BD003E41836A90993949FAA14505B9476BC_CustomAttributesCacheGenerator_player,
	Attackers_tB6D51BD003E41836A90993949FAA14505B9476BC_CustomAttributesCacheGenerator_playerProtectionRadius,
	Attackers_tB6D51BD003E41836A90993949FAA14505B9476BC_CustomAttributesCacheGenerator_hasDefender,
	Attackers_tB6D51BD003E41836A90993949FAA14505B9476BC_CustomAttributesCacheGenerator_target,
	TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_CustomAttributesCacheGenerator_gameManager,
	TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_CustomAttributesCacheGenerator_fieldManager,
	TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_CustomAttributesCacheGenerator_enemiesManager,
	TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_CustomAttributesCacheGenerator_player,
	TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_CustomAttributesCacheGenerator_attackersPrefabs,
	TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_CustomAttributesCacheGenerator_freeAttackers,
	TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_CustomAttributesCacheGenerator_busyAttackers,
	TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_CustomAttributesCacheGenerator_enemies,
	TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_CustomAttributesCacheGenerator_playerProtectionRadius,
	TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_CustomAttributesCacheGenerator_teamReactivity,
	GameUIManager_t75EB00DD04AF3363BC195261ED40B0BAE0C982F5_CustomAttributesCacheGenerator_gameManager,
	GameUIManager_t75EB00DD04AF3363BC195261ED40B0BAE0C982F5_CustomAttributesCacheGenerator_screens,
	GameUIManager_t75EB00DD04AF3363BC195261ED40B0BAE0C982F5_CustomAttributesCacheGenerator_waveNumberTexts,
	GameUIManager_t75EB00DD04AF3363BC195261ED40B0BAE0C982F5_CustomAttributesCacheGenerator_accelerationBars,
	GameUIManager_t75EB00DD04AF3363BC195261ED40B0BAE0C982F5_CustomAttributesCacheGenerator_bonusBar,
	GameUIManager_t75EB00DD04AF3363BC195261ED40B0BAE0C982F5_CustomAttributesCacheGenerator_lifeBonuses,
	GameUIManager_t75EB00DD04AF3363BC195261ED40B0BAE0C982F5_CustomAttributesCacheGenerator_accBarAnim,
	GameUIManager_t75EB00DD04AF3363BC195261ED40B0BAE0C982F5_CustomAttributesCacheGenerator_bonusBarAnim,
	MainMenuUIManager_t68AFA2F1D5DD31692867D7643B196473C4009DAF_CustomAttributesCacheGenerator_sensitivitySlider,
	MainMenuUIManager_t68AFA2F1D5DD31692867D7643B196473C4009DAF_CustomAttributesCacheGenerator_smoothRotationSlider,
	DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_CustomAttributesCacheGenerator_DataManager_get_InstanceDataManager_m340DDA0673AED48742FCE0DA3F1FF73373E9C16F,
	DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_CustomAttributesCacheGenerator_DataManager_set_InstanceDataManager_m05AB51AD347D0A8984CFE932E74590CCFC17D5D0,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_GameManager_get_InstanceGameManager_m1A7C75334D30D693E086A813B498A2A609D03A15,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_GameManager_set_InstanceGameManager_m746EACF0311E89D99B74A93D50DC593E33635192,
	AssemblyU2DCSharp_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
