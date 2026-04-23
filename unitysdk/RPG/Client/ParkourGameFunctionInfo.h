#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_CHECKSKILLUSABLE_OFFSET UNITYSDK_OFFSET(0x165A9ED0)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_GET_CHARGINGRATIO_OFFSET UNITYSDK_OFFSET(0x165A9E70)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_GET_COUNTDOWNRATIO_OFFSET UNITYSDK_OFFSET(0x165A9E90)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_GET_ISUSABLE_OFFSET UNITYSDK_OFFSET(0x165A9EB0)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_GET_QUANTITY_OFFSET UNITYSDK_OFFSET(0x165A9E50)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_SET_CHARGINGRATIO_OFFSET UNITYSDK_OFFSET(0x165A9E80)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_SET_COUNTDOWNRATIO_OFFSET UNITYSDK_OFFSET(0x165A9EA0)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_SET_ISUSABLE_OFFSET UNITYSDK_OFFSET(0x165A9EC0)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_SET_QUANTITY_OFFSET UNITYSDK_OFFSET(0x165A9E60)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0x165A9F40)
#define RPG_CLIENT_PARKOURGAMEFUNCTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x165A9FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameFunctionInfo_TypeDefinitionIndex = 57046;

	class ParkourGameFunctionInfo : public ::System::Object
	{
	public:
		::System::Single _Quantity_k__BackingField; // 0x10
		::System::Single _ChargingRatio_k__BackingField; // 0x14
		::System::Single _CountDownRatio_k__BackingField; // 0x18
		::System::Boolean _IsUsable_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO__CTOR_OFFSET))(this);
		}

		::System::Single get_Quantity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_GET_QUANTITY_OFFSET))(this);
		}

		::System::Void set_Quantity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_SET_QUANTITY_OFFSET))(this, value);
		}

		::System::Single get_ChargingRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_GET_CHARGINGRATIO_OFFSET))(this);
		}

		::System::Void set_ChargingRatio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_SET_CHARGINGRATIO_OFFSET))(this, value);
		}

		::System::Single get_CountDownRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_GET_COUNTDOWNRATIO_OFFSET))(this);
		}

		::System::Void set_CountDownRatio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_SET_COUNTDOWNRATIO_OFFSET))(this, value);
		}

		::System::Boolean get_IsUsable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_GET_ISUSABLE_OFFSET))(this);
		}

		::System::Void set_IsUsable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_SET_ISUSABLE_OFFSET))(this, value);
		}

		::System::Boolean CheckSkillUsable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_CHECKSKILLUSABLE_OFFSET))(this);
		}

		::System::Void Update(::System::Single quantity, ::System::Single chargingRatio, ::System::Single countDownRatio, ::System::Boolean isUsable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFUNCTIONINFO_UPDATE_OFFSET))(this, quantity, chargingRatio, countDownRatio, isUsable);
		}
	};
}
