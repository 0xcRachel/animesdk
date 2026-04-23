#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeBubbleOffset.h"
#include "unitysdk/RPG/Client/TrainCakeCatchExhibitController_CatGroundType.h"
#include "unitysdk/System/Object.h"

class Class_1_902742FEC03162EB;
namespace RPG::Client { class OnlineCakeCatchShelfData; }
namespace RPG::Client { class TrainCakeCatchExhibitController; }
namespace RPG::GameCore { class DynamicValue; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKECATCHSTATIC_GETBUBBLEOFFSETINDEX_OFFSET UNITYSDK_OFFSET(0x15FCB530)
#define RPG_CLIENT_CAKECATCHSTATIC_GETDEFAULTBUBBLEOFFSET_OFFSET UNITYSDK_OFFSET(0x15FCB7A0)
#define RPG_CLIENT_CAKECATCHSTATIC_GETEXHIBITCONTROLLER_OFFSET UNITYSDK_OFFSET(0x15FC39C0)
#define RPG_CLIENT_CAKECATCHSTATIC_GETGROUNDBUBBLEOFFSETINDEX_OFFSET UNITYSDK_OFFSET(0x15FDA0C0)
#define RPG_CLIENT_CAKECATCHSTATIC_GETSHELFBUBBLEOFFSETINDEX_OFFSET UNITYSDK_OFFSET(0x15FDA120)
#define RPG_CLIENT_CAKECATCHSTATIC_GETSHELFDATALIST_OFFSET UNITYSDK_OFFSET(0x15FD9530)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_CATDIALOGUEBUBBLEOFFSETS_OFFSET UNITYSDK_OFFSET(0x15FD9460)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDFIRSTCAKECATCH_OFFSET UNITYSDK_OFFSET(0x15FD3770)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDPREARRANGEMISSION_OFFSET UNITYSDK_OFFSET(0x15FD9300)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDPREGUIDEMISSION_OFFSET UNITYSDK_OFFSET(0x15FD9250)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDPRELEVELREQUIREMENT_OFFSET UNITYSDK_OFFSET(0x15FD91A0)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_MAX_CAT_OBTAINABLE_COUNT_OFFSET UNITYSDK_OFFSET(0x15FD5670)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_POSE1_UNLOCK_THRESHOLD_OFFSET UNITYSDK_OFFSET(0x15FCA000)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_POSE2_UNLOCK_THRESHOLD_OFFSET UNITYSDK_OFFSET(0x15FCA100)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_STORY_UNLOCK_THRESHOLD_OFFSET UNITYSDK_OFFSET(0x15FCC020)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_VISITFUNCTIONUNLOCKED_OFFSET UNITYSDK_OFFSET(0x15FD93B0)
#define RPG_CLIENT_CAKECATCHSTATIC_ISCAKEGODSEEN_OFFSET UNITYSDK_OFFSET(0x15FD9CD0)
#define RPG_CLIENT_CAKECATCHSTATIC_ISCATGODINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x15FC2E90)
#define RPG_CLIENT_CAKECATCHSTATIC_ISLOCALBOXOPENABLE_OFFSET UNITYSDK_OFFSET(0x15FC2FD0)
#define RPG_CLIENT_CAKECATCHSTATIC_ISLOCALCATGODVISIBLE_OFFSET UNITYSDK_OFFSET(0x15FC2F30)
#define RPG_CLIENT_CAKECATCHSTATIC_ISSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET UNITYSDK_OFFSET(0x15FD9B50)
#define RPG_CLIENT_CAKECATCHSTATIC_SETCAKEGODSEEN_OFFSET UNITYSDK_OFFSET(0x15FD9E60)
#define RPG_CLIENT_CAKECATCHSTATIC_SETSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET UNITYSDK_OFFSET(0x15FD9C10)
#define RPG_CLIENT_CAKECATCHSTATIC_STARTCAKEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x15FD95F0)
#define RPG_CLIENT_CAKECATCHSTATIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FDA170)
#define RPG_CLIENT_CAKECATCHSTATIC__GETGROUNDTYPETOBUBBLEOFFSETID_OFFSET UNITYSDK_OFFSET(0x15FDA070)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchStatic_TypeDefinitionIndex = 58003;

