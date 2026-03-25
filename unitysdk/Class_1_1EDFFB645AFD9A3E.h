#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_1EDFFB645AFD9A3E_METHOD_1_660474B0F8C5FECE_OFFSET UNITYSDK_OFFSET(0xDE393F0)
#define CLASS_1_1EDFFB645AFD9A3E_METHOD_1_A8B5DD81FACB4C81_OFFSET UNITYSDK_OFFSET(0xDE39610)
#define CLASS_1_1EDFFB645AFD9A3E_METHOD_1_ADF45F4E823CC047_OFFSET UNITYSDK_OFFSET(0xDE39920)
#define CLASS_1_1EDFFB645AFD9A3E_METHOD_1_F8BFB17B3DD6568D_OFFSET UNITYSDK_OFFSET(0xDE39390)
#define CLASS_1_1EDFFB645AFD9A3E__CTOR_OFFSET UNITYSDK_OFFSET(0xDE39A00)

inline static constexpr unsigned int Class_1_1EDFFB645AFD9A3E_TypeDefinitionIndex = 59017;

class Class_1_1EDFFB645AFD9A3E : public ::System::Object
{
public:
	::RPG::GameCore::BattleInstance* Field_1_1; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_2; // 0x18
	::RPG::GameCore::LevelUIComponent* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EDFFB645AFD9A3E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8BFB17B3DD6568D(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::LevelUIComponent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + CLASS_1_1EDFFB645AFD9A3E_METHOD_1_F8BFB17B3DD6568D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_660474B0F8C5FECE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EDFFB645AFD9A3E_METHOD_1_660474B0F8C5FECE_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_A8B5DD81FACB4C81(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_1EDFFB645AFD9A3E_METHOD_1_A8B5DD81FACB4C81_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ADF45F4E823CC047(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_1EDFFB645AFD9A3E_METHOD_1_ADF45F4E823CC047_OFFSET))(this, a1);
	}
};
