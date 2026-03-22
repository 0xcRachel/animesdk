#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_GenerateGeoCache_HEU_ColliderInfo_ColliderType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/MeshTopology.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_HEU_COLLIDERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x80E2630)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GenerateGeoCache_HEU_ColliderInfo_TypeDefinitionIndex = 36878;

	class HEU_GenerateGeoCache_HEU_ColliderInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* _collisionVertices; // 0x10
		::System::String* _collisionGroupName; // 0x18
		::Il2CppArray<::System::Int32>* _collisionIndices; // 0x20
		::UnityEngine::Vector3 _colliderSize; // 0x28
		::UnityEngine::MeshTopology _meshTopology; // 0x34
		::System::Single _colliderRadius; // 0x38
		::System::Boolean _isTrigger; // 0x3C
		::System::Boolean _convexCollider; // 0x3D
		::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo_ColliderType _colliderType; // 0x40
		::UnityEngine::Vector3 _colliderCenter; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_HEU_COLLIDERINFO__CTOR_OFFSET))(this);
		}
	};
}
