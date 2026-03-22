#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8E24020)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8E24060)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__ONENTERED_B__32_1_OFFSET UNITYSDK_OFFSET(0x8E24070)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C___HANDLEEXITGAME_B__72_3_OFFSET UNITYSDK_OFFSET(0x8E241C0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C___HANDLEJOINLOBBY_B__68_1_OFFSET UNITYSDK_OFFSET(0x8E240E0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C___HANDLESTARTGAME_B__70_1_OFFSET UNITYSDK_OFFSET(0x8E24150)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceGameFlow___c_TypeDefinitionIndex = 60239;

	class CakeRaceGameFlow___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__70_1()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceGameFlow___c_TypeDefinitionIndex)->GetStaticField(0x39130);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__32_1()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceGameFlow___c_TypeDefinitionIndex)->GetStaticField(0x39138);
		}
		static ::RPG::Client::CakeRace::CakeRaceGameFlow___c** StaticGet___9()
		{
			return (::RPG::Client::CakeRace::CakeRaceGameFlow___c**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceGameFlow___c_TypeDefinitionIndex)->GetStaticField(0x39140);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__68_1()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceGameFlow___c_TypeDefinitionIndex)->GetStaticField(0x39148);
		}
		static ::System::Action** StaticGet___9__72_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceGameFlow___c_TypeDefinitionIndex)->GetStaticField(0x39150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnEntered_b__32_1(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__ONENTERED_B__32_1_OFFSET))(this, ex);
		}

		::System::Void __HandleJoinLobby_b__68_1(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C___HANDLEJOINLOBBY_B__68_1_OFFSET))(this, ex);
		}

		::System::Void __HandleStartGame_b__70_1(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C___HANDLESTARTGAME_B__70_1_OFFSET))(this, ex);
		}

		::System::Void __HandleExitGame_b__72_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C___HANDLEEXITGAME_B__72_3_OFFSET))(this);
		}
	};
}
