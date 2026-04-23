#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlacementType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightRegion.h"
#include "unitysdk/RPG/GameCore/GridFightTrailLayerQuality.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class GridFightConsumableItemConfig; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }

#define RPG_CLIENT_GRIDFIGHTUTILS_CANROLELEVELUPBYADDCOUNT_OFFSET UNITYSDK_OFFSET(0x174453F0)
#define RPG_CLIENT_GRIDFIGHTUTILS_CANTRANSFERTOLAUNCHER_OFFSET UNITYSDK_OFFSET(0x17443EF0)
#define RPG_CLIENT_GRIDFIGHTUTILS_COMPILEGRIDFIGHTTEXT_1_OFFSET UNITYSDK_OFFSET(0x174450B0)
#define RPG_CLIENT_GRIDFIGHTUTILS_COMPILEGRIDFIGHTTEXT_OFFSET UNITYSDK_OFFSET(0x17444F90)
#define RPG_CLIENT_GRIDFIGHTUTILS_CONVERTPLACEMENTINDEXTOPOSINDEX_OFFSET UNITYSDK_OFFSET(0x17445BC0)
#define RPG_CLIENT_GRIDFIGHTUTILS_CONVERTPOSINDEXTOPLACEMENTINDEX_OFFSET UNITYSDK_OFFSET(0x17445CF0)
#define RPG_CLIENT_GRIDFIGHTUTILS_CONVERTPROPERTYTOFIXPOINT_OFFSET UNITYSDK_OFFSET(0x17432D50)
#define RPG_CLIENT_GRIDFIGHTUTILS_COVERTPLACEMENTTYPEFROMREGIN_OFFSET UNITYSDK_OFFSET(0x17446DD0)
#define RPG_CLIENT_GRIDFIGHTUTILS_COVERTREGINFROMPLACEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x17446E20)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETCOLORSTATE_OFFSET UNITYSDK_OFFSET(0x17446D50)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETCURSESSIONUID_OFFSET UNITYSDK_OFFSET(0x174482E0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETDIVISIONIDBYLEVELANDPROGRESS_OFFSET UNITYSDK_OFFSET(0x17444B20)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETEXPAMOUNT_OFFSET UNITYSDK_OFFSET(0x17446BF0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETGRIDFIGHTCOINIMGPATH_OFFSET UNITYSDK_OFFSET(0x174465B0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETGRIDFIGHTCOINITEMID_OFFSET UNITYSDK_OFFSET(0x17445AD0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETGRIDFIGHTGOLDSPRITEPATH_OFFSET UNITYSDK_OFFSET(0x17445A20)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETHACKEQUIPRANK_OFFSET UNITYSDK_OFFSET(0x17448070)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETINTROH5URL_OFFSET UNITYSDK_OFFSET(0x174440E0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETLEVELUPNEEDROLECOUNT_OFFSET UNITYSDK_OFFSET(0x17445150)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETMAXPROGRESSINLEVEL_OFFSET UNITYSDK_OFFSET(0x174448B0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETMINPROGRESSINLEVEL_OFFSET UNITYSDK_OFFSET(0x174445A0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETPLACEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x17445EC0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETPLAYERLEVELEXPBYADDEXP_OFFSET UNITYSDK_OFFSET(0x174466C0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETRARITYCOLORSTRING_OFFSET UNITYSDK_OFFSET(0x17445690)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETRARITYFRAMEPATH_OFFSET UNITYSDK_OFFSET(0x174456F0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETROLEBUYPRICE_OFFSET UNITYSDK_OFFSET(0x17446030)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETROLELEVELUPBYADDCOUNT_OFFSET UNITYSDK_OFFSET(0x17445460)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETROLEMAXSTARBYID_OFFSET UNITYSDK_OFFSET(0x174452D0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETROLESELLPRICE_OFFSET UNITYSDK_OFFSET(0x174462B0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETSCORINGCHAPTERID_OFFSET UNITYSDK_OFFSET(0x17444D90)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETSCORINGSECTIONID_OFFSET UNITYSDK_OFFSET(0x17444DF0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETSEASONUID_OFFSET UNITYSDK_OFFSET(0x17447BF0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETSTAGENODEICON_OFFSET UNITYSDK_OFFSET(0x17445960)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETSTAGENODENAME_OFFSET UNITYSDK_OFFSET(0x17445750)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETTHEORETICALEXTRASEASONEXP_OFFSET UNITYSDK_OFFSET(0x17447160)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETTHEORETICALSEASONEXP_OFFSET UNITYSDK_OFFSET(0x17447040)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETUIPOSITION_OFFSET UNITYSDK_OFFSET(0x17447C40)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETUPGRADEDDIVISIONIDBYPROGRESS_OFFSET UNITYSDK_OFFSET(0x17444810)
#define RPG_CLIENT_GRIDFIGHTUTILS_GETUPGRADEDDIVISIONID_OFFSET UNITYSDK_OFFSET(0x174444D0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GET_ISINGAME_OFFSET UNITYSDK_OFFSET(0x17448440)
#define RPG_CLIENT_GRIDFIGHTUTILS_GET_ISINPREPARATION_OFFSET UNITYSDK_OFFSET(0x174483F0)
#define RPG_CLIENT_GRIDFIGHTUTILS_GET__CONTENT_ID_OFFSET UNITYSDK_OFFSET(0x17444170)
#define RPG_CLIENT_GRIDFIGHTUTILS_ISDIVISIONEXISTINGPROMOTIONMATCHBYLEVEL_OFFSET UNITYSDK_OFFSET(0x174441D0)
#define RPG_CLIENT_GRIDFIGHTUTILS_ISDIVISIONEXISTINGPROMOTIONMATCH_OFFSET UNITYSDK_OFFSET(0x17444420)
#define RPG_CLIENT_GRIDFIGHTUTILS_ISEQUIPCANTUSEDBYELATIONEFFECT_OFFSET UNITYSDK_OFFSET(0x17448190)
#define RPG_CLIENT_GRIDFIGHTUTILS_ISOVERCHARGEMODEUNLOCK_OFFSET UNITYSDK_OFFSET(0x17443FD0)
#define RPG_CLIENT_GRIDFIGHTUTILS_OVERRIDENEXTTRANSITIONGRIDFIGHT_OFFSET UNITYSDK_OFFSET(0x17447A60)
#define RPG_CLIENT_GRIDFIGHTUTILS_SAFEGETCONSUMABLEITEMCONFIG_OFFSET UNITYSDK_OFFSET(0x17446500)
#define RPG_CLIENT_GRIDFIGHTUTILS_SAFEGETEQUIPITEMCONFIG_OFFSET UNITYSDK_OFFSET(0x17446450)
#define RPG_CLIENT_GRIDFIGHTUTILS_SORTTRAITIDSBYTEAM_OFFSET UNITYSDK_OFFSET(0x174468A0)
#define RPG_CLIENT_GRIDFIGHTUTILS_TRANSFERTOLAUNCHER_OFFSET UNITYSDK_OFFSET(0x17443D60)
#define RPG_CLIENT_GRIDFIGHTUTILS_TRYSHOWNEWBIELOSEDIALOG_OFFSET UNITYSDK_OFFSET(0x17447430)
#define RPG_CLIENT_GRIDFIGHTUTILS_TRYTAKEALLTUTORIALSTAGEREWARD_OFFSET UNITYSDK_OFFSET(0x17446E70)
#define RPG_CLIENT_GRIDFIGHTUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x17448460)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUtils_TypeDefinitionIndex = 59734;

	class GridFightUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Void TransferToLauncher()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_TRANSFERTOLAUNCHER_OFFSET))();
		}

		static ::System::Boolean CanTransferToLauncher()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_CANTRANSFERTOLAUNCHER_OFFSET))();
		}

		static ::System::Boolean IsOverChargeModeUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_ISOVERCHARGEMODEUNLOCK_OFFSET))();
		}

		static ::System::String* GetIntroH5Url()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETINTROH5URL_OFFSET))();
		}

		static ::System::UInt32 get__CONTENT_ID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GET__CONTENT_ID_OFFSET))();
		}

		static ::System::Boolean IsDivisionExistingPromotionMatchByLevel(::System::UInt32 level)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_ISDIVISIONEXISTINGPROMOTIONMATCHBYLEVEL_OFFSET))(level);
		}

		static ::System::Boolean IsDivisionExistingPromotionMatch(::System::UInt32 divisionID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_ISDIVISIONEXISTINGPROMOTIONMATCH_OFFSET))(divisionID);
		}

		static ::System::UInt32 GetUpGradedDivisionID(::System::UInt32 divisionID, ::System::UInt32 addingProgress)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETUPGRADEDDIVISIONID_OFFSET))(divisionID, addingProgress);
		}

		static ::System::UInt32 GetUpgradedDivisionIDByProgress(::System::UInt32 currentLevel, ::System::UInt32 currentProgress, ::System::UInt32 addingProgress)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETUPGRADEDDIVISIONIDBYPROGRESS_OFFSET))(currentLevel, currentProgress, addingProgress);
		}

		static ::System::UInt32 GetMaxProgressInLevel(::System::UInt32 level)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETMAXPROGRESSINLEVEL_OFFSET))(level);
		}

		static ::System::UInt32 GetMinProgressInLevel(::System::UInt32 level)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETMINPROGRESSINLEVEL_OFFSET))(level);
		}

		static ::System::UInt32 GetDivisionIDByLevelAndProgress(::System::UInt32 level, ::System::UInt32 progress)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETDIVISIONIDBYLEVELANDPROGRESS_OFFSET))(level, progress);
		}

		static ::System::UInt32 GetScoringChapterID(::System::UInt32 finishedChapterID, ::System::UInt32 finishedSectionID, ::System::Boolean isWin)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETSCORINGCHAPTERID_OFFSET))(finishedChapterID, finishedSectionID, isWin);
		}

		static ::System::UInt32 GetScoringSectionID(::System::UInt32 finishedChapterID, ::System::UInt32 finishedSectionID, ::System::Boolean isWin)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETSCORINGSECTIONID_OFFSET))(finishedChapterID, finishedSectionID, isWin);
		}

		static ::System::String* CompileGridFightText(::RPG::Client::TextID id, ::Il2CppArray<::RPG::GameCore::FixPoint>* args)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_COMPILEGRIDFIGHTTEXT_OFFSET))(id, args);
		}

		static ::System::String* CompileGridFightText_1(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_COMPILEGRIDFIGHTTEXT_1_OFFSET))(text);
		}

		static ::System::Int32 GetLevelUpNeedRoleCount(::System::UInt32 roleId, ::System::UInt32 star)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETLEVELUPNEEDROLECOUNT_OFFSET))(roleId, star);
		}

		static ::System::UInt32 GetRoleMaxStarByID(::System::UInt32 roleId)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETROLEMAXSTARBYID_OFFSET))(roleId);
		}

		static ::System::Boolean CanRoleLevelUpByAddCount(::System::UInt32 roleId, ::System::UInt32 star, ::System::UInt32 addCount)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_CANROLELEVELUPBYADDCOUNT_OFFSET))(roleId, star, addCount);
		}

		static ::System::UInt32 GetRoleLevelUpByAddCount(::System::UInt32 roleId, ::System::UInt32 star, ::System::UInt32 addCount)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETROLELEVELUPBYADDCOUNT_OFFSET))(roleId, star, addCount);
		}

		static ::System::String* GetRarityColorString(::System::UInt32 rarity)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETRARITYCOLORSTRING_OFFSET))(rarity);
		}

		static ::System::String* GetRarityFramePath(::System::UInt32 rarity)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETRARITYFRAMEPATH_OFFSET))(rarity);
		}

		static ::RPG::Client::TextID GetStageNodeName(::System::UInt32 routeID, ::System::UInt32 chapterID, ::System::UInt32 sectionID)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETSTAGENODENAME_OFFSET))(routeID, chapterID, sectionID);
		}

		static ::System::String* GetStageNodeIcon(::System::UInt32 routeID, ::System::UInt32 chapterID, ::System::UInt32 sectionID)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETSTAGENODEICON_OFFSET))(routeID, chapterID, sectionID);
		}

		static ::System::String* GetGridFightGoldSpritePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETGRIDFIGHTGOLDSPRITEPATH_OFFSET))();
		}

		static ::System::UInt32 GetGridFightCoinItemID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETGRIDFIGHTCOINITEMID_OFFSET))();
		}

		static ::System::UInt32 ConvertPlacementIndexToPosIndex(::RPG::Client::GridFightPlacementType placement, ::System::UInt32 index)
		{
			return ((::System::UInt32(*)(::RPG::Client::GridFightPlacementType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_CONVERTPLACEMENTINDEXTOPOSINDEX_OFFSET))(placement, index);
		}

		static ::System::UInt32 ConvertPosIndexToPlacementIndex(::System::UInt32 posIndex)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_CONVERTPOSINDEXTOPLACEMENTINDEX_OFFSET))(posIndex);
		}

		static ::RPG::Client::GridFightPlacementType GetPlacementType(::System::UInt32 posIndex)
		{
			return ((::RPG::Client::GridFightPlacementType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETPLACEMENTTYPE_OFFSET))(posIndex);
		}

		static ::System::UInt32 GetRoleBuyPrice(::System::UInt32 id, ::System::UInt32 star, ::System::Nullable_1<::System::UInt32> seasonUID)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETROLEBUYPRICE_OFFSET))(id, star, seasonUID);
		}

		static ::System::UInt32 GetRoleSellPrice(::System::UInt32 id, ::System::UInt32 star)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETROLESELLPRICE_OFFSET))(id, star);
		}

		static ::RPG::Client::GridFightEquipItemConfig* SafeGetEquipItemConfig(::System::UInt32 itemID)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_SAFEGETEQUIPITEMCONFIG_OFFSET))(itemID);
		}

		static ::RPG::Client::GridFightConsumableItemConfig* SafeGetConsumableItemConfig(::System::UInt32 itemID)
		{
			return ((::RPG::Client::GridFightConsumableItemConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_SAFEGETCONSUMABLEITEMCONFIG_OFFSET))(itemID);
		}

		static ::System::String* GetGridFightCoinImgPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETGRIDFIGHTCOINIMGPATH_OFFSET))();
		}

		static ::System::Void GetPlayerLevelExpByAddExp(::System::UInt32 addExp, ::System::UInt32& level, ::System::UInt32& exp, ::System::UInt32& levelUpExp)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETPLAYERLEVELEXPBYADDEXP_OFFSET))(addExp, level, exp, levelUpExp);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* SortTraitIDsByTeam(::System::Collections::Generic::List_1<::System::UInt32>* traitIDs)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_SORTTRAITIDSBYTEAM_OFFSET))(traitIDs);
		}

		static ::System::UInt32 GetExpAmount(::System::UInt32 level, ::System::UInt32 exp)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETEXPAMOUNT_OFFSET))(level, exp);
		}

		static ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* ConvertPropertyToFixPoint(::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::UInt32>* properties)
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_CONVERTPROPERTYTOFIXPOINT_OFFSET))(properties);
		}

		static ::System::String* GetColorState(::RPG::GameCore::GridFightTrailLayerQuality quality)
		{
			return ((::System::String*(*)(::RPG::GameCore::GridFightTrailLayerQuality))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETCOLORSTATE_OFFSET))(quality);
		}

		static ::RPG::Client::GridFightPlacementType CovertPlacementTypeFromRegin(::RPG::GameCore::GridFightRegion region)
		{
			return ((::RPG::Client::GridFightPlacementType(*)(::RPG::GameCore::GridFightRegion))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_COVERTPLACEMENTTYPEFROMREGIN_OFFSET))(region);
		}

		static ::RPG::GameCore::GridFightRegion CovertReginFromPlacementType(::RPG::Client::GridFightPlacementType placementType)
		{
			return ((::RPG::GameCore::GridFightRegion(*)(::RPG::Client::GridFightPlacementType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_COVERTREGINFROMPLACEMENTTYPE_OFFSET))(placementType);
		}

		static ::System::Boolean TryTakeAllTutorialStageReward()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_TRYTAKEALLTUTORIALSTAGEREWARD_OFFSET))();
		}

		static ::System::UInt32 GetTheoreticalSeasonExp(::System::UInt32 divisionID, ::System::UInt32 chapterID, ::System::UInt32 sectionID, ::System::Boolean isOverCharge)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETTHEORETICALSEASONEXP_OFFSET))(divisionID, chapterID, sectionID, isOverCharge);
		}

		static ::System::UInt32 GetTheoreticalExtraSeasonExp(::System::UInt32 divisionID, ::System::UInt32 chapterID, ::System::UInt32 sectionID, ::System::Boolean isOverCharge)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETTHEORETICALEXTRASEASONEXP_OFFSET))(divisionID, chapterID, sectionID, isOverCharge);
		}

		static ::System::Boolean TryShowNewBieLoseDialog()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_TRYSHOWNEWBIELOSEDIALOG_OFFSET))();
		}

		static ::System::Void OverrideNextTransitionGridFight()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_OVERRIDENEXTTRANSITIONGRIDFIGHT_OFFSET))();
		}

		static ::System::UInt32 GetSeasonUID(::System::UInt32 seasonID, ::System::UInt32 subSeasonID)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETSEASONUID_OFFSET))(seasonID, subSeasonID);
		}

		static ::UnityEngine::Vector3 GetUIPosition(::UnityEngine::Vector3 screenPos, ::UnityEngine::Camera* camera, ::UnityEngine::Canvas* canvas)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Camera*, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETUIPOSITION_OFFSET))(screenPos, camera, canvas);
		}

		static ::System::Int32 GetHackEquipRank(::System::UInt32 hackEquipID)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETHACKEQUIPRANK_OFFSET))(hackEquipID);
		}

		static ::System::Boolean IsEquipCantUsedByElationEffect(::System::UInt32 equipID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_ISEQUIPCANTUSEDBYELATIONEFFECT_OFFSET))(equipID);
		}

		static ::System::UInt32 GetCurSessionUID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GETCURSESSIONUID_OFFSET))();
		}

		static ::System::Boolean get_IsInGame()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GET_ISINGAME_OFFSET))();
		}

		static ::System::Boolean get_IsInPreparation()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS_GET_ISINPREPARATION_OFFSET))();
		}
	};
}
