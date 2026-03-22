#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_573;
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8F10020)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8F10060)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP___C__TRYTRIGGERPENDINGPERFORMANCE_B__49_0_OFFSET UNITYSDK_OFFSET(0x8F10070)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionShop___c_TypeDefinitionIndex = 50256;

	class ChimeraDuelGameSessionShop___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChimeraDuelGameSessionShop___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraDuelGameSessionShop___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelGameSessionShop___c_TypeDefinitionIndex)->GetStaticField(0x41E50);
		}
		static ::System::Predicate_1<::Class_0_16E4307DCC419505_573*>** StaticGet___9__49_0()
		{
			return (::System::Predicate_1<::Class_0_16E4307DCC419505_573*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelGameSessionShop___c_TypeDefinitionIndex)->GetStaticField(0x41E58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _TryTriggerPendingPerformance_b__49_0(::Class_0_16E4307DCC419505_573* command)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_573*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP___C__TRYTRIGGERPENDINGPERFORMANCE_B__49_0_OFFSET))(this, command);
		}
	};
}
