#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define CLASS_1_6298C7F911B6B6EE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF56FF10)
#define CLASS_1_6298C7F911B6B6EE_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xF56FFB0)
#define CLASS_1_6298C7F911B6B6EE_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xF56FF50)
#define CLASS_1_6298C7F911B6B6EE__CTOR_OFFSET UNITYSDK_OFFSET(0xF570000)

inline static constexpr unsigned int Class_1_6298C7F911B6B6EE_TypeDefinitionIndex = 51325;

class Class_1_6298C7F911B6B6EE : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6298C7F911B6B6EE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6298C7F911B6B6EE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void OnPropertyChangedEventHandler(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_6298C7F911B6B6EE_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
	}

	::System::Void OnCollectionChangedEventHandler(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_6298C7F911B6B6EE_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
	}
};
