#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace System { class Object; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x16444D60)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_GET_ALLOWINTEGERVALUES_OFFSET UNITYSDK_OFFSET(0x16444750)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_GET_CAMELCASETEXT_OFFSET UNITYSDK_OFFSET(0x16444740)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x16444920)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_SET_ALLOWINTEGERVALUES_OFFSET UNITYSDK_OFFSET(0x16444760)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x16444780)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16444770)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int StringEnumConverter_TypeDefinitionIndex = 8422;

	class StringEnumConverter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		::System::Boolean _CamelCaseText_k__BackingField; // 0x10
		::System::Boolean _AllowIntegerValues_k__BackingField; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_CamelCaseText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_GET_CAMELCASETEXT_OFFSET))(this);
		}

		::System::Boolean get_AllowIntegerValues()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_GET_ALLOWINTEGERVALUES_OFFSET))(this);
		}

		::System::Void set_AllowIntegerValues(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_SET_ALLOWINTEGERVALUES_OFFSET))(this, value);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_WRITEJSON_OFFSET))(this, writer, value, serializer);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_READJSON_OFFSET))(this, reader, objectType, existingValue, serializer);
		}

		::System::Boolean CanConvert(::System::Type* objectType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_CANCONVERT_OFFSET))(this, objectType);
		}
	};
}
