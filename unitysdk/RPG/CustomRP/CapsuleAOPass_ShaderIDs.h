#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_CAPSULEAOPASS_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A8E810)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CapsuleAOPass_ShaderIDs_TypeDefinitionIndex = 29174;

	class CapsuleAOPass_ShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__HizMinTex_TexelSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB350);
		}
		static ::System::Int32* StaticGet__NumDynamicOccluders()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB354);
		}
		static ::System::Int32* StaticGet__CapsuleAOColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB358);
		}
		static ::System::Int32* StaticGet__DynamicOccluderBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB35C);
		}
		static ::System::Int32* StaticGet__HiZMipLevel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB360);
		}
		static ::System::Int32* StaticGet__TileSizeInHiZMipN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB364);
		}
		static ::System::Int32* StaticGet__OccluderListPitch()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB368);
		}
		static ::System::Int32* StaticGet__ConeOcclusionTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB36C);
		}
		static ::System::Int32* StaticGet__InvProjectMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB370);
		}
		static ::System::Int32* StaticGet__OccluderListLookupTextureRW()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB374);
		}
		static ::System::Int32* StaticGet__OccluderListBufferRW()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB378);
		}
		static ::System::Int32* StaticGet__Tile_Size()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB37C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEAOPASS_SHADERIDS__CCTOR_OFFSET))();
		}
	};
}
