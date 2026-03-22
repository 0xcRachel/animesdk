#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/HPBar_ColorAnimState.h"
#include "unitysdk/RPG/Client/HPBar_ColorMode.h"
#include "unitysdk/RPG/Client/HPBar_Mode.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_HPBAR_GET_BGAMOUNT_OFFSET UNITYSDK_OFFSET(0x947E7F0)
#define RPG_CLIENT_HPBAR_GET_COLORB_OFFSET UNITYSDK_OFFSET(0x947EB60)
#define RPG_CLIENT_HPBAR_GET_COLORDUMMY_OFFSET UNITYSDK_OFFSET(0x947EC10)
#define RPG_CLIENT_HPBAR_GET_COLORD_OFFSET UNITYSDK_OFFSET(0x947EAB0)
#define RPG_CLIENT_HPBAR_GET_COLORL_OFFSET UNITYSDK_OFFSET(0x947E950)
#define RPG_CLIENT_HPBAR_GET_COLORMODES_OFFSET UNITYSDK_OFFSET(0x947C570)
#define RPG_CLIENT_HPBAR_GET_COLORRINGBG_OFFSET UNITYSDK_OFFSET(0x947BED0)
#define RPG_CLIENT_HPBAR_GET_COLORR_OFFSET UNITYSDK_OFFSET(0x947EA00)
#define RPG_CLIENT_HPBAR_GET_COLORSL_OFFSET UNITYSDK_OFFSET(0x947C430)
#define RPG_CLIENT_HPBAR_GET_COLORSR_OFFSET UNITYSDK_OFFSET(0x947C4D0)
#define RPG_CLIENT_HPBAR_GET_DIRTYAMOUNT_OFFSET UNITYSDK_OFFSET(0x947E740)
#define RPG_CLIENT_HPBAR_GET_DUMMYAMOUNT_OFFSET UNITYSDK_OFFSET(0x947E8A0)
#define RPG_CLIENT_HPBAR_GET_FILLAMOUNTS_OFFSET UNITYSDK_OFFSET(0x947C390)
#define RPG_CLIENT_HPBAR_GET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x947E690)
#define RPG_CLIENT_HPBAR_GET_HPPIXELOFFSET_OFFSET UNITYSDK_OFFSET(0x947BB90)
#define RPG_CLIENT_HPBAR_GET_INNERALPHA_OFFSET UNITYSDK_OFFSET(0x947BBA0)
#define RPG_CLIENT_HPBAR_GET_INNERPIXELOFFSET_OFFSET UNITYSDK_OFFSET(0x947B9F0)
#define RPG_CLIENT_HPBAR_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x947C2A0)
#define RPG_CLIENT_HPBAR_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x947B660)
#define RPG_CLIENT_HPBAR_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0x947C750)
#define RPG_CLIENT_HPBAR_GET_MODES_OFFSET UNITYSDK_OFFSET(0x947C610)
#define RPG_CLIENT_HPBAR_GET_MULTILAYER_OFFSET UNITYSDK_OFFSET(0x947C200)
#define RPG_CLIENT_HPBAR_GET_OUTERPIXELOFFSET_OFFSET UNITYSDK_OFFSET(0x947B6D0)
#define RPG_CLIENT_HPBAR_GET_RINGBGOFFSETDEGREE_OFFSET UNITYSDK_OFFSET(0x947C130)
#define RPG_CLIENT_HPBAR_GET_RINGBGWIDTH_OFFSET UNITYSDK_OFFSET(0x947BF90)
#define RPG_CLIENT_HPBAR_GET_RINGDEGREE_OFFSET UNITYSDK_OFFSET(0x947C060)
#define RPG_CLIENT_HPBAR_GET_RINGMODE_OFFSET UNITYSDK_OFFSET(0x947BC70)
#define RPG_CLIENT_HPBAR_GET_RINGRADIUSINNER_OFFSET UNITYSDK_OFFSET(0x947BDF0)
#define RPG_CLIENT_HPBAR_GET_RINGRADIUSOUTER_OFFSET UNITYSDK_OFFSET(0x947BD10)
#define RPG_CLIENT_HPBAR_GET_TEXTURES_OFFSET UNITYSDK_OFFSET(0x947C6B0)
#define RPG_CLIENT_HPBAR_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x947DA40)
#define RPG_CLIENT_HPBAR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x947E620)
#define RPG_CLIENT_HPBAR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x947E560)
#define RPG_CLIENT_HPBAR_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x947E090)
#define RPG_CLIENT_HPBAR_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x947E500)
#define RPG_CLIENT_HPBAR_REFRESHLEGACY_OFFSET UNITYSDK_OFFSET(0x947CFF0)
#define RPG_CLIENT_HPBAR_REFRESH_OFFSET UNITYSDK_OFFSET(0x947C7F0)
#define RPG_CLIENT_HPBAR_SET_BGAMOUNT_OFFSET UNITYSDK_OFFSET(0x947E800)
#define RPG_CLIENT_HPBAR_SET_COLORB_OFFSET UNITYSDK_OFFSET(0x947EB70)
#define RPG_CLIENT_HPBAR_SET_COLORDUMMY_OFFSET UNITYSDK_OFFSET(0x947EC20)
#define RPG_CLIENT_HPBAR_SET_COLORD_OFFSET UNITYSDK_OFFSET(0x947EAC0)
#define RPG_CLIENT_HPBAR_SET_COLORL_OFFSET UNITYSDK_OFFSET(0x947E960)
#define RPG_CLIENT_HPBAR_SET_COLORMODES_OFFSET UNITYSDK_OFFSET(0x947C580)
#define RPG_CLIENT_HPBAR_SET_COLORRINGBG_OFFSET UNITYSDK_OFFSET(0x947BEE0)
#define RPG_CLIENT_HPBAR_SET_COLORR_OFFSET UNITYSDK_OFFSET(0x947EA10)
#define RPG_CLIENT_HPBAR_SET_COLORSL_OFFSET UNITYSDK_OFFSET(0x947C440)
#define RPG_CLIENT_HPBAR_SET_COLORSR_OFFSET UNITYSDK_OFFSET(0x947C4E0)
#define RPG_CLIENT_HPBAR_SET_DIRTYAMOUNT_OFFSET UNITYSDK_OFFSET(0x947E750)
#define RPG_CLIENT_HPBAR_SET_DUMMYAMOUNT_OFFSET UNITYSDK_OFFSET(0x947E8B0)
#define RPG_CLIENT_HPBAR_SET_FILLAMOUNTS_OFFSET UNITYSDK_OFFSET(0x947C3A0)
#define RPG_CLIENT_HPBAR_SET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x947E6A0)
#define RPG_CLIENT_HPBAR_SET_HPPIXELOFFSET_OFFSET UNITYSDK_OFFSET(0x947B870)
#define RPG_CLIENT_HPBAR_SET_INNERALPHA_OFFSET UNITYSDK_OFFSET(0x947BBB0)
#define RPG_CLIENT_HPBAR_SET_INNERPIXELOFFSET_OFFSET UNITYSDK_OFFSET(0x947BA00)
#define RPG_CLIENT_HPBAR_SET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x947C300)
#define RPG_CLIENT_HPBAR_SET_MODES_OFFSET UNITYSDK_OFFSET(0x947C620)
#define RPG_CLIENT_HPBAR_SET_MULTILAYER_OFFSET UNITYSDK_OFFSET(0x947C210)
#define RPG_CLIENT_HPBAR_SET_OUTERPIXELOFFSET_OFFSET UNITYSDK_OFFSET(0x947B6E0)
#define RPG_CLIENT_HPBAR_SET_RINGBGOFFSETDEGREE_OFFSET UNITYSDK_OFFSET(0x947C140)
#define RPG_CLIENT_HPBAR_SET_RINGBGWIDTH_OFFSET UNITYSDK_OFFSET(0x947BFA0)
#define RPG_CLIENT_HPBAR_SET_RINGDEGREE_OFFSET UNITYSDK_OFFSET(0x947C070)
#define RPG_CLIENT_HPBAR_SET_RINGMODE_OFFSET UNITYSDK_OFFSET(0x947BC80)
#define RPG_CLIENT_HPBAR_SET_RINGRADIUSINNER_OFFSET UNITYSDK_OFFSET(0x947BE00)
#define RPG_CLIENT_HPBAR_SET_RINGRADIUSOUTER_OFFSET UNITYSDK_OFFSET(0x947BD20)
#define RPG_CLIENT_HPBAR_SET_TEXTURES_OFFSET UNITYSDK_OFFSET(0x947C6C0)
#define RPG_CLIENT_HPBAR_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x947E4B0)
#define RPG_CLIENT_HPBAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x947EE30)
#define RPG_CLIENT_HPBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x947ECC0)
#define RPG_CLIENT_HPBAR__SETASPECT_OFFSET UNITYSDK_OFFSET(0x947D3D0)
#define RPG_CLIENT_HPBAR__SETTEXTURES_OFFSET UNITYSDK_OFFSET(0x947D5C0)
#define RPG_CLIENT_HPBAR___IFIXBASEPROXY_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x947F090)
#define RPG_CLIENT_HPBAR___IFIXBASEPROXY_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0x947F0C0)
#define RPG_CLIENT_HPBAR___IFIXBASEPROXY_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x947F0D0)
#define RPG_CLIENT_HPBAR___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x947F120)
#define RPG_CLIENT_HPBAR___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x947F110)
#define RPG_CLIENT_HPBAR___IFIXBASEPROXY_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x947F0E0)
#define RPG_CLIENT_HPBAR___IFIXBASEPROXY_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x947F100)
#define RPG_CLIENT_HPBAR___IFIXBASEPROXY_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x947F0F0)

