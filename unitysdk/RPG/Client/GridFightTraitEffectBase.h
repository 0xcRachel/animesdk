#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_595;
class Class_1_4A27993D27FC5C67;
class Class_1_5C48231578D58623_1;
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitEffectConfig; }

#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_CAKEEFFECTID_OFFSET UNITYSDK_OFFSET(0x9422A70)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_CHESTEFFECTID_OFFSET UNITYSDK_OFFSET(0x9422B70)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x94230E0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_ID_OFFSET UNITYSDK_OFFSET(0x941DF70)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x94230A0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_ISRECOVER_OFFSET UNITYSDK_OFFSET(0x94230F0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_TRAITEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x9423050)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0x941DF30)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_TRAIT_OFFSET UNITYSDK_OFFSET(0x94230C0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_WOLFEFFECTID_OFFSET UNITYSDK_OFFSET(0x9422C70)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0x94218F0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_ONUPDATE_1_OFFSET UNITYSDK_OFFSET(0x9422FC0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x9420840)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x9422D70)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x94230B0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_SET_ISRECOVER_OFFSET UNITYSDK_OFFSET(0x9423100)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_SET_TRAIT_OFFSET UNITYSDK_OFFSET(0x94230D0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x941B800)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEffectBase_TypeDefinitionIndex = 51948;

	class GridFightTraitEffectBase : public ::Sofa::Core::ObservableObject
	{
	public:
		::RPG::Client::GridFightTraitEffectConfig* _Config_k__BackingField; // 0x18
		::RPG::Client::GridFightTrait* _Trait_k__BackingField; // 0x20
		::System::Boolean _IsRecover_k__BackingField; // 0x28
		::System::Boolean _IsActive_k__BackingField; // 0x29

		::System::Void _ctor(::System::UInt32 id, ::RPG::Client::GridFightTrait* trait)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE__CTOR_OFFSET))(this, id, trait);
		}

		static ::System::UInt32 get_CakeEffectID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_CAKEEFFECTID_OFFSET))();
		}

		static ::System::UInt32 get_ChestEffectID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_CHESTEFFECTID_OFFSET))();
		}

		static ::System::UInt32 get_WolfEffectID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_WOLFEFFECTID_OFFSET))();
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_595* collector)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_595*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_SETCOLLECTOR_OFFSET))(this, collector);
		}

		::System::Void OnUpdate(::Class_1_4A27993D27FC5C67* effect)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4A27993D27FC5C67*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_ONUPDATE_OFFSET))(this, effect);
		}

		::System::Void OnUpdate_1(::Class_1_5C48231578D58623_1* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5C48231578D58623_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_ONUPDATE_1_OFFSET))(this, update);
		}

		::System::Void OnTraitChange(::System::UInt32 layer, ::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_ONTRAITCHANGE_OFFSET))(this, layer, isActive);
		}

		::System::UInt32 get_TraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_TRAITID_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTraitEffectType get_TraitEffectType()
		{
			return ((::RPG::GameCore::GridFightTraitEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_TRAITEFFECTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_SET_ISACTIVE_OFFSET))(this, value);
		}

		::RPG::Client::GridFightTrait* get_Trait()
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_TRAIT_OFFSET))(this);
		}

		::System::Void set_Trait(::RPG::Client::GridFightTrait* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_SET_TRAIT_OFFSET))(this, value);
		}

		::RPG::Client::GridFightTraitEffectConfig* get_Config()
		{
			return ((::RPG::Client::GridFightTraitEffectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_CONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsRecover()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_ISRECOVER_OFFSET))(this);
		}

		::System::Void set_IsRecover(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_SET_ISRECOVER_OFFSET))(this, value);
		}
	};
}
