#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS7_0__CLIENTCREATENPC_B__0_OFFSET UNITYSDK_OFFSET(0xA3DF2E0)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA3BE050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManagerExtension___c__DisplayClass7_0_TypeDefinitionIndex = 45525;

	class EntityManagerExtension___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* pEntity; // 0x10
		::RPG::GameCore::EntityManager* pManager; // 0x18
		::System::String* strCharacterName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _ClientCreateNPC_b__0(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS7_0__CLIENTCREATENPC_B__0_OFFSET))(this, entity);
		}
	};
}
