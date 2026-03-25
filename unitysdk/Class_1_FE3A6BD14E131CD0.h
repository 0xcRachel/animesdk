#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::CityCarFlow { class MonoCityCarConfigure; }
namespace System { class String; }

#define CLASS_1_FE3A6BD14E131CD0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BE43A0)
#define CLASS_1_FE3A6BD14E131CD0_GET_CONFIGURE_OFFSET UNITYSDK_OFFSET(0x10BE4740)
#define CLASS_1_FE3A6BD14E131CD0_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x10BE4700)
#define CLASS_1_FE3A6BD14E131CD0_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x10BE4710)
#define CLASS_1_FE3A6BD14E131CD0_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x10BE4720)
#define CLASS_1_FE3A6BD14E131CD0_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x10BE44E0)
#define CLASS_1_FE3A6BD14E131CD0_METHOD_1_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x10BE42B0)
#define CLASS_1_FE3A6BD14E131CD0_METHOD_1_DD152A1A30757DCD_OFFSET UNITYSDK_OFFSET(0x10BE4540)
#define CLASS_1_FE3A6BD14E131CD0_SET_CONFIGURE_OFFSET UNITYSDK_OFFSET(0x10BE4750)
#define CLASS_1_FE3A6BD14E131CD0_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x10BE4730)
#define CLASS_1_FE3A6BD14E131CD0__CTOR_OFFSET UNITYSDK_OFFSET(0x10BE4290)

inline static constexpr unsigned int Class_1_FE3A6BD14E131CD0_TypeDefinitionIndex = 64488;

class Class_1_FE3A6BD14E131CD0 : public ::System::Object
{
public:
	::RPG::Client::CityCarFlow::MonoCityCarConfigure* _Configure_k__BackingField; // 0x10
	::System::String* _PrefabPath_k__BackingField; // 0x18
	::System::Single _TimeScale_k__BackingField; // 0x20
	::System::UInt32 _GroupID_k__BackingField; // 0x24

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::RPG::Client::CityCarFlow::MonoCityCarConfigure* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::RPG::Client::CityCarFlow::MonoCityCarConfigure*))((::PBYTE)hIl2Cpp + CLASS_1_FE3A6BD14E131CD0__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE3A6BD14E131CD0_METHOD_1_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE3A6BD14E131CD0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FE3A6BD14E131CD0_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD152A1A30757DCD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FE3A6BD14E131CD0_METHOD_1_DD152A1A30757DCD_OFFSET))(this, a1);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE3A6BD14E131CD0_GET_GROUPID_OFFSET))(this);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE3A6BD14E131CD0_GET_PREFABPATH_OFFSET))(this);
	}

	::System::Single get_TimeScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE3A6BD14E131CD0_GET_TIMESCALE_OFFSET))(this);
	}

	::System::Void set_TimeScale(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FE3A6BD14E131CD0_SET_TIMESCALE_OFFSET))(this, value);
	}

	::RPG::Client::CityCarFlow::MonoCityCarConfigure* get_Configure()
	{
		return ((::RPG::Client::CityCarFlow::MonoCityCarConfigure*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE3A6BD14E131CD0_GET_CONFIGURE_OFFSET))(this);
	}

	::System::Void set_Configure(::RPG::Client::CityCarFlow::MonoCityCarConfigure* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CityCarFlow::MonoCityCarConfigure*))((::PBYTE)hIl2Cpp + CLASS_1_FE3A6BD14E131CD0_SET_CONFIGURE_OFFSET))(this, value);
	}
};
