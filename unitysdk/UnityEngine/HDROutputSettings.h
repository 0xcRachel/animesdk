#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_HDROUTPUTSETTINGS_GETHDRDISPLAYACTIVE_OFFSET UNITYSDK_OFFSET(0x1A46A9D0)
#define UNITYENGINE_HDROUTPUTSETTINGS_GETHDRDISPLAYAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1A46A9A0)
#define UNITYENGINE_HDROUTPUTSETTINGS_GETMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x1A46A9F0)
#define UNITYENGINE_HDROUTPUTSETTINGS_GETMINLUMINANCE_OFFSET UNITYSDK_OFFSET(0x1A46AA30)
#define UNITYENGINE_HDROUTPUTSETTINGS_GETPAPERWHITEINNITS_OFFSET UNITYSDK_OFFSET(0x1A46AA70)
#define UNITYENGINE_HDROUTPUTSETTINGS_GETSYSTEMCALIBRATEDFULLFRAMEMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x1A46AB10)
#define UNITYENGINE_HDROUTPUTSETTINGS_GETSYSTEMCALIBRATEDMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x1A46AAF0)
#define UNITYENGINE_HDROUTPUTSETTINGS_GETSYSTEMCALIBRATEDMINLUMINANCE_OFFSET UNITYSDK_OFFSET(0x1A46AB30)
#define UNITYENGINE_HDROUTPUTSETTINGS_GETUSENATIVEBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x1A46AAB0)
#define UNITYENGINE_HDROUTPUTSETTINGS_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1A46A9B0)
#define UNITYENGINE_HDROUTPUTSETTINGS_GET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0x1A46A990)
#define UNITYENGINE_HDROUTPUTSETTINGS_GET_MAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x1A46A9E0)
#define UNITYENGINE_HDROUTPUTSETTINGS_GET_MINLUMINANCE_OFFSET UNITYSDK_OFFSET(0x1A46AA20)
#define UNITYENGINE_HDROUTPUTSETTINGS_GET_PAPERWHITE_OFFSET UNITYSDK_OFFSET(0x1A46AA60)
#define UNITYENGINE_HDROUTPUTSETTINGS_GET_SYSTEMCALIBRATEDFULLFRAMEMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x1A46AB00)
#define UNITYENGINE_HDROUTPUTSETTINGS_GET_SYSTEMCALIBRATEDMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x1A46AAE0)
#define UNITYENGINE_HDROUTPUTSETTINGS_GET_SYSTEMCALIBRATEDMINLUMINANCE_OFFSET UNITYSDK_OFFSET(0x1A46AB20)
#define UNITYENGINE_HDROUTPUTSETTINGS_GET_USENATIVEBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x1A46AAA0)
#define UNITYENGINE_HDROUTPUTSETTINGS_REQUESTENABLEHDR_OFFSET UNITYSDK_OFFSET(0x1A46AB40)
#define UNITYENGINE_HDROUTPUTSETTINGS_SETHDRDISPLAYACTIVE_OFFSET UNITYSDK_OFFSET(0x1A46AB50)
#define UNITYENGINE_HDROUTPUTSETTINGS_SETMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x1A46AA10)
#define UNITYENGINE_HDROUTPUTSETTINGS_SETMINLUMINANCE_OFFSET UNITYSDK_OFFSET(0x1A46AA50)
#define UNITYENGINE_HDROUTPUTSETTINGS_SETPAPERWHITEINNITS_OFFSET UNITYSDK_OFFSET(0x1A46AA90)
#define UNITYENGINE_HDROUTPUTSETTINGS_SETUSENATIVEBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x1A46AAD0)
#define UNITYENGINE_HDROUTPUTSETTINGS_SET_MAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x1A46AA00)
#define UNITYENGINE_HDROUTPUTSETTINGS_SET_MINLUMINANCE_OFFSET UNITYSDK_OFFSET(0x1A46AA40)
#define UNITYENGINE_HDROUTPUTSETTINGS_SET_PAPERWHITE_OFFSET UNITYSDK_OFFSET(0x1A46AA80)
#define UNITYENGINE_HDROUTPUTSETTINGS_SET_USENATIVEBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x1A46AAC0)

