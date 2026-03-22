#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA31A580)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD_METHOD_1_7865C2E7793795CC_OFFSET UNITYSDK_OFFSET(0xA315CB0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xA319570)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD__CTOR_OFFSET UNITYSDK_OFFSET(0xA31A4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureMovementManager_Class_1_1DE6262BF29C2AFD_TypeDefinitionIndex = 44904;

	class AdventureMovementManager_Class_1_1DE6262BF29C2AFD : public ::System::Object
	{
	public:
		// static const ::System::Single Field_1_0; // 0x0
		::UnityEngine::Transform* Field_1_2; // 0x10
		::System::Int32 Field_1_1; // 0x18
		::UnityEngine::Vector3 Field_1_3; // 0x1C
		::UnityEngine::Quaternion Field_1_4; // 0x28

		::System::Void _ctor(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Method_1_7865C2E7793795CC(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD_METHOD_1_7865C2E7793795CC_OFFSET))(this, a1);
		}
	};
}
