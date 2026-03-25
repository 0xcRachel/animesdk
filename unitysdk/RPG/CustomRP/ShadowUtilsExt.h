#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"

#define RPG_CUSTOMRP_SHADOWUTILSEXT_GET_FORCESHADOWPOINTSAMPLING_OFFSET UNITYSDK_OFFSET(0x16AEFFE0)
#define RPG_CUSTOMRP_SHADOWUTILSEXT_GET_SHADOWFORMAT_OFFSET UNITYSDK_OFFSET(0x16AEFFB0)
#define RPG_CUSTOMRP_SHADOWUTILSEXT_INIT_OFFSET UNITYSDK_OFFSET(0x16AF0020)
#define RPG_CUSTOMRP_SHADOWUTILSEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AF0170)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ShadowUtilsExt_TypeDefinitionIndex = 29503;

	class ShadowUtilsExt : public ::System::Object
	{
	public:
		static ::UnityEngine::RenderTextureFormat* StaticGet__ShadowmapFormat()
		{
			return (::UnityEngine::RenderTextureFormat*)Il2CppClass::FromTypeDefinitionIndex(ShadowUtilsExt_TypeDefinitionIndex)->GetStaticField(0xC4D0);
		}
		static ::System::Boolean* StaticGet_usesReversedZBuffer()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ShadowUtilsExt_TypeDefinitionIndex)->GetStaticField(0xC4D4);
		}
		static ::System::Boolean* StaticGet__ForceShadowPointSampling()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ShadowUtilsExt_TypeDefinitionIndex)->GetStaticField(0xC4D5);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__textureScaleAndBias()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(ShadowUtilsExt_TypeDefinitionIndex)->GetStaticField(0xC4D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADOWUTILSEXT__CCTOR_OFFSET))();
		}

		static ::UnityEngine::RenderTextureFormat get_shadowFormat()
		{
			return ((::UnityEngine::RenderTextureFormat(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADOWUTILSEXT_GET_SHADOWFORMAT_OFFSET))();
		}

		static ::System::Boolean get_forceShadowPointSampling()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADOWUTILSEXT_GET_FORCESHADOWPOINTSAMPLING_OFFSET))();
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADOWUTILSEXT_INIT_OFFSET))();
		}
	};
}
