#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AnyType_Type.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_ANYTYPE_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x237DDA0)
#define UNITYENGINE_ANYTYPE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x237DD30)
#define UNITYENGINE_ANYTYPE_CREATEWITHBOOL_INJECTED_OFFSET UNITYSDK_OFFSET(0x19CFAE30)
#define UNITYENGINE_ANYTYPE_CREATEWITHBOOL_OFFSET UNITYSDK_OFFSET(0x19CFAAA0)
#define UNITYENGINE_ANYTYPE_CREATEWITHDOUBLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x19CFAE20)
#define UNITYENGINE_ANYTYPE_CREATEWITHDOUBLE_OFFSET UNITYSDK_OFFSET(0x19CFAD80)
#define UNITYENGINE_ANYTYPE_CREATEWITHLONG_INJECTED_OFFSET UNITYSDK_OFFSET(0x19CFAE00)
#define UNITYENGINE_ANYTYPE_CREATEWITHLONG_OFFSET UNITYSDK_OFFSET(0x19CFACD0)
#define UNITYENGINE_ANYTYPE_CREATEWITHOBJECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x19CFAE40)
#define UNITYENGINE_ANYTYPE_CREATEWITHOBJECT_OFFSET UNITYSDK_OFFSET(0x19CFADB0)
#define UNITYENGINE_ANYTYPE_CREATEWITHULONG_INJECTED_OFFSET UNITYSDK_OFFSET(0x19CFAE10)
#define UNITYENGINE_ANYTYPE_CREATEWITHULONG_OFFSET UNITYSDK_OFFSET(0x19CFAD40)
#define UNITYENGINE_ANYTYPE_CREATE_1_OFFSET UNITYSDK_OFFSET(0x19CFAB40)
#define UNITYENGINE_ANYTYPE_CREATE_2_OFFSET UNITYSDK_OFFSET(0x19CFAD10)
#define UNITYENGINE_ANYTYPE_CREATE_3_OFFSET UNITYSDK_OFFSET(0x19CFABB0)
#define UNITYENGINE_ANYTYPE_CREATE_4_OFFSET UNITYSDK_OFFSET(0x19CFAC20)
#define UNITYENGINE_ANYTYPE_CREATE_5_OFFSET UNITYSDK_OFFSET(0x19CFAC90)
#define UNITYENGINE_ANYTYPE_CREATE_6_OFFSET UNITYSDK_OFFSET(0x19CFAA40)
#define UNITYENGINE_ANYTYPE_CREATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x19CFADF0)
#define UNITYENGINE_ANYTYPE_CREATE_OFFSET UNITYSDK_OFFSET(0x19CFAA70)
#define UNITYENGINE_ANYTYPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x237DDC0)
#define UNITYENGINE_ANYTYPE_GETDETERMINISTICHASHCODE_OFFSET UNITYSDK_OFFSET(0x19CFB130)
#define UNITYENGINE_ANYTYPE_GETHASHCODEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x19CFB290)
#define UNITYENGINE_ANYTYPE_GETHASHCODEINTERNAL_OFFSET UNITYSDK_OFFSET(0x237DEC0)
#define UNITYENGINE_ANYTYPE_GETHASHCODEWITHSEED_OFFSET UNITYSDK_OFFSET(0x237DE50)
#define UNITYENGINE_ANYTYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x237DD20)
#define UNITYENGINE_ANYTYPE_GETOBJECTINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x19CFAE70)
#define UNITYENGINE_ANYTYPE_GETOBJECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x237DD00)
#define UNITYENGINE_ANYTYPE_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x237DD00)
#define UNITYENGINE_ANYTYPE_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x19CFA110)
#define UNITYENGINE_ANYTYPE_HASHCOMBINE_OFFSET UNITYSDK_OFFSET(0x19CFA370)
#define UNITYENGINE_ANYTYPE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x19CFAB00)
#define UNITYENGINE_ANYTYPE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x19CFAB80)
#define UNITYENGINE_ANYTYPE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x19CFABF0)
#define UNITYENGINE_ANYTYPE_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x19CFAC50)
#define UNITYENGINE_ANYTYPE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x19CFAAD0)
#define UNITYENGINE_ANYTYPE_TONATIVESTRINGFORMAT_INJECTED_OFFSET UNITYSDK_OFFSET(0x19CFB280)
#define UNITYENGINE_ANYTYPE_TONATIVESTRINGFORMAT_OFFSET UNITYSDK_OFFSET(0x237DE90)
#define UNITYENGINE_ANYTYPE_TONATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x19CFB230)
#define UNITYENGINE_ANYTYPE_TONATIVESTRING_OFFSET UNITYSDK_OFFSET(0x237DE60)
#define UNITYENGINE_ANYTYPE_TOSTRINGINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x19CFB240)
#define UNITYENGINE_ANYTYPE_TOSTRINGINTERNAL_OFFSET UNITYSDK_OFFSET(0x237DD10)
#define UNITYENGINE_ANYTYPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x237DD10)

