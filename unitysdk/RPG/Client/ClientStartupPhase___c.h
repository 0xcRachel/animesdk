#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CLIENTSTARTUPPHASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x178B21E0)
#define RPG_CLIENT_CLIENTSTARTUPPHASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x178B2220)
#define RPG_CLIENT_CLIENTSTARTUPPHASE___C___ONEXCEPTION_B__9_0_OFFSET UNITYSDK_OFFSET(0x178B2230)

namespace RPG::Client
{
	inline static constexpr unsigned int ClientStartupPhase___c_TypeDefinitionIndex = 56384;

	class ClientStartupPhase___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ClientStartupPhase___c** StaticGet___9()
		{
			return (::RPG::Client::ClientStartupPhase___c**)Il2CppClass::FromTypeDefinitionIndex(ClientStartupPhase___c_TypeDefinitionIndex)->GetStaticField(0x680A0);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ClientStartupPhase___c_TypeDefinitionIndex)->GetStaticField(0x680A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE___C__CTOR_OFFSET))(this);
		}

		::System::Void __OnException_b__9_0(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE___C___ONEXCEPTION_B__9_0_OFFSET))(this, isOk);
		}
	};
}
