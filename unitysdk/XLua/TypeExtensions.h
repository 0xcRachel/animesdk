#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define XLUA_TYPEEXTENSIONS_BASETYPE_OFFSET UNITYSDK_OFFSET(0xFCFBAB0)
#define XLUA_TYPEEXTENSIONS_CSHARPNAME_OFFSET UNITYSDK_OFFSET(0xFD002A0)
#define XLUA_TYPEEXTENSIONS_GETFRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0xFCFFEF0)
#define XLUA_TYPEEXTENSIONS_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0xFCFFD30)
#define XLUA_TYPEEXTENSIONS_ISCLASS_OFFSET UNITYSDK_OFFSET(0xFCFFE10)
#define XLUA_TYPEEXTENSIONS_ISENUM_OFFSET UNITYSDK_OFFSET(0xFCF45C0)
#define XLUA_TYPEEXTENSIONS_ISGENERICTYPEDEFINITION_OFFSET UNITYSDK_OFFSET(0xFCFA560)
#define XLUA_TYPEEXTENSIONS_ISGENERICTYPE_OFFSET UNITYSDK_OFFSET(0xFCFFE60)
#define XLUA_TYPEEXTENSIONS_ISINTERFACE_OFFSET UNITYSDK_OFFSET(0xFCFFD90)
#define XLUA_TYPEEXTENSIONS_ISNESTEDPUBLIC_OFFSET UNITYSDK_OFFSET(0xFCFFE90)
#define XLUA_TYPEEXTENSIONS_ISPRIMITIVE_OFFSET UNITYSDK_OFFSET(0xFCFFD00)
#define XLUA_TYPEEXTENSIONS_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0xFCFFEC0)
#define XLUA_TYPEEXTENSIONS_ISSEALED_OFFSET UNITYSDK_OFFSET(0xFCFFD60)
#define XLUA_TYPEEXTENSIONS_ISVALUETYPE_OFFSET UNITYSDK_OFFSET(0xFCFFCD0)

namespace XLua
{
	inline static constexpr unsigned int TypeExtensions_TypeDefinitionIndex = 39522;

	class TypeExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsValueType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISVALUETYPE_OFFSET))(type);
		}

		static ::System::Boolean IsEnum(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISENUM_OFFSET))(type);
		}

		static ::System::Boolean IsPrimitive(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISPRIMITIVE_OFFSET))(type);
		}

		static ::System::Boolean IsAbstract(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISABSTRACT_OFFSET))(type);
		}

		static ::System::Boolean IsSealed(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISSEALED_OFFSET))(type);
		}

		static ::System::Boolean IsInterface(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISINTERFACE_OFFSET))(type);
		}

		static ::System::Boolean IsClass(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISCLASS_OFFSET))(type);
		}

		static ::System::Type* BaseType(::System::Type* type)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_BASETYPE_OFFSET))(type);
		}

		static ::System::Boolean IsGenericType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISGENERICTYPE_OFFSET))(type);
		}

		static ::System::Boolean IsGenericTypeDefinition(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISGENERICTYPEDEFINITION_OFFSET))(type);
		}

		static ::System::Boolean IsNestedPublic(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISNESTEDPUBLIC_OFFSET))(type);
		}

		static ::System::Boolean IsPublic(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISPUBLIC_OFFSET))(type);
		}

		static ::System::String* GetFriendlyName(::System::Type* type)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_GETFRIENDLYNAME_OFFSET))(type);
		}

		static ::System::String* CSharpName(::System::Type* type)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_CSHARPNAME_OFFSET))(type);
		}
	};
}
