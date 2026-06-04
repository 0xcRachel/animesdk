#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Codable/JSONNode.h"
#include "unitysdk/Codable/JSONNodeType.h"
#include "unitysdk/Codable/JSONNode_Enumerator.h"
#include "unitysdk/Codable/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CODABLE_JSONNULL_CREATEORGET_OFFSET UNITYSDK_OFFSET(0x1A1843F0)
#define CODABLE_JSONNULL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A189FE0)
#define CODABLE_JSONNULL_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A189F80)
#define CODABLE_JSONNULL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A18A060)
#define CODABLE_JSONNULL_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1A189FC0)
#define CODABLE_JSONNULL_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x1A189F70)
#define CODABLE_JSONNULL_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1A189F60)
#define CODABLE_JSONNULL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A189FA0)
#define CODABLE_JSONNULL_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1A189FD0)
#define CODABLE_JSONNULL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A189FB0)
#define CODABLE_JSONNULL_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1A18A070)
#define CODABLE_JSONNULL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A18A0A0)
#define CODABLE_JSONNULL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A189F50)

namespace Codable
{
	inline static constexpr unsigned int JSONNull_TypeDefinitionIndex = 43489;

	class JSONNull : public ::Codable::JSONNode
	{
	public:
		static ::Codable::JSONNull** StaticGet_m_StaticInstance()
		{
			return (::Codable::JSONNull**)Il2CppClass::FromTypeDefinitionIndex(JSONNull_TypeDefinitionIndex)->GetStaticField(0x5EBB0);
		}
		static ::System::Boolean* StaticGet_reuseSameInstance()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONNull_TypeDefinitionIndex)->GetStaticField(0x11B80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CODABLE_JSONNULL__CCTOR_OFFSET))();
		}

		static ::Codable::JSONNull* CreateOrGet()
		{
			return ((::Codable::JSONNull*(*)())((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_CREATEORGET_OFFSET))();
		}

		::Codable::JSONNodeType get_Tag()
		{
			return ((::Codable::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_GET_ISNULL_OFFSET))(this);
		}

		::Codable::JSONNode_Enumerator GetEnumerator()
		{
			return ((::Codable::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_SET_ASBOOL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_GETHASHCODE_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::Codable::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::Codable::JSONTextMode))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
