#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Type.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_REFLECTION_TYPEINFO_ASTYPE_OFFSET UNITYSDK_OFFSET(0x18F49150)
#define SYSTEM_REFLECTION_TYPEINFO_GETDECLAREDMETHODS_OFFSET UNITYSDK_OFFSET(0x18F492D0)
#define SYSTEM_REFLECTION_TYPEINFO_GET_DECLAREDCONSTRUCTORS_OFFSET UNITYSDK_OFFSET(0x18F49350)
#define SYSTEM_REFLECTION_TYPEINFO_GET_DECLAREDFIELDS_OFFSET UNITYSDK_OFFSET(0x18F49370)
#define SYSTEM_REFLECTION_TYPEINFO_GET_DECLAREDMETHODS_OFFSET UNITYSDK_OFFSET(0x18F49390)
#define SYSTEM_REFLECTION_TYPEINFO_GET_IMPLEMENTEDINTERFACES_OFFSET UNITYSDK_OFFSET(0x18F493B0)
#define SYSTEM_REFLECTION_TYPEINFO_ISASSIGNABLEFROM_OFFSET UNITYSDK_OFFSET(0x18F49160)
#define SYSTEM_REFLECTION_TYPEINFO_SYSTEM_REFLECTION_IREFLECTABLETYPE_GETTYPEINFO_OFFSET UNITYSDK_OFFSET(0x18F49140)
#define SYSTEM_REFLECTION_TYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18F49130)

namespace System::Reflection
{
	inline static constexpr unsigned int TypeInfo_TypeDefinitionIndex = 590;

	class TypeInfo : public ::System::Type
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO__CTOR_OFFSET))(this);
		}

		::System::Reflection::TypeInfo* System_Reflection_IReflectableType_GetTypeInfo()
		{
			return ((::System::Reflection::TypeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_SYSTEM_REFLECTION_IREFLECTABLETYPE_GETTYPEINFO_OFFSET))(this);
		}

		::System::Type* AsType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_ASTYPE_OFFSET))(this);
		}

		::System::Boolean IsAssignableFrom(::System::Reflection::TypeInfo* typeInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_ISASSIGNABLEFROM_OFFSET))(this, typeInfo);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* GetDeclaredMethods(::System::String* name)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_GETDECLAREDMETHODS_OFFSET))(this, name);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>* get_DeclaredConstructors()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_GET_DECLAREDCONSTRUCTORS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* get_DeclaredFields()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_GET_DECLAREDFIELDS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* get_DeclaredMethods()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_GET_DECLAREDMETHODS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_ImplementedInterfaces()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_GET_IMPLEMENTEDINTERFACES_OFFSET))(this);
		}
	};
}
