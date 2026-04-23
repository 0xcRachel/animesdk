#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNodeType.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode_Enumerator.h"
#include "unitysdk/MiHoYoSDKJSON/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MIHOYOSDKJSON_JSONSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x175B6DB0)
#define MIHOYOSDKJSON_JSONSTRING_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x175B6D00)
#define MIHOYOSDKJSON_JSONSTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x175B6F20)
#define MIHOYOSDKJSON_JSONSTRING_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x175B6CF0)
#define MIHOYOSDKJSON_JSONSTRING_GET_TAG_OFFSET UNITYSDK_OFFSET(0x175B6CE0)
#define MIHOYOSDKJSON_JSONSTRING_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x175B6D20)
#define MIHOYOSDKJSON_JSONSTRING_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x175B6D30)
#define MIHOYOSDKJSON_JSONSTRING_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x175B6D40)
#define MIHOYOSDKJSON_JSONSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x175B2620)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONString_TypeDefinitionIndex = 42662;

	class JSONString : public ::MiHoYoSDKJSON::JSONNode
	{
	public:
		::System::String* m_Data; // 0x10

		::System::Void _ctor(::System::String* aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONSTRING__CTOR_OFFSET))(this, aData);
		}

		::MiHoYoSDKJSON::JSONNodeType get_Tag()
		{
			return ((::MiHoYoSDKJSON::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONSTRING_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONSTRING_GET_ISSTRING_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONNode_Enumerator GetEnumerator()
		{
			return ((::MiHoYoSDKJSON::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONSTRING_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONSTRING_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONSTRING_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::MiHoYoSDKJSON::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYoSDKJSON::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONSTRING_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONSTRING_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONSTRING_GETHASHCODE_OFFSET))(this);
		}
	};
}
