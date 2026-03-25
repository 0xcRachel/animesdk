#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class DriftComponentData; }
namespace UnityEngine { class Transform; }

#define CLASS_1_AB0848A1DBCB597F_METHOD_1_6DE3EFD6EF87C7A2_OFFSET UNITYSDK_OFFSET(0x89AD8F0)
#define CLASS_1_AB0848A1DBCB597F__CTOR_OFFSET UNITYSDK_OFFSET(0x89AE030)

inline static constexpr unsigned int Class_1_AB0848A1DBCB597F_TypeDefinitionIndex = 60484;

class Class_1_AB0848A1DBCB597F : public ::System::Object
{
public:
	::RPG::GameCore::DriftComponentData* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_6; // 0x18
	::System::Single Field_1_3; // 0x24
	::UnityEngine::Vector3 Field_1_5; // 0x28
	::UnityEngine::Vector3 Field_1_4; // 0x34
	::UnityEngine::Vector3 Field_1_2; // 0x40
	::UnityEngine::Vector3 Field_1_1; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB0848A1DBCB597F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6DE3EFD6EF87C7A2(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_AB0848A1DBCB597F_METHOD_1_6DE3EFD6EF87C7A2_OFFSET))(this, a1);
	}
};
