#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8CF94E0F14A91ED3_4_GET_FROMPROPID_OFFSET UNITYSDK_OFFSET(0x89329D0)
#define CLASS_1_8CF94E0F14A91ED3_4_GET_TOPROPID_OFFSET UNITYSDK_OFFSET(0x89329F0)
#define CLASS_1_8CF94E0F14A91ED3_4_METHOD_1_0BC6186268B04AB3_OFFSET UNITYSDK_OFFSET(0x8932960)
#define CLASS_1_8CF94E0F14A91ED3_4_SET_FROMPROPID_OFFSET UNITYSDK_OFFSET(0x89329E0)
#define CLASS_1_8CF94E0F14A91ED3_4_SET_TOPROPID_OFFSET UNITYSDK_OFFSET(0x8932A00)
#define CLASS_1_8CF94E0F14A91ED3_4__CTOR_OFFSET UNITYSDK_OFFSET(0x8932940)

inline static constexpr unsigned int Class_1_8CF94E0F14A91ED3_4_TypeDefinitionIndex = 63975;

class Class_1_8CF94E0F14A91ED3_4 : public ::System::Object
{
public:
	::System::UInt32 _ToPropID_k__BackingField; // 0x10
	::System::UInt32 _FromPropID_k__BackingField; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_0BC6186268B04AB3(::Class_1_8CF94E0F14A91ED3_4* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_8CF94E0F14A91ED3_4*))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_4_METHOD_1_0BC6186268B04AB3_OFFSET))(this, a1);
	}

	::System::UInt32 get_FromPropID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_4_GET_FROMPROPID_OFFSET))(this);
	}

	::System::Void set_FromPropID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_4_SET_FROMPROPID_OFFSET))(this, value);
	}

	::System::UInt32 get_ToPropID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_4_GET_TOPROPID_OFFSET))(this);
	}

	::System::Void set_ToPropID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_4_SET_TOPROPID_OFFSET))(this, value);
	}
};
