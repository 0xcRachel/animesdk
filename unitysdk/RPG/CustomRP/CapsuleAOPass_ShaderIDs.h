#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_CAPSULEAOPASS_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1637F420)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CapsuleAOPass_ShaderIDs_TypeDefinitionIndex = 28299;

	class CapsuleAOPass_ShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__ConeOcclusionTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD9A0);
		}
		static ::System::Int32* StaticGet__Tile_Size()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD9A4);
		}
		static ::System::Int32* StaticGet__CapsuleAOColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD9A8);
		}
		static ::System::Int32* StaticGet__OccluderListBufferRW()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD9AC);
		}
		static ::System::Int32* StaticGet__TileSizeInHiZMipN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD9B0);
		}
		static ::System::Int32* StaticGet__DynamicOccluderBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD9B4);
		}
		static ::System::Int32* StaticGet__HiZMipLevel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD9B8);
		}
		static ::System::Int32* StaticGet__InvProjectMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD9BC);
		}
		static ::System::Int32* StaticGet__HizMinTex_TexelSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD9C0);
		}
		static ::System::Int32* StaticGet__OccluderListLookupTextureRW()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD9C4);
		}
		static ::System::Int32* StaticGet__OccluderListPitch()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD9C8);
		}
		static ::System::Int32* StaticGet__NumDynamicOccluders()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD9CC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEAOPASS_SHADERIDS__CCTOR_OFFSET))();
		}
	};
}
