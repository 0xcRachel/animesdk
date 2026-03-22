#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/Image_Type.h"
#include "unitysdk/UnityEngine/UI/SmoothMaskMaterial_Params.h"
#include "unitysdk/UnityEngine/UI/SmoothMask_FillOriginHorizontal.h"
#include "unitysdk/UnityEngine/UI/SmoothMask_FillOriginRadial.h"
#include "unitysdk/UnityEngine/UI/SmoothMask_FillOriginRadial90.h"
#include "unitysdk/UnityEngine/UI/SmoothMask_FillOriginVertical.h"
#include "unitysdk/UnityEngine/UI/SmoothMask_FillType.h"
#include "unitysdk/UnityEngine/UI/SmoothMask_SoftRangeType.h"
#include "unitysdk/UnityEngine/UI/SmoothMask_Type.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_UI_SMOOTHMASK_CACHEROOTCANVAS_OFFSET UNITYSDK_OFFSET(0x18358180)
#define UNITYENGINE_UI_SMOOTHMASK_GETADJUSTEDBORDERS_OFFSET UNITYSDK_OFFSET(0x1835A6A0)
#define UNITYENGINE_UI_SMOOTHMASK_GETPIXELADJUSTEDRECT_OFFSET UNITYSDK_OFFSET(0x1835A470)
#define UNITYENGINE_UI_SMOOTHMASK_GET_ACTIVESPRITE_OFFSET UNITYSDK_OFFSET(0x18357500)
#define UNITYENGINE_UI_SMOOTHMASK_GET_CANVASTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18358260)
#define UNITYENGINE_UI_SMOOTHMASK_GET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x18357F00)
#define UNITYENGINE_UI_SMOOTHMASK_GET_FILLCLOCKWISE_OFFSET UNITYSDK_OFFSET(0x18358050)
#define UNITYENGINE_UI_SMOOTHMASK_GET_FILLORIGINHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x18357FC0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_FILLORIGINRADIAL90_OFFSET UNITYSDK_OFFSET(0x18358020)
#define UNITYENGINE_UI_SMOOTHMASK_GET_FILLORIGINRADIAL_OFFSET UNITYSDK_OFFSET(0x18358000)
#define UNITYENGINE_UI_SMOOTHMASK_GET_FILLORIGINVERTICAL_OFFSET UNITYSDK_OFFSET(0x18357FE0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_FILLSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x18357E50)
#define UNITYENGINE_UI_SMOOTHMASK_GET_FILLSOFT_OFFSET UNITYSDK_OFFSET(0x18357D30)
#define UNITYENGINE_UI_SMOOTHMASK_GET_FILLTYPE_OFFSET UNITYSDK_OFFSET(0x18357D10)
#define UNITYENGINE_UI_SMOOTHMASK_GET_HORIZONTALSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x18357B00)
#define UNITYENGINE_UI_SMOOTHMASK_GET_HORIZONTALSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x183578C0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_IMAGETYPE_OFFSET UNITYSDK_OFFSET(0x183575C0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_MULTIPLIEDPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x183577E0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_OVERRIDEFILLSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x18357DC0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_OVERRIDESPRITE_OFFSET UNITYSDK_OFFSET(0x183574E0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_OVERRIDETEXTURE_OFFSET UNITYSDK_OFFSET(0x183575A0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_PIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x183576E0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_RADIALSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x18357C60)
#define UNITYENGINE_UI_SMOOTHMASK_GET_RADIALSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x18357A40)
#define UNITYENGINE_UI_SMOOTHMASK_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x183580F0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_REVERSEMASK_OFFSET UNITYSDK_OFFSET(0x183573C0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_ROOTCANVAS_OFFSET UNITYSDK_OFFSET(0x183577A0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_SOFTRANGETYPE_OFFSET UNITYSDK_OFFSET(0x183578A0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_SPRITE_OFFSET UNITYSDK_OFFSET(0x18357450)
#define UNITYENGINE_UI_SMOOTHMASK_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x18357660)
#define UNITYENGINE_UI_SMOOTHMASK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x18357390)
#define UNITYENGINE_UI_SMOOTHMASK_GET_VERTICALSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x18357BB0)
#define UNITYENGINE_UI_SMOOTHMASK_GET_VERTICALSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x18357980)
#define UNITYENGINE_UI_SMOOTHMASK_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0x1835A8F0)
#define UNITYENGINE_UI_SMOOTHMASK_MASKENABLED_OFFSET UNITYSDK_OFFSET(0x18358340)
#define UNITYENGINE_UI_SMOOTHMASK_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x18358480)
#define UNITYENGINE_UI_SMOOTHMASK_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1835AA70)
#define UNITYENGINE_UI_SMOOTHMASK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18358400)
#define UNITYENGINE_UI_SMOOTHMASK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18358360)
#define UNITYENGINE_UI_SMOOTHMASK_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1835AA60)
#define UNITYENGINE_UI_SMOOTHMASK_ONSIBLINGGRAPHICENABLEDDISABLED_OFFSET UNITYSDK_OFFSET(0x18358350)
#define UNITYENGINE_UI_SMOOTHMASK_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x18358580)
#define UNITYENGINE_UI_SMOOTHMASK_REBUILD_OFFSET UNITYSDK_OFFSET(0x1835AA80)
#define UNITYENGINE_UI_SMOOTHMASK_RECALCULATEPARAMS_OFFSET UNITYSDK_OFFSET(0x18358940)
#define UNITYENGINE_UI_SMOOTHMASK_SETPARAMSDIRTY_OFFSET UNITYSDK_OFFSET(0x183573B0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x18357F10)
#define UNITYENGINE_UI_SMOOTHMASK_SET_FILLCLOCKWISE_OFFSET UNITYSDK_OFFSET(0x18358060)
#define UNITYENGINE_UI_SMOOTHMASK_SET_FILLORIGINHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x18357FD0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_FILLORIGINRADIAL90_OFFSET UNITYSDK_OFFSET(0x18358030)
#define UNITYENGINE_UI_SMOOTHMASK_SET_FILLORIGINRADIAL_OFFSET UNITYSDK_OFFSET(0x18358010)
#define UNITYENGINE_UI_SMOOTHMASK_SET_FILLORIGINVERTICAL_OFFSET UNITYSDK_OFFSET(0x18357FF0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_FILLSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x18357E60)
#define UNITYENGINE_UI_SMOOTHMASK_SET_FILLSOFT_OFFSET UNITYSDK_OFFSET(0x18357D40)
#define UNITYENGINE_UI_SMOOTHMASK_SET_FILLTYPE_OFFSET UNITYSDK_OFFSET(0x18357D20)
#define UNITYENGINE_UI_SMOOTHMASK_SET_HORIZONTALSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x18357B10)
#define UNITYENGINE_UI_SMOOTHMASK_SET_HORIZONTALSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x183578D0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_IMAGETYPE_OFFSET UNITYSDK_OFFSET(0x183575D0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_OVERRIDEFILLSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x18357DD0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_OVERRIDESPRITE_OFFSET UNITYSDK_OFFSET(0x18357520)
#define UNITYENGINE_UI_SMOOTHMASK_SET_OVERRIDETEXTURE_OFFSET UNITYSDK_OFFSET(0x183575B0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_RADIALSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x18357C70)
#define UNITYENGINE_UI_SMOOTHMASK_SET_RADIALSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x18357A50)
#define UNITYENGINE_UI_SMOOTHMASK_SET_REVERSEMASK_OFFSET UNITYSDK_OFFSET(0x183573D0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_SOFTRANGETYPE_OFFSET UNITYSDK_OFFSET(0x183578B0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_SPRITE_OFFSET UNITYSDK_OFFSET(0x18357460)
#define UNITYENGINE_UI_SMOOTHMASK_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x183573A0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_VERTICALSOFTPIXEL_OFFSET UNITYSDK_OFFSET(0x18357BC0)
#define UNITYENGINE_UI_SMOOTHMASK_SET_VERTICALSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x18357990)
#define UNITYENGINE_UI_SMOOTHMASK_TRANSFORMPOINTS_OFFSET UNITYSDK_OFFSET(0x18358600)
#define UNITYENGINE_UI_SMOOTHMASK_UPDATEROOTCANVAS_OFFSET UNITYSDK_OFFSET(0x18358500)
#define UNITYENGINE_UI_SMOOTHMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x183582A0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SmoothMask_TypeDefinitionIndex = 5614;

	class SmoothMask : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::UI::SmoothMask_Type m_Type; // 0x18
		::System::Boolean m_ReverseMask; // 0x1C
		::UnityEngine::Sprite* m_Sprite; // 0x20
		::UnityEngine::Sprite* m_OverrideSprite; // 0x28
		::UnityEngine::Texture* _overrideTexture_k__BackingField; // 0x30
		::UnityEngine::UI::Image_Type m_ImageType; // 0x38
		::System::Single m_CachedReferencePixelsPerUnit; // 0x3C
		::System::Single m_PixelsPerUnitMultiplier; // 0x40
		::UnityEngine::UI::SmoothMask_SoftRangeType m_SoftRangeType; // 0x44
		::System::Single m_HorizontalSoftRange; // 0x48
		::System::Single m_VerticalSoftRange; // 0x4C
		::System::Single m_RadialSoftRange; // 0x50
		::System::Int32 m_HorizontalSoftPixel; // 0x54
		::System::Int32 m_VerticalSoftPixel; // 0x58
		::System::Int32 m_RadialSoftPixel; // 0x5C
		::UnityEngine::UI::SmoothMask_FillType m_FillType; // 0x60
		::System::Boolean m_FillSoft; // 0x64
		::System::Boolean m_OverrideFillSoftRange; // 0x65
		::UnityEngine::Vector2 m_FillSoftRange; // 0x68
		::System::Single m_FillAmount; // 0x70
		::UnityEngine::UI::SmoothMask_FillOriginHorizontal m_FillOriginHorizontal; // 0x74
		::UnityEngine::UI::SmoothMask_FillOriginVertical m_FillOriginVertical; // 0x78
		::UnityEngine::UI::SmoothMask_FillOriginRadial m_FillOriginRadial; // 0x7C
		::UnityEngine::UI::SmoothMask_FillOriginRadial90 m_FillOriginRadial90; // 0x80
		::System::Boolean m_FillClockwise; // 0x84
		::UnityEngine::RectTransform* m_RectTransform; // 0x88
		::UnityEngine::UI::SmoothMaskMaterial_Params materialParams; // 0x90
		::System::Boolean m_MaterialParamsDirty; // 0x150
		::UnityEngine::Canvas* m_RootCanvas; // 0x158
		::UnityEngine::RectTransform* m_CanvasTransform; // 0x160
		::UnityEngine::Matrix4x4 m_LocalToWorldMatrix; // 0x168
		::Il2CppArray<::UnityEngine::Vector3>* _Corners; // 0x1A8
		::UnityEngine::Vector4 SmoothMaskTexSlice0; // 0x1B0
		::Il2CppArray<::UnityEngine::Vector4>* s_VertScratch; // 0x1C0
		::UnityEngine::Vector4 fillParams; // 0x1C8
		::UnityEngine::Vector4 fillParams2; // 0x1D8
		::UnityEngine::Vector2 unitPerPixel; // 0x1E8
		::UnityEngine::Vector4 SmoothMaskTexSlice1; // 0x1F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::SmoothMask_Type get_type()
		{
			return ((::UnityEngine::UI::SmoothMask_Type(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::UnityEngine::UI::SmoothMask_Type value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::SmoothMask_Type))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_TYPE_OFFSET))(this, value);
		}

		::System::Boolean get_reverseMask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_REVERSEMASK_OFFSET))(this);
		}

		::System::Void set_reverseMask(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_REVERSEMASK_OFFSET))(this, value);
		}

		::UnityEngine::Sprite* get_sprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_SPRITE_OFFSET))(this);
		}

		::System::Void set_sprite(::UnityEngine::Sprite* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_SPRITE_OFFSET))(this, value);
		}

		::UnityEngine::Sprite* get_overrideSprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_OVERRIDESPRITE_OFFSET))(this);
		}

		::System::Void set_overrideSprite(::UnityEngine::Sprite* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_OVERRIDESPRITE_OFFSET))(this, value);
		}

		::UnityEngine::Sprite* get_activeSprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_ACTIVESPRITE_OFFSET))(this);
		}

		::UnityEngine::Texture* get_overrideTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_OVERRIDETEXTURE_OFFSET))(this);
		}

		::System::Void set_overrideTexture(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_OVERRIDETEXTURE_OFFSET))(this, value);
		}

		::UnityEngine::UI::Image_Type get_imageType()
		{
			return ((::UnityEngine::UI::Image_Type(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_IMAGETYPE_OFFSET))(this);
		}

		::System::Void set_imageType(::UnityEngine::UI::Image_Type value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image_Type))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_IMAGETYPE_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get_texture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_TEXTURE_OFFSET))(this);
		}

		::System::Single get_pixelsPerUnit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_PIXELSPERUNIT_OFFSET))(this);
		}

		::System::Single get_multipliedPixelsPerUnit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_MULTIPLIEDPIXELSPERUNIT_OFFSET))(this);
		}

		::UnityEngine::UI::SmoothMask_SoftRangeType get_softRangeType()
		{
			return ((::UnityEngine::UI::SmoothMask_SoftRangeType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_SOFTRANGETYPE_OFFSET))(this);
		}

		::System::Void set_softRangeType(::UnityEngine::UI::SmoothMask_SoftRangeType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::SmoothMask_SoftRangeType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_SOFTRANGETYPE_OFFSET))(this, value);
		}

		::System::Single get_horizontalSoftRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_HORIZONTALSOFTRANGE_OFFSET))(this);
		}

		::System::Void set_horizontalSoftRange(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_HORIZONTALSOFTRANGE_OFFSET))(this, value);
		}

		::System::Single get_verticalSoftRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_VERTICALSOFTRANGE_OFFSET))(this);
		}

		::System::Void set_verticalSoftRange(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_VERTICALSOFTRANGE_OFFSET))(this, value);
		}

		::System::Single get_radialSoftRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_RADIALSOFTRANGE_OFFSET))(this);
		}

		::System::Void set_radialSoftRange(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_RADIALSOFTRANGE_OFFSET))(this, value);
		}

		::System::Int32 get_horizontalSoftPixel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_HORIZONTALSOFTPIXEL_OFFSET))(this);
		}

		::System::Void set_horizontalSoftPixel(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_HORIZONTALSOFTPIXEL_OFFSET))(this, value);
		}

		::System::Int32 get_verticalSoftPixel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_VERTICALSOFTPIXEL_OFFSET))(this);
		}

		::System::Void set_verticalSoftPixel(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_VERTICALSOFTPIXEL_OFFSET))(this, value);
		}

		::System::Int32 get_radialSoftPixel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_RADIALSOFTPIXEL_OFFSET))(this);
		}

		::System::Void set_radialSoftPixel(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_RADIALSOFTPIXEL_OFFSET))(this, value);
		}

		::UnityEngine::UI::SmoothMask_FillType get_fillType()
		{
			return ((::UnityEngine::UI::SmoothMask_FillType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_FILLTYPE_OFFSET))(this);
		}

		::System::Void set_fillType(::UnityEngine::UI::SmoothMask_FillType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::SmoothMask_FillType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_FILLTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_fillSoft()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_FILLSOFT_OFFSET))(this);
		}

		::System::Void set_fillSoft(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_FILLSOFT_OFFSET))(this, value);
		}

		::System::Boolean get_overrideFillSoftRange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_OVERRIDEFILLSOFTRANGE_OFFSET))(this);
		}

		::System::Void set_overrideFillSoftRange(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_OVERRIDEFILLSOFTRANGE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_fillSoftRange()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_FILLSOFTRANGE_OFFSET))(this);
		}

		::System::Void set_fillSoftRange(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_FILLSOFTRANGE_OFFSET))(this, value);
		}

		::System::Single get_fillAmount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_FILLAMOUNT_OFFSET))(this);
		}

		::System::Void set_fillAmount(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_FILLAMOUNT_OFFSET))(this, value);
		}

		::UnityEngine::UI::SmoothMask_FillOriginHorizontal get_fillOriginHorizontal()
		{
			return ((::UnityEngine::UI::SmoothMask_FillOriginHorizontal(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_FILLORIGINHORIZONTAL_OFFSET))(this);
		}

		::System::Void set_fillOriginHorizontal(::UnityEngine::UI::SmoothMask_FillOriginHorizontal value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::SmoothMask_FillOriginHorizontal))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_FILLORIGINHORIZONTAL_OFFSET))(this, value);
		}

		::UnityEngine::UI::SmoothMask_FillOriginVertical get_fillOriginVertical()
		{
			return ((::UnityEngine::UI::SmoothMask_FillOriginVertical(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_FILLORIGINVERTICAL_OFFSET))(this);
		}

		::System::Void set_fillOriginVertical(::UnityEngine::UI::SmoothMask_FillOriginVertical value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::SmoothMask_FillOriginVertical))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_FILLORIGINVERTICAL_OFFSET))(this, value);
		}

		::UnityEngine::UI::SmoothMask_FillOriginRadial get_fillOriginRadial()
		{
			return ((::UnityEngine::UI::SmoothMask_FillOriginRadial(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_FILLORIGINRADIAL_OFFSET))(this);
		}

		::System::Void set_fillOriginRadial(::UnityEngine::UI::SmoothMask_FillOriginRadial value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::SmoothMask_FillOriginRadial))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_FILLORIGINRADIAL_OFFSET))(this, value);
		}

		::UnityEngine::UI::SmoothMask_FillOriginRadial90 get_fillOriginRadial90()
		{
			return ((::UnityEngine::UI::SmoothMask_FillOriginRadial90(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_FILLORIGINRADIAL90_OFFSET))(this);
		}

		::System::Void set_fillOriginRadial90(::UnityEngine::UI::SmoothMask_FillOriginRadial90 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::SmoothMask_FillOriginRadial90))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_FILLORIGINRADIAL90_OFFSET))(this, value);
		}

		::System::Boolean get_fillClockwise()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_FILLCLOCKWISE_OFFSET))(this);
		}

		::System::Void set_fillClockwise(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SET_FILLCLOCKWISE_OFFSET))(this, value);
		}

		::UnityEngine::RectTransform* get_rectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_RECTTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Canvas* get_rootCanvas()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_ROOTCANVAS_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_canvasTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GET_CANVASTRANSFORM_OFFSET))(this);
		}

		::System::Void CacheRootCanvas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_CACHEROOTCANVAS_OFFSET))(this);
		}

		::System::Boolean MaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_MASKENABLED_OFFSET))(this);
		}

		::System::Void OnSiblingGraphicEnabledDisabled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_ONSIBLINGGRAPHICENABLEDDISABLED_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void UpdateRootCanvas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_UPDATEROOTCANVAS_OFFSET))(this);
		}

		::System::Void SetParamsDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_SETPARAMSDIRTY_OFFSET))(this);
		}

		static ::System::Void TransformPoints(::Il2CppArray<::UnityEngine::Vector3>* points, ::UnityEngine::Matrix4x4 mat)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_TRANSFORMPOINTS_OFFSET))(points, mat);
		}

		::System::Void RecalculateParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_RECALCULATEPARAMS_OFFSET))(this);
		}

		::UnityEngine::Rect GetPixelAdjustedRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GETPIXELADJUSTEDRECT_OFFSET))(this);
		}

		::UnityEngine::Vector4 GetAdjustedBorders(::UnityEngine::Vector4 border, ::UnityEngine::Rect adjustedRect)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_GETADJUSTEDBORDERS_OFFSET))(this, border, adjustedRect);
		}

		::System::Boolean IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_ISRAYCASTLOCATIONVALID_OFFSET))(this, sp, eventCamera);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void Rebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASK_REBUILD_OFFSET))(this);
		}
	};
}
