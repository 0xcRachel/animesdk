#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/CompareFunction.h"
#include "unitysdk/UnityEngine/Rendering/StencilOp.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_STENCILSTATE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x204C4A0)
#define UNITYENGINE_RENDERING_STENCILSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x204C430)
#define UNITYENGINE_RENDERING_STENCILSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x204C4B0)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_COMPAREFUNCTIONBACK_OFFSET UNITYSDK_OFFSET(0x13F0000)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_COMPAREFUNCTIONFRONT_OFFSET UNITYSDK_OFFSET(0xD7380)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1FFDC00)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_FAILOPERATIONBACK_OFFSET UNITYSDK_OFFSET(0x20013D0)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_FAILOPERATIONFRONT_OFFSET UNITYSDK_OFFSET(0x200B8C0)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_PASSOPERATIONBACK_OFFSET UNITYSDK_OFFSET(0x20013C0)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_PASSOPERATIONFRONT_OFFSET UNITYSDK_OFFSET(0x2007360)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_READMASK_OFFSET UNITYSDK_OFFSET(0x202CAB0)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_WRITEMASK_OFFSET UNITYSDK_OFFSET(0x2007340)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_ZFAILOPERATIONBACK_OFFSET UNITYSDK_OFFSET(0x202FCD0)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_ZFAILOPERATIONFRONT_OFFSET UNITYSDK_OFFSET(0x2037350)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_COMPAREFUNCTIONBACK_OFFSET UNITYSDK_OFFSET(0x2037370)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_COMPAREFUNCTIONFRONT_OFFSET UNITYSDK_OFFSET(0xD7390)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0xCE9D0)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_FAILOPERATIONBACK_OFFSET UNITYSDK_OFFSET(0x2037390)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_FAILOPERATIONFRONT_OFFSET UNITYSDK_OFFSET(0x2037340)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_PASSOPERATIONBACK_OFFSET UNITYSDK_OFFSET(0x2037380)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_PASSOPERATIONFRONT_OFFSET UNITYSDK_OFFSET(0x2037330)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_READMASK_OFFSET UNITYSDK_OFFSET(0x2037310)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_WRITEMASK_OFFSET UNITYSDK_OFFSET(0x2037320)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_ZFAILOPERATIONBACK_OFFSET UNITYSDK_OFFSET(0x20373A0)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_ZFAILOPERATIONFRONT_OFFSET UNITYSDK_OFFSET(0x2037360)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int StencilState_TypeDefinitionIndex = 4557;

	struct alignas(1) StencilState
	{
		::System::Byte m_Enabled; // 0x10
		::System::Byte m_ReadMask; // 0x11
		::System::Byte m_WriteMask; // 0x12
		::System::Byte m_Padding; // 0x13
		::System::Byte m_CompareFunctionFront; // 0x14
		::System::Byte m_PassOperationFront; // 0x15
		::System::Byte m_FailOperationFront; // 0x16
		::System::Byte m_ZFailOperationFront; // 0x17
		::System::Byte m_CompareFunctionBack; // 0x18
		::System::Byte m_PassOperationBack; // 0x19
		::System::Byte m_FailOperationBack; // 0x1A
		::System::Byte m_ZFailOperationBack; // 0x1B

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Byte get_readMask()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_READMASK_OFFSET))(this);
		}

		::System::Void set_readMask(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_READMASK_OFFSET))(this, value);
		}

		::System::Byte get_writeMask()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_WRITEMASK_OFFSET))(this);
		}

		::System::Void set_writeMask(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_WRITEMASK_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::CompareFunction get_compareFunctionFront()
		{
			return ((::UnityEngine::Rendering::CompareFunction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_COMPAREFUNCTIONFRONT_OFFSET))(this);
		}

		::System::Void set_compareFunctionFront(::UnityEngine::Rendering::CompareFunction value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CompareFunction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_COMPAREFUNCTIONFRONT_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::StencilOp get_passOperationFront()
		{
			return ((::UnityEngine::Rendering::StencilOp(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_PASSOPERATIONFRONT_OFFSET))(this);
		}

		::System::Void set_passOperationFront(::UnityEngine::Rendering::StencilOp value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_PASSOPERATIONFRONT_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::StencilOp get_failOperationFront()
		{
			return ((::UnityEngine::Rendering::StencilOp(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_FAILOPERATIONFRONT_OFFSET))(this);
		}

		::System::Void set_failOperationFront(::UnityEngine::Rendering::StencilOp value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_FAILOPERATIONFRONT_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::StencilOp get_zFailOperationFront()
		{
			return ((::UnityEngine::Rendering::StencilOp(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_ZFAILOPERATIONFRONT_OFFSET))(this);
		}

		::System::Void set_zFailOperationFront(::UnityEngine::Rendering::StencilOp value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_ZFAILOPERATIONFRONT_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::CompareFunction get_compareFunctionBack()
		{
			return ((::UnityEngine::Rendering::CompareFunction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_COMPAREFUNCTIONBACK_OFFSET))(this);
		}

		::System::Void set_compareFunctionBack(::UnityEngine::Rendering::CompareFunction value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CompareFunction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_COMPAREFUNCTIONBACK_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::StencilOp get_passOperationBack()
		{
			return ((::UnityEngine::Rendering::StencilOp(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_PASSOPERATIONBACK_OFFSET))(this);
		}

		::System::Void set_passOperationBack(::UnityEngine::Rendering::StencilOp value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_PASSOPERATIONBACK_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::StencilOp get_failOperationBack()
		{
			return ((::UnityEngine::Rendering::StencilOp(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_FAILOPERATIONBACK_OFFSET))(this);
		}

		::System::Void set_failOperationBack(::UnityEngine::Rendering::StencilOp value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_FAILOPERATIONBACK_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::StencilOp get_zFailOperationBack()
		{
			return ((::UnityEngine::Rendering::StencilOp(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_ZFAILOPERATIONBACK_OFFSET))(this);
		}

		::System::Void set_zFailOperationBack(::UnityEngine::Rendering::StencilOp value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_ZFAILOPERATIONBACK_OFFSET))(this, value);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::StencilState other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::StencilState))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GETHASHCODE_OFFSET))(this);
		}
	};
}