namespace RPG::Client
{
	inline static constexpr unsigned int HPBar_TypeDefinitionIndex = 57815;

	class HPBar : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet__TexIDs()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HPBar_TypeDefinitionIndex)->GetStaticField(0xB4E0);
		}
		static ::System::Int32* StaticGet__HpX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HPBar_TypeDefinitionIndex)->GetStaticField(0x3F20);
		}
		static ::System::Int32* StaticGet__RingBgOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HPBar_TypeDefinitionIndex)->GetStaticField(0x3F24);
		}
		static ::System::Int32* StaticGet__OuterX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HPBar_TypeDefinitionIndex)->GetStaticField(0x3F28);
		}
		static ::System::Int32* StaticGet__TexAspects()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HPBar_TypeDefinitionIndex)->GetStaticField(0x3F2C);
		}
		static ::System::Int32* StaticGet__AlphaTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HPBar_TypeDefinitionIndex)->GetStaticField(0x3F30);
		}
		static ::System::Int32* StaticGet__RingBgWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HPBar_TypeDefinitionIndex)->GetStaticField(0x3F34);
		}
		static ::System::Int32* StaticGet__RingRadius()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HPBar_TypeDefinitionIndex)->GetStaticField(0x3F38);
		}
		static ::System::Int32* StaticGet__InnerX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HPBar_TypeDefinitionIndex)->GetStaticField(0x3F3C);
		}
		static ::System::Int32* StaticGet__HpColorsL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HPBar_TypeDefinitionIndex)->GetStaticField(0x3F40);
		}
		static ::System::Int32* StaticGet__ColorRingBg()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HPBar_TypeDefinitionIndex)->GetStaticField(0x3F44);
		}
		static ::System::Int32* StaticGet__HpFills()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HPBar_TypeDefinitionIndex)->GetStaticField(0x3F48);
		}
		static ::System::Int32* StaticGet__Aspect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HPBar_TypeDefinitionIndex)->GetStaticField(0x3F4C);
		}
		static ::System::Int32* StaticGet__HpModes()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HPBar_TypeDefinitionIndex)->GetStaticField(0x3F50);
		}
		static ::System::Int32* StaticGet__InnerAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HPBar_TypeDefinitionIndex)->GetStaticField(0x3F54);
		}
		static ::System::Int32* StaticGet__HpColorsR()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HPBar_TypeDefinitionIndex)->GetStaticField(0x3F58);
		}
		static ::System::Int32* StaticGet__RingPercent()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HPBar_TypeDefinitionIndex)->GetStaticField(0x3F5C);
		}
		// static const ::System::Int32 k_MaxCount = 0x6; // 0x0
		::UnityEngine::Texture* alphaTexture; // 0xF0
		::System::UInt32 m_OuterPixelOffset; // 0xF8
		::System::UInt32 m_InnerPixelOffset; // 0xFC
		::System::Boolean adaptive; // 0x100
		::System::UInt32 m_HpPixelOffset; // 0x104
		::System::Single m_InnerAlpha; // 0x108
		::System::Boolean m_RingMode; // 0x10C
		::System::Single m_RingRadiusOuter; // 0x110
		::System::Single m_RingRadiusInner; // 0x114
		::UnityEngine::Color m_ColorRingBg; // 0x118
		::System::Single m_RingBgWidth; // 0x128
		::System::Single m_RingDegree; // 0x12C
		::System::Single m_RingBgOffsetDegree; // 0x130
		::UnityEngine::Material* m_MaterialInstance; // 0x138
		::RPG::Client::HPBar_ColorAnimState m_ColorState; // 0x140
		::System::Boolean m_MultiLayer; // 0x190
		::System::Int32 m_LayerCount; // 0x194
		::Il2CppArray<::System::Single>* m_HpFills; // 0x198
		::Il2CppArray<::UnityEngine::Color>* m_HpColorsL; // 0x1A0
		::Il2CppArray<::UnityEngine::Color>* m_HpColorsR; // 0x1A8
		::Il2CppArray<::RPG::Client::HPBar_Mode>* m_HpModes; // 0x1B0
		::Il2CppArray<::RPG::Client::HPBar_ColorMode>* m_HpColorModes; // 0x1B8
		::Il2CppArray<::UnityEngine::Texture*>* m_Textures; // 0x1C0
		::Il2CppArray<::System::Single>* m_HpModesFloat; // 0x1C8
		::Il2CppArray<::System::Single>* m_TexAspects; // 0x1D0
		::UnityEngine::Texture* m_DirtyTexture; // 0x1D8
		::System::Single m_FillAmount; // 0x1E0
		::System::Single m_DirtyAmount; // 0x1E4
		::System::Single m_BgAmount; // 0x1E8
		::System::Single m_DummyAmount; // 0x1EC
		::UnityEngine::Color m_ColorL; // 0x1F0
		::UnityEngine::Color m_ColorR; // 0x200
		::UnityEngine::Color m_ColorD; // 0x210
		::UnityEngine::Color m_ColorB; // 0x220
		::UnityEngine::Color m_ColorDummy; // 0x230

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR__CCTOR_OFFSET))();
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::UInt32 get_outerPixelOffset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_OUTERPIXELOFFSET_OFFSET))(this);
		}

		::System::Void set_outerPixelOffset(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_OUTERPIXELOFFSET_OFFSET))(this, value);
		}

		::System::UInt32 get_innerPixelOffset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_INNERPIXELOFFSET_OFFSET))(this);
		}

		::System::Void set_innerPixelOffset(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_INNERPIXELOFFSET_OFFSET))(this, value);
		}

		::System::UInt32 get_hpPixelOffset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_HPPIXELOFFSET_OFFSET))(this);
		}

		::System::Void set_hpPixelOffset(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_HPPIXELOFFSET_OFFSET))(this, value);
		}

		::System::Single get_innerAlpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_INNERALPHA_OFFSET))(this);
		}

		::System::Void set_innerAlpha(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_INNERALPHA_OFFSET))(this, value);
		}

		::System::Boolean get_ringMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_RINGMODE_OFFSET))(this);
		}

		::System::Void set_ringMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_RINGMODE_OFFSET))(this, value);
		}

		::System::Single get_ringRadiusOuter()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_RINGRADIUSOUTER_OFFSET))(this);
		}

		::System::Void set_ringRadiusOuter(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_RINGRADIUSOUTER_OFFSET))(this, value);
		}

		::System::Single get_ringRadiusInner()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_RINGRADIUSINNER_OFFSET))(this);
		}

		::System::Void set_ringRadiusInner(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_RINGRADIUSINNER_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorRingBg()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_COLORRINGBG_OFFSET))(this);
		}

		::System::Void set_colorRingBg(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_COLORRINGBG_OFFSET))(this, value);
		}

		::System::Single get_ringBgWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_RINGBGWIDTH_OFFSET))(this);
		}

		::System::Void set_ringBgWidth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_RINGBGWIDTH_OFFSET))(this, value);
		}

		::System::Single get_ringDegree()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_RINGDEGREE_OFFSET))(this);
		}

		::System::Void set_ringDegree(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_RINGDEGREE_OFFSET))(this, value);
		}

		::System::Single get_ringBgOffsetDegree()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_RINGBGOFFSETDEGREE_OFFSET))(this);
		}

		::System::Void set_ringBgOffsetDegree(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_RINGBGOFFSETDEGREE_OFFSET))(this, value);
		}

		::System::Boolean get_multiLayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_MULTILAYER_OFFSET))(this);
		}

		::System::Void set_multiLayer(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_MULTILAYER_OFFSET))(this, value);
		}

		::System::Int32 get_layerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_LAYERCOUNT_OFFSET))(this);
		}

		::System::Void set_layerCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_LAYERCOUNT_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Single>* get_fillAmounts()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_FILLAMOUNTS_OFFSET))(this);
		}

		::System::Void set_fillAmounts(::Il2CppArray<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_FILLAMOUNTS_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Color>* get_colorsL()
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_COLORSL_OFFSET))(this);
		}

		::System::Void set_colorsL(::Il2CppArray<::UnityEngine::Color>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_COLORSL_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Color>* get_colorsR()
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_COLORSR_OFFSET))(this);
		}

		::System::Void set_colorsR(::Il2CppArray<::UnityEngine::Color>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_COLORSR_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::Client::HPBar_ColorMode>* get_colorModes()
		{
			return ((::Il2CppArray<::RPG::Client::HPBar_ColorMode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_COLORMODES_OFFSET))(this);
		}

		::System::Void set_colorModes(::Il2CppArray<::RPG::Client::HPBar_ColorMode>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::HPBar_ColorMode>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_COLORMODES_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::Client::HPBar_Mode>* get_modes()
		{
			return ((::Il2CppArray<::RPG::Client::HPBar_Mode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_MODES_OFFSET))(this);
		}

		::System::Void set_modes(::Il2CppArray<::RPG::Client::HPBar_Mode>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::HPBar_Mode>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_MODES_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Texture*>* get_textures()
		{
			return ((::Il2CppArray<::UnityEngine::Texture*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_TEXTURES_OFFSET))(this);
		}

		::System::Void set_textures(::Il2CppArray<::UnityEngine::Texture*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Texture*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_TEXTURES_OFFSET))(this, value);
		}

		::UnityEngine::Material* get_materialForRendering()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_MATERIALFORRENDERING_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_REFRESH_OFFSET))(this);
		}

		::System::Void RefreshLegacy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_REFRESHLEGACY_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_ONPOPULATEMESH_OFFSET))(this, vh);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_ONDISABLE_OFFSET))(this);
		}

		::System::Void _SetAspect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR__SETASPECT_OFFSET))(this);
		}

		::System::Void _SetTextures()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR__SETTEXTURES_OFFSET))(this);
		}

		::System::Single get_fillAmount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_FILLAMOUNT_OFFSET))(this);
		}

		::System::Void set_fillAmount(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_FILLAMOUNT_OFFSET))(this, value);
		}

		::System::Single get_dirtyAmount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_DIRTYAMOUNT_OFFSET))(this);
		}

		::System::Void set_dirtyAmount(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_DIRTYAMOUNT_OFFSET))(this, value);
		}

		::System::Single get_bgAmount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_BGAMOUNT_OFFSET))(this);
		}

		::System::Void set_bgAmount(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_BGAMOUNT_OFFSET))(this, value);
		}

		::System::Single get_dummyAmount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_DUMMYAMOUNT_OFFSET))(this);
		}

		::System::Void set_dummyAmount(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_DUMMYAMOUNT_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorL()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_COLORL_OFFSET))(this);
		}

		::System::Void set_colorL(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_COLORL_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorR()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_COLORR_OFFSET))(this);
		}

		::System::Void set_colorR(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_COLORR_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorD()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_COLORD_OFFSET))(this);
		}

		::System::Void set_colorD(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_COLORD_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorB()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_COLORB_OFFSET))(this);
		}

		::System::Void set_colorB(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_COLORB_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorDummy()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_GET_COLORDUMMY_OFFSET))(this);
		}

		::System::Void set_colorDummy(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR_SET_COLORDUMMY_OFFSET))(this, value);
		}

		::UnityEngine::Texture* __iFixBaseProxy_get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR___IFIXBASEPROXY_GET_MAINTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Material* __iFixBaseProxy_get_materialForRendering()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR___IFIXBASEPROXY_GET_MATERIALFORRENDERING_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR___IFIXBASEPROXY_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR___IFIXBASEPROXY_ONPOPULATEMESH_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR___IFIXBASEPROXY_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR___IFIXBASEPROXY_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HPBAR___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
		}
	};
}
