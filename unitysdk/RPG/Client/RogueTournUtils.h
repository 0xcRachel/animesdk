#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7039134DC553D20_RogueTournSelectType.h"
#include "unitysdk/RPG/GameCore/RogueTitanCategory.h"
#include "unitysdk/RPG/GameCore/RogueTournTitanFloorType.h"
#include "unitysdk/System/Object.h"

class Class_1_3A7B270FE0BE90AE_4;
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueFormulaInfo; }
namespace RPG::Client { class RogueMiracleData; }
namespace RPG::Client { class RogueMiracleInfo; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace RPG::Client { class RogueTournDivisionData; }
namespace RPG::Client { class RogueTournSettleData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class RogueTournBuildRefMatchConfig; }
namespace RPG::GameCore { class RogueTournBuildRefSortConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNUTILS_BACKTOMODESELECTPAGE_OFFSET UNITYSDK_OFFSET(0x9F26150)
#define RPG_CLIENT_ROGUETOURNUTILS_CALCBUILDREFMATCHRATE_OFFSET UNITYSDK_OFFSET(0x9F20820)
#define RPG_CLIENT_ROGUETOURNUTILS_CALCBUILDREFSORTRATE_OFFSET UNITYSDK_OFFSET(0x9F233B0)
#define RPG_CLIENT_ROGUETOURNUTILS_CALCCURGAMEBUILDREFMATCHRATE_OFFSET UNITYSDK_OFFSET(0x9F20720)
#define RPG_CLIENT_ROGUETOURNUTILS_CANTRANSFERTOLAUNCHER_OFFSET UNITYSDK_OFFSET(0x9F25760)
#define RPG_CLIENT_ROGUETOURNUTILS_CHECKGAMEISCHALLENGEDIVISION_OFFSET UNITYSDK_OFFSET(0x9F284E0)
#define RPG_CLIENT_ROGUETOURNUTILS_CHECKISCHALLENGEDIVISIONPROGRESSDOWN_OFFSET UNITYSDK_OFFSET(0x9F28640)
#define RPG_CLIENT_ROGUETOURNUTILS_CHECKLEVELISCHALLENGEDIVISION_OFFSET UNITYSDK_OFFSET(0x9F28430)
#define RPG_CLIENT_ROGUETOURNUTILS_CHECKSETTLEISCHALLENGEDIVISION_OFFSET UNITYSDK_OFFSET(0x9F1A5F0)
#define RPG_CLIENT_ROGUETOURNUTILS_CLEAROUTDATEDQUESTREWARDREDDOTDATA_OFFSET UNITYSDK_OFFSET(0x9F274B0)
#define RPG_CLIENT_ROGUETOURNUTILS_CONVERTFLOORTYPETOTITANCATEGORY_OFFSET UNITYSDK_OFFSET(0x9F25150)
#define RPG_CLIENT_ROGUETOURNUTILS_CONVERTGAMELANGCODE2API_OFFSET UNITYSDK_OFFSET(0x9F24DF0)
#define RPG_CLIENT_ROGUETOURNUTILS_GETCACHEDAVATARDATA_OFFSET UNITYSDK_OFFSET(0x9F250B0)
#define RPG_CLIENT_ROGUETOURNUTILS_GETCACHEDFORMULADATA_OFFSET UNITYSDK_OFFSET(0x9F24F70)
#define RPG_CLIENT_ROGUETOURNUTILS_GETCACHEDMIRACLEDATA_OFFSET UNITYSDK_OFFSET(0x9F25010)
#define RPG_CLIENT_ROGUETOURNUTILS_GETCONTENTID_OFFSET UNITYSDK_OFFSET(0x9F256B0)
#define RPG_CLIENT_ROGUETOURNUTILS_GETCURDIVISIONDATA_OFFSET UNITYSDK_OFFSET(0x9F281B0)
#define RPG_CLIENT_ROGUETOURNUTILS_GETDIVISIONDATABYLEVEL_OFFSET UNITYSDK_OFFSET(0x9F28280)
#define RPG_CLIENT_ROGUETOURNUTILS_GETGAMELANGCODEBYCDNLANGCODE_OFFSET UNITYSDK_OFFSET(0x9F24C80)
#define RPG_CLIENT_ROGUETOURNUTILS_GETQUESTREWARDACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0x9F26C70)
#define RPG_CLIENT_ROGUETOURNUTILS_GETTOURNEXPLEVELBYEXP_OFFSET UNITYSDK_OFFSET(0x9F251A0)
#define RPG_CLIENT_ROGUETOURNUTILS_ISANYFORMALAREAPASSED_OFFSET UNITYSDK_OFFSET(0x9F26AB0)
#define RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFESSENTIALFORMULAMISSING_OFFSET UNITYSDK_OFFSET(0x9F23BE0)
#define RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFHEXMIRACLEMISSING_OFFSET UNITYSDK_OFFSET(0x9F24240)
#define RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFOPTIONALFORMULAMISSING_OFFSET UNITYSDK_OFFSET(0x9F24160)
#define RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFSORTTOFIRST_OFFSET UNITYSDK_OFFSET(0x9F232F0)
#define RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFSORTTOLAST_OFFSET UNITYSDK_OFFSET(0x9F23240)
#define RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFTEAMMEMBERMISSINGINTEAM_OFFSET UNITYSDK_OFFSET(0x9F23B60)
#define RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFTEAMMEMBERMISSING_OFFSET UNITYSDK_OFFSET(0x9F236F0)
#define RPG_CLIENT_ROGUETOURNUTILS_ISCURWEEKCHALLENGEEXPIRED_OFFSET UNITYSDK_OFFSET(0x9F26B50)
#define RPG_CLIENT_ROGUETOURNUTILS_ISEXPDOUBLE_OFFSET UNITYSDK_OFFSET(0x9F25490)
#define RPG_CLIENT_ROGUETOURNUTILS_ISGUIDEAREASPASSED_OFFSET UNITYSDK_OFFSET(0x9F26910)
#define RPG_CLIENT_ROGUETOURNUTILS_ISINEVOLVERELICCOCOONBATTLE_OFFSET UNITYSDK_OFFSET(0x9F25FB0)
#define RPG_CLIENT_ROGUETOURNUTILS_ISINLAUNCHERFLOOR_OFFSET UNITYSDK_OFFSET(0x9F258E0)
#define RPG_CLIENT_ROGUETOURNUTILS_ISPERMANENTGUIDEAREASPASSED_OFFSET UNITYSDK_OFFSET(0x9F26960)
#define RPG_CLIENT_ROGUETOURNUTILS_ISSEASONGUIDEAREASPASSED_OFFSET UNITYSDK_OFFSET(0x9F26A00)
#define RPG_CLIENT_ROGUETOURNUTILS_ISSHOWSETTLEDIVSIONUI_OFFSET UNITYSDK_OFFSET(0x9F28330)
#define RPG_CLIENT_ROGUETOURNUTILS_LOGERROR_OFFSET UNITYSDK_OFFSET(0x9F1FAF0)
#define RPG_CLIENT_ROGUETOURNUTILS_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x9F27D00)
#define RPG_CLIENT_ROGUETOURNUTILS_LOG_OFFSET UNITYSDK_OFFSET(0x9F27CB0)
#define RPG_CLIENT_ROGUETOURNUTILS_REPORTBUFFSELECTION_OFFSET UNITYSDK_OFFSET(0x9F27D50)
#define RPG_CLIENT_ROGUETOURNUTILS_SETACTIVITYWEEKCHALLENGESEEN_OFFSET UNITYSDK_OFFSET(0x9F27AE0)
#define RPG_CLIENT_ROGUETOURNUTILS_SETALLQUESTREWARDQUESTSSEEN_OFFSET UNITYSDK_OFFSET(0x9F26D20)
#define RPG_CLIENT_ROGUETOURNUTILS_SETQUESTREWARDTABGROUPQUESTSSEEN_OFFSET UNITYSDK_OFFSET(0x9F26FB0)
#define RPG_CLIENT_ROGUETOURNUTILS_SETQUESTREWARDTABQUESTSSEEN_OFFSET UNITYSDK_OFFSET(0x9F27230)
#define RPG_CLIENT_ROGUETOURNUTILS_SHOWTOURNEXPREWARDPAGEFROMACTIVITYPANEL_OFFSET UNITYSDK_OFFSET(0x9F25360)
#define RPG_CLIENT_ROGUETOURNUTILS_TELEPORTINSIDEROGUESCENE_OFFSET UNITYSDK_OFFSET(0x9F25DE0)
#define RPG_CLIENT_ROGUETOURNUTILS_TELEPORTINTOROGUESCENE_OFFSET UNITYSDK_OFFSET(0x9F25B90)
#define RPG_CLIENT_ROGUETOURNUTILS_TELEPORTOUTOFROGUESCENE_OFFSET UNITYSDK_OFFSET(0x9F25D00)
#define RPG_CLIENT_ROGUETOURNUTILS_TRANSFERTOLAUNCHER_OFFSET UNITYSDK_OFFSET(0x9F25810)
#define RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHFORMULARATE_OFFSET UNITYSDK_OFFSET(0x9F20900)
#define RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHMIRACLERATE_OFFSET UNITYSDK_OFFSET(0x9F21370)
#define RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHSELECTINGFORMULARATE_OFFSET UNITYSDK_OFFSET(0x9F21CF0)
#define RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHSELECTINGMIRACLERATE_OFFSET UNITYSDK_OFFSET(0x9F22630)
#define RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHTEAMRATE_OFFSET UNITYSDK_OFFSET(0x9F22E40)
#define RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFSORTRATE_OFFSET UNITYSDK_OFFSET(0x9F23460)
#define RPG_CLIENT_ROGUETOURNUTILS__DELAYEDPROMISE_OFFSET UNITYSDK_OFFSET(0x9F26860)
#define RPG_CLIENT_ROGUETOURNUTILS__GETLAUNCHERTRANSFERPARAM_OFFSET UNITYSDK_OFFSET(0x9F25570)
#define RPG_CLIENT_ROGUETOURNUTILS__ISBUILDREFFORMULAMISSING_OFFSET UNITYSDK_OFFSET(0x9F23CC0)
#define RPG_CLIENT_ROGUETOURNUTILS__ISCURVERSIONBUILDREFFORSORT_OFFSET UNITYSDK_OFFSET(0x9F235D0)
#define RPG_CLIENT_ROGUETOURNUTILS__SETTRANSITIONPERFORMANCETYPEINROGUE_OFFSET UNITYSDK_OFFSET(0x9F25ED0)
#define RPG_CLIENT_ROGUETOURNUTILS__SETTRANSITIONPERFORMANCETYPEOUTOFROGUE_OFFSET UNITYSDK_OFFSET(0x9F25C70)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournUtils_TypeDefinitionIndex = 53800;

