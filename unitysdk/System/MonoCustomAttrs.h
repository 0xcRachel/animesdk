#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AttributeUsageAttribute; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class EventInfo; }
namespace System::Reflection { class ICustomAttributeProvider; }
namespace System::Reflection { class MonoEvent; }
namespace System::Reflection { class MonoProperty; }
namespace System::Reflection { class PropertyInfo; }

#define SYSTEM_MONOCUSTOMATTRS_GETBASEEVENTDEFINITION_OFFSET UNITYSDK_OFFSET(0x15CA15B0)
#define SYSTEM_MONOCUSTOMATTRS_GETBASEPROPERTYDEFINITION_OFFSET UNITYSDK_OFFSET(0x15CA1290)
#define SYSTEM_MONOCUSTOMATTRS_GETBASE_OFFSET UNITYSDK_OFFSET(0x15CA09F0)
#define SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESBASE_OFFSET UNITYSDK_OFFSET(0x15C9FB00)
#define SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x15CA0EF0)
#define SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESDATA_OFFSET UNITYSDK_OFFSET(0x15CA0F00)
#define SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESINTERNAL_OFFSET UNITYSDK_OFFSET(0x15C9F6C0)
#define SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x15CA0D70)
#define SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x15C9FC40)
#define SYSTEM_MONOCUSTOMATTRS_GETPSEUDOCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x15C9F910)
#define SYSTEM_MONOCUSTOMATTRS_GETPSEUDOCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x15C9F6D0)
#define SYSTEM_MONOCUSTOMATTRS_ISDEFINEDINTERNAL_OFFSET UNITYSDK_OFFSET(0x15CA1260)
#define SYSTEM_MONOCUSTOMATTRS_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x15CA0F80)
#define SYSTEM_MONOCUSTOMATTRS_ISUSERCATTRPROVIDER_OFFSET UNITYSDK_OFFSET(0x15C9F550)
#define SYSTEM_MONOCUSTOMATTRS_RETRIEVEATTRIBUTEUSAGENOCACHE_OFFSET UNITYSDK_OFFSET(0x15CA1770)
#define SYSTEM_MONOCUSTOMATTRS_RETRIEVEATTRIBUTEUSAGE_OFFSET UNITYSDK_OFFSET(0x15CA0B00)
#define SYSTEM_MONOCUSTOMATTRS__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CA18D0)

namespace System
{
	inline static constexpr unsigned int MonoCustomAttrs_TypeDefinitionIndex = 404;

	class MonoCustomAttrs : public ::System::Object
	{
	public:
		static ::System::Reflection::Assembly** StaticGet_corlib()
		{
			return (::System::Reflection::Assembly**)Il2CppClass::FromTypeDefinitionIndex(MonoCustomAttrs_TypeDefinitionIndex)->GetStaticField(0x9540);
		}
		static ::System::AttributeUsageAttribute** StaticGet_DefaultAttributeUsage()
		{
			return (::System::AttributeUsageAttribute**)Il2CppClass::FromTypeDefinitionIndex(MonoCustomAttrs_TypeDefinitionIndex)->GetStaticField(0x9548);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::AttributeUsageAttribute*>** StaticGet_usage_cache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::AttributeUsageAttribute*>**)Il2CppClass::FromTypeDefinitionIndex(MonoCustomAttrs_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsUserCattrProvider(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_ISUSERCATTRPROVIDER_OFFSET))(obj);
		}

		static ::Il2CppArray<::System::Object*>* GetCustomAttributesInternal(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType, ::System::Boolean pseudoAttrs)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESINTERNAL_OFFSET))(obj, attributeType, pseudoAttrs);
		}

		static ::Il2CppArray<::System::Object*>* GetPseudoCustomAttributes(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETPSEUDOCUSTOMATTRIBUTES_OFFSET))(obj, attributeType);
		}

		static ::Il2CppArray<::System::Object*>* GetPseudoCustomAttributes_1(::System::Type* type)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETPSEUDOCUSTOMATTRIBUTES_1_OFFSET))(type);
		}

		static ::Il2CppArray<::System::Object*>* GetCustomAttributesBase(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType, ::System::Boolean inheritedOnly)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESBASE_OFFSET))(obj, attributeType, inheritedOnly);
		}

		static ::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTES_OFFSET))(obj, attributeType, inherit);
		}

		static ::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Reflection::ICustomAttributeProvider* obj, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTES_1_OFFSET))(obj, inherit);
		}

		static ::Il2CppArray<::System::Reflection::CustomAttributeData*>* GetCustomAttributesDataInternal(::System::Reflection::ICustomAttributeProvider* obj)
		{
			return ((::Il2CppArray<::System::Reflection::CustomAttributeData*>*(*)(::System::Reflection::ICustomAttributeProvider*))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESDATAINTERNAL_OFFSET))(obj);
		}

		static ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesData(::System::Reflection::ICustomAttributeProvider* obj)
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::System::Reflection::ICustomAttributeProvider*))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESDATA_OFFSET))(obj);
		}

		static ::System::Boolean IsDefined(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_ISDEFINED_OFFSET))(obj, attributeType, inherit);
		}

		static ::System::Boolean IsDefinedInternal(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* AttributeType)
		{
			return ((::System::Boolean(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_ISDEFINEDINTERNAL_OFFSET))(obj, AttributeType);
		}

		static ::System::Reflection::PropertyInfo* GetBasePropertyDefinition(::System::Reflection::MonoProperty* property)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::System::Reflection::MonoProperty*))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETBASEPROPERTYDEFINITION_OFFSET))(property);
		}

		static ::System::Reflection::EventInfo* GetBaseEventDefinition(::System::Reflection::MonoEvent* evt)
		{
			return ((::System::Reflection::EventInfo*(*)(::System::Reflection::MonoEvent*))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETBASEEVENTDEFINITION_OFFSET))(evt);
		}

		static ::System::Reflection::ICustomAttributeProvider* GetBase(::System::Reflection::ICustomAttributeProvider* obj)
		{
			return ((::System::Reflection::ICustomAttributeProvider*(*)(::System::Reflection::ICustomAttributeProvider*))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETBASE_OFFSET))(obj);
		}

		static ::System::AttributeUsageAttribute* RetrieveAttributeUsageNoCache(::System::Type* attributeType)
		{
			return ((::System::AttributeUsageAttribute*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_RETRIEVEATTRIBUTEUSAGENOCACHE_OFFSET))(attributeType);
		}

		static ::System::AttributeUsageAttribute* RetrieveAttributeUsage(::System::Type* attributeType)
		{
			return ((::System::AttributeUsageAttribute*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_RETRIEVEATTRIBUTEUSAGE_OFFSET))(attributeType);
		}
	};
}
