#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_756B5584F1951889___c__DisplayClass35_0;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_756B5584F1951889___C__DISPLAYCLASS35_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11020A90)
#define CLASS_1_756B5584F1951889___C__DISPLAYCLASS35_1___FIREPLAYEREFFECTWITHGLOBALEFFECTNAME_B__0_OFFSET UNITYSDK_OFFSET(0x11021A60)

inline static constexpr unsigned int Class_1_756B5584F1951889___c__DisplayClass35_1_TypeDefinitionIndex = 60478;

class Class_1_756B5584F1951889___c__DisplayClass35_1 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimEffectItem* effectItem; // 0x10
	::Class_1_756B5584F1951889___c__DisplayClass35_0* CS___8__locals1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889___C__DISPLAYCLASS35_1__CTOR_OFFSET))(this);
	}

	::System::Void __FirePlayerEffectWithGlobalEffectName_b__0(::Entitas::IEntity* e, ::UnityEngine::GameObject* go)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889___C__DISPLAYCLASS35_1___FIREPLAYEREFFECTWITHGLOBALEFFECTNAME_B__0_OFFSET))(this, e, go);
	}
};