	class RogueTournUtils : public ::System::Object
	{
	public:
		// static const ::System::Double _SortToLastOpWeight; // 0x0
		// static const ::System::Double _SortToFirstOpWeight; // 0x0
		// static const ::System::Double _SortOpWeightCheckEpsilon; // 0x0
		// static const ::System::Single _BackScreenTransferFadeInTime; // 0x0
		// static const ::System::Single _BackScreenTransferFadeOutTime; // 0x0
		// static const ::System::Single _BackScreenTransferKeepTime; // 0x0

		static ::System::UInt32 CalcCurGameBuildRefMatchRate(::RPG::Client::IRogueTournBuildRefDataItem* data, ::System::Collections::Generic::List_1<::System::UInt32>* selectingFormulaIDs, ::System::Collections::Generic::List_1<::System::UInt32>* selectingHexMiracleIDs)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CALCCURGAMEBUILDREFMATCHRATE_OFFSET))(data, selectingFormulaIDs, selectingHexMiracleIDs);
		}

		static ::System::UInt32 CalcBuildRefMatchRate(::RPG::Client::IRogueTournBuildRefDataItem* data, ::RPG::Client::RogueFormulaInfo* formulaInfo, ::RPG::Client::RogueMiracleInfo* miracleInfo, ::System::Collections::Generic::List_1<::System::UInt32>* selectingFormulaIDs, ::System::Collections::Generic::List_1<::System::UInt32>* selectingHexMiracleIDs, ::RPG::GameCore::RogueTournBuildRefMatchConfig* config)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::Client::RogueFormulaInfo*, ::RPG::Client::RogueMiracleInfo*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::GameCore::RogueTournBuildRefMatchConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CALCBUILDREFMATCHRATE_OFFSET))(data, formulaInfo, miracleInfo, selectingFormulaIDs, selectingHexMiracleIDs, config);
		}

		static ::System::UInt32 _CalcBuildRefMatchFormulaRate(::RPG::Client::IRogueTournBuildRefDataItem* data, ::RPG::Client::RogueFormulaInfo* formulaInfo, ::RPG::GameCore::RogueTournBuildRefMatchConfig* config)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::Client::RogueFormulaInfo*, ::RPG::GameCore::RogueTournBuildRefMatchConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHFORMULARATE_OFFSET))(data, formulaInfo, config);
		}

		static ::System::UInt32 _CalcBuildRefMatchMiracleRate(::RPG::Client::IRogueTournBuildRefDataItem* data, ::RPG::Client::RogueMiracleInfo* miracleInfo, ::RPG::GameCore::RogueTournBuildRefMatchConfig* config)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::Client::RogueMiracleInfo*, ::RPG::GameCore::RogueTournBuildRefMatchConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHMIRACLERATE_OFFSET))(data, miracleInfo, config);
		}

		static ::System::UInt32 _CalcBuildRefMatchSelectingFormulaRate(::RPG::Client::IRogueTournBuildRefDataItem* data, ::System::Collections::Generic::List_1<::System::UInt32>* selectingFormulaIDs, ::RPG::GameCore::RogueTournBuildRefMatchConfig* config)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::GameCore::RogueTournBuildRefMatchConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHSELECTINGFORMULARATE_OFFSET))(data, selectingFormulaIDs, config);
		}

		static ::System::UInt32 _CalcBuildRefMatchSelectingMiracleRate(::RPG::Client::IRogueTournBuildRefDataItem* data, ::System::Collections::Generic::List_1<::System::UInt32>* selectingHexMiracleIDs, ::RPG::GameCore::RogueTournBuildRefMatchConfig* config)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::GameCore::RogueTournBuildRefMatchConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHSELECTINGMIRACLERATE_OFFSET))(data, selectingHexMiracleIDs, config);
		}

		static ::System::UInt32 _CalcBuildRefMatchTeamRate(::RPG::Client::IRogueTournBuildRefDataItem* data, ::RPG::GameCore::RogueTournBuildRefMatchConfig* config)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::GameCore::RogueTournBuildRefMatchConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHTEAMRATE_OFFSET))(data, config);
		}

		static ::System::Boolean IsBuildRefSortToLast(::RPG::Client::IRogueTournBuildRefDataItem* data)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFSORTTOLAST_OFFSET))(data);
		}

		static ::System::Boolean IsBuildRefSortToFirst(::RPG::Client::IRogueTournBuildRefDataItem* data)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFSORTTOFIRST_OFFSET))(data);
		}

		static ::System::Double CalcBuildRefSortRate(::RPG::Client::IRogueTournBuildRefDataItem* data)
		{
			return ((::System::Double(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CALCBUILDREFSORTRATE_OFFSET))(data);
		}

		static ::System::Double _CalcBuildRefSortRate(::RPG::Client::IRogueTournBuildRefDataItem* data, ::RPG::GameCore::RogueTournBuildRefSortConfig* config)
		{
			return ((::System::Double(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::GameCore::RogueTournBuildRefSortConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFSORTRATE_OFFSET))(data, config);
		}

		static ::System::Boolean _IsCurVersionBuildRefForSort(::RPG::Client::IRogueTournBuildRefDataItem* data)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__ISCURVERSIONBUILDREFFORSORT_OFFSET))(data);
		}

		static ::System::Boolean IsBuildRefTeamMemberMissing(::RPG::Client::IRogueTournBuildRefDataItem* data)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFTEAMMEMBERMISSING_OFFSET))(data);
		}

		static ::System::Boolean IsBuildRefTeamMemberMissingInTeam(::RPG::Client::RogueTournBuildRefTeamData* team)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournBuildRefTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFTEAMMEMBERMISSINGINTEAM_OFFSET))(team);
		}

		static ::System::Boolean IsBuildRefEssentialFormulaMissing(::RPG::Client::IRogueTournBuildRefDataItem* data)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFESSENTIALFORMULAMISSING_OFFSET))(data);
		}

		static ::System::Boolean IsBuildRefOptionalFormulaMissing(::RPG::Client::IRogueTournBuildRefDataItem* data)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFOPTIONALFORMULAMISSING_OFFSET))(data);
		}

		static ::System::Boolean _IsBuildRefFormulaMissing(::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* formulaDataList)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__ISBUILDREFFORMULAMISSING_OFFSET))(formulaDataList);
		}

		static ::System::Boolean IsBuildRefHexMiracleMissing(::RPG::Client::IRogueTournBuildRefDataItem* data)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFHEXMIRACLEMISSING_OFFSET))(data);
		}

		static ::System::String* GetGameLangCodeByCDNLangCode(::System::String* cdnLangCode)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETGAMELANGCODEBYCDNLANGCODE_OFFSET))(cdnLangCode);
		}

		static ::System::String* ConvertGameLangCode2API(::System::String* gameLangCode)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CONVERTGAMELANGCODE2API_OFFSET))(gameLangCode);
		}

		static ::RPG::Client::RogueFormulaData* GetCachedFormulaData(::System::UInt32 formulaID)
		{
			return ((::RPG::Client::RogueFormulaData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETCACHEDFORMULADATA_OFFSET))(formulaID);
		}

		static ::RPG::Client::RogueMiracleData* GetCachedMiracleData(::System::UInt32 miracleID)
		{
			return ((::RPG::Client::RogueMiracleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETCACHEDMIRACLEDATA_OFFSET))(miracleID);
		}

		static ::RPG::Client::AvatarData* GetCachedAvatarData(::System::UInt32 avatarRealID)
		{
			return ((::RPG::Client::AvatarData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETCACHEDAVATARDATA_OFFSET))(avatarRealID);
		}

		static ::RPG::GameCore::RogueTitanCategory ConvertFloorTypeToTitanCategory(::RPG::GameCore::RogueTournTitanFloorType floorType)
		{
			return ((::RPG::GameCore::RogueTitanCategory(*)(::RPG::GameCore::RogueTournTitanFloorType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CONVERTFLOORTYPETOTITANCATEGORY_OFFSET))(floorType);
		}

		static ::System::UInt32 GetTournExpLevelByExp(::System::UInt32 tournExp)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETTOURNEXPLEVELBYEXP_OFFSET))(tournExp);
		}

		static ::System::Void ShowTournExpRewardPageFromActivityPanel()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_SHOWTOURNEXPREWARDPAGEFROMACTIVITYPANEL_OFFSET))();
		}

		static ::System::Boolean IsExpDouble()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISEXPDOUBLE_OFFSET))();
		}

		static ::System::Void _GetLauncherTransferParam(::System::UInt32& entranceID, ::System::UInt32& mappingInfoID)
		{
			return ((::System::Void(*)(::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__GETLAUNCHERTRANSFERPARAM_OFFSET))(entranceID, mappingInfoID);
		}

		static ::System::UInt32 GetContentID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETCONTENTID_OFFSET))();
		}

		static ::System::Boolean CanTransferToLauncher()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CANTRANSFERTOLAUNCHER_OFFSET))();
		}

		static ::System::Void TransferToLauncher(::System::Action* preTeleportCallback)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_TRANSFERTOLAUNCHER_OFFSET))(preTeleportCallback);
		}

		static ::System::Boolean IsInLauncherFloor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISINLAUNCHERFLOOR_OFFSET))();
		}

		static ::System::Void TeleportIntoRogueScene(::Class_1_3A7B270FE0BE90AE_4* sceneExtInfo)
		{
			return ((::System::Void(*)(::Class_1_3A7B270FE0BE90AE_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_TELEPORTINTOROGUESCENE_OFFSET))(sceneExtInfo);
		}

		static ::System::Void TeleportOutOfRogueScene(::Class_1_3A7B270FE0BE90AE_4* sceneExtInfo)
		{
			return ((::System::Void(*)(::Class_1_3A7B270FE0BE90AE_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_TELEPORTOUTOFROGUESCENE_OFFSET))(sceneExtInfo);
		}

		static ::System::Void TeleportInsideRogueScene(::Class_1_3A7B270FE0BE90AE_4* sceneExtInfo)
		{
			return ((::System::Void(*)(::Class_1_3A7B270FE0BE90AE_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_TELEPORTINSIDEROGUESCENE_OFFSET))(sceneExtInfo);
		}

		static ::System::Void _SetTransitionPerformanceTypeInRogue(::System::Boolean crossMap)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__SETTRANSITIONPERFORMANCETYPEINROGUE_OFFSET))(crossMap);
		}

		static ::System::Void _SetTransitionPerformanceTypeOutOfRogue(::System::Boolean isEnter)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__SETTRANSITIONPERFORMANCETYPEOUTOFROGUE_OFFSET))(isEnter);
		}

		static ::System::Boolean IsInEvolveRelicCocoonBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISINEVOLVERELICCOCOONBATTLE_OFFSET))();
		}

		static ::RPG::Client::Promises::IPromise* BackToModeSelectPage()
		{
			return ((::RPG::Client::Promises::IPromise*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_BACKTOMODESELECTPAGE_OFFSET))();
		}

		static ::System::Boolean IsGuideAreasPassed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISGUIDEAREASPASSED_OFFSET))();
		}

		static ::System::Boolean IsPermanentGuideAreasPassed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISPERMANENTGUIDEAREASPASSED_OFFSET))();
		}

		static ::System::Boolean IsSeasonGuideAreasPassed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISSEASONGUIDEAREASPASSED_OFFSET))();
		}

		static ::System::Boolean IsAnyFormalAreaPassed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISANYFORMALAREAPASSED_OFFSET))();
		}

		static ::System::Boolean IsCurWeekChallengeExpired()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISCURWEEKCHALLENGEEXPIRED_OFFSET))();
		}

		static ::System::UInt32 GetQuestRewardActivityRewardID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETQUESTREWARDACTIVITYREWARDID_OFFSET))();
		}

		static ::System::Void SetAllQuestRewardQuestsSeen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_SETALLQUESTREWARDQUESTSSEEN_OFFSET))();
		}

		static ::System::Void SetQuestRewardTabGroupQuestsSeen(::System::UInt32 tabGroupID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_SETQUESTREWARDTABGROUPQUESTSSEEN_OFFSET))(tabGroupID);
		}

		static ::System::Void SetQuestRewardTabQuestsSeen(::System::UInt32 tabID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_SETQUESTREWARDTABQUESTSSEEN_OFFSET))(tabID);
		}

		static ::System::Void ClearOutdatedQuestRewardRedDotData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CLEAROUTDATEDQUESTREWARDREDDOTDATA_OFFSET))();
		}

		static ::System::Void SetActivityWeekChallengeSeen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_SETACTIVITYWEEKCHALLENGESEEN_OFFSET))();
		}

		static ::System::Void Log(::System::String* pattern, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_LOG_OFFSET))(pattern, args);
		}

		static ::System::Void LogWarning(::System::String* pattern, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_LOGWARNING_OFFSET))(pattern, args);
		}

		static ::System::Void LogError(::System::String* pattern, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_LOGERROR_OFFSET))(pattern, args);
		}

		static ::System::Void ReportBuffSelection(::Class_1_B7039134DC553D20_RogueTournSelectType selectType, ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* selectedBuffs, ::System::Collections::Generic::List_1<::System::UInt32>* availableBuffIDs)
		{
			return ((::System::Void(*)(::Class_1_B7039134DC553D20_RogueTournSelectType, ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_REPORTBUFFSELECTION_OFFSET))(selectType, selectedBuffs, availableBuffIDs);
		}

		static ::RPG::Client::RogueTournDivisionData* GetCurDivisionData()
		{
			return ((::RPG::Client::RogueTournDivisionData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETCURDIVISIONDATA_OFFSET))();
		}

		static ::RPG::Client::RogueTournDivisionData* GetDivisionDataByLevel(::System::UInt32 divisionLevel)
		{
			return ((::RPG::Client::RogueTournDivisionData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETDIVISIONDATABYLEVEL_OFFSET))(divisionLevel);
		}

		static ::System::Boolean IsShowSettleDivsionUI(::RPG::Client::RogueTournSettleData* settleData)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournSettleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISSHOWSETTLEDIVSIONUI_OFFSET))(settleData);
		}

		static ::System::Boolean CheckSettleIsChallengeDivision(::RPG::Client::RogueTournSettleData* settleData)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournSettleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CHECKSETTLEISCHALLENGEDIVISION_OFFSET))(settleData);
		}

		static ::System::Boolean CheckLevelIsChallengeDivision(::System::UInt32 targetDivisionLevel)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CHECKLEVELISCHALLENGEDIVISION_OFFSET))(targetDivisionLevel);
		}

		static ::System::Boolean CheckGameIsChallengeDivision()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CHECKGAMEISCHALLENGEDIVISION_OFFSET))();
		}

		static ::System::Boolean CheckIsChallengeDivisionProgressDown()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CHECKISCHALLENGEDIVISIONPROGRESSDOWN_OFFSET))();
		}

		static ::System::Func_1<::RPG::Client::Promises::IPromise*>* _DelayedPromise(::System::Single delayedTime)
		{
			return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__DELAYEDPROMISE_OFFSET))(delayedTime);
		}
	};
}
