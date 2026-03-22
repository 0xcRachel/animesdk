#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_595;
class Class_0_16E4307DCC419505_596;
class Class_0_16E4307DCC419505_598;
class Class_0_16E4307DCC419505_600;
class Class_2_FD0167EB507B9435_7;
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::Client { class GridFightTraitLayerConfig; }
namespace RPG::Client { class GridFightTraitRemarkParser; }
namespace RPG::Client { class GridFightTraitSubTraitConfig; }
namespace RPG::Client { class IGridFightTraitEffect; }
namespace RPG::Client { class IGridFightTraitShowEffect; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTTRAIT_COMPARETO_OFFSET UNITYSDK_OFFSET(0x941A700)
#define RPG_CLIENT_GRIDFIGHTTRAIT_CREATEDUMMY_OFFSET UNITYSDK_OFFSET(0x9417F60)
#define RPG_CLIENT_GRIDFIGHTTRAIT_CREATE_OFFSET UNITYSDK_OFFSET(0x9417ED0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_EDIT_OFFSET UNITYSDK_OFFSET(0x9418DC0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GETCURRENTSUBTRAITCONFIG_OFFSET UNITYSDK_OFFSET(0x9418CC0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GETEFFECT_1_OFFSET UNITYSDK_OFFSET(0x9418780)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GETEFFECT_OFFSET UNITYSDK_OFFSET(0x94186A0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GETMEMBERSONBOARD_OFFSET UNITYSDK_OFFSET(0x9418880)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GETSHOWNEFFECTLIST_OFFSET UNITYSDK_OFFSET(0x9418B80)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ACTIVATEDLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0x941A6C0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0x941A590)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ALLMEMBERS_OFFSET UNITYSDK_OFFSET(0x94189C0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_CANEDIT_OFFSET UNITYSDK_OFFSET(0x9419C60)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_CANEFFECTSLOT_OFFSET UNITYSDK_OFFSET(0x9419F90)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_CANSHOW_OFFSET UNITYSDK_OFFSET(0x9419F50)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_CANSUMMON_OFFSET UNITYSDK_OFFSET(0x9419CA0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x941A6B0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_EFFECTS_OFFSET UNITYSDK_OFFSET(0x941AB70)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ID_OFFSET UNITYSDK_OFFSET(0x94196F0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x941A630)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISSUBTRAITACTIVE_OFFSET UNITYSDK_OFFSET(0x9419FD0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISTRACKED_OFFSET UNITYSDK_OFFSET(0x941A030)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x941A160)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_REMARKPARSER_OFFSET UNITYSDK_OFFSET(0x941AB90)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_SUBTRAITACTIVATEDLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0x941A6E0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_TEAMREPOSITORY_OFFSET UNITYSDK_OFFSET(0x9418180)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_TRAITPROJECTION_OFFSET UNITYSDK_OFFSET(0x9419CB0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_TRAITREPOSITORY_OFFSET UNITYSDK_OFFSET(0x9418070)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x9418280)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SETTRAITLAYERMODIFIER_OFFSET UNITYSDK_OFFSET(0x941AB20)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SET_ACTIVATEDLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0x941A6D0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SET_ACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0x941A5A0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SET_EFFECTS_OFFSET UNITYSDK_OFFSET(0x941AB80)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x941A640)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SET_LAYER_OFFSET UNITYSDK_OFFSET(0x941A170)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SET_REMARKPARSER_OFFSET UNITYSDK_OFFSET(0x941ABA0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SET_SUBTRAITACTIVATEDLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0x941A6F0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_TRACK_OFFSET UNITYSDK_OFFSET(0x9419AC0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_UNTRACK_OFFSET UNITYSDK_OFFSET(0x9419B90)
#define RPG_CLIENT_GRIDFIGHTTRAIT_UPDATELAYER_OFFSET UNITYSDK_OFFSET(0x9418650)
#define RPG_CLIENT_GRIDFIGHTTRAIT__CHECKPROJECTIONCONDITION_OFFSET UNITYSDK_OFFSET(0x94191B0)
#define RPG_CLIENT_GRIDFIGHTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x9417600)
#define RPG_CLIENT_GRIDFIGHTTRAIT__INITREMARK_OFFSET UNITYSDK_OFFSET(0x9417920)
#define RPG_CLIENT_GRIDFIGHTTRAIT__INITTRAIT_OFFSET UNITYSDK_OFFSET(0x9417750)
#define RPG_CLIENT_GRIDFIGHTTRAIT__ISSUBTRAITACTIVE_OFFSET UNITYSDK_OFFSET(0x9419720)
#define RPG_CLIENT_GRIDFIGHTTRAIT__ONCOREROLECHOOSEPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x941AA10)
#define RPG_CLIENT_GRIDFIGHTTRAIT__REFRESHACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0x941A1F0)
#define RPG_CLIENT_GRIDFIGHTTRAIT__REFRESHSUBTRAITACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0x941A9B0)
#define RPG_CLIENT_GRIDFIGHTTRAIT__UPDATELAYER_OFFSET UNITYSDK_OFFSET(0x9417970)
#define RPG_CLIENT_GRIDFIGHTTRAIT___UPDATELAYER_B__63_0_OFFSET UNITYSDK_OFFSET(0x941ABB0)
#define RPG_CLIENT_GRIDFIGHTTRAIT___UPDATELAYER_B__63_1_OFFSET UNITYSDK_OFFSET(0x941AC10)
#define RPG_CLIENT_GRIDFIGHTTRAIT___UPDATELAYER_B__63_2_OFFSET UNITYSDK_OFFSET(0x941AC70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrait_TypeDefinitionIndex = 51975;