namespace UnityEngine
{
	inline static constexpr unsigned int AnyType_TypeDefinitionIndex = 4106;

	struct alignas(8) AnyType
	{
		::System::Int64 Bytes; // 0x10
		::UnityEngine::AnyType_Type ValueType; // 0x18

		static ::UnityEngine::AnyType get_Default()
		{
			return ((::UnityEngine::AnyType(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_GET_DEFAULT_OFFSET))();
		}

		static ::UnityEngine::AnyType Create(::System::Boolean value)
		{
			return ((::UnityEngine::AnyType(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATE_OFFSET))(value);
		}

		static ::UnityEngine::AnyType op_Implicit(::System::Boolean obj)
		{
			return ((::UnityEngine::AnyType(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_OP_IMPLICIT_OFFSET))(obj);
		}

		static ::UnityEngine::AnyType op_Implicit_1(::System::Int64 obj)
		{
			return ((::UnityEngine::AnyType(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_OP_IMPLICIT_1_OFFSET))(obj);
		}

		static ::UnityEngine::AnyType op_Implicit_2(::System::UInt32 obj)
		{
			return ((::UnityEngine::AnyType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_OP_IMPLICIT_2_OFFSET))(obj);
		}

		static ::UnityEngine::AnyType op_Implicit_3(::System::Double obj)
		{
			return ((::UnityEngine::AnyType(*)(::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_OP_IMPLICIT_3_OFFSET))(obj);
		}

		static ::UnityEngine::AnyType op_Implicit_4(::System::String* obj)
		{
			return ((::UnityEngine::AnyType(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_OP_IMPLICIT_4_OFFSET))(obj);
		}

		static ::UnityEngine::AnyType Create_1(::System::Int64 value)
		{
			return ((::UnityEngine::AnyType(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATE_1_OFFSET))(value);
		}

		static ::UnityEngine::AnyType Create_2(::System::UInt32 value)
		{
			return ((::UnityEngine::AnyType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATE_2_OFFSET))(value);
		}

		static ::UnityEngine::AnyType Create_3(::System::UInt64 value)
		{
			return ((::UnityEngine::AnyType(*)(::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATE_3_OFFSET))(value);
		}

		static ::UnityEngine::AnyType Create_4(::System::Double value)
		{
			return ((::UnityEngine::AnyType(*)(::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATE_4_OFFSET))(value);
		}

		static ::UnityEngine::AnyType Create_5(::System::Object* value)
		{
			return ((::UnityEngine::AnyType(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATE_5_OFFSET))(value);
		}

		static ::UnityEngine::AnyType Create_6()
		{
			return ((::UnityEngine::AnyType(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATE_6_OFFSET))();
		}

		static ::UnityEngine::AnyType CreateWithLong(::System::Int64 value)
		{
			return ((::UnityEngine::AnyType(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATEWITHLONG_OFFSET))(value);
		}

		static ::UnityEngine::AnyType CreateWithULong(::System::UInt64 value)
		{
			return ((::UnityEngine::AnyType(*)(::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATEWITHULONG_OFFSET))(value);
		}

		static ::UnityEngine::AnyType CreateWithDouble(::System::Double value)
		{
			return ((::UnityEngine::AnyType(*)(::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATEWITHDOUBLE_OFFSET))(value);
		}

		static ::UnityEngine::AnyType CreateWithBool(::System::Boolean value)
		{
			return ((::UnityEngine::AnyType(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATEWITHBOOL_OFFSET))(value);
		}

		static ::UnityEngine::AnyType CreateWithObject(::System::Object* value)
		{
			return ((::UnityEngine::AnyType(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATEWITHOBJECT_OFFSET))(value);
		}

		::System::Object* GetObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_GETOBJECT_OFFSET))(this);
		}

		::System::Object* GetObjectInternal()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_GETOBJECTINTERNAL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 CompareTo(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_COMPARETO_OFFSET))(this, obj);
		}

		::System::Int32 CompareTo_1(::UnityEngine::AnyType other)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_COMPARETO_1_OFFSET))(this, other);
		}

		::System::Boolean Equals(::UnityEngine::AnyType other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCodeWithSeed(::System::UInt64 seed)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_GETHASHCODEWITHSEED_OFFSET))(this, seed);
		}

		/*
		::UnityEngine::NativeString ToNativeString(::System::Boolean autoRelease)
		{
			return ((::UnityEngine::NativeString(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_TONATIVESTRING_OFFSET))(this, autoRelease);
		}
		*/

		::System::String* ToStringInternal()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_TOSTRINGINTERNAL_OFFSET))(this);
		}

		/*
		::UnityEngine::NativeString ToNativeStringFormat(::System::String* fmt, ::System::Boolean autoRelease)
		{
			return ((::UnityEngine::NativeString(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_TONATIVESTRINGFORMAT_OFFSET))(this, fmt, autoRelease);
		}
		*/

		::System::Int32 GetHashCodeInternal(::System::UInt64 seed)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_GETHASHCODEINTERNAL_OFFSET))(this, seed);
		}

