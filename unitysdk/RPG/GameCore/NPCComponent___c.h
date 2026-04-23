#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_GAMECORE_NPCCOMPONENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF53F800)
#define RPG_GAMECORE_NPCCOMPONENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF53F840)
#define RPG_GAMECORE_NPCCOMPONENT___C___BEGINFADEIN_B__36_0_OFFSET UNITYSDK_OFFSET(0xF53F850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCComponent___c_TypeDefinitionIndex = 52639;

	class NPCComponent___c : public ::System::Object
	{
	public:
		static ::RPG::GameCore::NPCComponent___c** StaticGet___9()
		{
			return (::RPG::GameCore::NPCComponent___c**)Il2CppClass::FromTypeDefinitionIndex(NPCComponent___c_TypeDefinitionIndex)->GetStaticField(0x68F00);
		}
		static ::System::Action** StaticGet___9__36_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NPCComponent___c_TypeDefinitionIndex)->GetStaticField(0x68F08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT___C__CTOR_OFFSET))(this);
		}

		::System::Void __BeginFadein_b__36_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT___C___BEGINFADEIN_B__36_0_OFFSET))(this);
		}
	};
}
