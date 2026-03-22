#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }
namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_GETGETMETHOD_OFFSET UNITYSDK_OFFSET(0x1566A5D0)
#define MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_GETSETMETHOD_OFFSET UNITYSDK_OFFSET(0x1566A600)
#define MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_HASPRIVATECTORFORSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1566A630)
#define MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISANONYMOUS_OFFSET UNITYSDK_OFFSET(0x1566A400)
#define MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISCONSTRUCTEDGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x1566A590)
#define MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISINDEXER_OFFSET UNITYSDK_OFFSET(0x1566A560)
#define MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1566A360)
#define MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0x1566A3D0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ReflectionExtensions_TypeDefinitionIndex = 9597;

	class ReflectionExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsNullable(::System::Reflection::TypeInfo* type)
		{
			return ((::System::Boolean(*)(::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISNULLABLE_OFFSET))(type);
		}

		static ::System::Boolean IsPublic(::System::Reflection::TypeInfo* type)
		{
			return ((::System::Boolean(*)(::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISPUBLIC_OFFSET))(type);
		}

		static ::System::Boolean IsAnonymous(::System::Reflection::TypeInfo* type)
		{
			return ((::System::Boolean(*)(::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISANONYMOUS_OFFSET))(type);
		}

		static ::System::Boolean IsIndexer(::System::Reflection::PropertyInfo* propertyInfo)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISINDEXER_OFFSET))(propertyInfo);
		}

		static ::System::Boolean IsConstructedGenericType(::System::Reflection::TypeInfo* type)
		{
			return ((::System::Boolean(*)(::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISCONSTRUCTEDGENERICTYPE_OFFSET))(type);
		}

		static ::System::Reflection::MethodInfo* GetGetMethod(::System::Reflection::PropertyInfo* propInfo)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_GETGETMETHOD_OFFSET))(propInfo);
		}

		static ::System::Reflection::MethodInfo* GetSetMethod(::System::Reflection::PropertyInfo* propInfo)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_GETSETMETHOD_OFFSET))(propInfo);
		}

		static ::System::Boolean HasPrivateCtorForSerialization(::System::Reflection::TypeInfo* type)
		{
			return ((::System::Boolean(*)(::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_HASPRIVATECTORFORSERIALIZATION_OFFSET))(type);
		}
	};
}
