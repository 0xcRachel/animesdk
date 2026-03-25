#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonopolyJackpotData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MONOPOLYJACKPOTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9D777E0)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9D77820)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO___C__GETJACKPOTDATAS_B__8_0_OFFSET UNITYSDK_OFFSET(0x9D77830)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyJackpotInfo___c_TypeDefinitionIndex = 53875;

	class MonopolyJackpotInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MonopolyJackpotInfo___c** StaticGet___9()
		{
			return (::RPG::Client::MonopolyJackpotInfo___c**)Il2CppClass::FromTypeDefinitionIndex(MonopolyJackpotInfo___c_TypeDefinitionIndex)->GetStaticField(0x445D0);
		}
		static ::System::Comparison_1<::RPG::Client::MonopolyJackpotData*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonopolyJackpotData*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyJackpotInfo___c_TypeDefinitionIndex)->GetStaticField(0x445D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetJackpotDatas_b__8_0(::RPG::Client::MonopolyJackpotData* a, ::RPG::Client::MonopolyJackpotData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonopolyJackpotData*, ::RPG::Client::MonopolyJackpotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO___C__GETJACKPOTDATAS_B__8_0_OFFSET))(this, a, b);
		}
	};
}
