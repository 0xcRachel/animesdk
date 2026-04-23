#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesMiniGameReward; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PLANETFESMINIGAME___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1750B270)
#define RPG_CLIENT_PLANETFESMINIGAME___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1750B2B0)
#define RPG_CLIENT_PLANETFESMINIGAME___C__GETREWARDS_B__3_0_OFFSET UNITYSDK_OFFSET(0x1750B2C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesMiniGame___c_TypeDefinitionIndex = 61363;

	class PlanetFesMiniGame___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::PlanetFesMiniGameReward*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::RPG::Client::PlanetFesMiniGameReward*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesMiniGame___c_TypeDefinitionIndex)->GetStaticField(0x69C70);
		}
		static ::RPG::Client::PlanetFesMiniGame___c** StaticGet___9()
		{
			return (::RPG::Client::PlanetFesMiniGame___c**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesMiniGame___c_TypeDefinitionIndex)->GetStaticField(0x69C78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetRewards_b__3_0(::RPG::Client::PlanetFesMiniGameReward* a, ::RPG::Client::PlanetFesMiniGameReward* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesMiniGameReward*, ::RPG::Client::PlanetFesMiniGameReward*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME___C__GETREWARDS_B__3_0_OFFSET))(this, a, b);
		}
	};
}
