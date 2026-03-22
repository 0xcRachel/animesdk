#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_0_16E4307DCC419505_476;
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_SCREENADAPTERUTILS_GETADJUSTEDSCREENRECT_OFFSET UNITYSDK_OFFSET(0x9F5C9C0)
#define RPG_CLIENT_SCREENADAPTERUTILS_GETCLAMPEDSCREENPOINTPOSITION_OFFSET UNITYSDK_OFFSET(0x9F5C820)
#define RPG_CLIENT_SCREENADAPTERUTILS_GETCLAMPEDSCREENPOINTTORAY_OFFSET UNITYSDK_OFFSET(0x9F5CA70)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ADJUSTEDSCREENASPECT_OFFSET UNITYSDK_OFFSET(0x9F5D8C0)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ADJUSTEDSCREENHEIGHT_OFFSET UNITYSDK_OFFSET(0x9F5DAD0)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ADJUSTEDSCREENWIDTH_OFFSET UNITYSDK_OFFSET(0x9F5DA20)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ADJUSTEDVIEWPORTRECT_OFFSET UNITYSDK_OFFSET(0x9F5CC00)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_CLAMPEDINPUTMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x9F5C770)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_INSCREENASPECTADJUSTED_OFFSET UNITYSDK_OFFSET(0x9F5D830)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ISSCREENHEIGHTADJUSTED_OFFSET UNITYSDK_OFFSET(0x9F5D000)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ISSCREENWIDTHADJUSTED_OFFSET UNITYSDK_OFFSET(0x9F5CEC0)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ORIGINSCREENASPECT_OFFSET UNITYSDK_OFFSET(0x9F5CF90)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ORIGINSCREENHEIGHT_OFFSET UNITYSDK_OFFSET(0x9F5D450)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ORIGINSCREENSAFEAREA_OFFSET UNITYSDK_OFFSET(0x9F5D610)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ORIGINSCREENWIDTH_OFFSET UNITYSDK_OFFSET(0x9F5D350)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_SCREENADAPTER_OFFSET UNITYSDK_OFFSET(0x9F5D560)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_SCREENCENTERPOS_OFFSET UNITYSDK_OFFSET(0x9F5D790)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_TRUEINPUTMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x9F5C720)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET__MAXASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x9F5DBC0)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET__MINASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x9F5DB80)
#define RPG_CLIENT_SCREENADAPTERUTILS_ISSCREENPOINTINADJUSTEDSCREENRECT_OFFSET UNITYSDK_OFFSET(0x9F5C910)
#define RPG_CLIENT_SCREENADAPTERUTILS_ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x9F5D2F0)
#define RPG_CLIENT_SCREENADAPTERUTILS_RESETSCREENADAPTER_OFFSET UNITYSDK_OFFSET(0x9F5D730)
#define RPG_CLIENT_SCREENADAPTERUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F5DC00)
#define RPG_CLIENT_SCREENADAPTERUTILS__GETSCREENPOINTBORDERPOSITION_OFFSET UNITYSDK_OFFSET(0x9F5D0D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ScreenAdapterUtils_TypeDefinitionIndex = 47592;

	class ScreenAdapterUtils : public ::System::Object
	{
	public:
		static ::Class_0_16E4307DCC419505_476** StaticGet__IScreenAdapter()
		{
			return (::Class_0_16E4307DCC419505_476**)Il2CppClass::FromTypeDefinitionIndex(ScreenAdapterUtils_TypeDefinitionIndex)->GetStaticField(0x150D0);
		}
		static ::UnityEngine::Vector4* StaticGet__CachedScreenPointBorderPosition()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(ScreenAdapterUtils_TypeDefinitionIndex)->GetStaticField(0x5040);
		}
		static ::UnityEngine::Rect* StaticGet__DefaultViewPortRect()
		{
			return (::UnityEngine::Rect*)Il2CppClass::FromTypeDefinitionIndex(ScreenAdapterUtils_TypeDefinitionIndex)->GetStaticField(0x5050);
		}
		static ::System::Boolean* StaticGet__IsCachedScreenPointBorderDirty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ScreenAdapterUtils_TypeDefinitionIndex)->GetStaticField(0x5060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_TrueInputMousePosition()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_TRUEINPUTMOUSEPOSITION_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_ClampedInputMousePosition()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_CLAMPEDINPUTMOUSEPOSITION_OFFSET))();
		}

		static ::System::Boolean IsScreenPointInAdjustedScreenRect(::UnityEngine::Vector2 position)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_ISSCREENPOINTINADJUSTEDSCREENRECT_OFFSET))(position);
		}

		static ::UnityEngine::Ray GetClampedScreenPointToRay(::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera)
		{
			return ((::UnityEngine::Ray(*)(::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GETCLAMPEDSCREENPOINTTORAY_OFFSET))(position, camera);
		}

		static ::UnityEngine::Rect get_AdjustedViewPortRect()
		{
			return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ADJUSTEDVIEWPORTRECT_OFFSET))();
		}

		static ::UnityEngine::Vector3 GetClampedScreenPointPosition(::UnityEngine::Vector3 position)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GETCLAMPEDSCREENPOINTPOSITION_OFFSET))(position);
		}

		static ::UnityEngine::Rect GetAdjustedScreenRect()
		{
			return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GETADJUSTEDSCREENRECT_OFFSET))();
		}

		static ::System::Void OnScreenSizeChanged()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_ONSCREENSIZECHANGED_OFFSET))();
		}

		static ::UnityEngine::Vector4 _GetScreenPointBorderPosition()
		{
			return ((::UnityEngine::Vector4(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS__GETSCREENPOINTBORDERPOSITION_OFFSET))();
		}

		static ::System::Int32 get_OriginScreenWidth()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ORIGINSCREENWIDTH_OFFSET))();
		}

		static ::System::Int32 get_OriginScreenHeight()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ORIGINSCREENHEIGHT_OFFSET))();
		}

		static ::UnityEngine::Rect get_OriginScreenSafeArea()
		{
			return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ORIGINSCREENSAFEAREA_OFFSET))();
		}

		static ::System::Single get_OriginScreenAspect()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ORIGINSCREENASPECT_OFFSET))();
		}

		static ::System::Void ResetScreenAdapter()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_RESETSCREENADAPTER_OFFSET))();
		}

		static ::Class_0_16E4307DCC419505_476* get_ScreenAdapter()
		{
			return ((::Class_0_16E4307DCC419505_476*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_SCREENADAPTER_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_ScreenCenterPos()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_SCREENCENTERPOS_OFFSET))();
		}

		static ::System::Boolean get_IsScreenWidthAdjusted()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ISSCREENWIDTHADJUSTED_OFFSET))();
		}

		static ::System::Boolean get_IsScreenHeightAdjusted()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ISSCREENHEIGHTADJUSTED_OFFSET))();
		}

		static ::System::Boolean get_InScreenAspectAdjusted()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_INSCREENASPECTADJUSTED_OFFSET))();
		}

		static ::System::Single get_AdjustedScreenAspect()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ADJUSTEDSCREENASPECT_OFFSET))();
		}

		static ::System::Int32 get_AdjustedScreenWidth()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ADJUSTEDSCREENWIDTH_OFFSET))();
		}

		static ::System::Int32 get_AdjustedScreenHeight()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ADJUSTEDSCREENHEIGHT_OFFSET))();
		}

		static ::System::Single get__MinAspectRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET__MINASPECTRATIO_OFFSET))();
		}

		static ::System::Single get__MaxAspectRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET__MAXASPECTRATIO_OFFSET))();
		}
	};
}
