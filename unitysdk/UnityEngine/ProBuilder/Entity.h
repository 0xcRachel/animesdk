#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/ProBuilder/EntityType.h"

#define UNITYENGINE_PROBUILDER_ENTITY_AWAKE_OFFSET UNITYSDK_OFFSET(0xB97A6E0)
#define UNITYENGINE_PROBUILDER_ENTITY_GET_ENTITYTYPE_OFFSET UNITYSDK_OFFSET(0xB97A6D0)
#define UNITYENGINE_PROBUILDER_ENTITY_SETENTITY_OFFSET UNITYSDK_OFFSET(0xB97A780)
#define UNITYENGINE_PROBUILDER_ENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0xB97A790)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Entity_TypeDefinitionIndex = 39911;

	class Entity : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::ProBuilder::EntityType m_EntityType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ENTITY__CTOR_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::EntityType get_entityType()
		{
			return ((::UnityEngine::ProBuilder::EntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ENTITY_GET_ENTITYTYPE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ENTITY_AWAKE_OFFSET))(this);
		}

		::System::Void SetEntity(::UnityEngine::ProBuilder::EntityType t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::EntityType))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ENTITY_SETENTITY_OFFSET))(this, t);
		}
	};
}
