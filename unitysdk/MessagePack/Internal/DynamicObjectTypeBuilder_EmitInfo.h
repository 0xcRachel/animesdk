#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x164C71F0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex = 9367;

	class DynamicObjectTypeBuilder_EmitInfo : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_GetTypeFromHandle()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x1E210);
		}
		static ::System::Reflection::MethodInfo** StaticGet_TypeGetProperty()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x1E218);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetCustomAttributeMessagePackFormatterAttribute()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x1E220);
		}
		static ::System::Reflection::MethodInfo** StaticGet_TypeGetField()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x1E228);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ActivatorCreateInstance()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x1E230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO__CCTOR_OFFSET))();
		}
	};
}
