#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }

#define TMPRO_SHADERUTILITIES_GETFONTEXTENT_OFFSET UNITYSDK_OFFSET(0x18919140)
#define TMPRO_SHADERUTILITIES_GETPADDING_1_OFFSET UNITYSDK_OFFSET(0x189199A0)
#define TMPRO_SHADERUTILITIES_GETPADDING_OFFSET UNITYSDK_OFFSET(0x189192A0)
#define TMPRO_SHADERUTILITIES_GETSHADERPROPERTYIDS_OFFSET UNITYSDK_OFFSET(0x18918860)
#define TMPRO_SHADERUTILITIES_GET_SHADERREF_MOBILEBITMAP_OFFSET UNITYSDK_OFFSET(0x18918780)
#define TMPRO_SHADERUTILITIES_GET_SHADERREF_MOBILESDF_OFFSET UNITYSDK_OFFSET(0x18918750)
#define TMPRO_SHADERUTILITIES_ISMASKINGENABLED_OFFSET UNITYSDK_OFFSET(0x18919150)
#define TMPRO_SHADERUTILITIES_UPDATESHADERRATIOS_OFFSET UNITYSDK_OFFSET(0x18918CA0)
#define TMPRO_SHADERUTILITIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x189187B0)

namespace TMPro
{
	inline static constexpr unsigned int ShaderUtilities_TypeDefinitionIndex = 34367;

