#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define UNITYENGINE_TREEPROTOTYPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A6FC040)
#define UNITYENGINE_TREEPROTOTYPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A6FBF70)
#define UNITYENGINE_TREEPROTOTYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A6FC0E0)
#define UNITYENGINE_TREEPROTOTYPE_GET_BENDFACTOR_OFFSET UNITYSDK_OFFSET(0x1A6FBF40)
#define UNITYENGINE_TREEPROTOTYPE_GET_PREFAB_OFFSET UNITYSDK_OFFSET(0x1A6FBF20)
#define UNITYENGINE_TREEPROTOTYPE_SET_BENDFACTOR_OFFSET UNITYSDK_OFFSET(0x1A6FBF50)
#define UNITYENGINE_TREEPROTOTYPE_SET_PREFAB_OFFSET UNITYSDK_OFFSET(0x1A6FBF30)
#define UNITYENGINE_TREEPROTOTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6FBF60)

namespace UnityEngine
{
	inline static constexpr unsigned int TreePrototype_TypeDefinitionIndex = 5241;

	class TreePrototype : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* m_Prefab; // 0x10
		::System::Single m_BendFactor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TREEPROTOTYPE__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_prefab()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TREEPROTOTYPE_GET_PREFAB_OFFSET))(this);
		}

		::System::Void set_prefab(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TREEPROTOTYPE_SET_PREFAB_OFFSET))(this, value);
		}

		::System::Single get_bendFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TREEPROTOTYPE_GET_BENDFACTOR_OFFSET))(this);
		}

		::System::Void set_bendFactor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TREEPROTOTYPE_SET_BENDFACTOR_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TREEPROTOTYPE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TREEPROTOTYPE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::UnityEngine::TreePrototype* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::TreePrototype*))((::PBYTE)hIl2Cpp + UNITYENGINE_TREEPROTOTYPE_EQUALS_1_OFFSET))(this, other);
		}
	};
}
