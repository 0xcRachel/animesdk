#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class SROptionsPropertyChanged;
namespace System { class String; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }

#define SROPTIONS_ADD_INTERFACEPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1A5F0CF0)
#define SROPTIONS_ADD_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1A5F05F0)
#define SROPTIONS_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A5F0530)
#define SROPTIONS_ONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1A5F06F0)
#define SROPTIONS_ONSTARTUP_OFFSET UNITYSDK_OFFSET(0x1A5F0540)
#define SROPTIONS_REMOVE_INTERFACEPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1A5F0D50)
#define SROPTIONS_REMOVE_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1A5F0670)
#define SROPTIONS_SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGED_ADD_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1A5F0DB0)
#define SROPTIONS_SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGED_REMOVE_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1A5F0E10)
#define SROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5F05E0)

inline static constexpr unsigned int SROptions_TypeDefinitionIndex = 40922;

class SROptions : public ::System::Object
{
public:
	static ::SROptions** StaticGet__current()
	{
		return (::SROptions**)Il2CppClass::FromTypeDefinitionIndex(SROptions_TypeDefinitionIndex)->GetStaticField(0x15A0);
	}
	::System::ComponentModel::PropertyChangedEventHandler* InterfacePropertyChangedEventHandler; // 0x10
	::SROptionsPropertyChanged* PropertyChanged; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SROPTIONS__CTOR_OFFSET))(this);
	}

	static ::SROptions* get_Current()
	{
		return ((::SROptions*(*)())((::PBYTE)hIl2Cpp + SROPTIONS_GET_CURRENT_OFFSET))();
	}

	static ::System::Void OnStartup()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SROPTIONS_ONSTARTUP_OFFSET))();
	}

	::System::Void add_PropertyChanged(::SROptionsPropertyChanged* value)
	{
		return ((::System::Void(*)(::PVOID, ::SROptionsPropertyChanged*))((::PBYTE)hIl2Cpp + SROPTIONS_ADD_PROPERTYCHANGED_OFFSET))(this, value);
	}

	::System::Void remove_PropertyChanged(::SROptionsPropertyChanged* value)
	{
		return ((::System::Void(*)(::PVOID, ::SROptionsPropertyChanged*))((::PBYTE)hIl2Cpp + SROPTIONS_REMOVE_PROPERTYCHANGED_OFFSET))(this, value);
	}

	::System::Void OnPropertyChanged(::System::String* propertyName)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SROPTIONS_ONPROPERTYCHANGED_OFFSET))(this, propertyName);
	}

	::System::Void add_InterfacePropertyChangedEventHandler(::System::ComponentModel::PropertyChangedEventHandler* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SROPTIONS_ADD_INTERFACEPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, value);
	}

	::System::Void remove_InterfacePropertyChangedEventHandler(::System::ComponentModel::PropertyChangedEventHandler* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SROPTIONS_REMOVE_INTERFACEPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, value);
	}

	::System::Void System_ComponentModel_INotifyPropertyChanged_add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SROPTIONS_SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGED_ADD_PROPERTYCHANGED_OFFSET))(this, value);
	}

	::System::Void System_ComponentModel_INotifyPropertyChanged_remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SROPTIONS_SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGED_REMOVE_PROPERTYCHANGED_OFFSET))(this, value);
	}
};
