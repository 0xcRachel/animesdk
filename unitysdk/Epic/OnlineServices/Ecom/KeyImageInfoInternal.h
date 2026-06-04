#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Ecom { class KeyImageInfo; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x38A4EF0)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x72BC20)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x38A4BA0)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_GET_URL_OFFSET UNITYSDK_OFFSET(0x38A4D00)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x72BC10)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x38A4E70)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xBC4BD0)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x38A4E60)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x38A4C50)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_SET_URL_OFFSET UNITYSDK_OFFSET(0x38A4DB0)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x374B860)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int KeyImageInfoInternal_TypeDefinitionIndex = 42996;

	struct alignas(8) KeyImageInfoInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Type; // 0x18
		::System::IntPtr m_Url; // 0x20
		::System::UInt32 m_Width; // 0x28
		::System::UInt32 m_Height; // 0x2C

		::System::String* get_Type()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_SET_TYPE_OFFSET))(this, a1);
		}

		::System::String* get_Url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_GET_URL_OFFSET))(this);
		}

		::System::Void set_Url(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_SET_URL_OFFSET))(this, a1);
		}

		::System::UInt32 get_Width()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_Width(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_SET_WIDTH_OFFSET))(this, a1);
		}

		::System::UInt32 get_Height()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_Height(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_SET_HEIGHT_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::KeyImageInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::KeyImageInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
