#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B2AF40)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17B2AF80)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE___C__REQUESTSELLHANDCARD_B__5_0_OFFSET UNITYSDK_OFFSET(0x17B2AF90)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ActionPhase___c_TypeDefinitionIndex = 70861;

	class ActionPhase___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingBattle::ActionPhase___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingBattle::ActionPhase___c**)Il2CppClass::FromTypeDefinitionIndex(ActionPhase___c_TypeDefinitionIndex)->GetStaticField(0x67CA0);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__5_0()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(ActionPhase___c_TypeDefinitionIndex)->GetStaticField(0x67CA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE___C__CTOR_OFFSET))(this);
		}

		::System::Void _RequestSellHandCard_b__5_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE___C__REQUESTSELLHANDCARD_B__5_0_OFFSET))(this, a1);
		}
	};
}