	class ShaderUtilities : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Keyword_Outline()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x3F750);
		}
		static ::System::String** StaticGet_Keyword_Ratios()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x3F758);
		}
		static ::System::String** StaticGet_ShaderTag_ZTestMode()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x3F760);
		}
		static ::System::String** StaticGet_Keyword_Underlay()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x3F768);
		}
		static ::System::String** StaticGet_Keyword_MASK_SOFT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x3F770);
		}
		static ::System::String** StaticGet_Keyword_Glow()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x3F778);
		}
		static ::System::String** StaticGet_Keyword_MASK_TEX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x3F780);
		}
		static ::System::String** StaticGet_Keyword_MASK_HARD()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x3F788);
		}
		static ::System::String** StaticGet_ShaderTag_CullMode()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x3F790);
		}
		static ::UnityEngine::Shader** StaticGet_k_ShaderRef_MobileSDF()
		{
			return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x3F798);
		}
		static ::System::String** StaticGet_Keyword_Bevel()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x3F7A0);
		}
		static ::UnityEngine::Shader** StaticGet_k_ShaderRef_MobileBitmap()
		{
			return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x3F7A8);
		}
		static ::System::Int32* StaticGet_ID_ScaleX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x109A0);
		}
		static ::System::Int32* StaticGet_ID_EnvMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x109A4);
		}
		static ::System::Int32* StaticGet_ID_WeightNormal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x109A8);
		}
		static ::System::Int32* StaticGet_ID_StencilOp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x109AC);
		}
		static ::System::Int32* StaticGet_ID_UnderlayDilate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x109B0);
		}
		static ::System::Int32* StaticGet_ID_MaskCoord()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x109B4);
		}
		static ::System::Int32* StaticGet_ID_MaskSoftnessY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x109B8);
		}
		static ::System::Int32* StaticGet_ID_StencilReadMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x109BC);
		}
		static ::System::Int32* StaticGet_ID_ScaleY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x109C0);
		}
		static ::System::Int32* StaticGet_ID_MaskSoftnessX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x109C4);
		}
		static ::System::Int32* StaticGet_ID_GlowPower()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x109C8);
		}
		static ::System::Int32* StaticGet_ID_TextureHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x109CC);
		}
		static ::System::Single* StaticGet_m_clamp()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x109D0);
		}
		static ::System::Int32* StaticGet_ID_UseClipRect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x109D4);
		}
		static ::System::Int32* StaticGet_ID_GlowOuter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x109D8);
		}
		static ::System::Boolean* StaticGet_isInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x109DC);
		}
		static ::System::Int32* StaticGet_ID_ScaleRatio_C()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x109E0);
		}
		static ::System::Int32* StaticGet_ID_OutlineWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x109E4);
		}
		static ::System::Int32* StaticGet_ID_UnderlaySoftness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x109E8);
		}
		static ::System::Int32* StaticGet_ID_Outline2Width()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x109EC);
		}
		static ::System::Int32* StaticGet_ID_PerspectiveFilter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x109F0);
		}
		static ::System::Int32* StaticGet_ID_ScaleRatio_A()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x109F4);
		}
		static ::System::Int32* StaticGet_ID_UnderlayOffsetY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x109F8);
		}
		static ::System::Int32* StaticGet_ID_FaceColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x109FC);
		}
		static ::System::Int32* StaticGet_ID_VertexOffsetX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A00);
		}
		static ::System::Int32* StaticGet_ID_StencilComp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A04);
		}
		static ::System::Int32* StaticGet_ID_UnderlayOffsetX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A08);
		}
		static ::System::Int32* StaticGet_ID_EnvMatrixRotation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A0C);
		}
		static ::System::Int32* StaticGet_ID_FaceDilate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A10);
		}
		static ::System::Int32* StaticGet_ID_OutlineTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A14);
		}
		static ::System::Int32* StaticGet_ID_StencilWriteMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A18);
		}
		static ::System::Int32* StaticGet_ID_GlowInner()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A1C);
		}
		static ::System::Int32* StaticGet_ID_ShaderFlags()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A20);
		}
		static ::System::Int32* StaticGet_ID_Sharpness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A24);
		}
		static ::System::Int32* StaticGet_ID_UnderlayColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A28);
		}
		static ::System::Int32* StaticGet_ID_ScaleRatio_B()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A2C);
		}
		static ::System::Int32* StaticGet_ID_LightAngle()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A30);
		}
		static ::System::Int32* StaticGet_ID_OutlineColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A34);
		}
		static ::System::Int32* StaticGet_ID_FaceTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A38);
		}
		static ::System::Int32* StaticGet_ID_Outline2Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A3C);
		}
		static ::System::Int32* StaticGet_ID_GlowOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A40);
		}
		static ::System::Int32* StaticGet_ID_OutlineSoftness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A44);
		}
		static ::System::Int32* StaticGet_ID_Shininess()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A48);
		}
		static ::System::Int32* StaticGet_ID_WeightBold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A4C);
		}
		static ::System::Int32* StaticGet_ID_BevelAmount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A50);
		}
		static ::System::Int32* StaticGet_ID_TextureWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A54);
		}
		static ::System::Int32* StaticGet_ID_Padding()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A58);
		}
		static ::System::Int32* StaticGet_ID_GlowColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A5C);
		}
		static ::System::Int32* StaticGet_ID_VertexOffsetY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A60);
		}
		static ::System::Int32* StaticGet_ID_MainTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A64);
		}
		static ::System::Int32* StaticGet_ID_StencilID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A68);
		}
		static ::System::Int32* StaticGet_ID_EnvMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A6C);
		}
		static ::System::Int32* StaticGet_ID_ClipRect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A70);
		}
		static ::System::Int32* StaticGet_ID_GradientScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderUtilities_TypeDefinitionIndex)->GetStaticField(0x10A74);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Shader* get_ShaderRef_MobileSDF()
		{
			return ((::UnityEngine::Shader*(*)())((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GET_SHADERREF_MOBILESDF_OFFSET))();
		}

		static ::UnityEngine::Shader* get_ShaderRef_MobileBitmap()
		{
			return ((::UnityEngine::Shader*(*)())((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GET_SHADERREF_MOBILEBITMAP_OFFSET))();
		}

		static ::System::Void GetShaderPropertyIDs()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GETSHADERPROPERTYIDS_OFFSET))();
		}

		static ::System::Void UpdateShaderRatios(::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_UPDATESHADERRATIOS_OFFSET))(mat);
		}

		static ::UnityEngine::Vector4 GetFontExtent(::UnityEngine::Material* material)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GETFONTEXTENT_OFFSET))(material);
		}

		static ::System::Boolean IsMaskingEnabled(::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_ISMASKINGENABLED_OFFSET))(material);
		}

		static ::System::Single GetPadding(::UnityEngine::Material* material, ::System::Boolean enableExtraPadding, ::System::Boolean isBold)
		{
			return ((::System::Single(*)(::UnityEngine::Material*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GETPADDING_OFFSET))(material, enableExtraPadding, isBold);
		}

		static ::System::Single GetPadding_1(::Il2CppArray<::UnityEngine::Material*>* materials, ::System::Boolean enableExtraPadding, ::System::Boolean isBold)
		{
			return ((::System::Single(*)(::Il2CppArray<::UnityEngine::Material*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GETPADDING_1_OFFSET))(materials, enableExtraPadding, isBold);
		}
	};
}
