#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_512CC108C22F737B_CLEAR_OFFSET UNITYSDK_OFFSET(0x1057ADA0)
#define CLASS_1_512CC108C22F737B__CTOR_OFFSET UNITYSDK_OFFSET(0x1057AE00)

inline static constexpr unsigned int Class_1_512CC108C22F737B_TypeDefinitionIndex = 45867;

class Class_1_512CC108C22F737B : public ::System::Object
{
public:
	::UnityEngine::Collider* Field_1_2; // 0x10
	::RPG::GameCore::GameEntity* Field_1_0; // 0x18
	::UnityEngine::Transform* Field_1_1; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::UnityEngine::Vector3 Field_1_5; // 0x2C
	::UnityEngine::Vector3 Field_1_4; // 0x38
	::System::Boolean Field_1_6; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_512CC108C22F737B__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_512CC108C22F737B_CLEAR_OFFSET))(this);
	}
};
