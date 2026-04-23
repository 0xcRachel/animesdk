#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack { class UnionAttribute; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace MessagePack::Internal { class DynamicAssemblyFactory; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class TypeInfo; }
namespace System::Reflection::Emit { class FieldBuilder; }
namespace System::Reflection::Emit { class ILGenerator; }
namespace System::Reflection::Emit { class MethodBuilder; }

#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x19630B40)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x19631B30)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDSERIALIZE_OFFSET UNITYSDK_OFFSET(0x19630F60)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDTYPE_OFFSET UNITYSDK_OFFSET(0x19630020)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_ISZEROSTARTSEQUENTIAL_OFFSET UNITYSDK_OFFSET(0x19632890)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1962EFE0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x19630010)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicUnionResolver_TypeDefinitionIndex = 9312;

	class DynamicUnionResolver : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_getTypeHandle()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x1E970);
		}
		static ::System::Reflection::MethodInfo** StaticGet_keyMapDictionaryAdd()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x1E978);
		}
		static ::System::Type** StaticGet_refKvp()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x1E980);
		}
		static ::MessagePack::Internal::DynamicAssemblyFactory** StaticGet_DynamicAssemblyFactory()
		{
			return (::MessagePack::Internal::DynamicAssemblyFactory**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x1E988);
		}
		static ::System::Reflection::MethodInfo** StaticGet_typeMapDictionaryAdd()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x1E990);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_invalidOperationExceptionConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x1E998);
		}
		static ::System::Reflection::FieldInfo** StaticGet_runtimeTypeHandleEqualityComparer()
		{
			return (::System::Reflection::FieldInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x1E9A0);
		}
		static ::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>** StaticGet_getDeserialize()
		{
			return (::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x1E9A8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_getResolverFromOptions()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x1E9B0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_intIntKeyValuePairGetKey()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x1E9B8);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_typeMapDictionaryConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x1E9C0);
		}
		static ::System::Type** StaticGet_refMessagePackReader()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x1E9C8);
		}
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x1E9D0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_getFormatterWithVerify()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x1E9D8);
		}
		static ::MessagePack::Resolvers::DynamicUnionResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::DynamicUnionResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x1E9E0);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_keyMapDictionaryConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x1E9E8);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_intIntKeyValuePairConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x1E9F0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_keyMapDictionaryTryGetValue()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x1E9F8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_objectGetType()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x1EA00);
		}
		static ::System::Reflection::MethodInfo** StaticGet_typeMapDictionaryTryGetValue()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x1EA08);
		}
		static ::System::Reflection::MethodInfo** StaticGet_intIntKeyValuePairGetValue()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x1EA10);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_objectCtor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x1EA18);
		}
		static ::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>** StaticGet_getSerialize()
		{
			return (::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x1EA20);
		}
		static ::System::Int32* StaticGet_nameSequence()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DynamicUnionResolver_TypeDefinitionIndex)->GetStaticField(0x6F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Reflection::TypeInfo* BuildType(::System::Type* type)
		{
			return ((::System::Reflection::TypeInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDTYPE_OFFSET))(type);
		}

		static ::System::Void BuildConstructor(::System::Type* type, ::Il2CppArray<::MessagePack::UnionAttribute*>* infos, ::System::Reflection::ConstructorInfo* method, ::System::Reflection::Emit::FieldBuilder* typeToKeyAndJumpMap, ::System::Reflection::Emit::FieldBuilder* keyToJumpMap, ::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::System::Type*, ::Il2CppArray<::MessagePack::UnionAttribute*>*, ::System::Reflection::ConstructorInfo*, ::System::Reflection::Emit::FieldBuilder*, ::System::Reflection::Emit::FieldBuilder*, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDCONSTRUCTOR_OFFSET))(type, infos, method, typeToKeyAndJumpMap, keyToJumpMap, il);
		}

		static ::System::Void BuildSerialize(::System::Type* type, ::Il2CppArray<::MessagePack::UnionAttribute*>* infos, ::System::Reflection::Emit::MethodBuilder* method, ::System::Reflection::Emit::FieldBuilder* typeToKeyAndJumpMap, ::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::System::Type*, ::Il2CppArray<::MessagePack::UnionAttribute*>*, ::System::Reflection::Emit::MethodBuilder*, ::System::Reflection::Emit::FieldBuilder*, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDSERIALIZE_OFFSET))(type, infos, method, typeToKeyAndJumpMap, il);
		}

		static ::System::Void BuildDeserialize(::System::Type* type, ::Il2CppArray<::MessagePack::UnionAttribute*>* infos, ::System::Reflection::Emit::MethodBuilder* method, ::System::Reflection::Emit::FieldBuilder* keyToJumpMap, ::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::System::Type*, ::Il2CppArray<::MessagePack::UnionAttribute*>*, ::System::Reflection::Emit::MethodBuilder*, ::System::Reflection::Emit::FieldBuilder*, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDDESERIALIZE_OFFSET))(type, infos, method, keyToJumpMap, il);
		}

		static ::System::Boolean IsZeroStartSequential(::Il2CppArray<::MessagePack::UnionAttribute*>* infos)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::MessagePack::UnionAttribute*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_ISZEROSTARTSEQUENTIAL_OFFSET))(infos);
		}
	};
}
