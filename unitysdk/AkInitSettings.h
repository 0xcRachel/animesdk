#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkFloorPlane.h"
#include "unitysdk/System/Object.h"

class AkOutputSettings;
namespace System { class String; }

#define AKINITSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x183A2180)
#define AKINITSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183A2090)
#define AKINITSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x183A2110)
#define AKINITSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x183A1F80)
#define AKINITSETTINGS_GET_BDEBUGOUTOFRANGECHECKENABLED_OFFSET UNITYSDK_OFFSET(0x183A2F80)
#define AKINITSETTINGS_GET_BENABLEGAMESYNCPREPARATION_OFFSET UNITYSDK_OFFSET(0x183A2480)
#define AKINITSETTINGS_GET_BUSELENGINETHREAD_OFFSET UNITYSDK_OFFSET(0x183A2B40)
#define AKINITSETTINGS_GET_BUSESOUNDBANKMGRTHREAD_OFFSET UNITYSDK_OFFSET(0x183A29D0)
#define AKINITSETTINGS_GET_EFLOORPLANE_OFFSET UNITYSDK_OFFSET(0x183A2CB0)
#define AKINITSETTINGS_GET_FDEBUGOUTOFRANGELIMIT_OFFSET UNITYSDK_OFFSET(0x183A2ED0)
#define AKINITSETTINGS_GET_SETTINGSMAINOUTPUT_OFFSET UNITYSDK_OFFSET(0x18391160)
#define AKINITSETTINGS_GET_SZPLUGINDLLPATH_OFFSET UNITYSDK_OFFSET(0x18391310)
#define AKINITSETTINGS_GET_UBANKREADBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x183A2E20)
#define AKINITSETTINGS_GET_UCOMMANDQUEUESIZE_OFFSET UNITYSDK_OFFSET(0x183A23D0)
#define AKINITSETTINGS_GET_UCONTINUOUSPLAYBACKLOOKAHEAD_OFFSET UNITYSDK_OFFSET(0x183A2530)
#define AKINITSETTINGS_GET_UMAXHARDWARETIMEOUTMS_OFFSET UNITYSDK_OFFSET(0x183A2860)
#define AKINITSETTINGS_GET_UMAXNUMPATHS_OFFSET UNITYSDK_OFFSET(0x183A2320)
#define AKINITSETTINGS_GET_UMONITORQUEUEPOOLSIZE_OFFSET UNITYSDK_OFFSET(0x183A2690)
#define AKINITSETTINGS_GET_UNUMSAMPLESPERFRAME_OFFSET UNITYSDK_OFFSET(0x183A25E0)
#define AKINITSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x183A1FD0)
#define AKINITSETTINGS_SET_BDEBUGOUTOFRANGECHECKENABLED_OFFSET UNITYSDK_OFFSET(0x1838DDD0)
#define AKINITSETTINGS_SET_BENABLEGAMESYNCPREPARATION_OFFSET UNITYSDK_OFFSET(0x1838DAD0)
#define AKINITSETTINGS_SET_BUSELENGINETHREAD_OFFSET UNITYSDK_OFFSET(0x183A2A80)
#define AKINITSETTINGS_SET_BUSESOUNDBANKMGRTHREAD_OFFSET UNITYSDK_OFFSET(0x183A2910)
#define AKINITSETTINGS_SET_EFLOORPLANE_OFFSET UNITYSDK_OFFSET(0x183A2BF0)
#define AKINITSETTINGS_SET_FDEBUGOUTOFRANGELIMIT_OFFSET UNITYSDK_OFFSET(0x1838DE90)
#define AKINITSETTINGS_SET_SETTINGSMAINOUTPUT_OFFSET UNITYSDK_OFFSET(0x183A2740)
#define AKINITSETTINGS_SET_SZPLUGINDLLPATH_OFFSET UNITYSDK_OFFSET(0x18391250)
#define AKINITSETTINGS_SET_UBANKREADBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x183A2D60)
#define AKINITSETTINGS_SET_UCOMMANDQUEUESIZE_OFFSET UNITYSDK_OFFSET(0x18390FE0)
#define AKINITSETTINGS_SET_UCONTINUOUSPLAYBACKLOOKAHEAD_OFFSET UNITYSDK_OFFSET(0x1838DB90)
#define AKINITSETTINGS_SET_UMAXHARDWARETIMEOUTMS_OFFSET UNITYSDK_OFFSET(0x1838DD10)
#define AKINITSETTINGS_SET_UMAXNUMPATHS_OFFSET UNITYSDK_OFFSET(0x18390F20)
#define AKINITSETTINGS_SET_UMONITORQUEUEPOOLSIZE_OFFSET UNITYSDK_OFFSET(0x1838DC50)
#define AKINITSETTINGS_SET_UNUMSAMPLESPERFRAME_OFFSET UNITYSDK_OFFSET(0x183910A0)
#define AKINITSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x183A1F70)

