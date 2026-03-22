#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_600;
class Class_0_16E4307DCC419505_614;
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_3_2A6530038D51A41A;

#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_CONTAINSTRAITID_OFFSET UNITYSDK_OFFSET(0x94102C0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITBYEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x941EF40)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITBYID_OFFSET UNITYSDK_OFFSET(0x941EE10)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GET_TRAITCONFIGS_OFFSET UNITYSDK_OFFSET(0x941F070)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0x941F290)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_INITTRAITS_OFFSET UNITYSDK_OFFSET(0x941E390)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_SET_TRAITS_OFFSET UNITYSDK_OFFSET(0x941F2A0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_UPDATETRAITS_OFFSET UNITYSDK_OFFSET(0x941E6E0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x941E2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitComponent_TypeDefinitionIndex = 51983;

	class GridFightTraitComponent : public ::Sofa::Core::ObservableObject
	{
	public:
		::Class_0_16E4307DCC419505_614* _Owner; // 0x18
		::Class_3_2A6530038D51A41A<::RPG::Client::GridFightTrait*>* _Traits_k__BackingField; // 0x20
		::Class_0_16E4307DCC419505_600* _DataContext; // 0x28

		::System::Void _ctor(::Class_0_16E4307DCC419505_614* owner, ::Class_0_16E4307DCC419505_600* dataContext)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_600*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT__CTOR_OFFSET))(this, owner, dataContext);
		}

		::System::Void InitTraits(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* traits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_INITTRAITS_OFFSET))(this, traits);
		}

		::System::Void UpdateTraits(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* traitIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_UPDATETRAITS_OFFSET))(this, traitIDs);
		}

		::System::Boolean ContainsTraitID(::System::UInt32 traitID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_CONTAINSTRAITID_OFFSET))(this, traitID);
		}

		::RPG::Client::GridFightTrait* GetTraitByID(::System::UInt32 traitID)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITBYID_OFFSET))(this, traitID);
		}

		::RPG::Client::GridFightTrait* GetTraitByEffectType(::RPG::GameCore::GridFightTraitEffectType effectType)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::RPG::GameCore::GridFightTraitEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITBYEFFECTTYPE_OFFSET))(this, effectType);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfigBase*>* get_TraitConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfigBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GET_TRAITCONFIGS_OFFSET))(this);
		}

		::Class_3_2A6530038D51A41A<::RPG::Client::GridFightTrait*>* get_Traits()
		{
			return ((::Class_3_2A6530038D51A41A<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GET_TRAITS_OFFSET))(this);
		}

		::System::Void set_Traits(::Class_3_2A6530038D51A41A<::RPG::Client::GridFightTrait*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_2A6530038D51A41A<::RPG::Client::GridFightTrait*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_SET_TRAITS_OFFSET))(this, value);
		}
	};
}
