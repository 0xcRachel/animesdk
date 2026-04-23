#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarblePVPMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class PrefList_1; }
namespace RPG::Client::ActivityMarble { class MarblePVEMatchContext; }
namespace RPG::Client::ActivityMarble { class MarblePVPMatchContext; }
namespace RPG::Client::ActivityMarble { class MarblePvePlayer; }
namespace RPG::Client::ActivityMarble { class MarbleSealData; }
namespace RPG::Client::ActivityMarble { class MarbleSealTeamSelection; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MarblePVPRankConfigRow; }
namespace RPG::GameCore { class MarbleSealTalkConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEMARBLETEACHMATCH_OFFSET UNITYSDK_OFFSET(0x17022910)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEOPPONENTNPCENTITY_OFFSET UNITYSDK_OFFSET(0x17023180)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEPVPFREEMATCHCONTEXT_OFFSET UNITYSDK_OFFSET(0x17011DD0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEPVPINVITEMATCHCONTEXT_OFFSET UNITYSDK_OFFSET(0x17011EC0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEPVPMULTIPLAYFREEMATCHCONTEXT_OFFSET UNITYSDK_OFFSET(0x17011FB0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEPVPMULTIPLAYINVITATIONMATCHCONTEXT_OFFSET UNITYSDK_OFFSET(0x170120A0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_DISPOSEOPPONENTNPCENTITY_OFFSET UNITYSDK_OFFSET(0x17023450)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETALLRANKCONFIG_OFFSET UNITYSDK_OFFSET(0x17023670)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETENEMYSWIMRINGNODEPATH_OFFSET UNITYSDK_OFFSET(0x17010970)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETGAMEMODEFROMPVPMODE_OFFSET UNITYSDK_OFFSET(0x17012C60)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETMAXDISPLAYMARBLESEALCOUNT_OFFSET UNITYSDK_OFFSET(0x1701E520)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETMAXTEAMMARBLESEALCOUNT_OFFSET UNITYSDK_OFFSET(0x170174C0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETPREFPVPMARBLESEALIDS_OFFSET UNITYSDK_OFFSET(0x17023050)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETPVPMARBLESEALIDS_OFFSET UNITYSDK_OFFSET(0x17016F50)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETSEALTALKCONFIGROW_OFFSET UNITYSDK_OFFSET(0x170222C0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_GETSELFSWIMRINGNODEPATH_OFFSET UNITYSDK_OFFSET(0x17010910)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_ISCAMERABLENDING_OFFSET UNITYSDK_OFFSET(0x17023910)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_OPENMARBLEMAINPAGE_OFFSET UNITYSDK_OFFSET(0x17023B20)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_OPENMARBLEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x17022320)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_RECORDMARBLESEALSEEN_OFFSET UNITYSDK_OFFSET(0x170239E0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_SAVEPVEMARBLETEAMSELECTION_OFFSET UNITYSDK_OFFSET(0x17022DA0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_SAVEPVPMARBLETEAMSELECTION_OFFSET UNITYSDK_OFFSET(0x17022DE0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS_SWITCHTOMULTIPLAYMARBLEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x17022760)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x17023CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityMarbleUtils_TypeDefinitionIndex = 60575;

	class ActivityMarbleUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::Enum_3_A35B38E5F9115A76_2, ::System::UInt32>** StaticGet__MaxTeamMarbleSealCount()
		{
			return (::System::Collections::Generic::Dictionary_2<::Enum_3_A35B38E5F9115A76_2, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils_TypeDefinitionIndex)->GetStaticField(0x4E660);
		}
		static ::System::Collections::Generic::Dictionary_2<::Enum_3_A35B38E5F9115A76_2, ::System::UInt32>** StaticGet_FightGameModeToActivityID()
		{
			return (::System::Collections::Generic::Dictionary_2<::Enum_3_A35B38E5F9115A76_2, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils_TypeDefinitionIndex)->GetStaticField(0x4E668);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS__CCTOR_OFFSET))();
		}

		static ::System::String* GetSelfSwimRingNodePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETSELFSWIMRINGNODEPATH_OFFSET))();
		}

		static ::System::String* GetEnemySwimRingNodePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETENEMYSWIMRINGNODEPATH_OFFSET))();
		}

		static ::RPG::GameCore::MarbleSealTalkConfigRow* GetSealTalkConfigRow(::System::UInt32 talkID)
		{
			return ((::RPG::GameCore::MarbleSealTalkConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETSEALTALKCONFIGROW_OFFSET))(talkID);
		}

		static ::System::Void OpenMarbleMatchPage()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_OPENMARBLEMATCHPAGE_OFFSET))();
		}

		static ::System::Void SwitchToMultiplayMarbleMatchPage()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_SWITCHTOMULTIPLAYMARBLEMATCHPAGE_OFFSET))();
		}

		static ::RPG::Client::ActivityMarble::MarblePVEMatchContext* CreateMarbleTeachMatch()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVEMatchContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEMARBLETEACHMATCH_OFFSET))();
		}

		static ::System::Void SavePVEMarbleTeamSelection(::RPG::Client::ActivityMarble::MarbleSealTeamSelection* selection)
		{
			return ((::System::Void(*)(::RPG::Client::ActivityMarble::MarbleSealTeamSelection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_SAVEPVEMARBLETEAMSELECTION_OFFSET))(selection);
		}

		static ::System::Void SavePVPMarbleTeamSelection(::RPG::Client::ActivityMarble::MarbleSealTeamSelection* selection, ::Enum_3_A35B38E5F9115A76_2 gameMode)
		{
			return ((::System::Void(*)(::RPG::Client::ActivityMarble::MarbleSealTeamSelection*, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_SAVEPVPMARBLETEAMSELECTION_OFFSET))(selection, gameMode);
		}

		static ::RPG::Client::ActivityMarble::MarblePVPMatchContext* CreatePVPInviteMatchContext()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPMatchContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEPVPINVITEMATCHCONTEXT_OFFSET))();
		}

		static ::RPG::Client::ActivityMarble::MarblePVPMatchContext* CreatePVPFreeMatchContext()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPMatchContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEPVPFREEMATCHCONTEXT_OFFSET))();
		}

		static ::RPG::Client::ActivityMarble::MarblePVPMatchContext* CreatePVPMultiplayFreeMatchContext()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPMatchContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEPVPMULTIPLAYFREEMATCHCONTEXT_OFFSET))();
		}

		static ::RPG::Client::ActivityMarble::MarblePVPMatchContext* CreatePVPMultiplayInvitationMatchContext()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPMatchContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEPVPMULTIPLAYINVITATIONMATCHCONTEXT_OFFSET))();
		}

		static ::RPG::Client::PrefList_1<::System::UInt32>* GetPrefPVPMarbleSealIDs(::Enum_3_A35B38E5F9115A76_2 gameMode)
		{
			return ((::RPG::Client::PrefList_1<::System::UInt32>*(*)(::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETPREFPVPMARBLESEALIDS_OFFSET))(gameMode);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetPVPMarbleSealIDs(::Enum_3_A35B38E5F9115A76_2 gameMode)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETPVPMARBLESEALIDS_OFFSET))(gameMode);
		}

		static ::System::Int32 GetMaxTeamMarbleSealCount(::Enum_3_A35B38E5F9115A76_2 gameMode)
		{
			return ((::System::Int32(*)(::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETMAXTEAMMARBLESEALCOUNT_OFFSET))(gameMode);
		}

		static ::System::UInt32 GetMaxDisplayMarbleSealCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETMAXDISPLAYMARBLESEALCOUNT_OFFSET))();
		}

		static ::RPG::GameCore::GameEntity* CreateOpponentNpcEntity(::RPG::Client::ActivityMarble::MarblePvePlayer* opponent, ::UnityEngine::Transform* root)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::Client::ActivityMarble::MarblePvePlayer*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_CREATEOPPONENTNPCENTITY_OFFSET))(opponent, root);
		}

		static ::System::Void DisposeOpponentNpcEntity(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_DISPOSEOPPONENTNPCENTITY_OFFSET))(entity);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::MarblePVPRankConfigRow*>* GetAllRankConfig()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MarblePVPRankConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETALLRANKCONFIG_OFFSET))();
		}

		static ::System::Boolean IsCameraBlending()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_ISCAMERABLENDING_OFFSET))();
		}

		static ::System::Void RecordMarbleSealSeen(::RPG::Client::ActivityMarble::MarbleSealData* data)
		{
			return ((::System::Void(*)(::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_RECORDMARBLESEALSEEN_OFFSET))(data);
		}

		static ::System::Void OpenMarbleMainPage(::System::UInt32 tabID, ::System::Action* onFinish, ::System::Boolean needLoading)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_OPENMARBLEMAINPAGE_OFFSET))(tabID, onFinish, needLoading);
		}

		static ::Enum_3_A35B38E5F9115A76_2 GetGameModeFromPVPMode(::RPG::Client::ActivityMarble::MarblePVPMode mode)
		{
			return ((::Enum_3_A35B38E5F9115A76_2(*)(::RPG::Client::ActivityMarble::MarblePVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS_GETGAMEMODEFROMPVPMODE_OFFSET))(mode);
		}
	};
}
