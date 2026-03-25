#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AstraFXAsset; }
namespace UnityEngine { class AstraFXRenderer; }

#define UNITYENGINE_ASTRAFXRENDERERDELEGATE_AFTERCREATERESOURCES_OFFSET UNITYSDK_OFFSET(0x18A031F0)
#define UNITYENGINE_ASTRAFXRENDERERDELEGATE_AFTEREXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x18A03210)
#define UNITYENGINE_ASTRAFXRENDERERDELEGATE_ASTRAFXRENDERERDELEGATE_INIT_OFFSET UNITYSDK_OFFSET(0x18A030D0)
#define UNITYENGINE_ASTRAFXRENDERERDELEGATE_BEFOREEXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x18A03200)
#define UNITYENGINE_ASTRAFXRENDERERDELEGATE_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x18A031C0)
#define UNITYENGINE_ASTRAFXRENDERERDELEGATE_GET_RENDERER_OFFSET UNITYSDK_OFFSET(0x18A031A0)
#define UNITYENGINE_ASTRAFXRENDERERDELEGATE_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x18A031E0)
#define UNITYENGINE_ASTRAFXRENDERERDELEGATE_SET_RENDERER_OFFSET UNITYSDK_OFFSET(0x18A031B0)
#define UNITYENGINE_ASTRAFXRENDERERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A03220)

namespace UnityEngine
{
	inline static constexpr unsigned int AstraFXRendererDelegate_TypeDefinitionIndex = 3903;

	class AstraFXRendererDelegate : public ::System::Object
	{
	public:
		::UnityEngine::AstraFXRenderer* _renderer_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERERDELEGATE__CTOR_OFFSET))(this);
		}

		::UnityEngine::AstraFXRenderer* get_renderer()
		{
			return ((::UnityEngine::AstraFXRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERERDELEGATE_GET_RENDERER_OFFSET))(this);
		}

		::System::Void set_renderer(::UnityEngine::AstraFXRenderer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AstraFXRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERERDELEGATE_SET_RENDERER_OFFSET))(this, value);
		}

		::UnityEngine::AstraFXAsset* get_asset()
		{
			return ((::UnityEngine::AstraFXAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERERDELEGATE_GET_ASSET_OFFSET))(this);
		}

		::System::Void AstraFXRendererDelegate_Init(::UnityEngine::AstraFXRenderer* rdr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AstraFXRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERERDELEGATE_ASTRAFXRENDERERDELEGATE_INIT_OFFSET))(this, rdr);
		}

		::System::Void ResetSimulationState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERERDELEGATE_RESETSIMULATIONSTATE_OFFSET))(this);
		}

		::System::Void AfterCreateResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERERDELEGATE_AFTERCREATERESOURCES_OFFSET))(this);
		}

		::System::Void BeforeExecutePasses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERERDELEGATE_BEFOREEXECUTEPASSES_OFFSET))(this);
		}

		::System::Void AfterExecutePasses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERERDELEGATE_AFTEREXECUTEPASSES_OFFSET))(this);
		}
	};
}