	class GridFightTrait : public ::Sofa::Core::ObservableObject
	{
	public:
		::RPG::Client::GridFightTraitLayerConfig* _SubTraitActivatedLayerConfig_k__BackingField; // 0x18
		::RPG::Client::GridFightTraitRemarkParser* _RemarkParser_k__BackingField; // 0x20
		::RPG::Client::GridFightTraitConfigBase* _Config_k__BackingField; // 0x28
		::Class_0_16E4307DCC419505_600* _DataContext; // 0x30
		::Class_2_FD0167EB507B9435_7* _TraitLayerModifier; // 0x38
		::RPG::Client::GridFightTraitLayerConfig* _ActivatedLayerConfig_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>* _Effects_k__BackingField; // 0x48
		::System::Boolean _IsActivated; // 0x50
		::System::UInt32 _Layer; // 0x54
		::System::UInt32 _ActivatedLayer; // 0x58

		::System::Void _ctor(::System::UInt32 id, ::Class_0_16E4307DCC419505_600* dataContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_600*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__CTOR_OFFSET))(this, id, dataContext);
		}

		static ::RPG::Client::GridFightTrait* Create(::System::UInt32 id, ::Class_0_16E4307DCC419505_600* dataContext)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::System::UInt32, ::Class_0_16E4307DCC419505_600*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_CREATE_OFFSET))(id, dataContext);
		}

		static ::RPG::Client::GridFightTrait* CreateDummy(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_CREATEDUMMY_OFFSET))(id);
		}

		::Class_0_16E4307DCC419505_598* get_TraitRepository()
		{
			return ((::Class_0_16E4307DCC419505_598*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_TRAITREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_596* get_teamRepository()
		{
			return ((::Class_0_16E4307DCC419505_596*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_TEAMREPOSITORY_OFFSET))(this);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_595* collector)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_595*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SETCOLLECTOR_OFFSET))(this, collector);
		}

		::System::Void UpdateLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_UPDATELAYER_OFFSET))(this);
		}

		::RPG::Client::IGridFightTraitEffect* GetEffect(::System::UInt32 id)
		{
			return ((::RPG::Client::IGridFightTraitEffect*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GETEFFECT_OFFSET))(this, id);
		}

		::RPG::Client::IGridFightTraitEffect* GetEffect_1(::RPG::GameCore::GridFightTraitEffectType type)
		{
			return ((::RPG::Client::IGridFightTraitEffect*(*)(::PVOID, ::RPG::GameCore::GridFightTraitEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GETEFFECT_1_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGridMember*>* GetMembersOnBoard()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GETMEMBERSONBOARD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* GetShownEffectList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GETSHOWNEFFECTLIST_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitSubTraitConfig* GetCurrentSubTraitConfig()
		{
			return ((::RPG::Client::GridFightTraitSubTraitConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GETCURRENTSUBTRAITCONFIG_OFFSET))(this);
		}

		::System::Void Edit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_EDIT_OFFSET))(this);
		}

		::System::Void _InitTrait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__INITTRAIT_OFFSET))(this);
		}

		::System::Boolean _CheckProjectionCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__CHECKPROJECTIONCONDITION_OFFSET))(this);
		}

		::System::Boolean _IsSubTraitActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__ISSUBTRAITACTIVE_OFFSET))(this);
		}

		::System::Void _InitRemark()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__INITREMARK_OFFSET))(this);
		}

		::System::Void Track()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_TRACK_OFFSET))(this);
		}

		::System::Void Untrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_UNTRACK_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* get_AllMembers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ALLMEMBERS_OFFSET))(this);
		}

		::System::Boolean get_CanEdit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_CANEDIT_OFFSET))(this);
		}

		::System::Boolean get_CanSummon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_CANSUMMON_OFFSET))(this);
		}

		::RPG::Client::GridFightProjection* get_TraitProjection()
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_TRAITPROJECTION_OFFSET))(this);
		}

		::System::Boolean get_CanShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_CANSHOW_OFFSET))(this);
		}

		::System::Boolean get_CanEffectSlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_CANEFFECTSLOT_OFFSET))(this);
		}

		::System::Boolean get_IsSubTraitActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISSUBTRAITACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsTracked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISTRACKED_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_Layer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_LAYER_OFFSET))(this);
		}

		::System::Void set_Layer(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SET_LAYER_OFFSET))(this, value);
		}

		::System::UInt32 get_ActivatedLayer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ACTIVATEDLAYER_OFFSET))(this);
		}

		::System::Void set_ActivatedLayer(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SET_ACTIVATEDLAYER_OFFSET))(this, value);
		}

		::System::Boolean get_IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISACTIVATED_OFFSET))(this);
		}

		::System::Void set_IsActivated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SET_ISACTIVATED_OFFSET))(this, value);
		}

		::RPG::Client::GridFightTraitConfigBase* get_Config()
		{
			return ((::RPG::Client::GridFightTraitConfigBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_CONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitLayerConfig* get_ActivatedLayerConfig()
		{
			return ((::RPG::Client::GridFightTraitLayerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ACTIVATEDLAYERCONFIG_OFFSET))(this);
		}

		::System::Void set_ActivatedLayerConfig(::RPG::Client::GridFightTraitLayerConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitLayerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SET_ACTIVATEDLAYERCONFIG_OFFSET))(this, value);
		}

		::RPG::Client::GridFightTraitLayerConfig* get_SubTraitActivatedLayerConfig()
		{
			return ((::RPG::Client::GridFightTraitLayerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_SUBTRAITACTIVATEDLAYERCONFIG_OFFSET))(this);
		}

		::System::Void set_SubTraitActivatedLayerConfig(::RPG::Client::GridFightTraitLayerConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitLayerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SET_SUBTRAITACTIVATEDLAYERCONFIG_OFFSET))(this, value);
		}

		::System::Int32 CompareTo(::RPG::Client::GridFightTrait* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_COMPARETO_OFFSET))(this, other);
		}

		::System::Void _UpdateLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__UPDATELAYER_OFFSET))(this);
		}

		::System::Void _RefreshActivatedLayer(::System::UInt32 layer)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__REFRESHACTIVATEDLAYER_OFFSET))(this, layer);
		}

		::System::Void _OnCoreRoleChoosePropertyChanged(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__ONCOREROLECHOOSEPROPERTYCHANGED_OFFSET))(this, sender, e);
		}

		::System::Void _RefreshSubTraitActivatedLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__REFRESHSUBTRAITACTIVATEDLAYER_OFFSET))(this);
		}

		::System::Void SetTraitLayerModifier(::Class_2_FD0167EB507B9435_7* modifier)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_FD0167EB507B9435_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SETTRAITLAYERMODIFIER_OFFSET))(this, modifier);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>* get_Effects()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_EFFECTS_OFFSET))(this);
		}

		::System::Void set_Effects(::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SET_EFFECTS_OFFSET))(this, value);
		}

		::RPG::Client::GridFightTraitRemarkParser* get_RemarkParser()
		{
			return ((::RPG::Client::GridFightTraitRemarkParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_REMARKPARSER_OFFSET))(this);
		}

		::System::Void set_RemarkParser(::RPG::Client::GridFightTraitRemarkParser* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitRemarkParser*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SET_REMARKPARSER_OFFSET))(this, value);
		}

		::System::Boolean __UpdateLayer_b__63_0(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___UPDATELAYER_B__63_0_OFFSET))(this, x);
		}

		::System::Boolean __UpdateLayer_b__63_1(::RPG::Client::GridFightNPC* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___UPDATELAYER_B__63_1_OFFSET))(this, x);
		}

		::System::Boolean __UpdateLayer_b__63_2(::RPG::Client::GridFightProjection* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightProjection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___UPDATELAYER_B__63_2_OFFSET))(this, x);
		}
	};
}
