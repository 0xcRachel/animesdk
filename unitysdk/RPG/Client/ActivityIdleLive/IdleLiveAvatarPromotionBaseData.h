#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ILBattleAvatarPromotionConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x17343210)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_GETDESC_OFFSET UNITYSDK_OFFSET(0x173436D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x17343D40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x17343CE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x17343CC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_GET_ISPROPERTY_OFFSET UNITYSDK_OFFSET(0x17343D60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x17343D00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_GET_UNLOCKSTAR_OFFSET UNITYSDK_OFFSET(0x17343D20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x17343D50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_SET_DESC_OFFSET UNITYSDK_OFFSET(0x17343CF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x17343CD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x17343D10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_SET_UNLOCKSTAR_OFFSET UNITYSDK_OFFSET(0x17343D30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x173433C0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveAvatarPromotionBaseData_TypeDefinitionIndex = 69170;

	class IdleLiveAvatarPromotionBaseData : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* _ParamList_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18
		::System::UInt32 _AvatarID_k__BackingField; // 0x1C
		::System::UInt32 _UnlockStar_k__BackingField; // 0x20
		::RPG::Client::TextID _Desc_k__BackingField; // 0x28

		::System::Void _ctor(::RPG::GameCore::ILBattleAvatarPromotionConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ILBattleAvatarPromotionConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA__CTOR_OFFSET))(this, row);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionBaseData* Create(::RPG::GameCore::ILBattleAvatarPromotionConfigRow* row)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionBaseData*(*)(::RPG::GameCore::ILBattleAvatarPromotionConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_CREATE_OFFSET))(row);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_GETDESC_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_SET_DESC_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* get_ParamList()
		{
			return ((::Il2CppArray<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_GET_PARAMLIST_OFFSET))(this);
		}

		::System::Void set_ParamList(::Il2CppArray<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_SET_PARAMLIST_OFFSET))(this, value);
		}

		::System::UInt32 get_UnlockStar()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_GET_UNLOCKSTAR_OFFSET))(this);
		}

		::System::Void set_UnlockStar(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_SET_UNLOCKSTAR_OFFSET))(this, value);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_SET_AVATARID_OFFSET))(this, value);
		}

		::System::Boolean get_IsProperty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARPROMOTIONBASEDATA_GET_ISPROPERTY_OFFSET))(this);
		}
	};
}
