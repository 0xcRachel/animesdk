#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define TAPTAP_SDK_ACCESSTOKEN_CURRENTACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x17F68E90)
#define TAPTAP_SDK_ACCESSTOKEN_GET_KID_OFFSET UNITYSDK_OFFSET(0x17F68DF0)
#define TAPTAP_SDK_ACCESSTOKEN_GET_MACALGORITHM_OFFSET UNITYSDK_OFFSET(0x17F68E70)
#define TAPTAP_SDK_ACCESSTOKEN_GET_MACKEY_OFFSET UNITYSDK_OFFSET(0x17F68E50)
#define TAPTAP_SDK_ACCESSTOKEN_GET_TOKENTYPE_OFFSET UNITYSDK_OFFSET(0x17F68E30)
#define TAPTAP_SDK_ACCESSTOKEN_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x17F68E10)
#define TAPTAP_SDK_ACCESSTOKEN_SET_KID_OFFSET UNITYSDK_OFFSET(0x17F68E00)
#define TAPTAP_SDK_ACCESSTOKEN_SET_MACALGORITHM_OFFSET UNITYSDK_OFFSET(0x17F68E80)
#define TAPTAP_SDK_ACCESSTOKEN_SET_MACKEY_OFFSET UNITYSDK_OFFSET(0x17F68E60)
#define TAPTAP_SDK_ACCESSTOKEN_SET_TOKENTYPE_OFFSET UNITYSDK_OFFSET(0x17F68E40)
#define TAPTAP_SDK_ACCESSTOKEN_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x17F68E20)
#define TAPTAP_SDK_ACCESSTOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x17F691E0)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int AccessToken_TypeDefinitionIndex = 6330;

	class AccessToken : public ::System::Object
	{
	public:
		::System::String* _MacAlgorithm_k__BackingField; // 0x10
		::System::String* _MacKey_k__BackingField; // 0x18
		::System::String* _Kid_k__BackingField; // 0x20
		::System::String* _Token_k__BackingField; // 0x28
		::System::String* _TokenType_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN__CTOR_OFFSET))(this);
		}

		::System::String* get_Kid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_GET_KID_OFFSET))(this);
		}

		::System::Void set_Kid(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_SET_KID_OFFSET))(this, value);
		}

		::System::String* get_Token()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_GET_TOKEN_OFFSET))(this);
		}

		::System::Void set_Token(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_SET_TOKEN_OFFSET))(this, value);
		}

		::System::String* get_TokenType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_GET_TOKENTYPE_OFFSET))(this);
		}

		::System::Void set_TokenType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_SET_TOKENTYPE_OFFSET))(this, value);
		}

		::System::String* get_MacKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_GET_MACKEY_OFFSET))(this);
		}

		::System::Void set_MacKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_SET_MACKEY_OFFSET))(this, value);
		}

		::System::String* get_MacAlgorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_GET_MACALGORITHM_OFFSET))(this);
		}

		::System::Void set_MacAlgorithm(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_SET_MACALGORITHM_OFFSET))(this, value);
		}

		static ::TapTap::Sdk::AccessToken* CurrentAccessToken()
		{
			return ((::TapTap::Sdk::AccessToken*(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_CURRENTACCESSTOKEN_OFFSET))();
		}
	};
}
