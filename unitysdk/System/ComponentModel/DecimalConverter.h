#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/BaseNumberConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::Globalization { class CultureInfo; }
namespace System::Globalization { class NumberFormatInfo; }

#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x18485390)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x18485420)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_FROMSTRING_1_OFFSET UNITYSDK_OFFSET(0x18485890)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x184857A0)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_GET_ALLOWHEX_OFFSET UNITYSDK_OFFSET(0x18485350)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x18485360)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18485900)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x184859B0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DecimalConverter_TypeDefinitionIndex = 2565;

	class DecimalConverter : public ::System::ComponentModel::BaseNumberConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_AllowHex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_GET_ALLOWHEX_OFFSET))(this);
		}

		::System::Type* get_TargetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_GET_TARGETTYPE_OFFSET))(this);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_CANCONVERTTO_OFFSET))(this, context, destinationType);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_CONVERTTO_OFFSET))(this, context, culture, value, destinationType);
		}

		::System::Object* FromString(::System::String* value, ::System::Int32 radix)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_FROMSTRING_OFFSET))(this, value, radix);
		}

		::System::Object* FromString_1(::System::String* value, ::System::Globalization::NumberFormatInfo* formatInfo)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_FROMSTRING_1_OFFSET))(this, value, formatInfo);
		}

		::System::String* ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_TOSTRING_OFFSET))(this, value, formatInfo);
		}
	};
}
