#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap::FiveDim { class EntityIcon; }
namespace RPG::Client::NavMap::FiveDim { class MissionIcon; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x992C1A0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x992C1D0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__GETTRACKINGENTITYICON_B__63_0_OFFSET UNITYSDK_OFFSET(0x992C2E0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__GETTRACKINGMISSIONICON_B__64_0_OFFSET UNITYSDK_OFFSET(0x992C350)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__HASCHESTICON_B__65_0_OFFSET UNITYSDK_OFFSET(0x992C420)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__SORTENTITYICONS_B__57_0_OFFSET UNITYSDK_OFFSET(0x992C1E0)

namespace RPG::Client::NavMap::FiveDim
{
	inline static constexpr unsigned int Face___c_TypeDefinitionIndex = 59633;

	class Face___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::NavMap::FiveDim::EntityIcon*>** StaticGet___9__63_0()
		{
			return (::System::Predicate_1<::RPG::Client::NavMap::FiveDim::EntityIcon*>**)Il2CppClass::FromTypeDefinitionIndex(Face___c_TypeDefinitionIndex)->GetStaticField(0x428C0);
		}
		static ::System::Predicate_1<::RPG::Client::NavMap::FiveDim::EntityIcon*>** StaticGet___9__65_0()
		{
			return (::System::Predicate_1<::RPG::Client::NavMap::FiveDim::EntityIcon*>**)Il2CppClass::FromTypeDefinitionIndex(Face___c_TypeDefinitionIndex)->GetStaticField(0x428C8);
		}
		static ::System::Predicate_1<::RPG::Client::NavMap::FiveDim::MissionIcon*>** StaticGet___9__64_0()
		{
			return (::System::Predicate_1<::RPG::Client::NavMap::FiveDim::MissionIcon*>**)Il2CppClass::FromTypeDefinitionIndex(Face___c_TypeDefinitionIndex)->GetStaticField(0x428D0);
		}
		static ::System::Comparison_1<::RPG::Client::NavMap::FiveDim::EntityIcon*>** StaticGet___9__57_0()
		{
			return (::System::Comparison_1<::RPG::Client::NavMap::FiveDim::EntityIcon*>**)Il2CppClass::FromTypeDefinitionIndex(Face___c_TypeDefinitionIndex)->GetStaticField(0x428D8);
		}
		static ::RPG::Client::NavMap::FiveDim::Face___c** StaticGet___9()
		{
			return (::RPG::Client::NavMap::FiveDim::Face___c**)Il2CppClass::FromTypeDefinitionIndex(Face___c_TypeDefinitionIndex)->GetStaticField(0x428E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortEntityIcons_b__57_0(::RPG::Client::NavMap::FiveDim::EntityIcon* x, ::RPG::Client::NavMap::FiveDim::EntityIcon* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::EntityIcon*, ::RPG::Client::NavMap::FiveDim::EntityIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__SORTENTITYICONS_B__57_0_OFFSET))(this, x, y);
		}

		::System::Boolean _GetTrackingEntityIcon_b__63_0(::RPG::Client::NavMap::FiveDim::EntityIcon* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::EntityIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__GETTRACKINGENTITYICON_B__63_0_OFFSET))(this, x);
		}

		::System::Boolean _GetTrackingMissionIcon_b__64_0(::RPG::Client::NavMap::FiveDim::MissionIcon* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::MissionIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__GETTRACKINGMISSIONICON_B__64_0_OFFSET))(this, x);
		}

		::System::Boolean _HasChestIcon_b__65_0(::RPG::Client::NavMap::FiveDim::EntityIcon* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::EntityIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__HASCHESTICON_B__65_0_OFFSET))(this, x);
		}
	};
}