	class CakeCatchStatic : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__FinishedPreGuideMissionUnlockID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E30);
		}
		static ::System::UInt32* StaticGet_PreGuideMissionGotoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E34);
		}
		static ::System::UInt32* StaticGet_CatGodMapIconType()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E38);
		}
		static ::System::UInt32* StaticGet_CatBoxInstanceID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E3C);
		}
		static ::System::UInt32* StaticGet_CatGodPropID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E40);
		}
		static ::System::Single* StaticGet_CatDialogueGroupCD()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E44);
		}
		static ::System::UInt32* StaticGet_MAX_CAT_ARRANGE_COUNT()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E48);
		}
		static ::System::Single* StaticGet_CatTextBubbleTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E4C);
		}
		static ::System::UInt32* StaticGet_CAT_NUM_PER_ROOM()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E50);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomSelfEntryId()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E54);
		}
		static ::System::UInt32* StaticGet_ArrangeAreaInteractPropInstanceID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E58);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomFriendEntryId()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E5C);
		}
		static ::System::UInt32* StaticGet__FirstCatCatchUnlockID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E60);
		}
		static ::System::UInt32* StaticGet_TEXTJOIN_ID_CAKE_CATCH_WEEKLY_CAUGHT_COUNT()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E64);
		}
		static ::System::UInt32* StaticGet_WEEKLY_MAX_CATCH_COUNT()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E68);
		}
		static ::System::UInt32* StaticGet__FinishedPreArrangeMissionUnlockID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E6C);
		}
		static ::System::Single* StaticGet_CatDialogueBubbleTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E70);
		}
		static ::System::UInt32* StaticGet_CatGodInstanceID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E74);
		}
		static ::System::UInt32* StaticGet_CatGodMappingInfoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E78);
		}
		static ::System::UInt32* StaticGet_CatGodGroupID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E7C);
		}
		static ::System::UInt32* StaticGet_ArrangeAreaInteractPropGroupID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E80);
		}
		static ::System::UInt32* StaticGet__FinishedPreLevelRequirementUnlockID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E84);
		}
		static ::System::UInt32* StaticGet_CatBoxGroupID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E88);
		}
		static ::System::UInt32* StaticGet_PreMainMissionID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E8C);
		}
		static ::System::UInt32* StaticGet__VisitFunctionUnlockID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E90);
		}
		static ::System::UInt32* StaticGet_CakeCatchShelfMappingInfoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x6E94);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_FinishedPreLevelRequirement()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDPRELEVELREQUIREMENT_OFFSET))();
		}

		static ::System::Boolean get_FinishedPreGuideMission()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDPREGUIDEMISSION_OFFSET))();
		}

		static ::System::Boolean get_FinishedPreArrangeMission()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDPREARRANGEMISSION_OFFSET))();
		}

		static ::System::Boolean get_FinishedFirstCakeCatch()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDFIRSTCAKECATCH_OFFSET))();
		}

		static ::System::Boolean get_VisitFunctionUnlocked()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_VISITFUNCTIONUNLOCKED_OFFSET))();
		}

		static ::System::UInt32 get_POSE1_UNLOCK_THRESHOLD()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_POSE1_UNLOCK_THRESHOLD_OFFSET))();
		}

		static ::System::UInt32 get_POSE2_UNLOCK_THRESHOLD()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_POSE2_UNLOCK_THRESHOLD_OFFSET))();
		}

		static ::System::UInt32 get_STORY_UNLOCK_THRESHOLD()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_STORY_UNLOCK_THRESHOLD_OFFSET))();
		}

		static ::System::UInt32 get_MAX_CAT_OBTAINABLE_COUNT()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_MAX_CAT_OBTAINABLE_COUNT_OFFSET))();
		}

		static ::Il2CppArray<::RPG::GameCore::DynamicValue*>* get_CatDialogueBubbleOffsets()
		{
			return ((::Il2CppArray<::RPG::GameCore::DynamicValue*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_CATDIALOGUEBUBBLEOFFSETS_OFFSET))();
		}

		static ::RPG::Client::TrainCakeCatchExhibitController* GetExhibitController()
		{
			return ((::RPG::Client::TrainCakeCatchExhibitController*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GETEXHIBITCONTROLLER_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::OnlineCakeCatchShelfData*>* GetShelfDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::OnlineCakeCatchShelfData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GETSHELFDATALIST_OFFSET))();
		}

		static ::System::Void StartCakePerformance(::System::UInt32 performanceID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_STARTCAKEPERFORMANCE_OFFSET))(performanceID);
		}

		static ::System::Boolean IsSpecialShelfUnlockStatusSeen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_ISSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET))();
		}

		static ::System::Void SetSpecialShelfUnlockStatusSeen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_SETSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET))();
		}

		static ::System::Boolean IsCakeGodSeen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_ISCAKEGODSEEN_OFFSET))();
		}

		static ::System::Boolean IsCatGodInteractable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_ISCATGODINTERACTABLE_OFFSET))();
		}

		static ::System::Boolean IsLocalCatGodVisible()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_ISLOCALCATGODVISIBLE_OFFSET))();
		}

		static ::System::Boolean IsLocalBoxOpenable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_ISLOCALBOXOPENABLE_OFFSET))();
		}

		static ::System::Void SetCakeGodSeen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_SETCAKEGODSEEN_OFFSET))();
		}

		static ::System::UInt32 _GetGroundTypeToBubbleOffsetID(::RPG::Client::TrainCakeCatchExhibitController_CatGroundType state)
		{
			return ((::System::UInt32(*)(::RPG::Client::TrainCakeCatchExhibitController_CatGroundType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC__GETGROUNDTYPETOBUBBLEOFFSETID_OFFSET))(state);
		}

		static ::System::UInt32 GetGroundBubbleOffsetIndex(::System::UInt32 pile, ::System::UInt32 state, ::System::UInt32 position)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GETGROUNDBUBBLEOFFSETINDEX_OFFSET))(pile, state, position);
		}

		static ::System::UInt32 GetShelfBubbleOffsetIndex(::System::UInt32 position)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GETSHELFBUBBLEOFFSETINDEX_OFFSET))(position);
		}

		static ::System::UInt32 GetBubbleOffsetIndex(::Class_1_902742FEC03162EB* positionInfo)
		{
			return ((::System::UInt32(*)(::Class_1_902742FEC03162EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GETBUBBLEOFFSETINDEX_OFFSET))(positionInfo);
		}

		static ::RPG::Client::CakeBubbleOffset GetDefaultBubbleOffset()
		{
			return ((::RPG::Client::CakeBubbleOffset(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GETDEFAULTBUBBLEOFFSET_OFFSET))();
		}
	};
}
