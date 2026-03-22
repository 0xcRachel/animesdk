#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/MonoPushDownObject_MotionCurve.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class MonoPushDownObject_Class_3_356D7F803ADB5B01; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_INIT_OFFSET UNITYSDK_OFFSET(0x9C52570)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9C52680)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_METHOD_5_71EEEF71468B2F7F_OFFSET UNITYSDK_OFFSET(0x9C536D0)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_METHOD_5_B5D61ED19C462138_OFFSET UNITYSDK_OFFSET(0x9C53660)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_METHOD_5_BAE42965A38A00B6_OFFSET UNITYSDK_OFFSET(0x9C53320)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_PUSH_OFFSET UNITYSDK_OFFSET(0x9C52620)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_RAYCAST_OFFSET UNITYSDK_OFFSET(0x9C52CC0)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_RESET_OFFSET UNITYSDK_OFFSET(0x9C525C0)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x9C54430)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x9C543F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int MonoPushDownObject_TypeDefinitionIndex = 61949;

	class MonoPushDownObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_5_15()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(MonoPushDownObject_TypeDefinitionIndex)->GetStaticField(0x42450);
		}
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_5_16()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(MonoPushDownObject_TypeDefinitionIndex)->GetStaticField(0x42458);
		}
		::UnityEngine::Vector3 forward; // 0x18
		::UnityEngine::Vector3 right; // 0x24
		::RPG::Client::Prop::MonoPushDownObject_MotionCurve locationCurve; // 0x30
		::RPG::Client::Prop::MonoPushDownObject_MotionCurve rotationCurve; // 0x40
		::System::Single downTimePoint; // 0x50
		::System::Single downGravity; // 0x54
		::System::Single maxDownSpeed; // 0x58
		::UnityEngine::CapsuleCollider* rootCollider; // 0x60
		::UnityEngine::LayerMask raycastLayers; // 0x68
		::RPG::GameCore::GameEntity* Field_5_9; // 0x70
		::System::Boolean Field_5_10; // 0x78
		::System::Boolean Field_5_11; // 0x79
		::System::Single Field_5_12; // 0x7C
		::System::Single Field_5_13; // 0x80
		::RPG::Client::Prop::MonoPushDownObject_Class_3_356D7F803ADB5B01* Field_5_14; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT__CCTOR_OFFSET))();
		}

		::System::Void Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_INIT_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_RESET_OFFSET))(this);
		}

		::System::Void Push(::RPG::Client::Prop::MonoPushDownObject_Class_3_356D7F803ADB5B01* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::MonoPushDownObject_Class_3_356D7F803ADB5B01*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_PUSH_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Raycast(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_RAYCAST_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_BAE42965A38A00B6(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::GameCore::GameEntity*& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::GameEntity*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_METHOD_5_BAE42965A38A00B6_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_5_71EEEF71468B2F7F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::GameCore::GameEntity*& a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::GameEntity*&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_METHOD_5_71EEEF71468B2F7F_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_B5D61ED19C462138(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_METHOD_5_B5D61ED19C462138_OFFSET))(this, a1);
		}
	};
}
