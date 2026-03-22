#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace MessagePack::Internal { class DynamicAssemblyFactory; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_RESOLVERS_DYNAMICENUMRESOLVER_BUILDTYPE_OFFSET UNITYSDK_OFFSET(0x1569D8D0)
#define MESSAGEPACK_RESOLVERS_DYNAMICENUMRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1569D850)
#define MESSAGEPACK_RESOLVERS_DYNAMICENUMRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1569D840)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicEnumResolver_TypeDefinitionIndex = 9516;

	class DynamicEnumResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Internal::DynamicAssemblyFactory** StaticGet_DynamicAssemblyFactory()
		{
			return (::MessagePack::Internal::DynamicAssemblyFactory**)Il2CppClass::FromTypeDefinitionIndex(DynamicEnumResolver_TypeDefinitionIndex)->GetStaticField(0x275D0);
		}
		static ::MessagePack::Resolvers::DynamicEnumResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::DynamicEnumResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicEnumResolver_TypeDefinitionIndex)->GetStaticField(0x275D8);
		}
		static ::System::Int32* StaticGet_nameSequence()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DynamicEnumResolver_TypeDefinitionIndex)->GetStaticField(0x8550);
		}
		// static const ::System::String* ModuleName; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICENUMRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICENUMRESOLVER__CCTOR_OFFSET))();
		}

		static ::System::Reflection::TypeInfo* BuildType(::System::Type* enumType, ::System::Boolean allowPrivate)
		{
			return ((::System::Reflection::TypeInfo*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICENUMRESOLVER_BUILDTYPE_OFFSET))(enumType, allowPrivate);
		}
	};
}
