#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/IdleLiveTechTreeEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveTechTreeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_ADDNEXTNODE_OFFSET UNITYSDK_OFFSET(0x17305280)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_ADDPRENODE_OFFSET UNITYSDK_OFFSET(0x17305210)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x17305040)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ABILITYPARAMLIST_OFFSET UNITYSDK_OFFSET(0x17307E50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_CANACTIVATE_OFFSET UNITYSDK_OFFSET(0x17307C60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_COST_OFFSET UNITYSDK_OFFSET(0x17307D40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_DESCTEXT_OFFSET UNITYSDK_OFFSET(0x17307CF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_DESC_OFFSET UNITYSDK_OFFSET(0x17307D00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_EXTRAADDPOWER_OFFSET UNITYSDK_OFFSET(0x17307DA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x17307EB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ID_OFFSET UNITYSDK_OFFSET(0x17307CB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ISACTIVATE_OFFSET UNITYSDK_OFFSET(0x173076B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ISBASE_OFFSET UNITYSDK_OFFSET(0x17307E90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ISBIG_OFFSET UNITYSDK_OFFSET(0x17307E70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x17307C40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ITEMICONPATH_OFFSET UNITYSDK_OFFSET(0x17307ED0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17307CD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_NEXTNODES_OFFSET UNITYSDK_OFFSET(0x17307C90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_PARAM_OFFSET UNITYSDK_OFFSET(0x17307DF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_POWERFACTOR_OFFSET UNITYSDK_OFFSET(0x17307D80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_PRENODEIDS_OFFSET UNITYSDK_OFFSET(0x17307D60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_PRENODES_OFFSET UNITYSDK_OFFSET(0x17307C70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_PROPERTYPARAM_OFFSET UNITYSDK_OFFSET(0x17307E30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x17307E10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_RELATEDCAPTAINTAG_OFFSET UNITYSDK_OFFSET(0x17307DD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17307D20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_REFRESHISUNLOCK_OFFSET UNITYSDK_OFFSET(0x17305A60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_REFRESHNEXTNODESISUNLOCK_OFFSET UNITYSDK_OFFSET(0x17305940)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_ABILITYPARAMLIST_OFFSET UNITYSDK_OFFSET(0x17307E60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_COST_OFFSET UNITYSDK_OFFSET(0x17307D50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_DESC_OFFSET UNITYSDK_OFFSET(0x17307D10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_EXTRAADDPOWER_OFFSET UNITYSDK_OFFSET(0x17307DC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x17307EC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_ID_OFFSET UNITYSDK_OFFSET(0x17307CC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_ISBASE_OFFSET UNITYSDK_OFFSET(0x17307EA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_ISBIG_OFFSET UNITYSDK_OFFSET(0x17307E80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x17307C50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x17307CE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_NEXTNODES_OFFSET UNITYSDK_OFFSET(0x17307CA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_PARAM_OFFSET UNITYSDK_OFFSET(0x17307E00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_POWERFACTOR_OFFSET UNITYSDK_OFFSET(0x17307D90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_PRENODEIDS_OFFSET UNITYSDK_OFFSET(0x17307D70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_PRENODES_OFFSET UNITYSDK_OFFSET(0x17307C80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_PROPERTYPARAM_OFFSET UNITYSDK_OFFSET(0x17307E40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x17307E20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_RELATEDCAPTAINTAG_OFFSET UNITYSDK_OFFSET(0x17307DE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x17307D30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE__CANACTIVATE_OFFSET UNITYSDK_OFFSET(0x17307940)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x173078E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE__GETDESCTEXT_OFFSET UNITYSDK_OFFSET(0x17307A90)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTechTreeNode_TypeDefinitionIndex = 69468;

	class IdleLiveTechTreeNode : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* _NextNodes_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* _PreNodes_k__BackingField; // 0x20
		::Il2CppArray<::System::UInt32>* _PreNodeIDs_k__BackingField; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* _AbilityParamList_k__BackingField; // 0x30
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _ExtraAddPower_k__BackingField; // 0x38
		::System::String* _itemIconPath; // 0x50
		::System::UInt32 _ID_k__BackingField; // 0x58
		::System::Boolean _IsBig_k__BackingField; // 0x5C
		::System::Boolean _IsBase_k__BackingField; // 0x5D
		::System::Boolean _IsUnlock_k__BackingField; // 0x5E
		::System::UInt32 _Cost_k__BackingField; // 0x60
		::System::UInt32 _Param_k__BackingField; // 0x64
		::RPG::GameCore::ILBattleAvatarTag _RelatedCaptainTag_k__BackingField; // 0x68
		::RPG::GameCore::IdleLiveTechTreeEffectType _Type_k__BackingField; // 0x6C
		::RPG::GameCore::IdleLiveAvatarPropertyType _PropertyType_k__BackingField; // 0x70
		::System::Double _PropertyParam_k__BackingField; // 0x78
		::RPG::Client::TextID _Desc_k__BackingField; // 0x80
		::RPG::GameCore::FixPoint _PowerFactor_k__BackingField; // 0x90
		::RPG::Client::TextID _Name_k__BackingField; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* Create(::RPG::GameCore::IdleLiveTechTreeRow* row)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*(*)(::RPG::GameCore::IdleLiveTechTreeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_CREATE_OFFSET))(row);
		}

		::System::Void AddPreNode(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_ADDPRENODE_OFFSET))(this, node);
		}

		::System::Void AddNextNode(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_ADDNEXTNODE_OFFSET))(this, node);
		}

		::System::Void RefreshIsUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_REFRESHISUNLOCK_OFFSET))(this);
		}

		::System::Void RefreshNextNodesIsUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_REFRESHNEXTNODESISUNLOCK_OFFSET))(this);
		}

		::System::Boolean _CanActivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE__CANACTIVATE_OFFSET))(this);
		}

		::System::String* _GetDescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE__GETDESCTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsActivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ISACTIVATE_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsUnlock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_ISUNLOCK_OFFSET))(this, value);
		}

		::System::Boolean get_CanActivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_CANACTIVATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* get_PreNodes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_PRENODES_OFFSET))(this);
		}

		::System::Void set_PreNodes(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_PRENODES_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* get_NextNodes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_NEXTNODES_OFFSET))(this);
		}

		::System::Void set_NextNodes(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_NEXTNODES_OFFSET))(this, value);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_ID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_DescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_DESCTEXT_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_DESC_OFFSET))(this, value);
		}

		::RPG::GameCore::IdleLiveTechTreeEffectType get_Type()
		{
			return ((::RPG::GameCore::IdleLiveTechTreeEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::IdleLiveTechTreeEffectType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveTechTreeEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_TYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_Cost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_COST_OFFSET))(this);
		}

		::System::Void set_Cost(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_COST_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_PreNodeIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_PRENODEIDS_OFFSET))(this);
		}

		::System::Void set_PreNodeIDs(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_PRENODEIDS_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_PowerFactor()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_POWERFACTOR_OFFSET))(this);
		}

		::System::Void set_PowerFactor(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_POWERFACTOR_OFFSET))(this, value);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal get_ExtraAddPower()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_EXTRAADDPOWER_OFFSET))(this);
		}

		::System::Void set_ExtraAddPower(::RPG::Client::ActivityIdleLive::IdleLiveDecimal value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_EXTRAADDPOWER_OFFSET))(this, value);
		}

		::RPG::GameCore::ILBattleAvatarTag get_RelatedCaptainTag()
		{
			return ((::RPG::GameCore::ILBattleAvatarTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_RELATEDCAPTAINTAG_OFFSET))(this);
		}

		::System::Void set_RelatedCaptainTag(::RPG::GameCore::ILBattleAvatarTag value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ILBattleAvatarTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_RELATEDCAPTAINTAG_OFFSET))(this, value);
		}

		::System::UInt32 get_Param()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_PARAM_OFFSET))(this);
		}

		::System::Void set_Param(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_PARAM_OFFSET))(this, value);
		}

		::RPG::GameCore::IdleLiveAvatarPropertyType get_PropertyType()
		{
			return ((::RPG::GameCore::IdleLiveAvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::RPG::GameCore::IdleLiveAvatarPropertyType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_PROPERTYTYPE_OFFSET))(this, value);
		}

		::System::Double get_PropertyParam()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_PROPERTYPARAM_OFFSET))(this);
		}

		::System::Void set_PropertyParam(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_PROPERTYPARAM_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_AbilityParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ABILITYPARAMLIST_OFFSET))(this);
		}

		::System::Void set_AbilityParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_ABILITYPARAMLIST_OFFSET))(this, value);
		}

		::System::Boolean get_IsBig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ISBIG_OFFSET))(this);
		}

		::System::Void set_IsBig(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_ISBIG_OFFSET))(this, value);
		}

		::System::Boolean get_IsBase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ISBASE_OFFSET))(this);
		}

		::System::Void set_IsBase(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_ISBASE_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_ICONPATH_OFFSET))(this, value);
		}

		::System::String* get_ItemIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ITEMICONPATH_OFFSET))(this);
		}
	};
}
