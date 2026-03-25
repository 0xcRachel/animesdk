#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"

namespace UnityEngine { class Material; }

#define UNITYENGINE_MATERIALANIMATIONBINDING_SETMATERIAL_OFFSET UNITYSDK_OFFSET(0x18A2A6F0)
#define UNITYENGINE_MATERIALANIMATIONBINDING_SET_MATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x18A2A6E0)

namespace UnityEngine
{
	inline static constexpr unsigned int MaterialAnimationBinding_TypeDefinitionIndex = 4186;

	class MaterialAnimationBinding : public ::UnityEngine::Component
	{
	public:
		::System::Void set_materialCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALANIMATIONBINDING_SET_MATERIALCOUNT_OFFSET))(this, value);
		}

		::System::Void SetMaterial(::UnityEngine::Material* material, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALANIMATIONBINDING_SETMATERIAL_OFFSET))(this, material, index);
		}
	};
}
