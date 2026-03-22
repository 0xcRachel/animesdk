#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_DEFAULTVALUEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E6E140)
#define SYSTEM_COMPONENTMODEL_DEFAULTVALUEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E6E230)
#define SYSTEM_COMPONENTMODEL_DEFAULTVALUEATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x17E6E130)
#define SYSTEM_COMPONENTMODEL_DEFAULTVALUEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E6E110)
#define SYSTEM_COMPONENTMODEL_DEFAULTVALUEATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17E6E120)
#define SYSTEM_COMPONENTMODEL_DEFAULTVALUEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E6E0E0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DefaultValueAttribute_TypeDefinitionIndex = 2562;

	class DefaultValueAttribute : public ::System::Attribute
	{
	public:
		::System::Object* value; // 0x10

		::System::Void _ctor(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTVALUEATTRIBUTE__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTVALUEATTRIBUTE__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTVALUEATTRIBUTE__CTOR_2_OFFSET))(this, value);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTVALUEATTRIBUTE_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTVALUEATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTVALUEATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
