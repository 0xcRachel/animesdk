#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Bindings/CodegenOptions.h"

namespace System { class String; }

#define UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_SET_CODEGENOPTIONS_OFFSET UNITYSDK_OFFSET(0x1A753580)
#define UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_SET_HEADER_OFFSET UNITYSDK_OFFSET(0x1A753560)
#define UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_SET_INTERMEDIATESCRIPTINGSTRUCTNAME_OFFSET UNITYSDK_OFFSET(0x1A753570)
#define UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A7535A0)
#define UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A7535B0)
#define UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A753680)
#define UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A753590)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativeTypeAttribute_TypeDefinitionIndex = 3709;

	class NativeTypeAttribute : public ::System::Attribute
	{
	public:
		::System::String* _IntermediateScriptingStructName_k__BackingField; // 0x10
		::System::String* _Header_k__BackingField; // 0x18
		::UnityEngine::Bindings::CodegenOptions _CodegenOptions_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Bindings::CodegenOptions codegenOptions)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bindings::CodegenOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE__CTOR_1_OFFSET))(this, codegenOptions);
		}

		::System::Void _ctor_2(::System::String* header)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE__CTOR_2_OFFSET))(this, header);
		}

		::System::Void _ctor_3(::UnityEngine::Bindings::CodegenOptions codegenOptions, ::System::String* intermediateStructName)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bindings::CodegenOptions, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE__CTOR_3_OFFSET))(this, codegenOptions, intermediateStructName);
		}

		::System::Void set_Header(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_SET_HEADER_OFFSET))(this, value);
		}

		::System::Void set_IntermediateScriptingStructName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_SET_INTERMEDIATESCRIPTINGSTRUCTNAME_OFFSET))(this, value);
		}

		::System::Void set_CodegenOptions(::UnityEngine::Bindings::CodegenOptions value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bindings::CodegenOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_SET_CODEGENOPTIONS_OFFSET))(this, value);
		}
	};
}
