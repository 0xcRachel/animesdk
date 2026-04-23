#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_SWRTPASS_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x15AA0E60)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SWRTPass_ShaderIDs_TypeDefinitionIndex = 34953;

	class SWRTPass_ShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__Tangents()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10930);
		}
		static ::System::Int32* StaticGet__Triangle8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10934);
		}
		static ::System::Int32* StaticGet__LocalToWorlds()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10938);
		}
		static ::System::Int32* StaticGet__BlasOffsets8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1093C);
		}
		static ::System::Int32* StaticGet__RendererIndex8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10940);
		}
		static ::System::Int32* StaticGet__Normals()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10944);
		}
		static ::System::Int32* StaticGet__AlbedoTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10948);
		}
		static ::System::Int32* StaticGet__Positions()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1094C);
		}
		static ::System::Int32* StaticGet__WorldToLocals()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10950);
		}
		static ::System::Int32* StaticGet__UVTransform()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10954);
		}
		static ::System::Int32* StaticGet__TriangleIndex8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10958);
		}
		static ::System::Int32* StaticGet__BVHNodes8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1095C);
		}
		static ::System::Int32* StaticGet__Materials()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10960);
		}
		static ::System::Int32* StaticGet__NormalTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10964);
		}
		static ::System::Int32* StaticGet__MainTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10968);
		}
		static ::System::Int32* StaticGet__BlasIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1096C);
		}
		static ::System::Int32* StaticGet__Indices()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10970);
		}
		static ::System::Int32* StaticGet__UVs()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10974);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_SHADERIDS__CCTOR_OFFSET))();
		}
	};
}
