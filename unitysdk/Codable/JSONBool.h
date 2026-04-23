#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Codable/JSONNode.h"
#include "unitysdk/Codable/JSONNodeType.h"
#include "unitysdk/Codable/JSONNode_Enumerator.h"
#include "unitysdk/Codable/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CODABLE_JSONBOOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x19429B70)
#define CODABLE_JSONBOOL_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19429A20)
#define CODABLE_JSONBOOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19429B90)
#define CODABLE_JSONBOOL_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x19429AB0)
#define CODABLE_JSONBOOL_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x19429A10)
#define CODABLE_JSONBOOL_GET_TAG_OFFSET UNITYSDK_OFFSET(0x19429A00)
#define CODABLE_JSONBOOL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x19429A40)
#define CODABLE_JSONBOOL_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x19429AC0)
#define CODABLE_JSONBOOL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x19429A60)
#define CODABLE_JSONBOOL_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x19429B30)
#define CODABLE_JSONBOOL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19429AE0)
#define CODABLE_JSONBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x19429AD0)

namespace Codable
{
	inline static constexpr unsigned int JSONBool_TypeDefinitionIndex = 42685;

	class JSONBool : public ::Codable::JSONNode
	{
	public:
		::System::Boolean m_Data; // 0x10

		::System::Void _ctor(::System::Boolean aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL__CTOR_OFFSET))(this, aData);
		}

		::System::Void _ctor_1(::System::String* aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL__CTOR_1_OFFSET))(this, aData);
		}

		::Codable::JSONNodeType get_Tag()
		{
			return ((::Codable::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_GET_ISBOOLEAN_OFFSET))(this);
		}

		::Codable::JSONNode_Enumerator GetEnumerator()
		{
			return ((::Codable::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_SET_VALUE_OFFSET))(this, value);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_SET_ASBOOL_OFFSET))(this, value);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::Codable::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::Codable::JSONTextMode))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_GETHASHCODE_OFFSET))(this);
		}
	};
}
