#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_FIVEDIMMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x928C920)
#define RPG_CLIENT_FIVEDIMMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x928C950)
#define RPG_CLIENT_FIVEDIMMODULE___C__ONENTERGAME_B__158_0_OFFSET UNITYSDK_OFFSET(0x928C960)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimModule___c_TypeDefinitionIndex = 50992;

	class FiveDimModule___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__158_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(FiveDimModule___c_TypeDefinitionIndex)->GetStaticField(0x42C10);
		}
		static ::RPG::Client::FiveDimModule___c** StaticGet___9()
		{
			return (::RPG::Client::FiveDimModule___c**)Il2CppClass::FromTypeDefinitionIndex(FiveDimModule___c_TypeDefinitionIndex)->GetStaticField(0x42C18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnEnterGame_b__158_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE___C__ONENTERGAME_B__158_0_OFFSET))(this);
		}
	};
}
