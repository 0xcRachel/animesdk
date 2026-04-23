#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DrinkMakerCheersPerformanceRow; }

#define CLASS_1_BE759EFF8D56E66F_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xB0555D0)
#define CLASS_1_BE759EFF8D56E66F_GET_ISFIRSTDRINKONDAY_OFFSET UNITYSDK_OFFSET(0xB0555F0)
#define CLASS_1_BE759EFF8D56E66F_GET_PERFORMANCEID_OFFSET UNITYSDK_OFFSET(0xB055610)
#define CLASS_1_BE759EFF8D56E66F_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xB0555E0)
#define CLASS_1_BE759EFF8D56E66F_SET_ISFIRSTDRINKONDAY_OFFSET UNITYSDK_OFFSET(0xB055600)
#define CLASS_1_BE759EFF8D56E66F_SET_PERFORMANCEID_OFFSET UNITYSDK_OFFSET(0xB055620)
#define CLASS_1_BE759EFF8D56E66F__CTOR_OFFSET UNITYSDK_OFFSET(0xB0555B0)

inline static constexpr unsigned int Class_1_BE759EFF8D56E66F_TypeDefinitionIndex = 58619;

class Class_1_BE759EFF8D56E66F : public ::System::Object
{
public:
	::System::UInt32 _GroupId_k__BackingField; // 0x10
	::System::UInt32 _PerformanceId_k__BackingField; // 0x14
	::System::Boolean _IsFirstDrinkOnDay_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::GameCore::DrinkMakerCheersPerformanceRow* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DrinkMakerCheersPerformanceRow*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BE759EFF8D56E66F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_GroupId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE759EFF8D56E66F_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupId(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BE759EFF8D56E66F_SET_GROUPID_OFFSET))(this, value);
	}

	::System::Boolean get_IsFirstDrinkOnDay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE759EFF8D56E66F_GET_ISFIRSTDRINKONDAY_OFFSET))(this);
	}

	::System::Void set_IsFirstDrinkOnDay(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BE759EFF8D56E66F_SET_ISFIRSTDRINKONDAY_OFFSET))(this, value);
	}

	::System::UInt32 get_PerformanceId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE759EFF8D56E66F_GET_PERFORMANCEID_OFFSET))(this);
	}

	::System::Void set_PerformanceId(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BE759EFF8D56E66F_SET_PERFORMANCEID_OFFSET))(this, value);
	}
};
