#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_542;
class Class_1_70741C2C9711CBE5;
namespace RPG::Client { class AvatarData; }

#define RPG_CLIENT_UPGRADEAVATARCHECKER_ISNEEDUPGRADEAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0xA215250)
#define RPG_CLIENT_UPGRADEAVATARCHECKER_ISNEEDUPGRADEAVATAR_OFFSET UNITYSDK_OFFSET(0xA214A30)
#define RPG_CLIENT_UPGRADEAVATARCHECKER_ISNEEDUPGRADEEQUIPMENT_OFFSET UNITYSDK_OFFSET(0xA2152E0)
#define RPG_CLIENT_UPGRADEAVATARCHECKER_ISNEEDUPGRADERANK_OFFSET UNITYSDK_OFFSET(0xA215930)
#define RPG_CLIENT_UPGRADEAVATARCHECKER_ISNEEDUPGRADERELICSET2_OFFSET UNITYSDK_OFFSET(0xA215570)
#define RPG_CLIENT_UPGRADEAVATARCHECKER_ISNEEDUPGRADERELICSET4_OFFSET UNITYSDK_OFFSET(0xA215410)
#define RPG_CLIENT_UPGRADEAVATARCHECKER_ISNEEDUPGRADERELIC_OFFSET UNITYSDK_OFFSET(0xA215380)
#define RPG_CLIENT_UPGRADEAVATARCHECKER_ISNEEDUPGRADESKILLPOINT_OFFSET UNITYSDK_OFFSET(0xA2156E0)
#define RPG_CLIENT_UPGRADEAVATARCHECKER_ISNEEDUPGRADESKILLTREE_OFFSET UNITYSDK_OFFSET(0xA215680)
#define RPG_CLIENT_UPGRADEAVATARCHECKER_SETWORLDLEVELSTRATEGY_OFFSET UNITYSDK_OFFSET(0xA2149E0)
#define RPG_CLIENT_UPGRADEAVATARCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0xA214970)
#define RPG_CLIENT_UPGRADEAVATARCHECKER__ISNEEDUPGRADEAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0xA214D70)
#define RPG_CLIENT_UPGRADEAVATARCHECKER__ISNEEDUPGRADEEQUIPMENT_OFFSET UNITYSDK_OFFSET(0xA214DE0)
#define RPG_CLIENT_UPGRADEAVATARCHECKER__ISNEEDUPGRADERANK_OFFSET UNITYSDK_OFFSET(0xA215120)
#define RPG_CLIENT_UPGRADEAVATARCHECKER__ISNEEDUPGRADERELICSET2_OFFSET UNITYSDK_OFFSET(0xA2155D0)
#define RPG_CLIENT_UPGRADEAVATARCHECKER__ISNEEDUPGRADERELICSET4_OFFSET UNITYSDK_OFFSET(0xA215470)
#define RPG_CLIENT_UPGRADEAVATARCHECKER__ISNEEDUPGRADERELIC_OFFSET UNITYSDK_OFFSET(0xA214E60)
#define RPG_CLIENT_UPGRADEAVATARCHECKER__ISNEEDUPGRADESKILLPOINT_OFFSET UNITYSDK_OFFSET(0xA215750)
#define RPG_CLIENT_UPGRADEAVATARCHECKER__ISNEEDUPGRADESKILLTREE_OFFSET UNITYSDK_OFFSET(0xA214ED0)
#define RPG_CLIENT_UPGRADEAVATARCHECKER__REFRESHUPGRADEAVATARROW_OFFSET UNITYSDK_OFFSET(0xA214C40)

namespace RPG::Client
{
	inline static constexpr unsigned int UpgradeAvatarChecker_TypeDefinitionIndex = 49628;

	class UpgradeAvatarChecker : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_542* _WorldLevelStrategy; // 0x10
		::Class_1_70741C2C9711CBE5* _UpgradeAvatarRow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARCHECKER__CTOR_OFFSET))(this);
		}

		::System::Void SetWorldLevelStrategy(::Class_0_16E4307DCC419505_542* worldLevelStrategy)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_542*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARCHECKER_SETWORLDLEVELSTRATEGY_OFFSET))(this, worldLevelStrategy);
		}

		::System::Boolean IsNeedUpgradeAvatar(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARCHECKER_ISNEEDUPGRADEAVATAR_OFFSET))(this, originAvatarData);
		}

		::System::Boolean IsNeedUpgradeAvatarLevel(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARCHECKER_ISNEEDUPGRADEAVATARLEVEL_OFFSET))(this, originAvatarData);
		}

		::System::Boolean IsNeedUpgradeEquipment(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARCHECKER_ISNEEDUPGRADEEQUIPMENT_OFFSET))(this, originAvatarData);
		}

		::System::Boolean IsNeedUpgradeRelic(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARCHECKER_ISNEEDUPGRADERELIC_OFFSET))(this, originAvatarData);
		}

		::System::Boolean IsNeedUpgradeRelicSet4(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARCHECKER_ISNEEDUPGRADERELICSET4_OFFSET))(this, originAvatarData);
		}

		::System::Boolean IsNeedUpgradeRelicSet2(::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARCHECKER_ISNEEDUPGRADERELICSET2_OFFSET))(this, avatarData);
		}

		::System::Boolean IsNeedUpgradeSkillTree(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARCHECKER_ISNEEDUPGRADESKILLTREE_OFFSET))(this, originAvatarData);
		}

		::System::Boolean IsNeedUpgradeSkillPoint(::RPG::Client::AvatarData* originAvatarData, ::System::UInt32 skillTreePointID)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARCHECKER_ISNEEDUPGRADESKILLPOINT_OFFSET))(this, originAvatarData, skillTreePointID);
		}

		::System::Boolean IsNeedUpgradeRank(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARCHECKER_ISNEEDUPGRADERANK_OFFSET))(this, originAvatarData);
		}

		::System::Boolean _IsNeedUpgradeAvatarLevel(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARCHECKER__ISNEEDUPGRADEAVATARLEVEL_OFFSET))(this, originAvatarData);
		}

		::System::Boolean _IsNeedUpgradeEquipment(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARCHECKER__ISNEEDUPGRADEEQUIPMENT_OFFSET))(this, originAvatarData);
		}

		::System::Boolean _IsNeedUpgradeRelic(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARCHECKER__ISNEEDUPGRADERELIC_OFFSET))(this, originAvatarData);
		}

		::System::Boolean _IsNeedUpgradeRelicSet4(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARCHECKER__ISNEEDUPGRADERELICSET4_OFFSET))(this, originAvatarData);
		}

		::System::Boolean _IsNeedUpgradeRelicSet2(::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARCHECKER__ISNEEDUPGRADERELICSET2_OFFSET))(this, avatarData);
		}

		::System::Boolean _IsNeedUpgradeSkillTree(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARCHECKER__ISNEEDUPGRADESKILLTREE_OFFSET))(this, originAvatarData);
		}

		::System::Boolean _IsNeedUpgradeSkillPoint(::RPG::Client::AvatarData* originAvatarData, ::System::UInt32 skillTreePointID)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARCHECKER__ISNEEDUPGRADESKILLPOINT_OFFSET))(this, originAvatarData, skillTreePointID);
		}

		::System::Boolean _IsNeedUpgradeRank(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARCHECKER__ISNEEDUPGRADERANK_OFFSET))(this, originAvatarData);
		}

		::System::Void _RefreshUpgradeAvatarRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEAVATARCHECKER__REFRESHUPGRADEAVATARROW_OFFSET))(this);
		}
	};
}
