#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_717;
class Class_1_4AC309666BC73BC1_1;
class Class_1_8271AFF79E02658D;
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitEffectConfig; }

#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_CAKEEFFECTID_OFFSET UNITYSDK_OFFSET(0x174310C0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_CHESTEFFECTID_OFFSET UNITYSDK_OFFSET(0x174311C0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x17431690)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_ELATIONEFFECTID_OFFSET UNITYSDK_OFFSET(0x174313C0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1742FEF0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x17431650)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_ISRECOVER_OFFSET UNITYSDK_OFFSET(0x174316A0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_TRAITEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x17431600)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0x1742FEB0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_TRAIT_OFFSET UNITYSDK_OFFSET(0x17431670)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_WOLFEFFECTID_OFFSET UNITYSDK_OFFSET(0x174312C0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0x1742FB80)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_ONUPDATE_1_OFFSET UNITYSDK_OFFSET(0x17431570)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1742E9D0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x174313D0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x17431660)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_SET_ISRECOVER_OFFSET UNITYSDK_OFFSET(0x174316B0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_SET_TRAIT_OFFSET UNITYSDK_OFFSET(0x17431680)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1742EF60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEffectBase_TypeDefinitionIndex = 60179;

	class GridFightTraitEffectBase : public ::Sofa::Core::ObservableObject
	{
	public:
		::RPG::Client::GridFightTrait* _Trait_k__BackingField; // 0x18
		::RPG::Client::GridFightTraitEffectConfig* _Config_k__BackingField; // 0x20
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

		static ::System::UInt32 get_ElationEffectID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_ELATIONEFFECTID_OFFSET))();
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_717* collector)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_717*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_SETCOLLECTOR_OFFSET))(this, collector);
		}

		::System::Void OnUpdate(::Class_1_8271AFF79E02658D* effect)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8271AFF79E02658D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_ONUPDATE_OFFSET))(this, effect);
		}

		::System::Void OnUpdate_1(::Class_1_4AC309666BC73BC1_1* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4AC309666BC73BC1_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_ONUPDATE_1_OFFSET))(this, update);
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
