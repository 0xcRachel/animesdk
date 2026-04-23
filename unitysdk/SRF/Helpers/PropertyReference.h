#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRF::Helpers { class PropertyValueChangedHandler; }
namespace System { class Attribute; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::Reflection { class PropertyInfo; }

#define SRF_HELPERS_PROPERTYREFERENCE_ADD_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A313290)
#define SRF_HELPERS_PROPERTYREFERENCE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1A313E40)
#define SRF_HELPERS_PROPERTYREFERENCE_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1A3137B0)
#define SRF_HELPERS_PROPERTYREFERENCE_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1A3137C0)
#define SRF_HELPERS_PROPERTYREFERENCE_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1A313250)
#define SRF_HELPERS_PROPERTYREFERENCE_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1A313790)
#define SRF_HELPERS_PROPERTYREFERENCE_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1A313240)
#define SRF_HELPERS_PROPERTYREFERENCE_NOTIFYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A3137D0)
#define SRF_HELPERS_PROPERTYREFERENCE_ONTARGETPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1A313EB0)
#define SRF_HELPERS_PROPERTYREFERENCE_REMOVE_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A313460)
#define SRF_HELPERS_PROPERTYREFERENCE_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1A313E60)
#define SRF_HELPERS_PROPERTYREFERENCE_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1A3137A0)
#define SRF_HELPERS_PROPERTYREFERENCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A313740)
#define SRF_HELPERS_PROPERTYREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A313610)

namespace SRF::Helpers
{
	inline static constexpr unsigned int PropertyReference_TypeDefinitionIndex = 33338;

	class PropertyReference : public ::System::Object
	{
	public:
		::System::Type* _PropertyType_k__BackingField; // 0x10
		::System::Object* _target; // 0x18
		::System::Collections::Generic::List_1<::SRF::Helpers::PropertyValueChangedHandler*>* _valueChangedListeners; // 0x20
		::Il2CppArray<::System::Attribute*>* _attributes; // 0x28
		::System::Func_1<::System::Object*>* _getter; // 0x30
		::System::Action_1<::System::Object*>* _setter; // 0x38
		::System::Reflection::PropertyInfo* _property; // 0x40

		::System::Void _ctor(::System::Object* target, ::System::Reflection::PropertyInfo* property)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE__CTOR_OFFSET))(this, target, property);
		}

		::System::Void _ctor_1(::System::Type* type, ::System::Func_1<::System::Object*>* getter, ::System::Action_1<::System::Object*>* setter, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Func_1<::System::Object*>*, ::System::Action_1<::System::Object*>*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE__CTOR_1_OFFSET))(this, type, getter, setter, attributes);
		}

		::System::Object* get_Target()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE_GET_TARGET_OFFSET))(this);
		}

		::System::String* get_PropertyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE_GET_PROPERTYNAME_OFFSET))(this);
		}

		::System::Void add_ValueChanged(::SRF::Helpers::PropertyValueChangedHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::SRF::Helpers::PropertyValueChangedHandler*))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE_ADD_VALUECHANGED_OFFSET))(this, value);
		}

		::System::Void remove_ValueChanged(::SRF::Helpers::PropertyValueChangedHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::SRF::Helpers::PropertyValueChangedHandler*))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE_REMOVE_VALUECHANGED_OFFSET))(this, value);
		}

		::System::Type* get_PropertyType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE_SET_PROPERTYTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE_GET_CANWRITE_OFFSET))(this);
		}

		::System::Void NotifyValueChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE_NOTIFYVALUECHANGED_OFFSET))(this);
		}

		::System::Object* GetValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE_GETVALUE_OFFSET))(this);
		}

		::System::Void SetValue(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE_SETVALUE_OFFSET))(this, value);
		}

		::System::Void OnTargetPropertyChanged(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE_ONTARGETPROPERTYCHANGED_OFFSET))(this, sender, e);
		}
	};
}
