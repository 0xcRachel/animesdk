#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
#include "unitysdk/System/Object.h"

class Class_1_670BBFC54A03D4F2;
class Class_1_6CBA1E94039E5C83;
class Class_1_6D16597294F5284D_2;
namespace RPG::Client { class GridFightOverrideStageNode; }
namespace RPG::Client { class GridFightStage; }
namespace RPG::GameCore { class GridFightNodeTemplateConfigRow; }
namespace RPG::GameCore { class GridFightPenaltyRuleConfigRow; }
namespace RPG::GameCore { class GridFightStageNodeDisplayConfigRow; }
namespace RPG::GameCore { class GridFightStageRouteConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_BASICREWARD_OFFSET UNITYSDK_OFFSET(0x94040C0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x9403FB0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_DEADLINEPENALTY_OFFSET UNITYSDK_OFFSET(0x9404AE0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_DEADLINERATIO_OFFSET UNITYSDK_OFFSET(0x9404A60)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASDEADLINE_OFFSET UNITYSDK_OFFSET(0x9404840)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASHPDETAILRULE_OFFSET UNITYSDK_OFFSET(0x9404910)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASNOTFINISHRULE_OFFSET UNITYSDK_OFFSET(0x94048B0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HASPERFECTRULE_OFFSET UNITYSDK_OFFSET(0x9404820)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HPCOSTMAX_OFFSET UNITYSDK_OFFSET(0x9404970)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_HPCOSTMIN_OFFSET UNITYSDK_OFFSET(0x94049F0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x94040E0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISAUGMENTNODE_OFFSET UNITYSDK_OFFSET(0x9403F90)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISBATTLENODE_OFFSET UNITYSDK_OFFSET(0x94035D0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISCURRENT_OFFSET UNITYSDK_OFFSET(0x9403D70)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISELITENODE_OFFSET UNITYSDK_OFFSET(0x9403BC0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISFRENZY_OFFSET UNITYSDK_OFFSET(0x9403BE0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISPASSED_OFFSET UNITYSDK_OFFSET(0x94032F0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISPERFECT_OFFSET UNITYSDK_OFFSET(0x9403FF0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ISSUPPLYNODE_OFFSET UNITYSDK_OFFSET(0x9403BA0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODEDESC_OFFSET UNITYSDK_OFFSET(0x9404450)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODEDETAILNAME_OFFSET UNITYSDK_OFFSET(0x94042F0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODEINFO_OFFSET UNITYSDK_OFFSET(0x9403C20)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODENAME_OFFSET UNITYSDK_OFFSET(0x9404190)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9402030)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_PERFECTRATIO_OFFSET UNITYSDK_OFFSET(0x9404B50)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_RAWNODETYPE_OFFSET UNITYSDK_OFFSET(0x9403C00)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9403B90)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x9403FD0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_SHOWAUGMENT_OFFSET UNITYSDK_OFFSET(0x9403C30)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET__DISPLAYROW_OFFSET UNITYSDK_OFFSET(0x9403A90)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET__PENALTYRULECONFIGROW_OFFSET UNITYSDK_OFFSET(0x9404630)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_GET__STAGE_OFFSET UNITYSDK_OFFSET(0x94038B0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SETFRENZY_OFFSET UNITYSDK_OFFSET(0x9403B00)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SETINSERTNODE_OFFSET UNITYSDK_OFFSET(0x9403B40)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_SET_ISFRENZY_OFFSET UNITYSDK_OFFSET(0x9403BF0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_UPDATENODEINFO_OFFSET UNITYSDK_OFFSET(0x94039F0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE_UPDATESTTINFO_OFFSET UNITYSDK_OFFSET(0x94039A0)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x9403950)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStageNode_TypeDefinitionIndex = 51852;

	class GridFightStageNode : public ::System::Object
	{
	public:
		::Class_1_6D16597294F5284D_2* _BattleNodeInfo; // 0x10
		::RPG::GameCore::GridFightNodeTemplateConfigRow* _NodeTemplateConfigRow; // 0x18
		::Class_1_670BBFC54A03D4F2* _NodeInfo; // 0x20
		::Class_1_6CBA1E94039E5C83* _SttInfo; // 0x28
		::RPG::Client::GridFightOverrideStageNode* _InsertedNode; // 0x30
		::RPG::GameCore::GridFightStageRouteConfigRow* _ConfigRow; // 0x38
		::System::Boolean _IsFrenzy_k__BackingField; // 0x40

		::System::Void _ctor(::RPG::GameCore::GridFightStageRouteConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightStageRouteConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE__CTOR_OFFSET))(this, row);
		}

		::RPG::Client::GridFightStage* get__Stage()
		{
			return ((::RPG::Client::GridFightStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET__STAGE_OFFSET))(this);
		}

		::System::Void UpdateSttInfo(::Class_1_6CBA1E94039E5C83* sttInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CBA1E94039E5C83*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_UPDATESTTINFO_OFFSET))(this, sttInfo);
		}

		::System::Void UpdateNodeInfo(::Class_1_670BBFC54A03D4F2* nodeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_670BBFC54A03D4F2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_UPDATENODEINFO_OFFSET))(this, nodeInfo);
		}

		::RPG::GameCore::GridFightStageNodeDisplayConfigRow* get__DisplayRow()
		{
			return ((::RPG::GameCore::GridFightStageNodeDisplayConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET__DISPLAYROW_OFFSET))(this);
		}

		::System::Void SetFrenzy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SETFRENZY_OFFSET))(this);
		}

		::System::Void SetInsertNode(::RPG::Client::GridFightOverrideStageNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightOverrideStageNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_SETINSERTNODE_OFFSET))(this, node);
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

		::Class_1_670BBFC54A03D4F2* get_NodeInfo()
		{
			return ((::Class_1_670BBFC54A03D4F2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_NODEINFO_OFFSET))(this);
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

		::System::Single get_PerfectRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE_GET_PERFECTRATIO_OFFSET))(this);
		}
	};
}
