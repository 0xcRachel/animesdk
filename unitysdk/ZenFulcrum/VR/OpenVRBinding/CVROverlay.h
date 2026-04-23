#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EColorSpace.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EOverlayDirection.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETextureType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackingUniverseOrigin.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdColor_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdRect2_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdVector2_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IVROverlay.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/Texture_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VRMessageOverlayResponse.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VROverlayFlags.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VROverlayInputMethod.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VROverlayIntersectionMaskPrimitive_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VROverlayIntersectionParams_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VROverlayIntersectionResults_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VROverlayTransformType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VRTextureBounds_t.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_CLEAROVERLAYTEXTURE_OFFSET UNITYSDK_OFFSET(0x18A045C0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_CLOSEMESSAGEOVERLAY_OFFSET UNITYSDK_OFFSET(0x18A04910)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_COMPUTEOVERLAYINTERSECTION_OFFSET UNITYSDK_OFFSET(0x18A044C0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_CREATEDASHBOARDOVERLAY_OFFSET UNITYSDK_OFFSET(0x18A046C0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_CREATEOVERLAY_OFFSET UNITYSDK_OFFSET(0x18A038E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_DESTROYOVERLAY_OFFSET UNITYSDK_OFFSET(0x18A03910)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_FINDOVERLAY_OFFSET UNITYSDK_OFFSET(0x18A038B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETDASHBOARDOVERLAYSCENEPROCESS_OFFSET UNITYSDK_OFFSET(0x18A04760)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETGAMEPADFOCUSOVERLAY_OFFSET UNITYSDK_OFFSET(0x18A04520)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETHIGHQUALITYOVERLAY_OFFSET UNITYSDK_OFFSET(0x18A03950)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETKEYBOARDTEXT_OFFSET UNITYSDK_OFFSET(0x18A04810)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYALPHA_OFFSET UNITYSDK_OFFSET(0x18A03B50)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_OFFSET UNITYSDK_OFFSET(0x18A03C90)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYCOLOR_OFFSET UNITYSDK_OFFSET(0x18A03AF0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYERRORNAMEFROMENUM_OFFSET UNITYSDK_OFFSET(0x18A03A10)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYFLAGS_OFFSET UNITYSDK_OFFSET(0x18A048C0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYFLAG_OFFSET UNITYSDK_OFFSET(0x18A03AB0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYIMAGEDATA_OFFSET UNITYSDK_OFFSET(0x18A039D0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYINPUTMETHOD_OFFSET UNITYSDK_OFFSET(0x18A04440)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYKEY_OFFSET UNITYSDK_OFFSET(0x18A03970)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYMOUSESCALE_OFFSET UNITYSDK_OFFSET(0x18A04480)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYNAME_OFFSET UNITYSDK_OFFSET(0x18A03990)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYRENDERINGPID_OFFSET UNITYSDK_OFFSET(0x18A03A70)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYRENDERMODEL_OFFSET UNITYSDK_OFFSET(0x18A03D40)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYSORTORDER_OFFSET UNITYSDK_OFFSET(0x18A03BF0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTEXELASPECT_OFFSET UNITYSDK_OFFSET(0x18A03BA0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTEXTUREBOUNDS_OFFSET UNITYSDK_OFFSET(0x18A03D20)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTEXTURECOLORSPACE_OFFSET UNITYSDK_OFFSET(0x18A03CE0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0x18A04690)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTEXTURE_OFFSET UNITYSDK_OFFSET(0x18A04620)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTRANSFORMABSOLUTE_OFFSET UNITYSDK_OFFSET(0x18A03DC0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTRANSFORMOVERLAYRELATIVE_OFFSET UNITYSDK_OFFSET(0x18A03E80)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTRANSFORMTRACKEDDEVICECOMPONENT_OFFSET UNITYSDK_OFFSET(0x18A03E50)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTRANSFORMTRACKEDDEVICERELATIVE_OFFSET UNITYSDK_OFFSET(0x18A03E00)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTRANSFORMTYPE_OFFSET UNITYSDK_OFFSET(0x18A03D80)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYWIDTHINMETERS_OFFSET UNITYSDK_OFFSET(0x18A03C40)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETPRIMARYDASHBOARDDEVICE_OFFSET UNITYSDK_OFFSET(0x18A047B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETTRANSFORMFOROVERLAYCOORDINATES_OFFSET UNITYSDK_OFFSET(0x18A03F30)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_HANDLECONTROLLEROVERLAYINTERACTIONASMOUSE_OFFSET UNITYSDK_OFFSET(0x18A044E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_HIDEKEYBOARD_OFFSET UNITYSDK_OFFSET(0x18A04830)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_HIDEOVERLAY_OFFSET UNITYSDK_OFFSET(0x18A03EF0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_ISACTIVEDASHBOARDOVERLAY_OFFSET UNITYSDK_OFFSET(0x18A04720)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_ISDASHBOARDVISIBLE_OFFSET UNITYSDK_OFFSET(0x18A04700)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_ISHOVERTARGETOVERLAY_OFFSET UNITYSDK_OFFSET(0x18A04500)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_ISOVERLAYVISIBLE_OFFSET UNITYSDK_OFFSET(0x18A03F10)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_MOVEGAMEPADFOCUSTONEIGHBOR_OFFSET UNITYSDK_OFFSET(0x18A04580)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_POLLNEXTOVERLAYEVENT_OFFSET UNITYSDK_OFFSET(0x18A03F50)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_RELEASENATIVEOVERLAYHANDLE_OFFSET UNITYSDK_OFFSET(0x18A04670)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETDASHBOARDOVERLAYSCENEPROCESS_OFFSET UNITYSDK_OFFSET(0x18A04740)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETGAMEPADFOCUSOVERLAY_OFFSET UNITYSDK_OFFSET(0x18A04540)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETHIGHQUALITYOVERLAY_OFFSET UNITYSDK_OFFSET(0x18A03930)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETKEYBOARDPOSITIONFOROVERLAY_OFFSET UNITYSDK_OFFSET(0x18A04870)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETKEYBOARDTRANSFORMABSOLUTE_OFFSET UNITYSDK_OFFSET(0x18A04850)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYALPHA_OFFSET UNITYSDK_OFFSET(0x18A03B30)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_OFFSET UNITYSDK_OFFSET(0x18A03C70)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYCOLOR_OFFSET UNITYSDK_OFFSET(0x18A03AD0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYFLAG_OFFSET UNITYSDK_OFFSET(0x18A03A90)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYFROMFILE_OFFSET UNITYSDK_OFFSET(0x18A04600)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYINPUTMETHOD_OFFSET UNITYSDK_OFFSET(0x18A04460)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYINTERSECTIONMASK_OFFSET UNITYSDK_OFFSET(0x18A048A0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYMOUSESCALE_OFFSET UNITYSDK_OFFSET(0x18A044A0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYNAME_OFFSET UNITYSDK_OFFSET(0x18A039B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYNEIGHBOR_OFFSET UNITYSDK_OFFSET(0x18A04560)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYRAW_OFFSET UNITYSDK_OFFSET(0x18A045E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYRENDERINGPID_OFFSET UNITYSDK_OFFSET(0x18A03A50)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYRENDERMODEL_OFFSET UNITYSDK_OFFSET(0x18A03D60)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYSORTORDER_OFFSET UNITYSDK_OFFSET(0x18A03BD0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTEXELASPECT_OFFSET UNITYSDK_OFFSET(0x18A03B80)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTEXTUREBOUNDS_OFFSET UNITYSDK_OFFSET(0x18A03D00)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTEXTURECOLORSPACE_OFFSET UNITYSDK_OFFSET(0x18A03CC0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTEXTURE_OFFSET UNITYSDK_OFFSET(0x18A045A0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTRANSFORMABSOLUTE_OFFSET UNITYSDK_OFFSET(0x18A03DA0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTRANSFORMOVERLAYRELATIVE_OFFSET UNITYSDK_OFFSET(0x18A03EB0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTRANSFORMTRACKEDDEVICECOMPONENT_OFFSET UNITYSDK_OFFSET(0x18A03E30)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTRANSFORMTRACKEDDEVICERELATIVE_OFFSET UNITYSDK_OFFSET(0x18A03DE0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYWIDTHINMETERS_OFFSET UNITYSDK_OFFSET(0x18A03C20)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SHOWDASHBOARD_OFFSET UNITYSDK_OFFSET(0x18A04790)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SHOWKEYBOARDFOROVERLAY_OFFSET UNITYSDK_OFFSET(0x18A047F0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SHOWKEYBOARD_OFFSET UNITYSDK_OFFSET(0x18A047D0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SHOWMESSAGEOVERLAY_OFFSET UNITYSDK_OFFSET(0x18A048F0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SHOWOVERLAY_OFFSET UNITYSDK_OFFSET(0x18A03ED0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x18A037C0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVROverlay_TypeDefinitionIndex = 35964;

	class CVROverlay : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr pInterface)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY__CTOR_OFFSET))(this, pInterface);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError FindOverlay(::System::String* pchOverlayKey, ::System::UInt64& pOverlayHandle)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::String*, ::System::UInt64&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_FINDOVERLAY_OFFSET))(this, pchOverlayKey, pOverlayHandle);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError CreateOverlay(::System::String* pchOverlayKey, ::System::String* pchOverlayName, ::System::UInt64& pOverlayHandle)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt64&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_CREATEOVERLAY_OFFSET))(this, pchOverlayKey, pchOverlayName, pOverlayHandle);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError DestroyOverlay(::System::UInt64 ulOverlayHandle)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_DESTROYOVERLAY_OFFSET))(this, ulOverlayHandle);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetHighQualityOverlay(::System::UInt64 ulOverlayHandle)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETHIGHQUALITYOVERLAY_OFFSET))(this, ulOverlayHandle);
		}

		::System::UInt64 GetHighQualityOverlay()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETHIGHQUALITYOVERLAY_OFFSET))(this);
		}

		::System::UInt32 GetOverlayKey(::System::UInt64 ulOverlayHandle, ::System::Text::StringBuilder* pchValue, ::System::UInt32 unBufferSize, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError& pError)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt64, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYKEY_OFFSET))(this, ulOverlayHandle, pchValue, unBufferSize, pError);
		}

		::System::UInt32 GetOverlayName(::System::UInt64 ulOverlayHandle, ::System::Text::StringBuilder* pchValue, ::System::UInt32 unBufferSize, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError& pError)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt64, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYNAME_OFFSET))(this, ulOverlayHandle, pchValue, unBufferSize, pError);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayName(::System::UInt64 ulOverlayHandle, ::System::String* pchName)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYNAME_OFFSET))(this, ulOverlayHandle, pchName);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayImageData(::System::UInt64 ulOverlayHandle, ::System::IntPtr pvBuffer, ::System::UInt32 unBufferSize, ::System::UInt32& punWidth, ::System::UInt32& punHeight)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::IntPtr, ::System::UInt32, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYIMAGEDATA_OFFSET))(this, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
		}

		::System::String* GetOverlayErrorNameFromEnum(::ZenFulcrum::VR::OpenVRBinding::EVROverlayError error)
		{
			return ((::System::String*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYERRORNAMEFROMENUM_OFFSET))(this, error);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayRenderingPid(::System::UInt64 ulOverlayHandle, ::System::UInt32 unPID)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYRENDERINGPID_OFFSET))(this, ulOverlayHandle, unPID);
		}

		::System::UInt32 GetOverlayRenderingPid(::System::UInt64 ulOverlayHandle)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYRENDERINGPID_OFFSET))(this, ulOverlayHandle);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayFlag(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::VROverlayFlags eOverlayFlag, ::System::Boolean bEnabled)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VROverlayFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYFLAG_OFFSET))(this, ulOverlayHandle, eOverlayFlag, bEnabled);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayFlag(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::VROverlayFlags eOverlayFlag, ::System::Boolean& pbEnabled)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VROverlayFlags, ::System::Boolean&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYFLAG_OFFSET))(this, ulOverlayHandle, eOverlayFlag, pbEnabled);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayColor(::System::UInt64 ulOverlayHandle, ::System::Single fRed, ::System::Single fGreen, ::System::Single fBlue)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYCOLOR_OFFSET))(this, ulOverlayHandle, fRed, fGreen, fBlue);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayColor(::System::UInt64 ulOverlayHandle, ::System::Single& pfRed, ::System::Single& pfGreen, ::System::Single& pfBlue)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYCOLOR_OFFSET))(this, ulOverlayHandle, pfRed, pfGreen, pfBlue);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayAlpha(::System::UInt64 ulOverlayHandle, ::System::Single fAlpha)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYALPHA_OFFSET))(this, ulOverlayHandle, fAlpha);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayAlpha(::System::UInt64 ulOverlayHandle, ::System::Single& pfAlpha)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYALPHA_OFFSET))(this, ulOverlayHandle, pfAlpha);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayTexelAspect(::System::UInt64 ulOverlayHandle, ::System::Single fTexelAspect)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTEXELASPECT_OFFSET))(this, ulOverlayHandle, fTexelAspect);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayTexelAspect(::System::UInt64 ulOverlayHandle, ::System::Single& pfTexelAspect)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTEXELASPECT_OFFSET))(this, ulOverlayHandle, pfTexelAspect);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlaySortOrder(::System::UInt64 ulOverlayHandle, ::System::UInt32 unSortOrder)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYSORTORDER_OFFSET))(this, ulOverlayHandle, unSortOrder);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlaySortOrder(::System::UInt64 ulOverlayHandle, ::System::UInt32& punSortOrder)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYSORTORDER_OFFSET))(this, ulOverlayHandle, punSortOrder);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayWidthInMeters(::System::UInt64 ulOverlayHandle, ::System::Single fWidthInMeters)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYWIDTHINMETERS_OFFSET))(this, ulOverlayHandle, fWidthInMeters);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayWidthInMeters(::System::UInt64 ulOverlayHandle, ::System::Single& pfWidthInMeters)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYWIDTHINMETERS_OFFSET))(this, ulOverlayHandle, pfWidthInMeters);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayAutoCurveDistanceRangeInMeters(::System::UInt64 ulOverlayHandle, ::System::Single fMinDistanceInMeters, ::System::Single fMaxDistanceInMeters)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_OFFSET))(this, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayAutoCurveDistanceRangeInMeters(::System::UInt64 ulOverlayHandle, ::System::Single& pfMinDistanceInMeters, ::System::Single& pfMaxDistanceInMeters)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_OFFSET))(this, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayTextureColorSpace(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace eTextureColorSpace)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTEXTURECOLORSPACE_OFFSET))(this, ulOverlayHandle, eTextureColorSpace);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayTextureColorSpace(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace& peTextureColorSpace)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTEXTURECOLORSPACE_OFFSET))(this, ulOverlayHandle, peTextureColorSpace);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayTextureBounds(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& pOverlayTextureBounds)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTEXTUREBOUNDS_OFFSET))(this, ulOverlayHandle, pOverlayTextureBounds);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayTextureBounds(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& pOverlayTextureBounds)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTEXTUREBOUNDS_OFFSET))(this, ulOverlayHandle, pOverlayTextureBounds);
		}

		::System::UInt32 GetOverlayRenderModel(::System::UInt64 ulOverlayHandle, ::System::String* pchValue, ::System::UInt32 unBufferSize, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& pColor, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError& pError)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt64, ::System::String*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYRENDERMODEL_OFFSET))(this, ulOverlayHandle, pchValue, unBufferSize, pColor, pError);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayRenderModel(::System::UInt64 ulOverlayHandle, ::System::String* pchRenderModel, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& pColor)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYRENDERMODEL_OFFSET))(this, ulOverlayHandle, pchRenderModel, pColor);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayTransformType(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::VROverlayTransformType& peTransformType)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VROverlayTransformType&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTRANSFORMTYPE_OFFSET))(this, ulOverlayHandle, peTransformType);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayTransformAbsolute(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin eTrackingOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTRANSFORMABSOLUTE_OFFSET))(this, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayTransformAbsolute(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin& peTrackingOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin&, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTRANSFORMABSOLUTE_OFFSET))(this, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayTransformTrackedDeviceRelative(::System::UInt64 ulOverlayHandle, ::System::UInt32 unTrackedDevice, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatTrackedDeviceToOverlayTransform)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTRANSFORMTRACKEDDEVICERELATIVE_OFFSET))(this, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayTransformTrackedDeviceRelative(::System::UInt64 ulOverlayHandle, ::System::UInt32& punTrackedDevice, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatTrackedDeviceToOverlayTransform)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32&, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTRANSFORMTRACKEDDEVICERELATIVE_OFFSET))(this, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayTransformTrackedDeviceComponent(::System::UInt64 ulOverlayHandle, ::System::UInt32 unDeviceIndex, ::System::String* pchComponentName)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTRANSFORMTRACKEDDEVICECOMPONENT_OFFSET))(this, ulOverlayHandle, unDeviceIndex, pchComponentName);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayTransformTrackedDeviceComponent(::System::UInt64 ulOverlayHandle, ::System::UInt32& punDeviceIndex, ::System::String* pchComponentName, ::System::UInt32 unComponentNameSize)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32&, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTRANSFORMTRACKEDDEVICECOMPONENT_OFFSET))(this, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayTransformOverlayRelative(::System::UInt64 ulOverlayHandle, ::System::UInt64& ulOverlayHandleParent, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatParentOverlayToOverlayTransform)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt64&, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTRANSFORMOVERLAYRELATIVE_OFFSET))(this, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayTransformOverlayRelative(::System::UInt64 ulOverlayHandle, ::System::UInt64 ulOverlayHandleParent, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatParentOverlayToOverlayTransform)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTRANSFORMOVERLAYRELATIVE_OFFSET))(this, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError ShowOverlay(::System::UInt64 ulOverlayHandle)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SHOWOVERLAY_OFFSET))(this, ulOverlayHandle);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError HideOverlay(::System::UInt64 ulOverlayHandle)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_HIDEOVERLAY_OFFSET))(this, ulOverlayHandle);
		}

		::System::Boolean IsOverlayVisible(::System::UInt64 ulOverlayHandle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_ISOVERLAYVISIBLE_OFFSET))(this, ulOverlayHandle);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetTransformForOverlayCoordinates(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin eTrackingOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t coordinatesInOverlay, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatTransform)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETTRANSFORMFOROVERLAYCOORDINATES_OFFSET))(this, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
		}

		::System::Boolean PollNextOverlayEvent(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t& pEvent, ::System::UInt32 uncbVREvent)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_POLLNEXTOVERLAYEVENT_OFFSET))(this, ulOverlayHandle, pEvent, uncbVREvent);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayInputMethod(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::VROverlayInputMethod& peInputMethod)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VROverlayInputMethod&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYINPUTMETHOD_OFFSET))(this, ulOverlayHandle, peInputMethod);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayInputMethod(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::VROverlayInputMethod eInputMethod)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VROverlayInputMethod))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYINPUTMETHOD_OFFSET))(this, ulOverlayHandle, eInputMethod);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayMouseScale(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t& pvecMouseScale)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYMOUSESCALE_OFFSET))(this, ulOverlayHandle, pvecMouseScale);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayMouseScale(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t& pvecMouseScale)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYMOUSESCALE_OFFSET))(this, ulOverlayHandle, pvecMouseScale);
		}

		::System::Boolean ComputeOverlayIntersection(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionParams_t& pParams, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionResults_t& pResults)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionParams_t&, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionResults_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_COMPUTEOVERLAYINTERSECTION_OFFSET))(this, ulOverlayHandle, pParams, pResults);
		}

		::System::Boolean HandleControllerOverlayInteractionAsMouse(::System::UInt64 ulOverlayHandle, ::System::UInt32 unControllerDeviceIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_HANDLECONTROLLEROVERLAYINTERACTIONASMOUSE_OFFSET))(this, ulOverlayHandle, unControllerDeviceIndex);
		}

		::System::Boolean IsHoverTargetOverlay(::System::UInt64 ulOverlayHandle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_ISHOVERTARGETOVERLAY_OFFSET))(this, ulOverlayHandle);
		}

		::System::UInt64 GetGamepadFocusOverlay()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETGAMEPADFOCUSOVERLAY_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetGamepadFocusOverlay(::System::UInt64 ulNewFocusOverlay)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETGAMEPADFOCUSOVERLAY_OFFSET))(this, ulNewFocusOverlay);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayNeighbor(::ZenFulcrum::VR::OpenVRBinding::EOverlayDirection eDirection, ::System::UInt64 ulFrom, ::System::UInt64 ulTo)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EOverlayDirection, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYNEIGHBOR_OFFSET))(this, eDirection, ulFrom, ulTo);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError MoveGamepadFocusToNeighbor(::ZenFulcrum::VR::OpenVRBinding::EOverlayDirection eDirection, ::System::UInt64 ulFrom)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EOverlayDirection, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_MOVEGAMEPADFOCUSTONEIGHBOR_OFFSET))(this, eDirection, ulFrom);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayTexture(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::Texture_t& pTexture)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::Texture_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTEXTURE_OFFSET))(this, ulOverlayHandle, pTexture);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError ClearOverlayTexture(::System::UInt64 ulOverlayHandle)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_CLEAROVERLAYTEXTURE_OFFSET))(this, ulOverlayHandle);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayRaw(::System::UInt64 ulOverlayHandle, ::System::IntPtr pvBuffer, ::System::UInt32 unWidth, ::System::UInt32 unHeight, ::System::UInt32 unDepth)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::IntPtr, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYRAW_OFFSET))(this, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayFromFile(::System::UInt64 ulOverlayHandle, ::System::String* pchFilePath)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYFROMFILE_OFFSET))(this, ulOverlayHandle, pchFilePath);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayTexture(::System::UInt64 ulOverlayHandle, ::System::IntPtr& pNativeTextureHandle, ::System::IntPtr pNativeTextureRef, ::System::UInt32& pWidth, ::System::UInt32& pHeight, ::System::UInt32& pNativeFormat, ::ZenFulcrum::VR::OpenVRBinding::ETextureType& pAPIType, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace& pColorSpace, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& pTextureBounds)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::IntPtr&, ::System::IntPtr, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::ZenFulcrum::VR::OpenVRBinding::ETextureType&, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace&, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTEXTURE_OFFSET))(this, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError ReleaseNativeOverlayHandle(::System::UInt64 ulOverlayHandle, ::System::IntPtr pNativeTextureHandle)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_RELEASENATIVEOVERLAYHANDLE_OFFSET))(this, ulOverlayHandle, pNativeTextureHandle);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayTextureSize(::System::UInt64 ulOverlayHandle, ::System::UInt32& pWidth, ::System::UInt32& pHeight)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTEXTURESIZE_OFFSET))(this, ulOverlayHandle, pWidth, pHeight);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError CreateDashboardOverlay(::System::String* pchOverlayKey, ::System::String* pchOverlayFriendlyName, ::System::UInt64& pMainHandle, ::System::UInt64& pThumbnailHandle)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_CREATEDASHBOARDOVERLAY_OFFSET))(this, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
		}

		::System::Boolean IsDashboardVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_ISDASHBOARDVISIBLE_OFFSET))(this);
		}

		::System::Boolean IsActiveDashboardOverlay(::System::UInt64 ulOverlayHandle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_ISACTIVEDASHBOARDOVERLAY_OFFSET))(this, ulOverlayHandle);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetDashboardOverlaySceneProcess(::System::UInt64 ulOverlayHandle, ::System::UInt32 unProcessId)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETDASHBOARDOVERLAYSCENEPROCESS_OFFSET))(this, ulOverlayHandle, unProcessId);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetDashboardOverlaySceneProcess(::System::UInt64 ulOverlayHandle, ::System::UInt32& punProcessId)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETDASHBOARDOVERLAYSCENEPROCESS_OFFSET))(this, ulOverlayHandle, punProcessId);
		}

		::System::Void ShowDashboard(::System::String* pchOverlayToShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SHOWDASHBOARD_OFFSET))(this, pchOverlayToShow);
		}

		::System::UInt32 GetPrimaryDashboardDevice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETPRIMARYDASHBOARDDEVICE_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError ShowKeyboard(::System::Int32 eInputMode, ::System::Int32 eLineInputMode, ::System::String* pchDescription, ::System::UInt32 unCharMax, ::System::String* pchExistingText, ::System::Boolean bUseMinimalMode, ::System::UInt64 uUserValue)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::UInt32, ::System::String*, ::System::Boolean, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SHOWKEYBOARD_OFFSET))(this, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError ShowKeyboardForOverlay(::System::UInt64 ulOverlayHandle, ::System::Int32 eInputMode, ::System::Int32 eLineInputMode, ::System::String* pchDescription, ::System::UInt32 unCharMax, ::System::String* pchExistingText, ::System::Boolean bUseMinimalMode, ::System::UInt64 uUserValue)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Int32, ::System::Int32, ::System::String*, ::System::UInt32, ::System::String*, ::System::Boolean, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SHOWKEYBOARDFOROVERLAY_OFFSET))(this, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
		}

		::System::UInt32 GetKeyboardText(::System::Text::StringBuilder* pchText, ::System::UInt32 cchText)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETKEYBOARDTEXT_OFFSET))(this, pchText, cchText);
		}

		::System::Void HideKeyboard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_HIDEKEYBOARD_OFFSET))(this);
		}

		::System::Void SetKeyboardTransformAbsolute(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin eTrackingOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatTrackingOriginToKeyboardTransform)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETKEYBOARDTRANSFORMABSOLUTE_OFFSET))(this, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
		}

		::System::Void SetKeyboardPositionForOverlay(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::HmdRect2_t avoidRect)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::HmdRect2_t))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETKEYBOARDPOSITIONFOROVERLAY_OFFSET))(this, ulOverlayHandle, avoidRect);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayIntersectionMask(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionMaskPrimitive_t& pMaskPrimitives, ::System::UInt32 unNumMaskPrimitives, ::System::UInt32 unPrimitiveSize)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionMaskPrimitive_t&, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYINTERSECTIONMASK_OFFSET))(this, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayFlags(::System::UInt64 ulOverlayHandle, ::System::UInt32& pFlags)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYFLAGS_OFFSET))(this, ulOverlayHandle, pFlags);
		}

		::ZenFulcrum::VR::OpenVRBinding::VRMessageOverlayResponse ShowMessageOverlay(::System::String* pchText, ::System::String* pchCaption, ::System::String* pchButton0Text, ::System::String* pchButton1Text, ::System::String* pchButton2Text, ::System::String* pchButton3Text)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::VRMessageOverlayResponse(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SHOWMESSAGEOVERLAY_OFFSET))(this, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text);
		}

		::System::Void CloseMessageOverlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_CLOSEMESSAGEOVERLAY_OFFSET))(this);
		}
	};
}
