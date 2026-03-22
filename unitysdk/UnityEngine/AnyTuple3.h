#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AnyType.h"

namespace System { class String; }

#define UNITYENGINE_ANYTUPLE3_FORMATTONATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x181D4710)
#define UNITYENGINE_ANYTUPLE3_FORMATTONATIVESTRING_OFFSET UNITYSDK_OFFSET(0x2040310)
#define UNITYENGINE_ANYTUPLE3_GETHASHCODEWITHSEED_OFFSET UNITYSDK_OFFSET(0x2040270)
#define UNITYENGINE_ANYTUPLE3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20401C0)
#define UNITYENGINE_ANYTUPLE3_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x14A42F0)
#define UNITYENGINE_ANYTUPLE3_GET_ITEM1_OFFSET UNITYSDK_OFFSET(0x1465FE0)
#define UNITYENGINE_ANYTUPLE3_GET_ITEM2_OFFSET UNITYSDK_OFFSET(0x148ECE0)
#define UNITYENGINE_ANYTUPLE3_GET_ITEM3_OFFSET UNITYSDK_OFFSET(0x14A5000)
#define UNITYENGINE_ANYTUPLE3_GET_OFFSET UNITYSDK_OFFSET(0x2040150)
#define UNITYENGINE_ANYTUPLE3_SET_ITEM1_OFFSET UNITYSDK_OFFSET(0x14A6D00)
#define UNITYENGINE_ANYTUPLE3_SET_ITEM2_OFFSET UNITYSDK_OFFSET(0x2036B10)
#define UNITYENGINE_ANYTUPLE3_SET_ITEM3_OFFSET UNITYSDK_OFFSET(0x14A5010)
#define UNITYENGINE_ANYTUPLE3_TOSTRINGINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x181D46D0)
#define UNITYENGINE_ANYTUPLE3_TOSTRINGINTERNAL_OFFSET UNITYSDK_OFFSET(0x20401B0)
#define UNITYENGINE_ANYTUPLE3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20401B0)
#define UNITYENGINE_ANYTUPLE3__CTOR_OFFSET UNITYSDK_OFFSET(0x13EF920)

namespace UnityEngine
{
	inline static constexpr unsigned int AnyTuple3_TypeDefinitionIndex = 4080;

	struct alignas(8) AnyTuple3
	{
		::UnityEngine::AnyType _Item1_k__BackingField; // 0x10
		::UnityEngine::AnyType _Item2_k__BackingField; // 0x20
		::UnityEngine::AnyType _Item3_k__BackingField; // 0x30

		::System::Void _ctor(::UnityEngine::AnyType item1, ::UnityEngine::AnyType item2, ::UnityEngine::AnyType item3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType, ::UnityEngine::AnyType, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3__CTOR_OFFSET))(this, item1, item2, item3);
		}

		::System::Int32 get_count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_GET_COUNT_OFFSET))(this);
		}

		::UnityEngine::AnyType Get(::System::Int32 index)
		{
			return ((::UnityEngine::AnyType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_GET_OFFSET))(this, index);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetHashCodeWithSeed(::System::UInt64 seed)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_GETHASHCODEWITHSEED_OFFSET))(this, seed);
		}

		::System::String* ToStringInternal()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_TOSTRINGINTERNAL_OFFSET))(this);
		}

		/*
		::UnityEngine::NativeString FormatToNativeString(::System::Boolean autoRelease)
		{
			return ((::UnityEngine::NativeString(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_FORMATTONATIVESTRING_OFFSET))(this, autoRelease);
		}
		*/

		::UnityEngine::AnyType get_Item1()
		{
			return ((::UnityEngine::AnyType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_GET_ITEM1_OFFSET))(this);
		}

		::System::Void set_Item1(::UnityEngine::AnyType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_SET_ITEM1_OFFSET))(this, value);
		}

		::UnityEngine::AnyType get_Item2()
		{
			return ((::UnityEngine::AnyType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_GET_ITEM2_OFFSET))(this);
		}

		::System::Void set_Item2(::UnityEngine::AnyType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_SET_ITEM2_OFFSET))(this, value);
		}

		::UnityEngine::AnyType get_Item3()
		{
			return ((::UnityEngine::AnyType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_GET_ITEM3_OFFSET))(this);
		}

		::System::Void set_Item3(::UnityEngine::AnyType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_SET_ITEM3_OFFSET))(this, value);
		}

		static ::System::String* ToStringInternal_Injected(::UnityEngine::AnyTuple3& _unity_self)
		{
			return ((::System::String*(*)(::UnityEngine::AnyTuple3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_TOSTRINGINTERNAL_INJECTED_OFFSET))(_unity_self);
		}

		/*
		static ::System::Void FormatToNativeString_Injected(::UnityEngine::AnyTuple3& _unity_self, ::System::Boolean autoRelease, ::UnityEngine::NativeString& ret)
		{
			return ((::System::Void(*)(::UnityEngine::AnyTuple3&, ::System::Boolean, ::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_FORMATTONATIVESTRING_INJECTED_OFFSET))(_unity_self, autoRelease, ret);
		}
		*/
	};
}
