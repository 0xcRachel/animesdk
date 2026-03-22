#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_PROBUILDER_VECTOR2MASK_GET_X_OFFSET UNITYSDK_OFFSET(0x203A130)
#define UNITYENGINE_PROBUILDER_VECTOR2MASK_GET_Y_OFFSET UNITYSDK_OFFSET(0x203A150)
#define UNITYENGINE_PROBUILDER_VECTOR2MASK_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1809C820)
#define UNITYENGINE_PROBUILDER_VECTOR2MASK_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1809C810)
#define UNITYENGINE_PROBUILDER_VECTOR2MASK_OP_EXCLUSIVEOR_OFFSET UNITYSDK_OFFSET(0x1809C830)
#define UNITYENGINE_PROBUILDER_VECTOR2MASK_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1809C7D0)
#define UNITYENGINE_PROBUILDER_VECTOR2MASK_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1809C7A0)
#define UNITYENGINE_PROBUILDER_VECTOR2MASK_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1809C840)
#define UNITYENGINE_PROBUILDER_VECTOR2MASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1809C880)
#define UNITYENGINE_PROBUILDER_VECTOR2MASK__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCE9D0)
#define UNITYENGINE_PROBUILDER_VECTOR2MASK__CTOR_OFFSET UNITYSDK_OFFSET(0x203A170)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Vector2Mask_TypeDefinitionIndex = 33197;

	struct alignas(1) Vector2Mask
	{
		static ::UnityEngine::ProBuilder::Vector2Mask* StaticGet_XY()
		{
			return (::UnityEngine::ProBuilder::Vector2Mask*)Il2CppClass::FromTypeDefinitionIndex(Vector2Mask_TypeDefinitionIndex)->GetStaticField(0xB590);
		}
		// static const ::System::Byte X = 0x1; // 0x0
		// static const ::System::Byte Y = 0x2; // 0x0
		::System::Byte m_Mask; // 0x10

		/*
		::System::Void _ctor(::UnityEngine::Vector3 v, ::System::Single epsilon)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR2MASK__CTOR_OFFSET))(this, v, epsilon);
		}
		*/

		::System::Void _ctor_1(::System::Byte mask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR2MASK__CTOR_1_OFFSET))(this, mask);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR2MASK__CCTOR_OFFSET))();
		}

		::System::Single get_x()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR2MASK_GET_X_OFFSET))(this);
		}

		::System::Single get_y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR2MASK_GET_Y_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Vector2 op_Implicit(::UnityEngine::ProBuilder::Vector2Mask mask)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::ProBuilder::Vector2Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR2MASK_OP_IMPLICIT_OFFSET))(mask);
		}
		*/

		/*
		static ::UnityEngine::ProBuilder::Vector2Mask op_Implicit_1(::UnityEngine::Vector2 v)
		{
			return ((::UnityEngine::ProBuilder::Vector2Mask(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR2MASK_OP_IMPLICIT_1_OFFSET))(v);
		}
		*/

		static ::UnityEngine::ProBuilder::Vector2Mask op_BitwiseOr(::UnityEngine::ProBuilder::Vector2Mask left, ::UnityEngine::ProBuilder::Vector2Mask right)
		{
			return ((::UnityEngine::ProBuilder::Vector2Mask(*)(::UnityEngine::ProBuilder::Vector2Mask, ::UnityEngine::ProBuilder::Vector2Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR2MASK_OP_BITWISEOR_OFFSET))(left, right);
		}

		static ::UnityEngine::ProBuilder::Vector2Mask op_BitwiseAnd(::UnityEngine::ProBuilder::Vector2Mask left, ::UnityEngine::ProBuilder::Vector2Mask right)
		{
			return ((::UnityEngine::ProBuilder::Vector2Mask(*)(::UnityEngine::ProBuilder::Vector2Mask, ::UnityEngine::ProBuilder::Vector2Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR2MASK_OP_BITWISEAND_OFFSET))(left, right);
		}

		static ::UnityEngine::ProBuilder::Vector2Mask op_ExclusiveOr(::UnityEngine::ProBuilder::Vector2Mask left, ::UnityEngine::ProBuilder::Vector2Mask right)
		{
			return ((::UnityEngine::ProBuilder::Vector2Mask(*)(::UnityEngine::ProBuilder::Vector2Mask, ::UnityEngine::ProBuilder::Vector2Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR2MASK_OP_EXCLUSIVEOR_OFFSET))(left, right);
		}

		/*
		static ::UnityEngine::Vector2 op_Multiply(::UnityEngine::ProBuilder::Vector2Mask mask, ::System::Single value)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::ProBuilder::Vector2Mask, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR2MASK_OP_MULTIPLY_OFFSET))(mask, value);
		}
		*/
	};
}
