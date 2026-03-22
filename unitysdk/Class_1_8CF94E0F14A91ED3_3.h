#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8CF94E0F14A91ED3_3_GET_FROMPROPID_OFFSET UNITYSDK_OFFSET(0x8943C10)
#define CLASS_1_8CF94E0F14A91ED3_3_GET_TOPROPID_OFFSET UNITYSDK_OFFSET(0x8943C30)
#define CLASS_1_8CF94E0F14A91ED3_3_METHOD_1_0BC6186268B04AB3_OFFSET UNITYSDK_OFFSET(0x8943BA0)
#define CLASS_1_8CF94E0F14A91ED3_3_SET_FROMPROPID_OFFSET UNITYSDK_OFFSET(0x8943C20)
#define CLASS_1_8CF94E0F14A91ED3_3_SET_TOPROPID_OFFSET UNITYSDK_OFFSET(0x8943C40)
#define CLASS_1_8CF94E0F14A91ED3_3__CTOR_OFFSET UNITYSDK_OFFSET(0x8943B80)

inline static constexpr unsigned int Class_1_8CF94E0F14A91ED3_3_TypeDefinitionIndex = 61788;

class Class_1_8CF94E0F14A91ED3_3 : public ::System::Object
{
public:
	::System::UInt32 _ToPropID_k__BackingField; // 0x10
	::System::UInt32 _FromPropID_k__BackingField; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_0BC6186268B04AB3(::Class_1_8CF94E0F14A91ED3_3* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_8CF94E0F14A91ED3_3*))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_3_METHOD_1_0BC6186268B04AB3_OFFSET))(this, a1);
	}

	::System::UInt32 get_FromPropID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_3_GET_FROMPROPID_OFFSET))(this);
	}

	::System::Void set_FromPropID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_3_SET_FROMPROPID_OFFSET))(this, value);
	}

	::System::UInt32 get_ToPropID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_3_GET_TOPROPID_OFFSET))(this);
	}

	::System::Void set_ToPropID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_3_SET_TOPROPID_OFFSET))(this, value);
	}
};
