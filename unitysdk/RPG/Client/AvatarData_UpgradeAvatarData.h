#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_542;
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class EquipmentItemData; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class UpgradeAvatarChecker; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x8CCB150)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA_GET_ORIGINAVATAR_OFFSET UNITYSDK_OFFSET(0x8CCB0A0)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA_GET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x8CCCC90)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA_SETWORLDLEVELSTRATEGY_OFFSET UNITYSDK_OFFSET(0x8CCB750)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA_SET_ORIGINAVATAR_OFFSET UNITYSDK_OFFSET(0x8CCB0B0)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0x8CCB370)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__BUILDSKILLTREESANDSKILLS_OFFSET UNITYSDK_OFFSET(0x8CCC6D0)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8CCB0C0)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__GETUPGRADEDAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x8CCB7D0)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__GETUPGRADEDAVATARPROMOTION_OFFSET UNITYSDK_OFFSET(0x8CCB870)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__GETUPGRADEDAVATARRELIC_OFFSET UNITYSDK_OFFSET(0x8CCBB80)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__GETUPGRADEDEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x8CCB920)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__GETUPGRADEDRANK_OFFSET UNITYSDK_OFFSET(0x8CCCBA0)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__INTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x8CCB3C0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarData_UpgradeAvatarData_TypeDefinitionIndex = 49613;

	class AvatarData_UpgradeAvatarData : public ::System::Object
	{
	public:
		::RPG::Client::AvatarData* _OriginAvatar_k__BackingField; // 0x10
		::RPG::Client::UpgradeAvatarChecker* _UpgradeAvatarChecker; // 0x18
		::Class_0_16E4307DCC419505_542* _WorldLevelStrategy; // 0x20
		::RPG::Client::AvatarData* UpgradeAvatar; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::AvatarData* get_OriginAvatar()
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA_GET_ORIGINAVATAR_OFFSET))(this);
		}

		::System::Void set_OriginAvatar(::RPG::Client::AvatarData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA_SET_ORIGINAVATAR_OFFSET))(this, value);
		}

		static ::RPG::Client::AvatarData_UpgradeAvatarData* Create(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::RPG::Client::AvatarData_UpgradeAvatarData*(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA_CREATE_OFFSET))(originAvatarData);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA_UPDATE_OFFSET))(this);
		}

		::System::Void SetWorldLevelStrategy(::Class_0_16E4307DCC419505_542* worldLevelStrategy)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_542*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA_SETWORLDLEVELSTRATEGY_OFFSET))(this, worldLevelStrategy);
		}

		::System::Void _InternalUpdate(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__INTERNALUPDATE_OFFSET))(this, originAvatarData);
		}

		::System::UInt32 _GetUpgradedAvatarLevel(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__GETUPGRADEDAVATARLEVEL_OFFSET))(this, originAvatarData);
		}

		::System::UInt32 _GetUpgradedAvatarPromotion(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__GETUPGRADEDAVATARPROMOTION_OFFSET))(this, originAvatarData);
		}

		::RPG::Client::EquipmentItemData* _GetUpgradedEquipment(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::RPG::Client::EquipmentItemData*(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__GETUPGRADEDEQUIPMENT_OFFSET))(this, originAvatarData);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* _GetUpgradedAvatarRelic(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__GETUPGRADEDAVATARRELIC_OFFSET))(this, originAvatarData);
		}

		::System::Void _BuildSkillTreesAndSkills(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__BUILDSKILLTREESANDSKILLS_OFFSET))(this, originAvatarData);
		}

		::System::UInt32 _GetUpgradedRank(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__GETUPGRADEDRANK_OFFSET))(this, originAvatarData);
		}

		::System::UInt32 get_WorldLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA_GET_WORLDLEVEL_OFFSET))(this);
		}
	};
}
