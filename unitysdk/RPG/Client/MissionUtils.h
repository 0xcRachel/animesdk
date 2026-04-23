#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/SubmissionLogicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class MissionUtils_MainMissionPerformanceInfo; }
namespace RPG::Client { class MissionUtils_SubMissionSortItem; }
namespace RPG::GameCore { class MainMissionInfoConfig; }
namespace RPG::GameCore { class MainMissionPerformanceConfig; }
namespace RPG::GameCore { class PerformanceSortedItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONUTILS_CHECKISCONTROLHINTBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x152888D0)
#define RPG_CLIENT_MISSIONUTILS_CHECKISWORLDMISSION_OFFSET UNITYSDK_OFFSET(0x152A0E90)
#define RPG_CLIENT_MISSIONUTILS_GETDISPLAYREWARDID_OFFSET UNITYSDK_OFFSET(0x152A0B20)
#define RPG_CLIENT_MISSIONUTILS_GETHINTMAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x15288930)
#define RPG_CLIENT_MISSIONUTILS_GETMAINMISSIONIDBYPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x152A3330)
#define RPG_CLIENT_MISSIONUTILS_GETMAINMISSIONSORTEDITEMS_OFFSET UNITYSDK_OFFSET(0x15295850)
#define RPG_CLIENT_MISSIONUTILS_GETPERFORMANCESORTEDITEM_OFFSET UNITYSDK_OFFSET(0x152974E0)
#define RPG_CLIENT_MISSIONUTILS_GETPREMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x152A0C50)
#define RPG_CLIENT_MISSIONUTILS_GETREALMAINMISSIONIDBYPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x152A39C0)
#define RPG_CLIENT_MISSIONUTILS_GETSUBMISSIONIDBYPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x152A3B70)
#define RPG_CLIENT_MISSIONUTILS_GETWAYPOINTTYPE_OFFSET UNITYSDK_OFFSET(0x15288190)
#define RPG_CLIENT_MISSIONUTILS_ISASSISTWAYPOINTACTIVEONECLICKCOMPLETE_OFFSET UNITYSDK_OFFSET(0x152A1A90)
#define RPG_CLIENT_MISSIONUTILS_ISASSISTWAYPOINTHASONECLICKCOMPLETECONFIG_OFFSET UNITYSDK_OFFSET(0x152A19B0)
#define RPG_CLIENT_MISSIONUTILS_ISPLAYERCLOSETOSUBMISSIONWAYPOINT_OFFSET UNITYSDK_OFFSET(0x152A1310)
#define RPG_CLIENT_MISSIONUTILS_PREPARESUBMISSIONMAPDATA_OFFSET UNITYSDK_OFFSET(0x152A0FC0)
#define RPG_CLIENT_MISSIONUTILS_TOPOLOGICALSEARCHALLSUBMISSION_OFFSET UNITYSDK_OFFSET(0x152A4D80)
#define RPG_CLIENT_MISSIONUTILS_TOPOLOGICALSORTALLMAINMISSION_OFFSET UNITYSDK_OFFSET(0x152A23B0)
#define RPG_CLIENT_MISSIONUTILS_TOPOLOGICALSORTALLSUBMISSION_OFFSET UNITYSDK_OFFSET(0x152A3CF0)
#define RPG_CLIENT_MISSIONUTILS_TRYASSISTWAYPOINTONECLICKCOMPLETETRANSFER_OFFSET UNITYSDK_OFFSET(0x152A1BA0)
#define RPG_CLIENT_MISSIONUTILS__ADDTOSUBMISSIONCONNECTGRAPH_OFFSET UNITYSDK_OFFSET(0x152A5FC0)
#define RPG_CLIENT_MISSIONUTILS__CALCULATESUBMISSIONINDENT_OFFSET UNITYSDK_OFFSET(0x152A5390)
#define RPG_CLIENT_MISSIONUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x152A6740)
#define RPG_CLIENT_MISSIONUTILS__CLEARMAINMISSIONSORTITEM_OFFSET UNITYSDK_OFFSET(0x152A2EA0)
#define RPG_CLIENT_MISSIONUTILS__CLEARSUBMISSIONSORTITEM_OFFSET UNITYSDK_OFFSET(0x152A4000)
#define RPG_CLIENT_MISSIONUTILS__INITSUBMISSIONCONNECTGRAPH_OFFSET UNITYSDK_OFFSET(0x152A4480)
#define RPG_CLIENT_MISSIONUTILS__INITSUBMISSIONMAP_OFFSET UNITYSDK_OFFSET(0x152A42B0)
#define RPG_CLIENT_MISSIONUTILS__ISPERFORMANCEINFOVALID_OFFSET UNITYSDK_OFFSET(0x152A2D40)
#define RPG_CLIENT_MISSIONUTILS__SAMEPARENTSUBMISSIONSORT_OFFSET UNITYSDK_OFFSET(0x152A6620)
#define RPG_CLIENT_MISSIONUTILS__SEARCHNEXTMAINMISSIONBYDFS_OFFSET UNITYSDK_OFFSET(0x152A3090)
#define RPG_CLIENT_MISSIONUTILS__SEARCHNEXTSUBMISSIONBYDFS_OFFSET UNITYSDK_OFFSET(0x152A5BA0)
#define RPG_CLIENT_MISSIONUTILS__SORTSUBMISSIONCONNECTGRAPH_OFFSET UNITYSDK_OFFSET(0x152A5170)
#define RPG_CLIENT_MISSIONUTILS__TRYLOADMISSIONTOPERFORMANCECONFIG_OFFSET UNITYSDK_OFFSET(0x152A1E90)
#define RPG_CLIENT_MISSIONUTILS__TRYLOADPERFORMANCEINFO_OFFSET UNITYSDK_OFFSET(0x152A34B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionUtils_TypeDefinitionIndex = 60946;

	class MissionUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::ELevelPerformanceType>, ::RPG::Client::MissionUtils_MainMissionPerformanceInfo*>** StaticGet__performanceInfoMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::ELevelPerformanceType>, ::RPG::Client::MissionUtils_MainMissionPerformanceInfo*>**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x5B890);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::MissionUtils_SubMissionSortItem*>*>** StaticGet__subMissionParentToChildGraph()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::MissionUtils_SubMissionSortItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x5B898);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::MissionUtils_SubMissionSortItem*>** StaticGet__subMissionTopologicalSortResult()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::MissionUtils_SubMissionSortItem*>**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x5B8A0);
		}
		static ::System::String** StaticGet__mainMissionPerformanceConfigRootPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x5B8A8);
		}
		static ::RPG::GameCore::MainMissionPerformanceConfig** StaticGet__mainMissionPerformanceConfig()
		{
			return (::RPG::GameCore::MainMissionPerformanceConfig**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x5B8B0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__topoMainMissionParentToChildMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x5B8B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__topoMainMissionChildToParentMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x5B8C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionUtils_SubMissionSortItem*>** StaticGet__subMissionMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionUtils_SubMissionSortItem*>**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x5B8C8);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__topoStartMainMissionResult()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x5B8D0);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::MissionUtils_SubMissionSortItem*>** StaticGet__startSubMissionList()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::MissionUtils_SubMissionSortItem*>**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x5B8D8);
		}
		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet__mainMissionVisited()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x5B8E0);
		}
		static ::System::String** StaticGet__mainMissionPerformanceIndexConfigPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x5B8E8);
		}
		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet__subMissionVisited()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x5B8F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::MissionUtils_SubMissionSortItem*>*>** StaticGet__subMissionChildToParentGraph()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::MissionUtils_SubMissionSortItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils_TypeDefinitionIndex)->GetStaticField(0x5B8F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__CCTOR_OFFSET))();
		}

		static ::System::UInt32 GetDisplayRewardID(::System::UInt32 mainMissionID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETDISPLAYREWARDID_OFFSET))(mainMissionID);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetPreMissionIDList(::System::UInt32 mainMissionID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETPREMISSIONIDLIST_OFFSET))(mainMissionID);
		}

		static ::System::Boolean CheckIsControlHintByDistance(::System::UInt32 submissionID, ::System::UInt32 mainMissionID)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_CHECKISCONTROLHINTBYDISTANCE_OFFSET))(submissionID, mainMissionID);
		}

		static ::System::Boolean CheckIsWorldMission(::System::UInt32 mainMissionID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_CHECKISWORLDMISSION_OFFSET))(mainMissionID);
		}

		static ::System::Single GetHintMaxDistance(::System::Single overrideMaxDistance)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETHINTMAXDISTANCE_OFFSET))(overrideMaxDistance);
		}

		static ::System::UInt32 GetWayPointType(::System::UInt32 mainMissionID, ::System::Boolean isForceMapHint, ::RPG::GameCore::SubmissionLogicType logicType)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::Boolean, ::RPG::GameCore::SubmissionLogicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETWAYPOINTTYPE_OFFSET))(mainMissionID, isForceMapHint, logicType);
		}

		static ::System::Void PrepareSubmissionMapData(::System::UInt32 submissionID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_PREPARESUBMISSIONMAPDATA_OFFSET))(submissionID);
		}

		static ::System::Boolean IsPlayerCloseToSubMissionWaypoint(::System::UInt32 submissionID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_ISPLAYERCLOSETOSUBMISSIONWAYPOINT_OFFSET))(submissionID);
		}

		static ::System::Boolean IsAssistWayPointHasOneClickCompleteConfig()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_ISASSISTWAYPOINTHASONECLICKCOMPLETECONFIG_OFFSET))();
		}

		static ::System::Boolean IsAssistWayPointActiveOneClickComplete()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_ISASSISTWAYPOINTACTIVEONECLICKCOMPLETE_OFFSET))();
		}

		static ::System::Boolean TryAssistWayPointOneClickCompleteTransfer()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_TRYASSISTWAYPOINTONECLICKCOMPLETETRANSFER_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MissionUtils_MainMissionPerformanceInfo*>* GetMainMissionSortedItems(::System::UInt32 startMainMissionID, ::System::Collections::Generic::List_1<::System::UInt32>* mainMissionList)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MissionUtils_MainMissionPerformanceInfo*>*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETMAINMISSIONSORTEDITEMS_OFFSET))(startMainMissionID, mainMissionList);
		}

		static ::System::Void TopologicalSortAllMainMission(::System::Collections::Generic::List_1<::System::UInt32>* mainMissionList, ::System::Collections::Generic::List_1<::System::UInt32>* resultList)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_TOPOLOGICALSORTALLMAINMISSION_OFFSET))(mainMissionList, resultList);
		}

		static ::System::UInt32 GetMainMissionIDByPerformance(::System::UInt32 performanceID, ::RPG::GameCore::ELevelPerformanceType performanceType)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETMAINMISSIONIDBYPERFORMANCE_OFFSET))(performanceID, performanceType);
		}

		static ::System::UInt32 GetRealMainMissionIDByPerformance(::System::UInt32 performanceID, ::RPG::GameCore::ELevelPerformanceType performanceType)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETREALMAINMISSIONIDBYPERFORMANCE_OFFSET))(performanceID, performanceType);
		}

		static ::System::UInt32 GetSubMissionIDByPerformance(::System::UInt32 performanceID, ::RPG::GameCore::ELevelPerformanceType performanceType)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETSUBMISSIONIDBYPERFORMANCE_OFFSET))(performanceID, performanceType);
		}

		static ::RPG::GameCore::PerformanceSortedItem* GetPerformanceSortedItem(::System::UInt32 performanceID, ::RPG::GameCore::ELevelPerformanceType performanceType)
		{
			return ((::RPG::GameCore::PerformanceSortedItem*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETPERFORMANCESORTEDITEM_OFFSET))(performanceID, performanceType);
		}

		static ::System::Void _ClearMainMissionSortItem()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__CLEARMAINMISSIONSORTITEM_OFFSET))();
		}

		static ::System::Void _TryLoadPerformanceInfo()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__TRYLOADPERFORMANCEINFO_OFFSET))();
		}

		static ::RPG::GameCore::MainMissionPerformanceConfig* _TryLoadMissionToPerformanceConfig()
		{
			return ((::RPG::GameCore::MainMissionPerformanceConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__TRYLOADMISSIONTOPERFORMANCECONFIG_OFFSET))();
		}

		static ::System::Boolean _IsPerformanceInfoValid(::System::UInt32 mainMissionID, ::System::UInt32 subMissionID, ::RPG::GameCore::PerformanceSortedItem* performanceSortedItem)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::PerformanceSortedItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__ISPERFORMANCEINFOVALID_OFFSET))(mainMissionID, subMissionID, performanceSortedItem);
		}

		static ::System::Void _SearchNextMainMissionByDfs(::System::UInt32 mainMissionID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__SEARCHNEXTMAINMISSIONBYDFS_OFFSET))(mainMissionID);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MissionUtils_SubMissionSortItem*>* TopologicalSortAllSubMission(::System::UInt32 mainMissionID, ::System::Int32 indent)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MissionUtils_SubMissionSortItem*>*(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_TOPOLOGICALSORTALLSUBMISSION_OFFSET))(mainMissionID, indent);
		}

		static ::System::Void TopologicalSearchAllSubMission(::RPG::GameCore::MainMissionInfoConfig* mainMissionInfo)
		{
			return ((::System::Void(*)(::RPG::GameCore::MainMissionInfoConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_TOPOLOGICALSEARCHALLSUBMISSION_OFFSET))(mainMissionInfo);
		}

		static ::System::Void _CalculateSubMissionIndent(::System::Int32 indent)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__CALCULATESUBMISSIONINDENT_OFFSET))(indent);
		}

		static ::System::Boolean _SearchNextSubMissionByDfs(::RPG::Client::MissionUtils_SubMissionSortItem* sortItem)
		{
			return ((::System::Boolean(*)(::RPG::Client::MissionUtils_SubMissionSortItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__SEARCHNEXTSUBMISSIONBYDFS_OFFSET))(sortItem);
		}

		static ::System::Void _ClearSubMissionSortItem()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__CLEARSUBMISSIONSORTITEM_OFFSET))();
		}

		static ::System::Void _InitSubMissionMap(::RPG::GameCore::MainMissionInfoConfig* mainMissionInfo)
		{
			return ((::System::Void(*)(::RPG::GameCore::MainMissionInfoConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__INITSUBMISSIONMAP_OFFSET))(mainMissionInfo);
		}

		static ::System::Void _InitSubMissionConnectGraph(::RPG::GameCore::MainMissionInfoConfig* mainMissionInfo)
		{
			return ((::System::Void(*)(::RPG::GameCore::MainMissionInfoConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__INITSUBMISSIONCONNECTGRAPH_OFFSET))(mainMissionInfo);
		}

		static ::System::Void _SortSubMissionConnectGraph()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__SORTSUBMISSIONCONNECTGRAPH_OFFSET))();
		}

		static ::System::Int32 _SameParentSubMissionSort(::RPG::Client::MissionUtils_SubMissionSortItem* first, ::RPG::Client::MissionUtils_SubMissionSortItem* second)
		{
			return ((::System::Int32(*)(::RPG::Client::MissionUtils_SubMissionSortItem*, ::RPG::Client::MissionUtils_SubMissionSortItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__SAMEPARENTSUBMISSIONSORT_OFFSET))(first, second);
		}

		static ::System::Void _AddToSubMissionConnectGraph(::System::UInt32 parentSubMissionID, ::System::UInt32 childSubMissionID)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__ADDTOSUBMISSIONCONNECTGRAPH_OFFSET))(parentSubMissionID, childSubMissionID);
		}
	};
}
