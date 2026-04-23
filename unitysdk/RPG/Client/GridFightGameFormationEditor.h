#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameFormationEditor_EditorType.h"
#include "unitysdk/System/Object.h"

class Class_1_3CCCD675D7774146;
class Class_2_181F61C600ECA68B;
namespace RPG::Client { class GridFightEquipCraftMapInfo; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightFormationTeam; }
namespace RPG::Client { class GridFightGameFormation; }
namespace RPG::Client { class GridFightGameFormationEditor_EditEvent; }
namespace RPG::Client { class GridFightGameFormationEditor_EquipDressRule; }
namespace RPG::Client { class GridFightGameFormationEditor_Filter; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDBASICRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x174E4E40)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDCORE_OFFSET UNITYSDK_OFFSET(0x174E4990)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDEDITCALLBACK_OFFSET UNITYSDK_OFFSET(0x174E17F0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDEQUIP_OFFSET UNITYSDK_OFFSET(0x174E3FE0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x174E4F80)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANADDCORE_OFFSET UNITYSDK_OFFSET(0x174E4910)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANDRESS_OFFSET UNITYSDK_OFFSET(0x174DFE50)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANPUTROLE_OFFSET UNITYSDK_OFFSET(0x174E13F0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANPUT_OFFSET UNITYSDK_OFFSET(0x174E20E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_COMPOSITEEQUIP_OFFSET UNITYSDK_OFFSET(0x174E4CB0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CONTAINSROLEID_OFFSET UNITYSDK_OFFSET(0x174E2A10)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_DELETE_OFFSET UNITYSDK_OFFSET(0x174E6400)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EDITDESC_OFFSET UNITYSDK_OFFSET(0x174E2950)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EDITTITLE_OFFSET UNITYSDK_OFFSET(0x174E2890)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETALLEQUIPOPTIONS_OFFSET UNITYSDK_OFFSET(0x174E1050)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETALLROLEOPTIONS_OFFSET UNITYSDK_OFFSET(0x174E0B00)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETFILTER_OFFSET UNITYSDK_OFFSET(0x174DFF70)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETFIRSTEMPTYINDEX_1_OFFSET UNITYSDK_OFFSET(0x174E3010)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETFIRSTEMPTYINDEX_OFFSET UNITYSDK_OFFSET(0x174E2EC0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETROLEPOS_OFFSET UNITYSDK_OFFSET(0x174E2B10)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_CURTEAM_OFFSET UNITYSDK_OFFSET(0x174E1840)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_EARLYTEAM_OFFSET UNITYSDK_OFFSET(0x174E17D0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_FINALTEAM_OFFSET UNITYSDK_OFFSET(0x174E1790)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_MIDTEAM_OFFSET UNITYSDK_OFFSET(0x174E17B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_RECOMMENDBASICEQUIPS_OFFSET UNITYSDK_OFFSET(0x174E2C20)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_RECOMMENDEQUIPS_OFFSET UNITYSDK_OFFSET(0x174E2D70)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET__CUREDITFORMATION_OFFSET UNITYSDK_OFFSET(0x174E16F0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x174E2840)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_PUTROLE_OFFSET UNITYSDK_OFFSET(0x174E1960)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEBASICRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x174E50C0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVECORE_OFFSET UNITYSDK_OFFSET(0x174E4B70)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEEQUIP_OFFSET UNITYSDK_OFFSET(0x174E4470)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVERECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x174E5210)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEROLEBYROLEID_OFFSET UNITYSDK_OFFSET(0x174E24C0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEROLE_OFFSET UNITYSDK_OFFSET(0x174E2310)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SAVE_OFFSET UNITYSDK_OFFSET(0x174E57E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SETCORE_OFFSET UNITYSDK_OFFSET(0x174E2150)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SETROLESTAR_OFFSET UNITYSDK_OFFSET(0x174E1CE0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SET_EARLYTEAM_OFFSET UNITYSDK_OFFSET(0x174E17E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SET_FINALTEAM_OFFSET UNITYSDK_OFFSET(0x174E17A0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SET_MIDTEAM_OFFSET UNITYSDK_OFFSET(0x174E17C0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_STARTEDITOR_OFFSET UNITYSDK_OFFSET(0x174E1910)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SWAPBASICORDER_OFFSET UNITYSDK_OFFSET(0x174E5360)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SWAPORDER_OFFSET UNITYSDK_OFFSET(0x174E55A0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SWAPPOS_OFFSET UNITYSDK_OFFSET(0x174E1E00)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_TRYCOMPOSITEEQUIP_OFFSET UNITYSDK_OFFSET(0x174E32E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x174E6AB0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x174DE2E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__DISPATCHEDITEVENT_OFFSET UNITYSDK_OFFSET(0x174E1B80)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__FINDCRAFTTARGET_OFFSET UNITYSDK_OFFSET(0x174E3680)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETEQUIPORDER_OFFSET UNITYSDK_OFFSET(0x174E6A30)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETFIRSTEMPTYINDEX_B__61_0_OFFSET UNITYSDK_OFFSET(0x174E6EF0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETROLEBYPOSINDEX_OFFSET UNITYSDK_OFFSET(0x174E18B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__ISPOSINDEXSUPPORT_OFFSET UNITYSDK_OFFSET(0x174E3240)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__REMOVEEQUIPREQUIEDBYEMBLEM_OFFSET UNITYSDK_OFFSET(0x174E46A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_TypeDefinitionIndex = 59479;

	class GridFightGameFormationEditor : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightGameFormationEditor_EditEvent** StaticGet__EditEvent()
		{
			return (::RPG::Client::GridFightGameFormationEditor_EditEvent**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor_TypeDefinitionIndex)->GetStaticField(0x25750);
		}
		static ::Il2CppArray<::RPG::Client::GridFightGameFormationEditor_EquipDressRule*>** StaticGet__DressRules()
		{
			return (::Il2CppArray<::RPG::Client::GridFightGameFormationEditor_EquipDressRule*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor_TypeDefinitionIndex)->GetStaticField(0x25758);
		}
		::System::Action_1<::RPG::Client::GridFightGameFormationEditor_EditEvent*>* OnEdit; // 0x10
		::RPG::Client::GridFightGameFormation* _Formation; // 0x18
		::RPG::Client::GridFightFormationTeam* _EarlyTeam_k__BackingField; // 0x20
		::RPG::Client::GridFightFormationTeam* _FinalTeam_k__BackingField; // 0x28
		::RPG::Client::GridFightFormationTeam* _MidTeam_k__BackingField; // 0x30
		::RPG::Client::GridFightGameFormationEditor_EditorType CurEditorType; // 0x38

		::System::Void _ctor(::RPG::Client::GridFightGameFormation* formation)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__CTOR_OFFSET))(this, formation);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__CCTOR_OFFSET))();
		}

		::RPG::Client::GridFightGameFormationEditor_EquipDressRule* CanDress(::Class_2_181F61C600ECA68B* role, ::System::UInt32 equipID)
		{
			return ((::RPG::Client::GridFightGameFormationEditor_EquipDressRule*(*)(::PVOID, ::Class_2_181F61C600ECA68B*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANDRESS_OFFSET))(this, role, equipID);
		}

		::RPG::Client::GridFightGameFormationEditor_Filter* GetFilter()
		{
			return ((::RPG::Client::GridFightGameFormationEditor_Filter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETFILTER_OFFSET))(this);
		}

		::System::Boolean CanPutRole(::System::UInt32 roleID, ::System::UInt32 posIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANPUTROLE_OFFSET))(this, roleID, posIndex);
		}

		::RPG::Client::GridFightFormationTeam* get_FinalTeam()
		{
			return ((::RPG::Client::GridFightFormationTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_FINALTEAM_OFFSET))(this);
		}

		::System::Void set_FinalTeam(::RPG::Client::GridFightFormationTeam* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFormationTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SET_FINALTEAM_OFFSET))(this, value);
		}

		::RPG::Client::GridFightFormationTeam* get_MidTeam()
		{
			return ((::RPG::Client::GridFightFormationTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_MIDTEAM_OFFSET))(this);
		}

		::System::Void set_MidTeam(::RPG::Client::GridFightFormationTeam* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFormationTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SET_MIDTEAM_OFFSET))(this, value);
		}

		::RPG::Client::GridFightFormationTeam* get_EarlyTeam()
		{
			return ((::RPG::Client::GridFightFormationTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_EARLYTEAM_OFFSET))(this);
		}

		::System::Void set_EarlyTeam(::RPG::Client::GridFightFormationTeam* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFormationTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SET_EARLYTEAM_OFFSET))(this, value);
		}

		::System::Void AddEditCallback(::System::Action_1<::RPG::Client::GridFightGameFormationEditor_EditEvent*>* onEdit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightGameFormationEditor_EditEvent*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDEDITCALLBACK_OFFSET))(this, onEdit);
		}

		::Class_1_3CCCD675D7774146* get__CurEditFormation()
		{
			return ((::Class_1_3CCCD675D7774146*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET__CUREDITFORMATION_OFFSET))(this);
		}

		::RPG::Client::GridFightFormationTeam* get_CurTeam()
		{
			return ((::RPG::Client::GridFightFormationTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_CURTEAM_OFFSET))(this);
		}

		::Class_2_181F61C600ECA68B* _GetRoleByPosIndex(::System::UInt32 posIndex)
		{
			return ((::Class_2_181F61C600ECA68B*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETROLEBYPOSINDEX_OFFSET))(this, posIndex);
		}

		::System::Void StartEditor(::RPG::Client::GridFightGameFormationEditor_EditorType editorType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormationEditor_EditorType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_STARTEDITOR_OFFSET))(this, editorType);
		}

		::System::Void PutRole(::System::UInt32 posIndex, ::System::UInt32 roleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_PUTROLE_OFFSET))(this, posIndex, roleID);
		}

		::System::Void SetRoleStar(::System::UInt32 posIndex, ::System::UInt32 star)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SETROLESTAR_OFFSET))(this, posIndex, star);
		}

		::System::Void SwapPos(::System::UInt32 destPosIndex, ::System::UInt32 srcPosIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SWAPPOS_OFFSET))(this, destPosIndex, srcPosIndex);
		}

		::System::Boolean CanPut(::System::UInt32 posIndex, ::System::UInt32 roleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANPUT_OFFSET))(this, posIndex, roleID);
		}

		::System::Void SetCore(::System::UInt32 roleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SETCORE_OFFSET))(this, roleID);
		}

		::System::Void RemoveRole(::System::UInt32 posIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEROLE_OFFSET))(this, posIndex);
		}

		::System::Void RemoveRoleByRoleID(::System::UInt32 roleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEROLEBYROLEID_OFFSET))(this, roleID);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ISEMPTY_OFFSET))(this);
		}

		::System::Void EditTitle(::System::String* title)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EDITTITLE_OFFSET))(this, title);
		}

		::System::Void EditDesc(::System::String* desc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EDITDESC_OFFSET))(this, desc);
		}

		::System::Boolean ContainsRoleID(::System::UInt32 roleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CONTAINSROLEID_OFFSET))(this, roleID);
		}

		::System::UInt32 GetRolePos(::System::UInt32 roleID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETROLEPOS_OFFSET))(this, roleID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_RecommendBasicEquips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_RECOMMENDBASICEQUIPS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_RecommendEquips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_RECOMMENDEQUIPS_OFFSET))(this);
		}

		::System::UInt32 GetFirstEmptyIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETFIRSTEMPTYINDEX_OFFSET))(this);
		}

		::System::UInt32 GetFirstEmptyIndex_1(::System::UInt32 roleID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETFIRSTEMPTYINDEX_1_OFFSET))(this, roleID);
		}

		::System::Boolean _IsPosIndexSupport(::RPG::Client::GridFightRoleConfig* roleConfig, ::System::UInt32 posIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRoleConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__ISPOSINDEXSUPPORT_OFFSET))(this, roleConfig, posIndex);
		}

		::System::UInt32 TryCompositeEquip(::System::UInt32 posIndex, ::System::UInt32 equipID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_TRYCOMPOSITEEQUIP_OFFSET))(this, posIndex, equipID);
		}

		::System::Void AddEquip(::System::UInt32 posIndex, ::System::UInt32 equipID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDEQUIP_OFFSET))(this, posIndex, equipID);
		}

		static ::System::UInt32 _FindCraftTarget(::RPG::Client::GridFightEquipCraftMapInfo* craftMap, ::System::UInt32 itemIDA, ::System::UInt32 itemIDB)
		{
			return ((::System::UInt32(*)(::RPG::Client::GridFightEquipCraftMapInfo*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__FINDCRAFTTARGET_OFFSET))(craftMap, itemIDA, itemIDB);
		}

		::System::Void RemoveEquip(::System::UInt32 posIndex, ::System::UInt32 equipID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEEQUIP_OFFSET))(this, posIndex, equipID);
		}

		::System::Void _RemoveEquipRequiedByEmblem(::Class_2_181F61C600ECA68B* role, ::System::UInt32 emblemID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_181F61C600ECA68B*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__REMOVEEQUIPREQUIEDBYEMBLEM_OFFSET))(this, role, emblemID);
		}

		::System::Boolean CanAddCore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANADDCORE_OFFSET))(this);
		}

		::System::Void AddCore(::System::UInt32 roleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDCORE_OFFSET))(this, roleID);
		}

		::System::Void RemoveCore(::System::UInt32 roleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVECORE_OFFSET))(this, roleID);
		}

		::System::Void CompositeEquip(::System::UInt32 posIndex, ::System::UInt32 usedEquipID, ::System::UInt32 compsiteEquipID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_COMPOSITEEQUIP_OFFSET))(this, posIndex, usedEquipID, compsiteEquipID);
		}

		::System::Void AddBasicRecommendEquip(::System::Int32 index, ::System::UInt32 equipID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDBASICRECOMMENDEQUIP_OFFSET))(this, index, equipID);
		}

		::System::Void AddRecommendEquip(::System::Int32 index, ::System::UInt32 equipID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDRECOMMENDEQUIP_OFFSET))(this, index, equipID);
		}

		::System::Void RemoveBasicRecommendEquip(::System::UInt32 equipID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEBASICRECOMMENDEQUIP_OFFSET))(this, equipID);
		}

		::System::Void RemoveRecommendEquip(::System::UInt32 equipID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVERECOMMENDEQUIP_OFFSET))(this, equipID);
		}

		::System::Void SwapBasicOrder(::System::Int32 index1, ::System::Int32 index2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SWAPBASICORDER_OFFSET))(this, index1, index2);
		}

		::System::Void SwapOrder(::System::Int32 index1, ::System::Int32 index2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SWAPORDER_OFFSET))(this, index1, index2);
		}

		::System::Void Save()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SAVE_OFFSET))(this);
		}

		::System::Void Delete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_DELETE_OFFSET))(this);
		}

		::System::Void _DispatchEditEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__DISPATCHEDITEVENT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetAllRoleOptions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETALLROLEOPTIONS_OFFSET))(this);
		}

		::System::Int32 _GetEquipOrder(::RPG::Client::GridFightEquipItemConfig* config)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETEQUIPORDER_OFFSET))(this, config);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* GetAllEquipOptions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETALLEQUIPOPTIONS_OFFSET))(this);
		}

		::System::Boolean _GetFirstEmptyIndex_b__61_0(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETFIRSTEMPTYINDEX_B__61_0_OFFSET))(this, x);
		}
	};
}
