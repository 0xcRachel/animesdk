#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Shader; }

#define UNITYENGINE_RENDERING_SHADERKEYWORD_GETGLOBALKEYWORDINDEX_OFFSET UNITYSDK_OFFSET(0x18232E80)
#define UNITYENGINE_RENDERING_SHADERKEYWORD_GETGLOBALSHADERKEYWORDS_OFFSET UNITYSDK_OFFSET(0x18232F20)
#define UNITYENGINE_RENDERING_SHADERKEYWORD_GETKEYWORDINDEX_OFFSET UNITYSDK_OFFSET(0x18232E90)
#define UNITYENGINE_RENDERING_SHADERKEYWORD_GETSHADERKEYWORDCOUNT_OFFSET UNITYSDK_OFFSET(0x18232EB0)
#define UNITYENGINE_RENDERING_SHADERKEYWORD_GETSHADERKEYWORDNAMES_OFFSET UNITYSDK_OFFSET(0x18232EA0)
#define UNITYENGINE_RENDERING_SHADERKEYWORD_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_RENDERING_SHADERKEYWORD_ISVALID_OFFSET UNITYSDK_OFFSET(0x204B980)
#define UNITYENGINE_RENDERING_SHADERKEYWORD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x204B960)
#define UNITYENGINE_RENDERING_SHADERKEYWORD__CTOR_OFFSET UNITYSDK_OFFSET(0x204B940)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShaderKeyword_TypeDefinitionIndex = 4660;

	struct alignas(4) ShaderKeyword
	{
		::System::Int32 m_KeywordIndex; // 0x10

		::System::Void _ctor(::System::String* keywordName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD__CTOR_OFFSET))(this, keywordName);
		}

		::System::Void _ctor_1(::UnityEngine::Shader* shader, ::System::String* keywordName)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Shader*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD__CTOR_1_OFFSET))(this, shader, keywordName);
		}

		static ::System::Int32 GetGlobalKeywordIndex(::System::String* keyword)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD_GETGLOBALKEYWORDINDEX_OFFSET))(keyword);
		}

		static ::System::Int32 GetKeywordIndex(::UnityEngine::Shader* shader, ::System::String* keyword)
		{
			return ((::System::Int32(*)(::UnityEngine::Shader*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD_GETKEYWORDINDEX_OFFSET))(shader, keyword);
		}

		static ::System::Void GetShaderKeywordNames(::Il2CppArray<::System::String*>* outNames)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD_GETSHADERKEYWORDNAMES_OFFSET))(outNames);
		}

		static ::System::Int32 GetShaderKeywordCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD_GETSHADERKEYWORDCOUNT_OFFSET))();
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD_ISVALID_OFFSET))(this);
		}

		::System::Int32 get_index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD_GET_INDEX_OFFSET))(this);
		}

		static ::System::Void GetGlobalShaderKeywords(::System::Collections::Generic::List_1<::System::String*>* outNames)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD_GETGLOBALSHADERKEYWORDS_OFFSET))(outNames);
		}
	};
}
