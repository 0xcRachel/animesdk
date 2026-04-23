#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerSource.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleFailureTipsConfigRow; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class StatisticsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLETIPUTILS_GETONEFAILURETIP_OFFSET UNITYSDK_OFFSET(0x14725390)
#define RPG_CLIENT_BATTLETIPUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x14727790)
#define RPG_CLIENT_BATTLETIPUTILS__CHECKAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x14726DA0)
#define RPG_CLIENT_BATTLETIPUTILS__CHECKITEMCONSUME_OFFSET UNITYSDK_OFFSET(0x14727340)
#define RPG_CLIENT_BATTLETIPUTILS__CHECKLIGHTCONE_OFFSET UNITYSDK_OFFSET(0x14726F30)
#define RPG_CLIENT_BATTLETIPUTILS__CHECKRELIC_OFFSET UNITYSDK_OFFSET(0x14726FF0)
#define RPG_CLIENT_BATTLETIPUTILS__CHECKROGUESKILLTREE_OFFSET UNITYSDK_OFFSET(0x147270C0)
#define RPG_CLIENT_BATTLETIPUTILS__CHECKSKILLTREE_OFFSET UNITYSDK_OFFSET(0x14726E60)
#define RPG_CLIENT_BATTLETIPUTILS__CLEARREF_OFFSET UNITYSDK_OFFSET(0x14726BD0)
#define RPG_CLIENT_BATTLETIPUTILS__FILTERTIPSBYPRIORITY_OFFSET UNITYSDK_OFFSET(0x14726C60)
#define RPG_CLIENT_BATTLETIPUTILS__GETTEAMCOMBATPOWER_OFFSET UNITYSDK_OFFSET(0x14727510)
#define RPG_CLIENT_BATTLETIPUTILS__ISBATTLESCENEVALID_OFFSET UNITYSDK_OFFSET(0x14725EA0)
#define RPG_CLIENT_BATTLETIPUTILS__ISCUSTOMSTRINGVALID_OFFSET UNITYSDK_OFFSET(0x14726A40)
#define RPG_CLIENT_BATTLETIPUTILS__ISFAILURETYPEVALID_OFFSET UNITYSDK_OFFSET(0x147264D0)
#define RPG_CLIENT_BATTLETIPUTILS__ISGAMEMODEVALID_OFFSET UNITYSDK_OFFSET(0x14725C00)
#define RPG_CLIENT_BATTLETIPUTILS__ISMAINMISSIONFINISHFORCE_OFFSET UNITYSDK_OFFSET(0x14726190)
#define RPG_CLIENT_BATTLETIPUTILS__ISMAINMISSIONTAKENFORCE_OFFSET UNITYSDK_OFFSET(0x14725FF0)
#define RPG_CLIENT_BATTLETIPUTILS__ISMAINMISSIONUNFINISHFORCE_OFFSET UNITYSDK_OFFSET(0x14726330)
#define RPG_CLIENT_BATTLETIPUTILS__ISMAZEBUFFVALID_OFFSET UNITYSDK_OFFSET(0x147266B0)
#define RPG_CLIENT_BATTLETIPUTILS__ISMONSTERVALID_OFFSET UNITYSDK_OFFSET(0x147268A0)
#define RPG_CLIENT_BATTLETIPUTILS__ISPLAYERLEVELVALID_OFFSET UNITYSDK_OFFSET(0x14725CD0)
#define RPG_CLIENT_BATTLETIPUTILS__ISWORLDPLACEVALID_OFFSET UNITYSDK_OFFSET(0x14725E00)
#define RPG_CLIENT_BATTLETIPUTILS__UPDATEREF_OFFSET UNITYSDK_OFFSET(0x14725890)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleTipUtils_TypeDefinitionIndex = 57932;

	class BattleTipUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::GameCore::FixPoint>** StaticGet__CombatPowerListRef()
		{
			return (::Il2CppArray<::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(BattleTipUtils_TypeDefinitionIndex)->GetStaticField(0x5EE10);
		}
		static ::RPG::GameCore::BattleInstance** StaticGet__BattleInst()
		{
			return (::RPG::GameCore::BattleInstance**)Il2CppClass::FromTypeDefinitionIndex(BattleTipUtils_TypeDefinitionIndex)->GetStaticField(0x5EE18);
		}
		static ::RPG::GameCore::StatisticsComponent** StaticGet__StatisticsCmpt()
		{
			return (::RPG::GameCore::StatisticsComponent**)Il2CppClass::FromTypeDefinitionIndex(BattleTipUtils_TypeDefinitionIndex)->GetStaticField(0x5EE20);
		}
		static ::System::Single* StaticGet__MonsterCombatPowerRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(BattleTipUtils_TypeDefinitionIndex)->GetStaticField(0x10870);
		}
		static ::System::UInt32* StaticGet__CurStageID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(BattleTipUtils_TypeDefinitionIndex)->GetStaticField(0x10874);
		}
		static ::RPG::GameCore::StageType* StaticGet__CurStageType()
		{
			return (::RPG::GameCore::StageType*)Il2CppClass::FromTypeDefinitionIndex(BattleTipUtils_TypeDefinitionIndex)->GetStaticField(0x10878);
		}
		// static const ::System::Single _COMBAT_POWER_RATIO; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::BattleFailureTipsConfigRow* GetOneFailureTip()
		{
			return ((::RPG::GameCore::BattleFailureTipsConfigRow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS_GETONEFAILURETIP_OFFSET))();
		}

		static ::System::Boolean _IsPlayerLevelValid(::RPG::GameCore::BattleFailureTipsConfigRow* failureTipRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISPLAYERLEVELVALID_OFFSET))(failureTipRow);
		}

		static ::System::Boolean _IsWorldPlaceValid(::RPG::GameCore::BattleFailureTipsConfigRow* failureTipRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISWORLDPLACEVALID_OFFSET))(failureTipRow);
		}

		static ::System::Boolean _IsBattleSceneValid(::RPG::GameCore::BattleFailureTipsConfigRow* failureTipRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISBATTLESCENEVALID_OFFSET))(failureTipRow);
		}

		static ::System::Boolean _IsMainMissionTakenForce(::RPG::GameCore::BattleFailureTipsConfigRow* failureTipRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISMAINMISSIONTAKENFORCE_OFFSET))(failureTipRow);
		}

		static ::System::Boolean _IsMainMissionFinishForce(::RPG::GameCore::BattleFailureTipsConfigRow* failureTipRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISMAINMISSIONFINISHFORCE_OFFSET))(failureTipRow);
		}

		static ::System::Boolean _IsMainMissionUnfinishForce(::RPG::GameCore::BattleFailureTipsConfigRow* failureTipRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISMAINMISSIONUNFINISHFORCE_OFFSET))(failureTipRow);
		}

		static ::System::Boolean _IsGameModeValid(::RPG::GameCore::BattleFailureTipsConfigRow* failureTipRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISGAMEMODEVALID_OFFSET))(failureTipRow);
		}

		static ::System::Void _FilterTipsByPriority(::System::Collections::Generic::List_1<::RPG::GameCore::BattleFailureTipsConfigRow*>* failureTips, ::System::UInt32 priority)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::BattleFailureTipsConfigRow*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__FILTERTIPSBYPRIORITY_OFFSET))(failureTips, priority);
		}

		static ::System::Boolean _IsFailureTypeValid(::RPG::GameCore::BattleFailureTipsConfigRow* failureTipRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISFAILURETYPEVALID_OFFSET))(failureTipRow);
		}

		static ::System::Boolean _IsMazeBuffValid(::RPG::GameCore::BattleFailureTipsConfigRow* failureTipRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISMAZEBUFFVALID_OFFSET))(failureTipRow);
		}

		static ::System::Boolean _IsMonsterValid(::RPG::GameCore::BattleFailureTipsConfigRow* failureTipRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISMONSTERVALID_OFFSET))(failureTipRow);
		}

		static ::System::Boolean _IsCustomStringValid(::RPG::GameCore::BattleFailureTipsConfigRow* failureTipRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISCUSTOMSTRINGVALID_OFFSET))(failureTipRow);
		}

		static ::System::Boolean _CheckAvatarLevel()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__CHECKAVATARLEVEL_OFFSET))();
		}

		static ::System::Boolean _CheckSkillTree()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__CHECKSKILLTREE_OFFSET))();
		}

		static ::System::Boolean _CheckLightCone()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__CHECKLIGHTCONE_OFFSET))();
		}

		static ::System::Boolean _CheckRelic()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__CHECKRELIC_OFFSET))();
		}

		static ::System::Boolean _CheckRogueSkillTree()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__CHECKROGUESKILLTREE_OFFSET))();
		}

		static ::System::Boolean _CheckItemConsume()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__CHECKITEMCONSUME_OFFSET))();
		}

		static ::System::Single _GetTeamCombatPower(::RPG::GameCore::CombatPowerSource source)
		{
			return ((::System::Single(*)(::RPG::GameCore::CombatPowerSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__GETTEAMCOMBATPOWER_OFFSET))(source);
		}

		static ::System::Void _UpdateRef()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__UPDATEREF_OFFSET))();
		}

		static ::System::Void _ClearRef()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__CLEARREF_OFFSET))();
		}
	};
}
