#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class CustomPostProcessData; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }

#define RPG_CUSTOMRP_MATERIALLIBRARY_CLEANUP_OFFSET UNITYSDK_OFFSET(0x15A684B0)
#define RPG_CUSTOMRP_MATERIALLIBRARY_LOAD_OFFSET UNITYSDK_OFFSET(0x15A683F0)
#define RPG_CUSTOMRP_MATERIALLIBRARY__CTOR_OFFSET UNITYSDK_OFFSET(0x15A682E0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MaterialLibrary_TypeDefinitionIndex = 35147;

	class MaterialLibrary : public ::System::Object
	{
	public:
		::UnityEngine::Material* lut2DBaker; // 0x10
		::UnityEngine::Material* PPPatern; // 0x18
		::UnityEngine::Material* motionBlur; // 0x20
		::UnityEngine::Material* uber; // 0x28
		::UnityEngine::Material* fxaa; // 0x30
		::UnityEngine::Material* smaa; // 0x38
		::UnityEngine::Material* PPLensGlitch2; // 0x40
		::UnityEngine::Material* PPLensGlitch; // 0x48
		::UnityEngine::Material* lensFlare; // 0x50

		::System::Void _ctor(::RPG::CustomRP::CustomPostProcessData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomPostProcessData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MATERIALLIBRARY__CTOR_OFFSET))(this, data);
		}

		::UnityEngine::Material* Load(::UnityEngine::Shader* shader)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MATERIALLIBRARY_LOAD_OFFSET))(this, shader);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MATERIALLIBRARY_CLEANUP_OFFSET))(this);
		}
	};
}
