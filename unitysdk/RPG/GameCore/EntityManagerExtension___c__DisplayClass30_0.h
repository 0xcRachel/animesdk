#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS30_0__CLIENTCREATEUI3DMODELENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xFE0BB20)
#define RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0xFE0BB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManagerExtension___c__DisplayClass30_0_TypeDefinitionIndex = 53276;

	class EntityManagerExtension___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::CharacterModelComponent* modelCmpt; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _ClientCreateUI3DModelEntity_b__0(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGEREXTENSION___C__DISPLAYCLASS30_0__CLIENTCREATEUI3DMODELENTITY_B__0_OFFSET))(this, entity);
		}
	};
}
