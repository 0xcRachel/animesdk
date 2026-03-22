#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EvolveBuildStageStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

class Class_1_942D40AEEDD1812F;
class Class_1_A88C3AAF0DD46F4C_3;
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class EvolveBuildCollectionGear; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class EvolveBuildStageRow; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDSTAGE_GETMONSTERIDS_OFFSET UNITYSDK_OFFSET(0x91A69E0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GETMONSTERS_OFFSET UNITYSDK_OFFSET(0x91A6E30)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GETRANKNAME_OFFSET UNITYSDK_OFFSET(0x91A7460)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GETTEAMSAVE_OFFSET UNITYSDK_OFFSET(0x91A7E60)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0x91A67D0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_DESC_OFFSET UNITYSDK_OFFSET(0x91A6480)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_DEVILDESC_OFFSET UNITYSDK_OFFSET(0x91A6550)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x91A6600)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_FIRSTWINQUEST_OFFSET UNITYSDK_OFFSET(0x91A6640)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_HASNORANDOMBONUS_OFFSET UNITYSDK_OFFSET(0x91A7610)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_HASRANDOMPERIOD_OFFSET UNITYSDK_OFFSET(0x91A21D0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_HIGHSCORE_OFFSET UNITYSDK_OFFSET(0x91A75D0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_ID_OFFSET UNITYSDK_OFFSET(0x9198ED0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_INITIALWEAPONID_OFFSET UNITYSDK_OFFSET(0x91A63E0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_ISCLICKED_OFFSET UNITYSDK_OFFSET(0x91A7650)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_ISWEAPONSELECTABLE_OFFSET UNITYSDK_OFFSET(0x919D2B0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_LOCKTOASTPARAM_OFFSET UNITYSDK_OFFSET(0x91A6310)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x91A47E0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_NEXTSTAGE_OFFSET UNITYSDK_OFFSET(0x91A67B0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_PERIODS_OFFSET UNITYSDK_OFFSET(0x91A75C0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_RECOMMENDGEARIDS_OFFSET UNITYSDK_OFFSET(0x91A6620)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_RECOMMENDGEARS_OFFSET UNITYSDK_OFFSET(0x91A6660)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SEASON_OFFSET UNITYSDK_OFFSET(0x91989D0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SELECTEDWEAPON_OFFSET UNITYSDK_OFFSET(0x91A7A60)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SHOULDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x91A7630)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SHOWNEWRECORDMARK_OFFSET UNITYSDK_OFFSET(0x91A75F0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x918C900)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SKILLRECOMMENDATIONS_OFFSET UNITYSDK_OFFSET(0x919D270)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x91A1FD0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSICONPATH_OFFSET UNITYSDK_OFFSET(0x91A6510)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSMAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x91A6530)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSMAZEBUFF_OFFSET UNITYSDK_OFFSET(0x91A6580)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSNUMFORMAT_OFFSET UNITYSDK_OFFSET(0x91A64E0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSSHORTDESC_OFFSET UNITYSDK_OFFSET(0x91A64B0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0x91A6460)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_UNLOCKQUESTID_OFFSET UNITYSDK_OFFSET(0x9198C80)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_ISFIRSTQUESTFINISHEDORCLOSE_OFFSET UNITYSDK_OFFSET(0x9198CA0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x9198DD0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SETNEXTSTAGE_OFFSET UNITYSDK_OFFSET(0x91A53B0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_HASNORANDOMBONUS_OFFSET UNITYSDK_OFFSET(0x91A7620)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_HIGHSCORE_OFFSET UNITYSDK_OFFSET(0x91A75E0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_ISCLICKED_OFFSET UNITYSDK_OFFSET(0x91A7770)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_NEXTSTAGE_OFFSET UNITYSDK_OFFSET(0x91A67C0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_SELECTEDWEAPON_OFFSET UNITYSDK_OFFSET(0x91A7C90)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_SHOULDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x91A7640)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_SHOWNEWRECORDMARK_OFFSET UNITYSDK_OFFSET(0x91A7600)
#define RPG_CLIENT_EVOLVEBUILDSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x919FB40)
#define RPG_CLIENT_EVOLVEBUILDSTAGE__ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x91A79B0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildStage_TypeDefinitionIndex = 50719;

	class EvolveBuildStage : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveBuildStageRow* _Row; // 0x10
		::RPG::Client::EvolveBuildCollectionGear* _SelectedWeapon; // 0x18
		::System::Collections::Generic::List_1<::Class_1_942D40AEEDD1812F*>* _SortedRanks; // 0x20
		::RPG::Client::EvolveBuildStage* _NextStage_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _Periods_k__BackingField; // 0x30
		::System::UInt32 _HighScore_k__BackingField; // 0x38
		::System::Boolean _ShouldPlayUnlockAnim_k__BackingField; // 0x3C
		::System::Boolean _ShowNewRecordMark_k__BackingField; // 0x3D
		::System::Boolean _HasNoRandomBonus_k__BackingField; // 0x3E

		::System::Void _ctor(::RPG::GameCore::EvolveBuildStageRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildStageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE__CTOR_OFFSET))(this, row);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_UnlockQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_UNLOCKQUESTID_OFFSET))(this);
		}

		::System::UInt32 get_LockToastParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_LOCKTOASTPARAM_OFFSET))(this);
		}

		::System::UInt32 get_InitialWeaponID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_INITIALWEAPONID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TrialAvatarIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TRIALAVATARIDS_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_TeamBonusShortDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSSHORTDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_TeamBonusNumFormat()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSNUMFORMAT_OFFSET))(this);
		}

		::System::String* get_TeamBonusIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_TeamBonusMazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSMAZEBUFFID_OFFSET))(this);
		}

		::RPG::Client::TextID get_DevilDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_DEVILDESC_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SEASON_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* get_TeamBonusMazeBuff()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSMAZEBUFF_OFFSET))(this);
		}

		::System::Int32 get_Difficulty()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Boolean get_IsWeaponSelectable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_ISWEAPONSELECTABLE_OFFSET))(this);
		}

		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_3*>* get_SkillRecommendations()
		{
			return ((::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SKILLRECOMMENDATIONS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RecommendGearIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_RECOMMENDGEARIDS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_FirstWinQuest()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_FIRSTWINQUEST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCollectionGear*>* get_RecommendGears()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCollectionGear*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_RECOMMENDGEARS_OFFSET))(this);
		}

		::RPG::Client::EvolveBuildStage* get_NextStage()
		{
			return ((::RPG::Client::EvolveBuildStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_NEXTSTAGE_OFFSET))(this);
		}

		::System::Void set_NextStage(::RPG::Client::EvolveBuildStage* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_SET_NEXTSTAGE_OFFSET))(this, value);
		}

		::System::Boolean get_HasRandomPeriod()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_HASRANDOMPERIOD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetTrialAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GETTRIALAVATARS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetMonsterIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GETMONSTERIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetMonsters()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GETMONSTERS_OFFSET))(this);
		}

		::System::String* GetRankName(::System::UInt32 score)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GETRANKNAME_OFFSET))(this, score);
		}

		::System::Void SetNextStage(::RPG::Client::EvolveBuildStage* stage)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_SETNEXTSTAGE_OFFSET))(this, stage);
		}

		::System::Boolean IsFirstQuestFinishedOrClose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_ISFIRSTQUESTFINISHEDORCLOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_Periods()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_PERIODS_OFFSET))(this);
		}

		::System::UInt32 get_HighScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_HIGHSCORE_OFFSET))(this);
		}

		::System::Void set_HighScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_SET_HIGHSCORE_OFFSET))(this, value);
		}

		::System::Boolean get_ShowNewRecordMark()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SHOWNEWRECORDMARK_OFFSET))(this);
		}

		::System::Void set_ShowNewRecordMark(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_SET_SHOWNEWRECORDMARK_OFFSET))(this, value);
		}

		::System::Boolean get_HasNoRandomBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_HASNORANDOMBONUS_OFFSET))(this);
		}

		::System::Void set_HasNoRandomBonus(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_SET_HASNORANDOMBONUS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldPlayUnlockAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SHOULDPLAYUNLOCKANIM_OFFSET))(this);
		}

		::System::Void set_ShouldPlayUnlockAnim(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_SET_SHOULDPLAYUNLOCKANIM_OFFSET))(this, value);
		}

		::System::Boolean get_ShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SHOWREDDOT_OFFSET))(this);
		}

		::System::Boolean get_IsClicked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_ISCLICKED_OFFSET))(this);
		}

		::System::Void set_IsClicked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_SET_ISCLICKED_OFFSET))(this, value);
		}

		::RPG::Client::EvolveBuildStageStatus get_Status()
		{
			return ((::RPG::Client::EvolveBuildStageStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_STATUS_OFFSET))(this);
		}

		::System::Boolean IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_ISLOCKED_OFFSET))(this);
		}

		::System::Boolean _IsInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE__ISINPROGRESS_OFFSET))(this);
		}

		::RPG::Client::EvolveBuildCollectionGear* get_SelectedWeapon()
		{
			return ((::RPG::Client::EvolveBuildCollectionGear*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SELECTEDWEAPON_OFFSET))(this);
		}

		::System::Void set_SelectedWeapon(::RPG::Client::EvolveBuildCollectionGear* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildCollectionGear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_SET_SELECTEDWEAPON_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetTeamSave()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GETTEAMSAVE_OFFSET))(this);
		}
	};
}
