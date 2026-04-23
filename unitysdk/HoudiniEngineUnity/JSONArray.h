#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode.h"
#include "unitysdk/HoudiniEngineUnity/JSONNodeType.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode_Enumerator.h"
#include "unitysdk/HoudiniEngineUnity/JSONTextMode.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define HOUDINIENGINEUNITY_JSONARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x17DFFF20)
#define HOUDINIENGINEUNITY_JSONARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17DFF9A0)
#define HOUDINIENGINEUNITY_JSONARRAY_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x17E00190)
#define HOUDINIENGINEUNITY_JSONARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x17DEA7D0)
#define HOUDINIENGINEUNITY_JSONARRAY_GET_INLINE_OFFSET UNITYSDK_OFFSET(0x17DFF960)
#define HOUDINIENGINEUNITY_JSONARRAY_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x17DFF990)
#define HOUDINIENGINEUNITY_JSONARRAY_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x17DFFDA0)
#define HOUDINIENGINEUNITY_JSONARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x17DEA7F0)
#define HOUDINIENGINEUNITY_JSONARRAY_GET_TAG_OFFSET UNITYSDK_OFFSET(0x17DFF980)
#define HOUDINIENGINEUNITY_JSONARRAY_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x17E00130)
#define HOUDINIENGINEUNITY_JSONARRAY_REMOVE_OFFSET UNITYSDK_OFFSET(0x17E00070)
#define HOUDINIENGINEUNITY_JSONARRAY_SET_INLINE_OFFSET UNITYSDK_OFFSET(0x17DFF970)
#define HOUDINIENGINEUNITY_JSONARRAY_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x17DFFDD0)
#define HOUDINIENGINEUNITY_JSONARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x17DFFA80)
#define HOUDINIENGINEUNITY_JSONARRAY_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x17E00210)
#define HOUDINIENGINEUNITY_JSONARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x17E00580)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSONArray_TypeDefinitionIndex = 43725;

	class JSONArray : public ::HoudiniEngineUnity::JSONNode
	{
	public:
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::JSONNode*>* m_List; // 0x10
		::System::Boolean inline_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Inline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_GET_INLINE_OFFSET))(this);
		}

		::System::Void set_Inline(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_SET_INLINE_OFFSET))(this, value);
		}

		::HoudiniEngineUnity::JSONNodeType get_Tag()
		{
			return ((::HoudiniEngineUnity::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_GET_ISARRAY_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode_Enumerator GetEnumerator()
		{
			return ((::HoudiniEngineUnity::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_GETENUMERATOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode* get_Item(::System::Int32 aIndex)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_GET_ITEM_OFFSET))(this, aIndex);
		}

		::System::Void set_Item(::System::Int32 aIndex, ::HoudiniEngineUnity::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_SET_ITEM_OFFSET))(this, aIndex, value);
		}

		::HoudiniEngineUnity::JSONNode* get_Item_1(::System::String* aKey)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_GET_ITEM_1_OFFSET))(this, aKey);
		}

		::System::Void set_Item_1(::System::String* aKey, ::HoudiniEngineUnity::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_SET_ITEM_1_OFFSET))(this, aKey, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_GET_COUNT_OFFSET))(this);
		}

		::System::Void Add(::System::String* aKey, ::HoudiniEngineUnity::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_ADD_OFFSET))(this, aKey, aItem);
		}

		::HoudiniEngineUnity::JSONNode* Remove(::System::Int32 aIndex)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_REMOVE_OFFSET))(this, aIndex);
		}

		::HoudiniEngineUnity::JSONNode* Remove_1(::HoudiniEngineUnity::JSONNode* aNode)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_REMOVE_1_OFFSET))(this, aNode);
		}

		::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* get_Children()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::HoudiniEngineUnity::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::JSONTextMode))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}
	};
}
