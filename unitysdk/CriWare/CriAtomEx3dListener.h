#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx3dListener_Config.h"
#include "unitysdk/CriWare/CriAtomEx_NativeVector.h"
#include "unitysdk/CriWare/CriDisposable.h"

namespace CriWare { class CriAtomEx3dRegion; }

#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_CREATE_OFFSET UNITYSDK_OFFSET(0x1128B4F0)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1128B680)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_ISDESTROYABLE_OFFSET UNITYSDK_OFFSET(0x1128C590)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_RESETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1128B890)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SET3DREGIONHN_OFFSET UNITYSDK_OFFSET(0x1128C490)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETDIRECTIONFOCUSLEVEL_OFFSET UNITYSDK_OFFSET(0x1128C360)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETDISTANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x1128C710)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETDISTANCEFOCUSLEVEL_OFFSET UNITYSDK_OFFSET(0x1128C240)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETDOPPLERMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1128BEA0)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETFOCUSPOINT_OFFSET UNITYSDK_OFFSET(0x1128C130)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETORIENTATION_OFFSET UNITYSDK_OFFSET(0x1128BC20)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1128B9B0)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETVELOCITY_OFFSET UNITYSDK_OFFSET(0x1128BAD0)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1128B790)
#define CRIWARE_CRIATOMEX3DLISTENER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1128B590)
#define CRIWARE_CRIATOMEX3DLISTENER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1128B580)
#define CRIWARE_CRIATOMEX3DLISTENER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1128C610)
#define CRIWARE_CRIATOMEX3DLISTENER_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1128B700)
#define CRIWARE_CRIATOMEX3DLISTENER_ISDESTROYABLE_OFFSET UNITYSDK_OFFSET(0x1128C510)
#define CRIWARE_CRIATOMEX3DLISTENER_RESETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1128B810)
#define CRIWARE_CRIATOMEX3DLISTENER_SET3DREGION_OFFSET UNITYSDK_OFFSET(0x1128C3F0)
#define CRIWARE_CRIATOMEX3DLISTENER_SETDIRECTIONFOCUSLEVEL_OFFSET UNITYSDK_OFFSET(0x1128C2D0)
#define CRIWARE_CRIATOMEX3DLISTENER_SETDISTANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x1128BCB0)
#define CRIWARE_CRIATOMEX3DLISTENER_SETDISTANCEFOCUSLEVEL_OFFSET UNITYSDK_OFFSET(0x1128C1B0)
#define CRIWARE_CRIATOMEX3DLISTENER_SETDOPPLERMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1128BF30)
#define CRIWARE_CRIATOMEX3DLISTENER_SETFOCUSPOINT_OFFSET UNITYSDK_OFFSET(0x1128C090)
#define CRIWARE_CRIATOMEX3DLISTENER_SETORIENTATION_OFFSET UNITYSDK_OFFSET(0x1128BB50)
#define CRIWARE_CRIATOMEX3DLISTENER_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1128B910)
#define CRIWARE_CRIATOMEX3DLISTENER_SETVELOCITY_OFFSET UNITYSDK_OFFSET(0x1128BA30)
#define CRIWARE_CRIATOMEX3DLISTENER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1128B710)
#define CRIWARE_CRIATOMEX3DLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1128B420)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx3dListener_TypeDefinitionIndex = 30159;

	class CriAtomEx3dListener : public ::CriWare::CriDisposable
	{
	public:
		::System::IntPtr handle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::IntPtr get_nativeHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_GET_NATIVEHANDLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_UPDATE_OFFSET))(this);
		}

		::System::Void ResetParameters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_RESETPARAMETERS_OFFSET))(this);
		}

		::System::Void SetPosition(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_SETPOSITION_OFFSET))(this, x, y, z);
		}

		::System::Void SetVelocity(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_SETVELOCITY_OFFSET))(this, x, y, z);
		}

		::System::Void SetOrientation(::System::Single fx, ::System::Single fy, ::System::Single fz, ::System::Single ux, ::System::Single uy, ::System::Single uz)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_SETORIENTATION_OFFSET))(this, fx, fy, fz, ux, uy, uz);
		}

		::System::Void SetDistanceFactor(::System::Single distanceFactor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_SETDISTANCEFACTOR_OFFSET))(this, distanceFactor);
		}

		::System::Void SetDopplerMultiplier(::System::Single dopplerMultiplier)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_SETDOPPLERMULTIPLIER_OFFSET))(this, dopplerMultiplier);
		}

		::System::Void SetFocusPoint(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_SETFOCUSPOINT_OFFSET))(this, x, y, z);
		}

		::System::Void SetDistanceFocusLevel(::System::Single distanceFocusLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_SETDISTANCEFOCUSLEVEL_OFFSET))(this, distanceFocusLevel);
		}

		::System::Void SetDirectionFocusLevel(::System::Single directionFocusLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_SETDIRECTIONFOCUSLEVEL_OFFSET))(this, directionFocusLevel);
		}

		::System::Void Set3dRegion(::CriWare::CriAtomEx3dRegion* region3d)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx3dRegion*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_SET3DREGION_OFFSET))(this, region3d);
		}

		::System::Boolean IsDestroyable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_ISDESTROYABLE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_FINALIZE_OFFSET))(this);
		}

		static ::System::IntPtr criAtomEx3dListener_Create(::CriWare::CriAtomEx3dListener_Config& config, ::System::IntPtr work, ::System::Int32 work_size)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomEx3dListener_Config&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_CREATE_OFFSET))(config, work, work_size);
		}

		static ::System::Void criAtomEx3dListener_Destroy(::System::IntPtr ex_3d_listener)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_DESTROY_OFFSET))(ex_3d_listener);
		}

		static ::System::Void criAtomEx3dListener_Update(::System::IntPtr ex_3d_listener)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_UPDATE_OFFSET))(ex_3d_listener);
		}

		static ::System::Void criAtomEx3dListener_ResetParameters(::System::IntPtr ex_3d_listener)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_RESETPARAMETERS_OFFSET))(ex_3d_listener);
		}

		static ::System::Void criAtomEx3dListener_SetPosition(::System::IntPtr ex_3d_listener, ::CriWare::CriAtomEx_NativeVector& position)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETPOSITION_OFFSET))(ex_3d_listener, position);
		}

		static ::System::Void criAtomEx3dListener_SetVelocity(::System::IntPtr ex_3d_listener, ::CriWare::CriAtomEx_NativeVector& velocity)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETVELOCITY_OFFSET))(ex_3d_listener, velocity);
		}

		static ::System::Void criAtomEx3dListener_SetOrientation(::System::IntPtr ex_3d_listener, ::CriWare::CriAtomEx_NativeVector& front, ::CriWare::CriAtomEx_NativeVector& top)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector&, ::CriWare::CriAtomEx_NativeVector&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETORIENTATION_OFFSET))(ex_3d_listener, front, top);
		}

		static ::System::Void criAtomEx3dListener_SetDistanceFactor(::System::IntPtr ex_3d_listener, ::System::Single distance_factor)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETDISTANCEFACTOR_OFFSET))(ex_3d_listener, distance_factor);
		}

		static ::System::Void criAtomEx3dListener_SetDopplerMultiplier(::System::IntPtr ex_3d_listener, ::System::Single doppler_multiplier)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETDOPPLERMULTIPLIER_OFFSET))(ex_3d_listener, doppler_multiplier);
		}

		static ::System::Void criAtomEx3dListener_SetFocusPoint(::System::IntPtr ex_3d_listener, ::CriWare::CriAtomEx_NativeVector& focus_point)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETFOCUSPOINT_OFFSET))(ex_3d_listener, focus_point);
		}

		static ::System::Void criAtomEx3dListener_SetDistanceFocusLevel(::System::IntPtr ex_3d_listener, ::System::Single distance_focus_level)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETDISTANCEFOCUSLEVEL_OFFSET))(ex_3d_listener, distance_focus_level);
		}

		static ::System::Void criAtomEx3dListener_SetDirectionFocusLevel(::System::IntPtr ex_3d_listener, ::System::Single direction_focus_level)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETDIRECTIONFOCUSLEVEL_OFFSET))(ex_3d_listener, direction_focus_level);
		}

		static ::System::Boolean criAtomEx3dListener_IsDestroyable(::System::IntPtr ex_3d_listener)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_ISDESTROYABLE_OFFSET))(ex_3d_listener);
		}

		static ::System::Void criAtomEx3dListener_Set3dRegionHn(::System::IntPtr ex_3d_listener, ::System::IntPtr ex_3d_region)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SET3DREGIONHN_OFFSET))(ex_3d_listener, ex_3d_region);
		}
	};
}
