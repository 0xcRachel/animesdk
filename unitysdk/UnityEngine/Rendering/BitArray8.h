#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Rendering { class IBitArray; }

#define UNITYENGINE_RENDERING_BITARRAY8_BITAND_OFFSET UNITYSDK_OFFSET(0x22E11D0)
#define UNITYENGINE_RENDERING_BITARRAY8_BITNOT_OFFSET UNITYSDK_OFFSET(0x22E1350)
#define UNITYENGINE_RENDERING_BITARRAY8_BITOR_OFFSET UNITYSDK_OFFSET(0x22E1290)
#define UNITYENGINE_RENDERING_BITARRAY8_EQUALS_OFFSET UNITYSDK_OFFSET(0x22E13A0)
#define UNITYENGINE_RENDERING_BITARRAY8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22E1400)
#define UNITYENGINE_RENDERING_BITARRAY8_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x2177580)
#define UNITYENGINE_RENDERING_BITARRAY8_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x22E1110)
#define UNITYENGINE_RENDERING_BITARRAY8_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x1DB5630)
#define UNITYENGINE_RENDERING_BITARRAY8_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x22E1120)
#define UNITYENGINE_RENDERING_BITARRAY8_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x22E1130)
#define UNITYENGINE_RENDERING_BITARRAY8_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x18AF48E0)
#define UNITYENGINE_RENDERING_BITARRAY8_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x18AF48D0)
#define UNITYENGINE_RENDERING_BITARRAY8_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18AF4AC0)
#define UNITYENGINE_RENDERING_BITARRAY8_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18AF4AD0)
#define UNITYENGINE_RENDERING_BITARRAY8_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x18AF48C0)
#define UNITYENGINE_RENDERING_BITARRAY8_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x22E1140)
#define UNITYENGINE_RENDERING_BITARRAY8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x22E1160)
#define UNITYENGINE_RENDERING_BITARRAY8__CTOR_OFFSET UNITYSDK_OFFSET(0x65A180)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BitArray8_TypeDefinitionIndex = 33500;

	struct alignas(1) BitArray8
	{
		::System::Byte data; // 0x10

		::System::Void _ctor(::System::Byte initValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8__CTOR_OFFSET))(this, initValue);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* bitIndexTrue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8__CTOR_1_OFFSET))(this, bitIndexTrue);
		}

		::System::UInt32 get_capacity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_GET_CAPACITY_OFFSET))(this);
		}

		::System::Boolean get_allFalse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_GET_ALLFALSE_OFFSET))(this);
		}

		::System::Boolean get_allTrue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_GET_ALLTRUE_OFFSET))(this);
		}

		::System::String* get_humanizedData()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_GET_HUMANIZEDDATA_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::UInt32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::UInt32 index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_SET_ITEM_OFFSET))(this, index, value);
		}

		static ::UnityEngine::Rendering::BitArray8 op_OnesComplement(::UnityEngine::Rendering::BitArray8 a)
		{
			return ((::UnityEngine::Rendering::BitArray8(*)(::UnityEngine::Rendering::BitArray8))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_OP_ONESCOMPLEMENT_OFFSET))(a);
		}

		static ::UnityEngine::Rendering::BitArray8 op_BitwiseOr(::UnityEngine::Rendering::BitArray8 a, ::UnityEngine::Rendering::BitArray8 b)
		{
			return ((::UnityEngine::Rendering::BitArray8(*)(::UnityEngine::Rendering::BitArray8, ::UnityEngine::Rendering::BitArray8))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_OP_BITWISEOR_OFFSET))(a, b);
		}

		static ::UnityEngine::Rendering::BitArray8 op_BitwiseAnd(::UnityEngine::Rendering::BitArray8 a, ::UnityEngine::Rendering::BitArray8 b)
		{
			return ((::UnityEngine::Rendering::BitArray8(*)(::UnityEngine::Rendering::BitArray8, ::UnityEngine::Rendering::BitArray8))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_OP_BITWISEAND_OFFSET))(a, b);
		}

		::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* other)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_BITAND_OFFSET))(this, other);
		}

		::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* other)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_BITOR_OFFSET))(this, other);
		}

		::UnityEngine::Rendering::IBitArray* BitNot()
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_BITNOT_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Rendering::BitArray8 a, ::UnityEngine::Rendering::BitArray8 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray8, ::UnityEngine::Rendering::BitArray8))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Rendering::BitArray8 a, ::UnityEngine::Rendering::BitArray8 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray8, ::UnityEngine::Rendering::BitArray8))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_GETHASHCODE_OFFSET))(this);
		}
	};
}
