#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AnyType.h"

namespace System { class String; }

#define UNITYENGINE_ANYTUPLE2_FORMATTONATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x189FD980)
#define UNITYENGINE_ANYTUPLE2_FORMATTONATIVESTRING_OFFSET UNITYSDK_OFFSET(0x2116310)
#define UNITYENGINE_ANYTUPLE2_GETHASHCODEWITHSEED_OFFSET UNITYSDK_OFFSET(0x21162A0)
#define UNITYENGINE_ANYTUPLE2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2116230)
#define UNITYENGINE_ANYTUPLE2_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x152EB70)
#define UNITYENGINE_ANYTUPLE2_GET_ITEM1_OFFSET UNITYSDK_OFFSET(0x1495E80)
#define UNITYENGINE_ANYTUPLE2_GET_ITEM2_OFFSET UNITYSDK_OFFSET(0x151CC70)
#define UNITYENGINE_ANYTUPLE2_GET_OFFSET UNITYSDK_OFFSET(0x21161D0)
#define UNITYENGINE_ANYTUPLE2_SET_ITEM1_OFFSET UNITYSDK_OFFSET(0x1534670)
#define UNITYENGINE_ANYTUPLE2_SET_ITEM2_OFFSET UNITYSDK_OFFSET(0x210CC80)
#define UNITYENGINE_ANYTUPLE2_TOSTRINGINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x189FD940)
#define UNITYENGINE_ANYTUPLE2_TOSTRINGINTERNAL_OFFSET UNITYSDK_OFFSET(0x2116220)
#define UNITYENGINE_ANYTUPLE2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2116220)
#define UNITYENGINE_ANYTUPLE2__CTOR_OFFSET UNITYSDK_OFFSET(0x15A3390)

namespace UnityEngine
{
	inline static constexpr unsigned int AnyTuple2_TypeDefinitionIndex = 4101;

	struct alignas(8) AnyTuple2
	{
		::UnityEngine::AnyType _Item1_k__BackingField; // 0x10
		::UnityEngine::AnyType _Item2_k__BackingField; // 0x20

		::System::Void _ctor(::UnityEngine::AnyType item1, ::UnityEngine::AnyType item2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2__CTOR_OFFSET))(this, item1, item2);
		}

		::System::Int32 get_count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_GET_COUNT_OFFSET))(this);
		}

		::UnityEngine::AnyType Get(::System::Int32 index)
		{
			return ((::UnityEngine::AnyType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_GET_OFFSET))(this, index);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetHashCodeWithSeed(::System::UInt64 seed)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_GETHASHCODEWITHSEED_OFFSET))(this, seed);
		}

		::System::String* ToStringInternal()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_TOSTRINGINTERNAL_OFFSET))(this);
		}

		/*
		::UnityEngine::NativeString FormatToNativeString(::System::Boolean autoRelease)
		{
			return ((::UnityEngine::NativeString(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_FORMATTONATIVESTRING_OFFSET))(this, autoRelease);
		}
		*/

		::UnityEngine::AnyType get_Item1()
		{
			return ((::UnityEngine::AnyType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_GET_ITEM1_OFFSET))(this);
		}

		::System::Void set_Item1(::UnityEngine::AnyType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_SET_ITEM1_OFFSET))(this, value);
		}

		::UnityEngine::AnyType get_Item2()
		{
			return ((::UnityEngine::AnyType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_GET_ITEM2_OFFSET))(this);
		}

		::System::Void set_Item2(::UnityEngine::AnyType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_SET_ITEM2_OFFSET))(this, value);
		}

		static ::System::String* ToStringInternal_Injected(::UnityEngine::AnyTuple2& _unity_self)
		{
			return ((::System::String*(*)(::UnityEngine::AnyTuple2&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_TOSTRINGINTERNAL_INJECTED_OFFSET))(_unity_self);
		}

		/*
		static ::System::Void FormatToNativeString_Injected(::UnityEngine::AnyTuple2& _unity_self, ::System::Boolean autoRelease, ::UnityEngine::NativeString& ret)
		{
			return ((::System::Void(*)(::UnityEngine::AnyTuple2&, ::System::Boolean, ::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_FORMATTONATIVESTRING_INJECTED_OFFSET))(_unity_self, autoRelease, ret);
		}
		*/
	};
}
