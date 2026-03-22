#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Reflection { class Assembly; }
namespace System::Text { class Encoding; }

#define SYSTEM_TEXT_ENCODINGHELPER_GETDEFAULTENCODING_OFFSET UNITYSDK_OFFSET(0x15B5DA40)
#define SYSTEM_TEXT_ENCODINGHELPER_GET_UTF8UNMARKED_OFFSET UNITYSDK_OFFSET(0x15B5F4C0)
#define SYSTEM_TEXT_ENCODINGHELPER_INTERNALCODEPAGE_OFFSET UNITYSDK_OFFSET(0x15B5F6F0)
#define SYSTEM_TEXT_ENCODINGHELPER_INVOKEI18N_OFFSET UNITYSDK_OFFSET(0x15B5B930)
#define SYSTEM_TEXT_ENCODINGHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B5F700)

namespace System::Text
{
	inline static constexpr unsigned int EncodingHelper_TypeDefinitionIndex = 512;

	class EncodingHelper : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_lockobj()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EncodingHelper_TypeDefinitionIndex)->GetStaticField(0x100B0);
		}
		static ::System::Reflection::Assembly** StaticGet_i18nAssembly()
		{
			return (::System::Reflection::Assembly**)Il2CppClass::FromTypeDefinitionIndex(EncodingHelper_TypeDefinitionIndex)->GetStaticField(0x100B8);
		}
		static ::System::Text::Encoding** StaticGet_utf8EncodingWithoutMarkers()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(EncodingHelper_TypeDefinitionIndex)->GetStaticField(0x100C0);
		}
		static ::System::Boolean* StaticGet_i18nDisabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EncodingHelper_TypeDefinitionIndex)->GetStaticField(0x4550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGHELPER__CCTOR_OFFSET))();
		}

		static ::System::Text::Encoding* get_UTF8Unmarked()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGHELPER_GET_UTF8UNMARKED_OFFSET))();
		}

		static ::System::String* InternalCodePage(::System::Int32& code_page)
		{
			return ((::System::String*(*)(::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGHELPER_INTERNALCODEPAGE_OFFSET))(code_page);
		}

		static ::System::Text::Encoding* GetDefaultEncoding()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGHELPER_GETDEFAULTENCODING_OFFSET))();
		}

		static ::System::Object* InvokeI18N(::System::String* name, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGHELPER_INVOKEI18N_OFFSET))(name, args);
		}
	};
}
