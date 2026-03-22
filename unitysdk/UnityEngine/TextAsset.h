#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/TextAsset_CreateOptions.h"

namespace System { class String; }

#define UNITYENGINE_TEXTASSET_GETBYTESWITHARRAY_OFFSET UNITYSDK_OFFSET(0x1823DAA0)
#define UNITYENGINE_TEXTASSET_GETSIZE_OFFSET UNITYSDK_OFFSET(0x1823DA90)
#define UNITYENGINE_TEXTASSET_GET_BYTES_OFFSET UNITYSDK_OFFSET(0x1823DA80)
#define UNITYENGINE_TEXTASSET_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1823DA70)
#define UNITYENGINE_TEXTASSET_INTERNAL_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1823DAF0)
#define UNITYENGINE_TEXTASSET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1823DAB0)
#define UNITYENGINE_TEXTASSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1823DAD0)
#define UNITYENGINE_TEXTASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1823DAC0)

namespace UnityEngine
{
	inline static constexpr unsigned int TextAsset_TypeDefinitionIndex = 4134;

	class TextAsset : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::TextAsset_CreateOptions options, ::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAsset_CreateOptions, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET__CTOR_1_OFFSET))(this, options, text);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_GET_TEXT_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_bytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_GET_BYTES_OFFSET))(this);
		}

		::System::Int32 GetSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_GETSIZE_OFFSET))(this);
		}

		::System::Void GetBytesWithArray(::Il2CppArray<::System::Byte>* outBytes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_GETBYTESWITHARRAY_OFFSET))(this, outBytes);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_TOSTRING_OFFSET))(this);
		}

		static ::System::Void Internal_CreateInstance(::UnityEngine::TextAsset* self, ::System::String* text)
		{
			return ((::System::Void(*)(::UnityEngine::TextAsset*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_INTERNAL_CREATEINSTANCE_OFFSET))(self, text);
		}
	};
}
