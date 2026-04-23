#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_MESSAGEPACKREADERTYPEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x19633350)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex = 9314;

	class DynamicUnionResolver_MessagePackReaderTypeInfo : public ::System::Object
	{
	public:
		static ::System::Reflection::TypeInfo** StaticGet_ReaderTypeInfo()
		{
			return (::System::Reflection::TypeInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x1FE60);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadInt32()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x1FE68);
		}
		static ::System::Reflection::MethodInfo** StaticGet_TryReadNil()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x1FE70);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadArrayHeader()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x1FE78);
		}
		static ::System::Reflection::MethodInfo** StaticGet_Skip()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x1FE80);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadBytes()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x1FE88);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadMapHeader()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x1FE90);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadString()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex)->GetStaticField(0x1FE98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_MESSAGEPACKREADERTYPEINFO__CCTOR_OFFSET))();
		}
	};
}
