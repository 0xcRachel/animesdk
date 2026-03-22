#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityLocalLegendDifficulty.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class ActivityLocalLegendGroupConfigRow; }
namespace RPG::GameCore { class ActivityLocalLegendStageConfigRow; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETFINISHEDSTARNUM_OFFSET UNITYSDK_OFFSET(0x8B5BE20)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x8B5EBA0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETPINNEDAVATARS_OFFSET UNITYSDK_OFFSET(0x8B5F090)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETTEAMSAVE_OFFSET UNITYSDK_OFFSET(0x8B5F3F0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0x8B5EDC0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_BATTLETARGETLIST_OFFSET UNITYSDK_OFFSET(0x8B5FF00)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_DIFFICULTYLEVEL_OFFSET UNITYSDK_OFFSET(0x8B5C1B0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_FINISHEDBATTLETARGETCOUNT_OFFSET UNITYSDK_OFFSET(0x8B5B9C0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x8B609C0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_GROUPTITLE_OFFSET UNITYSDK_OFFSET(0x8B5DB90)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_ISCHALLENGED_OFFSET UNITYSDK_OFFSET(0x8B5C6F0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x8B60230)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x8B5C280)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_MANIKINPREFABCONFIG_OFFSET UNITYSDK_OFFSET(0x8B60970)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_MANIKINPREFABPATH_OFFSET UNITYSDK_OFFSET(0x8B60950)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_NEEDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x8B60440)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_RECOMMENDKEY_OFFSET UNITYSDK_OFFSET(0x8B5D670)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_STARNUM_OFFSET UNITYSDK_OFFSET(0x8B60880)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_VHSTAGEMECHANISM_OFFSET UNITYSDK_OFFSET(0x8B60990)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET__LEVELID_OFFSET UNITYSDK_OFFSET(0x8B60420)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET__TRIALAVATAR_OFFSET UNITYSDK_OFFSET(0x8B5F070)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_ISTARGETCOMPLETE_OFFSET UNITYSDK_OFFSET(0x8B601B0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SAVETEAM_OFFSET UNITYSDK_OFFSET(0x8B5FAE0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SET_ISCHALLENGED_OFFSET UNITYSDK_OFFSET(0x8B5FFA0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SET_NEEDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x8B60670)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SYNCBATTLETARGETCOUNT_OFFSET UNITYSDK_OFFSET(0x8B5B850)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8B5B550)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA__PROCESSTEAMSAVE_OFFSET UNITYSDK_OFFSET(0x8B5F820)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA__TRYGETLOWERLEVELTEAMSAVE_OFFSET UNITYSDK_OFFSET(0x8B5F620)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendLevelData_TypeDefinitionIndex = 48801;

	class ActivityLocalLegendLevelData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityLocalLegendGroupConfigRow* _GroupRow; // 0x10
		::RPG::GameCore::ActivityLocalLegendStageConfigRow* _LevelRow; // 0x18
		::Il2CppArray<::System::Boolean>* _TargetStatus; // 0x20

		::System::Void _ctor(::System::UInt32 groupID, ::System::UInt32 difficultyLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA__CTOR_OFFSET))(this, groupID, difficultyLevel);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetMonsterData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETMONSTERDATA_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetTrialAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETTRIALAVATARS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetPinnedAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETPINNEDAVATARS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetTeamSave()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETTEAMSAVE_OFFSET))(this);
		}

		::System::Void SaveTeam(::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* avatars)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SAVETEAM_OFFSET))(this, avatars);
		}

		::System::UInt32 GetFinishedStarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GETFINISHEDSTARNUM_OFFSET))(this);
		}

		::System::Void SyncBattleTargetCount(::System::UInt32 targetBitSet, ::System::Boolean synByInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SYNCBATTLETARGETCOUNT_OFFSET))(this, targetBitSet, synByInit);
		}

		::System::Boolean IsTargetComplete(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_ISTARGETCOMPLETE_OFFSET))(this, index);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* _TryGetLowerLevelTeamSave(::System::UInt32 difficultyLevel, ::System::UInt32 targetLevel)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA__TRYGETLOWERLEVELTEAMSAVE_OFFSET))(this, difficultyLevel, targetLevel);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* _ProcessTeamSave(::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::Boolean>*>* teamSave, ::System::UInt32 targetLevel)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::Boolean>*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA__PROCESSTEAMSAVE_OFFSET))(this, teamSave, targetLevel);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_BattleTargetList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_BATTLETARGETLIST_OFFSET))(this);
		}

		::System::UInt32 get_FinishedBattleTargetCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_FINISHEDBATTLETARGETCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Boolean get_IsChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_ISCHALLENGED_OFFSET))(this);
		}

		::System::Void set_IsChallenged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SET_ISCHALLENGED_OFFSET))(this, value);
		}

		::System::Boolean get_NeedPlayUnlockAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_NEEDPLAYUNLOCKANIM_OFFSET))(this);
		}

		::System::Void set_NeedPlayUnlockAnim(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_SET_NEEDPLAYUNLOCKANIM_OFFSET))(this, value);
		}

		::RPG::GameCore::ActivityLocalLegendDifficulty get_DifficultyLevel()
		{
			return ((::RPG::GameCore::ActivityLocalLegendDifficulty(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_DIFFICULTYLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_StarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_STARNUM_OFFSET))(this);
		}

		::System::String* get_ManikinPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_MANIKINPREFABPATH_OFFSET))(this);
		}

		::System::String* get_ManikinPrefabConfig()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_MANIKINPREFABCONFIG_OFFSET))(this);
		}

		::RPG::Client::TextID get_VHStageMechanism()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_VHSTAGEMECHANISM_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_GROUPID_OFFSET))(this);
		}

		::RPG::Client::TextID get_GroupTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_GROUPTITLE_OFFSET))(this);
		}

		::System::UInt32 get_RecommendKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET_RECOMMENDKEY_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get__TrialAvatar()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET__TRIALAVATAR_OFFSET))(this);
		}

		::System::UInt32 get__LevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA_GET__LEVELID_OFFSET))(this);
		}
	};
}
