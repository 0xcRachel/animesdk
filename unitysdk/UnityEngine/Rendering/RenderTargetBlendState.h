#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/BlendMode.h"
#include "unitysdk/UnityEngine/Rendering/BlendOp.h"
#include "unitysdk/UnityEngine/Rendering/ColorWriteMask.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3890460)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3890400)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3890500)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_ALPHABLENDOPERATION_OFFSET UNITYSDK_OFFSET(0x38893E0)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_COLORBLENDOPERATION_OFFSET UNITYSDK_OFFSET(0x382B970)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_DESTINATIONALPHABLENDMODE_OFFSET UNITYSDK_OFFSET(0x378B020)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_DESTINATIONCOLORBLENDMODE_OFFSET UNITYSDK_OFFSET(0xFD2430)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_SOURCEALPHABLENDMODE_OFFSET UNITYSDK_OFFSET(0xFD2450)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_SOURCECOLORBLENDMODE_OFFSET UNITYSDK_OFFSET(0xFD2410)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_WRITEMASK_OFFSET UNITYSDK_OFFSET(0x72BD00)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_ALPHABLENDOPERATION_OFFSET UNITYSDK_OFFSET(0x38893F0)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_COLORBLENDOPERATION_OFFSET UNITYSDK_OFFSET(0x38893D0)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_DESTINATIONALPHABLENDMODE_OFFSET UNITYSDK_OFFSET(0x378B030)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_DESTINATIONCOLORBLENDMODE_OFFSET UNITYSDK_OFFSET(0xFD2440)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_SOURCEALPHABLENDMODE_OFFSET UNITYSDK_OFFSET(0xFD2460)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_SOURCECOLORBLENDMODE_OFFSET UNITYSDK_OFFSET(0xFD2420)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_WRITEMASK_OFFSET UNITYSDK_OFFSET(0xFD2400)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderTargetBlendState_TypeDefinitionIndex = 4748;

	struct alignas(1) RenderTargetBlendState
	{
		::System::Byte m_WriteMask; // 0x10
		::System::Byte m_SourceColorBlendMode; // 0x11
		::System::Byte m_DestinationColorBlendMode; // 0x12
		::System::Byte m_SourceAlphaBlendMode; // 0x13
		::System::Byte m_DestinationAlphaBlendMode; // 0x14
		::System::Byte m_ColorBlendOperation; // 0x15
		::System::Byte m_AlphaBlendOperation; // 0x16
		::System::Byte m_Padding; // 0x17

		::UnityEngine::Rendering::ColorWriteMask get_writeMask()
		{
			return ((::UnityEngine::Rendering::ColorWriteMask(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_WRITEMASK_OFFSET))(this);
		}

		::System::Void set_writeMask(::UnityEngine::Rendering::ColorWriteMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ColorWriteMask))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_WRITEMASK_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::BlendMode get_sourceColorBlendMode()
		{
			return ((::UnityEngine::Rendering::BlendMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_SOURCECOLORBLENDMODE_OFFSET))(this);
		}

		::System::Void set_sourceColorBlendMode(::UnityEngine::Rendering::BlendMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BlendMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_SOURCECOLORBLENDMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::BlendMode get_destinationColorBlendMode()
		{
			return ((::UnityEngine::Rendering::BlendMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_DESTINATIONCOLORBLENDMODE_OFFSET))(this);
		}

		::System::Void set_destinationColorBlendMode(::UnityEngine::Rendering::BlendMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BlendMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_DESTINATIONCOLORBLENDMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::BlendMode get_sourceAlphaBlendMode()
		{
			return ((::UnityEngine::Rendering::BlendMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_SOURCEALPHABLENDMODE_OFFSET))(this);
		}

		::System::Void set_sourceAlphaBlendMode(::UnityEngine::Rendering::BlendMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BlendMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_SOURCEALPHABLENDMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::BlendMode get_destinationAlphaBlendMode()
		{
			return ((::UnityEngine::Rendering::BlendMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_DESTINATIONALPHABLENDMODE_OFFSET))(this);
		}

		::System::Void set_destinationAlphaBlendMode(::UnityEngine::Rendering::BlendMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BlendMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_DESTINATIONALPHABLENDMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::BlendOp get_colorBlendOperation()
		{
			return ((::UnityEngine::Rendering::BlendOp(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_COLORBLENDOPERATION_OFFSET))(this);
		}

		::System::Void set_colorBlendOperation(::UnityEngine::Rendering::BlendOp a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BlendOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_COLORBLENDOPERATION_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::BlendOp get_alphaBlendOperation()
		{
			return ((::UnityEngine::Rendering::BlendOp(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_ALPHABLENDOPERATION_OFFSET))(this);
		}

		::System::Void set_alphaBlendOperation(::UnityEngine::Rendering::BlendOp a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BlendOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_ALPHABLENDOPERATION_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::RenderTargetBlendState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetBlendState))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GETHASHCODE_OFFSET))(this);
		}
	};
}