namespace UnityEngine
{
	inline static constexpr unsigned int HDROutputSettings_TypeDefinitionIndex = 3940;

	class HDROutputSettings : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_debugFakeHDRActive()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HDROutputSettings_TypeDefinitionIndex)->GetStaticField(0x5A20);
		}

		static ::System::Boolean get_available()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GET_AVAILABLE_OFFSET))();
		}

		static ::System::Boolean get_active()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GET_ACTIVE_OFFSET))();
		}

		static ::System::Single get_maxLuminance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GET_MAXLUMINANCE_OFFSET))();
		}

		static ::System::Void set_maxLuminance(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_SET_MAXLUMINANCE_OFFSET))(value);
		}

		static ::System::Single get_minLuminance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GET_MINLUMINANCE_OFFSET))();
		}

		static ::System::Void set_minLuminance(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_SET_MINLUMINANCE_OFFSET))(value);
		}

		static ::System::Single get_paperWhite()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GET_PAPERWHITE_OFFSET))();
		}

		static ::System::Void set_paperWhite(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_SET_PAPERWHITE_OFFSET))(value);
		}

		static ::System::Boolean get_useNativeBackbuffer()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GET_USENATIVEBACKBUFFER_OFFSET))();
		}

		static ::System::Void set_useNativeBackbuffer(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_SET_USENATIVEBACKBUFFER_OFFSET))(value);
		}

		static ::System::Single get_systemCalibratedMaxLuminance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GET_SYSTEMCALIBRATEDMAXLUMINANCE_OFFSET))();
		}

		static ::System::Single get_systemCalibratedFullFrameMaxLuminance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GET_SYSTEMCALIBRATEDFULLFRAMEMAXLUMINANCE_OFFSET))();
		}

		static ::System::Single get_systemCalibratedMinLuminance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GET_SYSTEMCALIBRATEDMINLUMINANCE_OFFSET))();
		}

		static ::System::Void RequestEnableHDR(::System::Boolean yes)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_REQUESTENABLEHDR_OFFSET))(yes);
		}

		static ::System::Single GetMaxLuminance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GETMAXLUMINANCE_OFFSET))();
		}

		static ::System::Single GetMinLuminance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GETMINLUMINANCE_OFFSET))();
		}

		static ::System::Single GetPaperWhiteInNits()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GETPAPERWHITEINNITS_OFFSET))();
		}

		static ::System::Boolean GetHDRDisplayActive()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GETHDRDISPLAYACTIVE_OFFSET))();
		}

		static ::System::Boolean GetUseNativeBackbuffer()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GETUSENATIVEBACKBUFFER_OFFSET))();
		}

		static ::System::Void SetHDRDisplayActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_SETHDRDISPLAYACTIVE_OFFSET))(active);
		}

		static ::System::Void SetMaxLuminance(::System::Single max)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_SETMAXLUMINANCE_OFFSET))(max);
		}

		static ::System::Void SetMinLuminance(::System::Single min)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_SETMINLUMINANCE_OFFSET))(min);
		}

		static ::System::Void SetPaperWhiteInNits(::System::Single paperWhite)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_SETPAPERWHITEINNITS_OFFSET))(paperWhite);
		}

		static ::System::Void SetUseNativeBackbuffer(::System::Boolean yes)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_SETUSENATIVEBACKBUFFER_OFFSET))(yes);
		}

		static ::System::Boolean GetHDRDisplayAvailable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GETHDRDISPLAYAVAILABLE_OFFSET))();
		}

		static ::System::Single GetSystemCalibratedMaxLuminance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GETSYSTEMCALIBRATEDMAXLUMINANCE_OFFSET))();
		}

		static ::System::Single GetSystemCalibratedFullFrameMaxLuminance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GETSYSTEMCALIBRATEDFULLFRAMEMAXLUMINANCE_OFFSET))();
		}

		static ::System::Single GetSystemCalibratedMinLuminance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GETSYSTEMCALIBRATEDMINLUMINANCE_OFFSET))();
		}
	};
}