inline static constexpr unsigned int AkInitSettings_TypeDefinitionIndex = 33493;

class AkInitSettings : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITSETTINGS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	static ::System::IntPtr getCPtr(::AkInitSettings* obj)
	{
		return ((::System::IntPtr(*)(::AkInitSettings*))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITSETTINGS_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_uMaxNumPaths(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_UMAXNUMPATHS_OFFSET))(this, value);
	}

	::System::UInt32 get_uMaxNumPaths()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_UMAXNUMPATHS_OFFSET))(this);
	}

	::System::Void set_uCommandQueueSize(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_UCOMMANDQUEUESIZE_OFFSET))(this, value);
	}

	::System::UInt32 get_uCommandQueueSize()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_UCOMMANDQUEUESIZE_OFFSET))(this);
	}

	::System::Void set_bEnableGameSyncPreparation(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_BENABLEGAMESYNCPREPARATION_OFFSET))(this, value);
	}

	::System::Boolean get_bEnableGameSyncPreparation()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_BENABLEGAMESYNCPREPARATION_OFFSET))(this);
	}

	::System::Void set_uContinuousPlaybackLookAhead(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_UCONTINUOUSPLAYBACKLOOKAHEAD_OFFSET))(this, value);
	}

	::System::UInt32 get_uContinuousPlaybackLookAhead()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_UCONTINUOUSPLAYBACKLOOKAHEAD_OFFSET))(this);
	}

	::System::Void set_uNumSamplesPerFrame(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_UNUMSAMPLESPERFRAME_OFFSET))(this, value);
	}

	::System::UInt32 get_uNumSamplesPerFrame()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_UNUMSAMPLESPERFRAME_OFFSET))(this);
	}

	::System::Void set_uMonitorQueuePoolSize(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_UMONITORQUEUEPOOLSIZE_OFFSET))(this, value);
	}

	::System::UInt32 get_uMonitorQueuePoolSize()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_UMONITORQUEUEPOOLSIZE_OFFSET))(this);
	}

	::System::Void set_settingsMainOutput(::AkOutputSettings* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkOutputSettings*))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_SETTINGSMAINOUTPUT_OFFSET))(this, value);
	}

	::AkOutputSettings* get_settingsMainOutput()
	{
		return ((::AkOutputSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_SETTINGSMAINOUTPUT_OFFSET))(this);
	}

	::System::Void set_uMaxHardwareTimeoutMs(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_UMAXHARDWARETIMEOUTMS_OFFSET))(this, value);
	}

	::System::UInt32 get_uMaxHardwareTimeoutMs()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_UMAXHARDWARETIMEOUTMS_OFFSET))(this);
	}

	::System::Void set_bUseSoundBankMgrThread(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_BUSESOUNDBANKMGRTHREAD_OFFSET))(this, value);
	}

	::System::Boolean get_bUseSoundBankMgrThread()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_BUSESOUNDBANKMGRTHREAD_OFFSET))(this);
	}

	::System::Void set_bUseLEngineThread(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_BUSELENGINETHREAD_OFFSET))(this, value);
	}

	::System::Boolean get_bUseLEngineThread()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_BUSELENGINETHREAD_OFFSET))(this);
	}

	::System::Void set_szPluginDLLPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_SZPLUGINDLLPATH_OFFSET))(this, value);
	}

	::System::String* get_szPluginDLLPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_SZPLUGINDLLPATH_OFFSET))(this);
	}

	::System::Void set_eFloorPlane(::AkFloorPlane value)
	{
		return ((::System::Void(*)(::PVOID, ::AkFloorPlane))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_EFLOORPLANE_OFFSET))(this, value);
	}

	::AkFloorPlane get_eFloorPlane()
	{
		return ((::AkFloorPlane(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_EFLOORPLANE_OFFSET))(this);
	}

	::System::Void set_uBankReadBufferSize(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_UBANKREADBUFFERSIZE_OFFSET))(this, value);
	}

	::System::UInt32 get_uBankReadBufferSize()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_UBANKREADBUFFERSIZE_OFFSET))(this);
	}

	::System::Void set_fDebugOutOfRangeLimit(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_FDEBUGOUTOFRANGELIMIT_OFFSET))(this, value);
	}

	::System::Single get_fDebugOutOfRangeLimit()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_FDEBUGOUTOFRANGELIMIT_OFFSET))(this);
	}

	::System::Void set_bDebugOutOfRangeCheckEnabled(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_BDEBUGOUTOFRANGECHECKENABLED_OFFSET))(this, value);
	}

	::System::Boolean get_bDebugOutOfRangeCheckEnabled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_BDEBUGOUTOFRANGECHECKENABLED_OFFSET))(this);
	}
};
