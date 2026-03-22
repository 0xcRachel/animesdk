#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeDescriptionProvider.h"
#include "unitysdk/System/Guid.h"

namespace System { class Attribute; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IDictionary; }
namespace System::ComponentModel { class AttributeCollection; }
namespace System::ComponentModel { class ICustomTypeDescriptor; }
namespace System::ComponentModel { class ReflectTypeDescriptionProvider_ReflectedTypeData; }
namespace System::ComponentModel { class TypeConverter; }

#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x17E79A00)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x17E79B50)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETCACHE_OFFSET UNITYSDK_OFFSET(0x17E7A570)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x17E7A960)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x17E7ADB0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDCONVERTER_OFFSET UNITYSDK_OFFSET(0x17E7ADE0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E7AE30)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x17E7AE40)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETTYPEDATA_OFFSET UNITYSDK_OFFSET(0x17E79B80)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E7AE60)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GET_INTRINSICTYPECONVERTERS_OFFSET UNITYSDK_OFFSET(0x17E78F00)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_ISPOPULATED_OFFSET UNITYSDK_OFFSET(0x17E7AE70)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTGETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x17E7AEB0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFRESH_OFFSET UNITYSDK_OFFSET(0x17E7B3E0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_SEARCHINTRINSICTABLE_OFFSET UNITYSDK_OFFSET(0x17E7B430)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E7BE80)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E78EE0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ReflectTypeDescriptionProvider_TypeDefinitionIndex = 2604;

	class ReflectTypeDescriptionProvider : public ::System::ComponentModel::TypeDescriptionProvider
	{
	public:
		static ::Il2CppArray<::System::Type*>** StaticGet__typeConstructor()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x161E0);
		}
		static ::System::Object** StaticGet__intrinsicNullableKey()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x161E8);
		}
		static ::System::Object** StaticGet__internalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x161F0);
		}
		static ::System::Collections::Hashtable** StaticGet__attributeCache()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x161F8);
		}
		static ::System::Object** StaticGet__dictionaryKey()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x16200);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet__skipInterfaceAttributeList()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x16208);
		}
		static ::System::Collections::Hashtable** StaticGet__intrinsicTypeConverters()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x16210);
		}
		static ::System::Object** StaticGet__intrinsicReferenceKey()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x16218);
		}
		static ::System::Guid* StaticGet__extenderPropertiesKey()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x5670);
		}
		static ::System::Guid* StaticGet__extenderProviderKey()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x5680);
		}
		static ::System::Guid* StaticGet__extenderProviderPropertiesKey()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x5690);
		}
		::System::Collections::Hashtable* _typeData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER__CCTOR_OFFSET))();
		}

		static ::System::Collections::Hashtable* get_IntrinsicTypeConverters()
		{
			return ((::System::Collections::Hashtable*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GET_INTRINSICTYPECONVERTERS_OFFSET))();
		}

		static ::System::Object* CreateInstance(::System::Type* objectType, ::System::Type* callingType)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_CREATEINSTANCE_OFFSET))(objectType, callingType);
		}

		::System::ComponentModel::AttributeCollection* GetAttributes(::System::Type* type)
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETATTRIBUTES_OFFSET))(this, type);
		}

		::System::Collections::IDictionary* GetCache(::System::Object* instance)
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETCACHE_OFFSET))(this, instance);
		}

		::System::ComponentModel::TypeConverter* GetConverter(::System::Type* type, ::System::Object* instance)
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETCONVERTER_OFFSET))(this, type, instance);
		}

		::System::ComponentModel::AttributeCollection* GetExtendedAttributes(::System::Object* instance)
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDATTRIBUTES_OFFSET))(this, instance);
		}

		::System::ComponentModel::TypeConverter* GetExtendedConverter(::System::Object* instance)
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDCONVERTER_OFFSET))(this, instance);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object* instance)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDTYPEDESCRIPTOR_OFFSET))(this, instance);
		}

		::System::Type* GetReflectionType(::System::Type* objectType, ::System::Object* instance)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_OFFSET))(this, objectType, instance);
		}

		::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData* GetTypeData(::System::Type* type, ::System::Boolean createIfNeeded)
		{
			return ((::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETTYPEDATA_OFFSET))(this, type, createIfNeeded);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET))(this, objectType, instance);
		}

		::System::Boolean IsPopulated(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_ISPOPULATED_OFFSET))(this, type);
		}

		static ::Il2CppArray<::System::Attribute*>* ReflectGetAttributes(::System::Type* type)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTGETATTRIBUTES_OFFSET))(type);
		}

		::System::Void Refresh(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFRESH_OFFSET))(this, type);
		}

		static ::System::Object* SearchIntrinsicTable(::System::Collections::Hashtable* table, ::System::Type* callingType)
		{
			return ((::System::Object*(*)(::System::Collections::Hashtable*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_SEARCHINTRINSICTABLE_OFFSET))(table, callingType);
		}
	};
}
