#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/MonoPropertyInfo.h"
#include "unitysdk/System/Reflection/PInfo.h"
#include "unitysdk/System/Reflection/PropertyAttributes.h"
#include "unitysdk/System/Reflection/RuntimePropertyInfo.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class MonoProperty_GetterAdapter; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Reflection { template <typename T1, typename T2> class MonoProperty_Getter_2; }
namespace System::Reflection { template <typename T> class MonoProperty_StaticGetter_1; }

#define SYSTEM_REFLECTION_MONOPROPERTY_CACHEPROPERTYINFO_OFFSET UNITYSDK_OFFSET(0x15CC75F0)
#define SYSTEM_REFLECTION_MONOPROPERTY_CREATEGETTERDELEGATE_OFFSET UNITYSDK_OFFSET(0x15CC8010)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETACCESSORS_OFFSET UNITYSDK_OFFSET(0x15CC78D0)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETCONSTANTVALUE_OFFSET UNITYSDK_OFFSET(0x15CC7FB0)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETCUSTOMATTRIBUTESDATA_OFFSET UNITYSDK_OFFSET(0x15CC8920)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x15CC8000)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x15CC7FF0)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETGETMETHOD_OFFSET UNITYSDK_OFFSET(0x15CC7BB0)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETINDEXPARAMETERS_OFFSET UNITYSDK_OFFSET(0x15CC7C30)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETOPTIONALCUSTOMMODIFIERS_OFFSET UNITYSDK_OFFSET(0x15CC88F0)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETRAWCONSTANTVALUE_OFFSET UNITYSDK_OFFSET(0x15CC7FD0)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETREQUIREDCUSTOMMODIFIERS_OFFSET UNITYSDK_OFFSET(0x15CC8910)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETSETMETHOD_OFFSET UNITYSDK_OFFSET(0x15CC7F30)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETVALUE_1_OFFSET UNITYSDK_OFFSET(0x15CC8440)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETVALUE_OFFSET UNITYSDK_OFFSET(0x15CC8400)
#define SYSTEM_REFLECTION_MONOPROPERTY_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x15CC7630)
#define SYSTEM_REFLECTION_MONOPROPERTY_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x15CC7660)
#define SYSTEM_REFLECTION_MONOPROPERTY_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x15CC76B0)
#define SYSTEM_REFLECTION_MONOPROPERTY_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x15CC7840)
#define SYSTEM_REFLECTION_MONOPROPERTY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15CC7880)
#define SYSTEM_REFLECTION_MONOPROPERTY_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x15CC7700)
#define SYSTEM_REFLECTION_MONOPROPERTY_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x15CC7800)
#define SYSTEM_REFLECTION_MONOPROPERTY_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x15CC7FE0)
#define SYSTEM_REFLECTION_MONOPROPERTY_SETVALUE_OFFSET UNITYSDK_OFFSET(0x15CC86B0)
#define SYSTEM_REFLECTION_MONOPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x15CC89A0)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoProperty_TypeDefinitionIndex = 630;

	class MonoProperty : public ::System::Reflection::RuntimePropertyInfo
	{
	public:
		::System::IntPtr klass; // 0x10
		::System::IntPtr prop; // 0x18
		::System::Reflection::MonoPropertyInfo info; // 0x20
		::System::Reflection::PInfo cached; // 0x50
		::System::Reflection::MonoProperty_GetterAdapter* cached_getter; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Void CachePropertyInfo(::System::Reflection::PInfo flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PInfo))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_CACHEPROPERTYINFO_OFFSET))(this, flags);
		}

		::System::Reflection::PropertyAttributes get_Attributes()
		{
			return ((::System::Reflection::PropertyAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GET_CANWRITE_OFFSET))(this);
		}

		::System::Type* get_PropertyType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Type* get_ReflectedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GET_REFLECTEDTYPE_OFFSET))(this);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GET_NAME_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::MethodInfo*>* GetAccessors(::System::Boolean nonPublic)
		{
			return ((::Il2CppArray<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETACCESSORS_OFFSET))(this, nonPublic);
		}

		::System::Reflection::MethodInfo* GetGetMethod(::System::Boolean nonPublic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETGETMETHOD_OFFSET))(this, nonPublic);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* GetIndexParameters()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETINDEXPARAMETERS_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetSetMethod(::System::Boolean nonPublic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETSETMETHOD_OFFSET))(this, nonPublic);
		}

		::System::Object* GetConstantValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETCONSTANTVALUE_OFFSET))(this);
		}

		::System::Object* GetRawConstantValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETRAWCONSTANTVALUE_OFFSET))(this);
		}

		::System::Boolean IsDefined(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_ISDEFINED_OFFSET))(this, attributeType, inherit);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETCUSTOMATTRIBUTES_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETCUSTOMATTRIBUTES_1_OFFSET))(this, attributeType, inherit);
		}

		static ::System::Reflection::MonoProperty_GetterAdapter* CreateGetterDelegate(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Reflection::MonoProperty_GetterAdapter*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_CREATEGETTERDELEGATE_OFFSET))(method);
		}

		::System::Object* GetValue(::System::Object* obj, ::Il2CppArray<::System::Object*>* index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETVALUE_OFFSET))(this, obj, index);
		}

		::System::Object* GetValue_1(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* index, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETVALUE_1_OFFSET))(this, obj, invokeAttr, binder, index, culture);
		}

		::System::Void SetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* index, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_SETVALUE_OFFSET))(this, obj, value, invokeAttr, binder, index, culture);
		}

		::Il2CppArray<::System::Type*>* GetOptionalCustomModifiers()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETOPTIONALCUSTOMMODIFIERS_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* GetRequiredCustomModifiers()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETREQUIREDCUSTOMMODIFIERS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesData()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETCUSTOMATTRIBUTESDATA_OFFSET))(this);
		}
	};
}
