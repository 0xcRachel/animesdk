#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/BaseNumberConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class NumberFormatInfo; }

#define SYSTEM_COMPONENTMODEL_INT64CONVERTER_FROMSTRING_1_OFFSET UNITYSDK_OFFSET(0x17E73F50)
#define SYSTEM_COMPONENTMODEL_INT64CONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x17E73EA0)
#define SYSTEM_COMPONENTMODEL_INT64CONVERTER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x17E73E70)
#define SYSTEM_COMPONENTMODEL_INT64CONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E73F90)
#define SYSTEM_COMPONENTMODEL_INT64CONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E74020)

namespace System::ComponentModel
{
	inline static constexpr unsigned int Int64Converter_TypeDefinitionIndex = 2592;

	class Int64Converter : public ::System::ComponentModel::BaseNumberConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INT64CONVERTER__CTOR_OFFSET))(this);
		}

		::System::Type* get_TargetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INT64CONVERTER_GET_TARGETTYPE_OFFSET))(this);
		}

		::System::Object* FromString(::System::String* value, ::System::Int32 radix)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INT64CONVERTER_FROMSTRING_OFFSET))(this, value, radix);
		}

		::System::Object* FromString_1(::System::String* value, ::System::Globalization::NumberFormatInfo* formatInfo)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INT64CONVERTER_FROMSTRING_1_OFFSET))(this, value, formatInfo);
		}

		::System::String* ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INT64CONVERTER_TOSTRING_OFFSET))(this, value, formatInfo);
		}
	};
}
