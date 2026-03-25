#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/GCFreeClosure/SValue_InternalValue.h"
#include "unitysdk/UnityEngine/GCFreeClosure/SValue_Type.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_10_OFFSET UNITYSDK_OFFSET(0x18A1DE80)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_11_OFFSET UNITYSDK_OFFSET(0x18A1DEA0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_12_OFFSET UNITYSDK_OFFSET(0x18A1DEC0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x18A1DD60)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_2_OFFSET UNITYSDK_OFFSET(0x18A1DD80)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_3_OFFSET UNITYSDK_OFFSET(0x18A1DDA0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_4_OFFSET UNITYSDK_OFFSET(0x18A1DDC0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_5_OFFSET UNITYSDK_OFFSET(0x18A1DDE0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_6_OFFSET UNITYSDK_OFFSET(0x18A1DE00)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_7_OFFSET UNITYSDK_OFFSET(0x18A1DE20)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_8_OFFSET UNITYSDK_OFFSET(0x18A1DE40)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_9_OFFSET UNITYSDK_OFFSET(0x18A1DE60)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x18A1DD40)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2118DC0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x2118D90)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_FROMOBJECT_OFFSET UNITYSDK_OFFSET(0x18A1DD20)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2118E10)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_GET_NIL_OFFSET UNITYSDK_OFFSET(0x18A1D300)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x68F0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_SET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x26F0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x21187E0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOBYTE_OFFSET UNITYSDK_OFFSET(0x21188C0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOCHAR_OFFSET UNITYSDK_OFFSET(0x2118920)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x2118CB0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOINT16_OFFSET UNITYSDK_OFFSET(0x2118920)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOINT32_OFFSET UNITYSDK_OFFSET(0x2118990)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOINT64_OFFSET UNITYSDK_OFFSET(0x2118A90)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x2118D80)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x21188C0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x2118BD0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x21187D0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOUINT16_OFFSET UNITYSDK_OFFSET(0x2118920)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOUINT32_OFFSET UNITYSDK_OFFSET(0x2118A10)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOUINT64_OFFSET UNITYSDK_OFFSET(0x2118B10)
#define UNITYENGINE_GCFREECLOSURE_SVALUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A1D2E0)

namespace UnityEngine::GCFreeClosure
{
	inline static constexpr unsigned int SValue_TypeDefinitionIndex = 4271;

	struct alignas(8) SValue
	{
		static ::UnityEngine::GCFreeClosure::SValue* StaticGet__nil()
		{
			return (::UnityEngine::GCFreeClosure::SValue*)Il2CppClass::FromTypeDefinitionIndex(SValue_TypeDefinitionIndex)->GetStaticField(0x351E0);
		}
		::UnityEngine::GCFreeClosure::SValue_InternalValue _val; // 0x10
		::System::Object* _obj; // 0x18
		::UnityEngine::GCFreeClosure::SValue_Type _ValueType_k__BackingField; // 0x20

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::GCFreeClosure::SValue get_nil()
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_GET_NIL_OFFSET))();
		}

		::UnityEngine::GCFreeClosure::SValue_Type get_ValueType()
		{
			return ((::UnityEngine::GCFreeClosure::SValue_Type(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Void set_ValueType(::UnityEngine::GCFreeClosure::SValue_Type value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GCFreeClosure::SValue_Type))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_SET_VALUETYPE_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOSTRING_OFFSET))(this);
		}

		::System::Boolean ToBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOBOOLEAN_OFFSET))(this);
		}

		::System::SByte ToSByte()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOSBYTE_OFFSET))(this);
		}

		::System::Byte ToByte()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOBYTE_OFFSET))(this);
		}

		::System::Char ToChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOCHAR_OFFSET))(this);
		}

		::System::Int16 ToInt16()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOINT16_OFFSET))(this);
		}

		::System::UInt16 ToUInt16()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOUINT16_OFFSET))(this);
		}

		::System::Int32 ToInt32()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOINT32_OFFSET))(this);
		}

		::System::UInt32 ToUInt32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOUINT32_OFFSET))(this);
		}

		::System::Int64 ToInt64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOINT64_OFFSET))(this);
		}

		::System::UInt64 ToUInt64()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOUINT64_OFFSET))(this);
		}

		::System::Single ToSingle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOSINGLE_OFFSET))(this);
		}

		::System::Double ToDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TODOUBLE_OFFSET))(this);
		}

		::System::Object* ToObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOOBJECT_OFFSET))(this);
		}

		static ::UnityEngine::GCFreeClosure::SValue FromObject(::System::Object* val)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_FROMOBJECT_OFFSET))(val);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor(::System::Boolean val)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_OFFSET))(val);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor_1(::System::Byte val)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_1_OFFSET))(val);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor_2(::System::SByte val)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::SByte))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_2_OFFSET))(val);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor_3(::System::Char val)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_3_OFFSET))(val);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor_4(::System::Int16 val)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_4_OFFSET))(val);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor_5(::System::UInt16 val)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_5_OFFSET))(val);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor_6(::System::Int32 val)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_6_OFFSET))(val);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor_7(::System::UInt32 val)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_7_OFFSET))(val);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor_8(::System::Int64& val)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::Int64&))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_8_OFFSET))(val);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor_9(::System::UInt64& val)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::UInt64&))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_9_OFFSET))(val);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor_10(::System::Single val)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_10_OFFSET))(val);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor_11(::System::Double& val)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::Double&))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_11_OFFSET))(val);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor_12(::System::String* val)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_12_OFFSET))(val);
		}

		::System::Boolean Equals(::UnityEngine::GCFreeClosure::SValue other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GCFreeClosure::SValue))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_GETHASHCODE_OFFSET))(this);
		}
	};
}
