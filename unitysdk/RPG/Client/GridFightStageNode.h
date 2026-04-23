#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
#include "unitysdk/System/Object.h"

class Class_1_28D410CCE235575F_2;
class Class_1_31B87651CEDF5B41;
class Class_1_A5ECC5BBA0109924;
namespace RPG::Client { class GridFightRoleConfig; }
namespace RPG::Client { class GridFightStage; }
namespace RPG::GameCore { class GridFightNodeTemplateConfigRow; }
namespace RPG::GameCore { class GridFightPenaltyRuleConfigRow; }
namespace RPG::GameCore { class GridFightStageNodeDisplayConfigRow; }
namespace RPG::GameCore { class GridFightStageRouteConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_BASICREWARD_OFFSET UNITYSDK_OFFSET(0x17B93450)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_CANSKIP_OFFSET UNITYSDK_OFFSET(0x17B92E00)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x17B92000)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_DEADLINEPENALTY_OFFSET UNITYSDK_OFFSET(0x17B93D50)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_DEADLINERATIO_OFFSET UNITYSDK_OFFSET(0x17B93CD0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_EXPERTCONFIG_OFFSET UNITYSDK_OFFSET(0x17B94160)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASDEADLINE_OFFSET UNITYSDK_OFFSET(0x17B93AB0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASEXPERT_OFFSET UNITYSDK_OFFSET(0x17B94000)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASHPDETAILRULE_OFFSET UNITYSDK_OFFSET(0x17B93B80)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASNOTFINISHRULE_OFFSET UNITYSDK_OFFSET(0x17B93B20)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASPERFECTRULE_OFFSET UNITYSDK_OFFSET(0x17B93A90)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HPCOSTMAX_OFFSET UNITYSDK_OFFSET(0x17B93BE0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HPCOSTMIN_OFFSET UNITYSDK_OFFSET(0x17B93C60)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x17B93470)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISAUGMENTNODE_OFFSET UNITYSDK_OFFSET(0x17B93360)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISBATTLENODE_OFFSET UNITYSDK_OFFSET(0x17B92730)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISCURRENT_OFFSET UNITYSDK_OFFSET(0x17B932C0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISEASY_OFFSET UNITYSDK_OFFSET(0x17B93DC0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISELITENODE_OFFSET UNITYSDK_OFFSET(0x17B92DA0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISFRENZY_OFFSET UNITYSDK_OFFSET(0x17B92DC0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISPASSED_OFFSET UNITYSDK_OFFSET(0x17B92660)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISPERFECT_OFFSET UNITYSDK_OFFSET(0x17B93380)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISSUPPLYNODE_OFFSET UNITYSDK_OFFSET(0x17B92D80)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_LEFTSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0x17B930C0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODEDESC_OFFSET UNITYSDK_OFFSET(0x17B937E0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODEDETAILNAME_OFFSET UNITYSDK_OFFSET(0x17B93680)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODEINFO_OFFSET UNITYSDK_OFFSET(0x17B93210)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODENAME_OFFSET UNITYSDK_OFFSET(0x17B93520)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x17B90DF0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_PERFECTRATIO_OFFSET UNITYSDK_OFFSET(0x17B93FF0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_RAWNODETYPE_OFFSET UNITYSDK_OFFSET(0x17B92DE0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ROW_OFFSET UNITYSDK_OFFSET(0x17B92D70)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x17B92020)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_SHOWAUGMENT_OFFSET UNITYSDK_OFFSET(0x17B93220)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_TOTALSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0x17B92F70)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET__DISPLAYROW_OFFSET UNITYSDK_OFFSET(0x17B92CC0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET__PENALTYRULECONFIGROW_OFFSET UNITYSDK_OFFSET(0x17B939C0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET__STAGE_OFFSET UNITYSDK_OFFSET(0x17B92AB0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SETFRENZY_OFFSET UNITYSDK_OFFSET(0x17B92D30)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_ISFRENZY_OFFSET UNITYSDK_OFFSET(0x17B92DD0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_UPDATENODEINFO_OFFSET UNITYSDK_OFFSET(0x17B92C20)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_UPDATESTTINFO_OFFSET UNITYSDK_OFFSET(0x17B92BD0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE__CANSKIP_OFFSET UNITYSDK_OFFSET(0x17B92E10)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE__CHECKISEASY_OFFSET UNITYSDK_OFFSET(0x17B93DD0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x17B92B80)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE__GETLEFTSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0x17B930D0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE__GETTOTALSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0x17B92F80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStageNode_TypeDefinitionIndex = 60077;

	class GridFightStageNode : public ::System::Object
	{
	public:
		::Class_1_31B87651CEDF5B41* _SttInfo; // 0x10
		::Class_1_A5ECC5BBA0109924* _NodeInfo; // 0x18
		::Class_1_28D410CCE235575F_2* _BattleNodeInfo; // 0x20
		::RPG::GameCore::GridFightNodeTemplateConfigRow* _NodeTemplateConfigRow; // 0x28
		::RPG::GameCore::GridFightStageRouteConfigRow* _ConfigRow; // 0x30
		::System::Boolean _IsFrenzy_k__BackingField; // 0x38

		::System::Void _ctor(::RPG::GameCore::GridFightStageRouteConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightStageRouteConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE__CTOR_OFFSET))(this, row);
		}

		::RPG::Client::GridFightStage* get__Stage()
		{
			return ((::RPG::Client::GridFightStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET__STAGE_OFFSET))(this);
		}

		::System::Void UpdateSttInfo(::Class_1_31B87651CEDF5B41* sttInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_31B87651CEDF5B41*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_UPDATESTTINFO_OFFSET))(this, sttInfo);
		}

		::System::Void UpdateNodeInfo(::Class_1_A5ECC5BBA0109924* nodeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A5ECC5BBA0109924*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_UPDATENODEINFO_OFFSET))(this, nodeInfo);
		}

		::RPG::GameCore::GridFightStageNodeDisplayConfigRow* get__DisplayRow()
		{
			return ((::RPG::GameCore::GridFightStageNodeDisplayConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET__DISPLAYROW_OFFSET))(this);
		}

		::System::Void SetFrenzy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SETFRENZY_OFFSET))(this);
		}

		::RPG::GameCore::GridFightStageRouteConfigRow* get_Row()
		{
			return ((::RPG::GameCore::GridFightStageRouteConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ROW_OFFSET))(this);
		}

		::System::Boolean get_IsSupplyNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISSUPPLYNODE_OFFSET))(this);
		}

		::System::Boolean get_IsEliteNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISELITENODE_OFFSET))(this);
		}

		::System::Boolean get_IsFrenzy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISFRENZY_OFFSET))(this);
		}

		::System::Void set_IsFrenzy(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_ISFRENZY_OFFSET))(this, value);
		}

		::RPG::GameCore::GridFightNodeType get_RawNodeType()
		{
			return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_RAWNODETYPE_OFFSET))(this);
		}

		::RPG::GameCore::GridFightNodeType get_NodeType()
		{
			return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODETYPE_OFFSET))(this);
		}

		::System::Boolean get_CanSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_CANSKIP_OFFSET))(this);
		}

		::System::UInt32 get_TotalSkipCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_TOTALSKIPCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_LeftSkipCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_LEFTSKIPCOUNT_OFFSET))(this);
		}

		::Class_1_A5ECC5BBA0109924* get_NodeInfo()
		{
			return ((::Class_1_A5ECC5BBA0109924*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODEINFO_OFFSET))(this);
		}

		::System::Boolean get_ShowAugment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_SHOWAUGMENT_OFFSET))(this);
		}

		::System::Boolean get_IsAugmentNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISAUGMENTNODE_OFFSET))(this);
		}

		::System::Boolean get_IsPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISPASSED_OFFSET))(this);
		}

		::System::Boolean get_IsPerfect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISPERFECT_OFFSET))(this);
		}

		::System::Boolean get_IsCurrent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISCURRENT_OFFSET))(this);
		}

		::System::Boolean get_IsBattleNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISBATTLENODE_OFFSET))(this);
		}

		::System::UInt32 get_SectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_SECTIONID_OFFSET))(this);
		}

		::System::UInt32 get_ChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_CHAPTERID_OFFSET))(this);
		}

		::System::UInt32 get_BasicReward()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_BASICREWARD_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_NodeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_NodeDetailName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODEDETAILNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_NodeDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODEDESC_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPenaltyRuleConfigRow* get__PenaltyRuleConfigRow()
		{
			return ((::RPG::GameCore::GridFightPenaltyRuleConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET__PENALTYRULECONFIGROW_OFFSET))(this);
		}

		::System::Boolean get_HasPerfectRule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASPERFECTRULE_OFFSET))(this);
		}

		::System::Boolean get_HasDeadLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASDEADLINE_OFFSET))(this);
		}

		::System::Boolean get_HasNotFinishRule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASNOTFINISHRULE_OFFSET))(this);
		}

		::System::Boolean get_HasHPDetailRule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASHPDETAILRULE_OFFSET))(this);
		}

		::System::UInt32 get_HPCostMax()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HPCOSTMAX_OFFSET))(this);
		}

		::System::UInt32 get_HPCostMin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HPCOSTMIN_OFFSET))(this);
		}

		::System::Single get_DeadLineRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_DEADLINERATIO_OFFSET))(this);
		}

		::System::UInt32 get_DeadLinePenalty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_DEADLINEPENALTY_OFFSET))(this);
		}

		::System::Boolean get_IsEasy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISEASY_OFFSET))(this);
		}

		::System::Single get_PerfectRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_PERFECTRATIO_OFFSET))(this);
		}

		::System::Boolean get_HasExpert()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASEXPERT_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleConfig* get_ExpertConfig()
		{
			return ((::RPG::Client::GridFightRoleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_EXPERTCONFIG_OFFSET))(this);
		}

		::System::Boolean _CanSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE__CANSKIP_OFFSET))(this);
		}

		::System::UInt32 _GetTotalSkipCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE__GETTOTALSKIPCOUNT_OFFSET))(this);
		}

		::System::UInt32 _GetLeftSkipCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE__GETLEFTSKIPCOUNT_OFFSET))(this);
		}

		::System::Boolean _CheckIsEasy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE__CHECKISEASY_OFFSET))(this);
		}
	};
}