		static ::System::Int64 HashCombine(::System::Int64 a, ::System::Int64 b)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_HASHCOMBINE_OFFSET))(a, b);
		}

		static ::System::Int32 GetDeterministicHashCode(::System::String* str)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_GETDETERMINISTICHASHCODE_OFFSET))(str);
		}

		static ::System::Void Create_Injected(::UnityEngine::AnyType& ret)
		{
			return ((::System::Void(*)(::UnityEngine::AnyType&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATE_INJECTED_OFFSET))(ret);
		}

		static ::System::Void CreateWithLong_Injected(::System::Int64 value, ::UnityEngine::AnyType& ret)
		{
			return ((::System::Void(*)(::System::Int64, ::UnityEngine::AnyType&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATEWITHLONG_INJECTED_OFFSET))(value, ret);
		}

		static ::System::Void CreateWithULong_Injected(::System::UInt64 value, ::UnityEngine::AnyType& ret)
		{
			return ((::System::Void(*)(::System::UInt64, ::UnityEngine::AnyType&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATEWITHULONG_INJECTED_OFFSET))(value, ret);
		}

		static ::System::Void CreateWithDouble_Injected(::System::Double value, ::UnityEngine::AnyType& ret)
		{
			return ((::System::Void(*)(::System::Double, ::UnityEngine::AnyType&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATEWITHDOUBLE_INJECTED_OFFSET))(value, ret);
		}

		static ::System::Void CreateWithBool_Injected(::System::Boolean value, ::UnityEngine::AnyType& ret)
		{
			return ((::System::Void(*)(::System::Boolean, ::UnityEngine::AnyType&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATEWITHBOOL_INJECTED_OFFSET))(value, ret);
		}

		static ::System::Void CreateWithObject_Injected(::System::Object* value, ::UnityEngine::AnyType& ret)
		{
			return ((::System::Void(*)(::System::Object*, ::UnityEngine::AnyType&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATEWITHOBJECT_INJECTED_OFFSET))(value, ret);
		}

		static ::System::Object* GetObjectInternal_Injected(::UnityEngine::AnyType& _unity_self)
		{
			return ((::System::Object*(*)(::UnityEngine::AnyType&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_GETOBJECTINTERNAL_INJECTED_OFFSET))(_unity_self);
		}

		/*
		static ::System::Void ToNativeString_Injected(::UnityEngine::AnyType& _unity_self, ::System::Boolean autoRelease, ::UnityEngine::NativeString& ret)
		{
			return ((::System::Void(*)(::UnityEngine::AnyType&, ::System::Boolean, ::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_TONATIVESTRING_INJECTED_OFFSET))(_unity_self, autoRelease, ret);
		}
		*/

		static ::System::String* ToStringInternal_Injected(::UnityEngine::AnyType& _unity_self)
		{
			return ((::System::String*(*)(::UnityEngine::AnyType&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_TOSTRINGINTERNAL_INJECTED_OFFSET))(_unity_self);
		}

		/*
		static ::System::Void ToNativeStringFormat_Injected(::UnityEngine::AnyType& _unity_self, ::System::String* fmt, ::System::Boolean autoRelease, ::UnityEngine::NativeString& ret)
		{
			return ((::System::Void(*)(::UnityEngine::AnyType&, ::System::String*, ::System::Boolean, ::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_TONATIVESTRINGFORMAT_INJECTED_OFFSET))(_unity_self, fmt, autoRelease, ret);
		}
		*/

		static ::System::Int32 GetHashCodeInternal_Injected(::UnityEngine::AnyType& _unity_self, ::System::UInt64 seed)
		{
			return ((::System::Int32(*)(::UnityEngine::AnyType&, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_GETHASHCODEINTERNAL_INJECTED_OFFSET))(_unity_self, seed);
		}
	};
}
