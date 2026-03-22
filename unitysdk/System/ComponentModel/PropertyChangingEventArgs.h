#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTARGS_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x15DF74A0)
#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF7460)

namespace System::ComponentModel
{
	inline static constexpr unsigned int PropertyChangingEventArgs_TypeDefinitionIndex = 8049;

	class PropertyChangingEventArgs : public ::System::EventArgs
	{
	public:
		::System::String* _PropertyName_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* propertyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTARGS__CTOR_OFFSET))(this, propertyName);
		}

		::System::Void set_PropertyName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTARGS_SET_PROPERTYNAME_OFFSET))(this, value);
		}
	};
}
