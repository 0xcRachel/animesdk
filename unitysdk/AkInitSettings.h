#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkFloorPlane.h"
#include "unitysdk/System/Object.h"

class AkOutputSettings;
namespace System { class String; }

#define AKINITSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x192D09A0)
#define AKINITSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x192D08B0)
#define AKINITSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x192D0930)
#define AKINITSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x192D07A0)
#define AKINITSETTINGS_GET_BDEBUGOUTOFRANGECHECKENABLED_OFFSET UNITYSDK_OFFSET(0x192D17A0)
#define AKINITSETTINGS_GET_BENABLEGAMESYNCPREPARATION_OFFSET UNITYSDK_OFFSET(0x192D0CA0)
#define AKINITSETTINGS_GET_BUSELENGINETHREAD_OFFSET UNITYSDK_OFFSET(0x192D1360)
#define AKINITSETTINGS_GET_BUSESOUNDBANKMGRTHREAD_OFFSET UNITYSDK_OFFSET(0x192D11F0)
#define AKINITSETTINGS_GET_EFLOORPLANE_OFFSET UNITYSDK_OFFSET(0x192D14D0)
#define AKINITSETTINGS_GET_FDEBUGOUTOFRANGELIMIT_OFFSET UNITYSDK_OFFSET(0x192D16F0)
#define AKINITSETTINGS_GET_SETTINGSMAINOUTPUT_OFFSET UNITYSDK_OFFSET(0x192BF950)
#define AKINITSETTINGS_GET_SZPLUGINDLLPATH_OFFSET UNITYSDK_OFFSET(0x192BFB00)
#define AKINITSETTINGS_GET_UBANKREADBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x192D1640)
#define AKINITSETTINGS_GET_UCOMMANDQUEUESIZE_OFFSET UNITYSDK_OFFSET(0x192D0BF0)
#define AKINITSETTINGS_GET_UCONTINUOUSPLAYBACKLOOKAHEAD_OFFSET UNITYSDK_OFFSET(0x192D0D50)
#define AKINITSETTINGS_GET_UMAXHARDWARETIMEOUTMS_OFFSET UNITYSDK_OFFSET(0x192D1080)
#define AKINITSETTINGS_GET_UMAXNUMPATHS_OFFSET UNITYSDK_OFFSET(0x192D0B40)
#define AKINITSETTINGS_GET_UMONITORQUEUEPOOLSIZE_OFFSET UNITYSDK_OFFSET(0x192D0EB0)
#define AKINITSETTINGS_GET_UNUMSAMPLESPERFRAME_OFFSET UNITYSDK_OFFSET(0x192D0E00)
#define AKINITSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x192D07F0)
#define AKINITSETTINGS_SET_BDEBUGOUTOFRANGECHECKENABLED_OFFSET UNITYSDK_OFFSET(0x192BC5C0)
#define AKINITSETTINGS_SET_BENABLEGAMESYNCPREPARATION_OFFSET UNITYSDK_OFFSET(0x192BC2C0)
#define AKINITSETTINGS_SET_BUSELENGINETHREAD_OFFSET UNITYSDK_OFFSET(0x192D12A0)
#define AKINITSETTINGS_SET_BUSESOUNDBANKMGRTHREAD_OFFSET UNITYSDK_OFFSET(0x192D1130)
#define AKINITSETTINGS_SET_EFLOORPLANE_OFFSET UNITYSDK_OFFSET(0x192D1410)
#define AKINITSETTINGS_SET_FDEBUGOUTOFRANGELIMIT_OFFSET UNITYSDK_OFFSET(0x192BC680)
#define AKINITSETTINGS_SET_SETTINGSMAINOUTPUT_OFFSET UNITYSDK_OFFSET(0x192D0F60)
#define AKINITSETTINGS_SET_SZPLUGINDLLPATH_OFFSET UNITYSDK_OFFSET(0x192BFA40)
#define AKINITSETTINGS_SET_UBANKREADBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x192D1580)
#define AKINITSETTINGS_SET_UCOMMANDQUEUESIZE_OFFSET UNITYSDK_OFFSET(0x192BF7D0)
#define AKINITSETTINGS_SET_UCONTINUOUSPLAYBACKLOOKAHEAD_OFFSET UNITYSDK_OFFSET(0x192BC380)
#define AKINITSETTINGS_SET_UMAXHARDWARETIMEOUTMS_OFFSET UNITYSDK_OFFSET(0x192BC500)
#define AKINITSETTINGS_SET_UMAXNUMPATHS_OFFSET UNITYSDK_OFFSET(0x192BF710)
#define AKINITSETTINGS_SET_UMONITORQUEUEPOOLSIZE_OFFSET UNITYSDK_OFFSET(0x192BC440)
#define AKINITSETTINGS_SET_UNUMSAMPLESPERFRAME_OFFSET UNITYSDK_OFFSET(0x192BF890)
#define AKINITSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x192D0790)

inline static constexpr unsigned int AkInitSettings_TypeDefinitionIndex = 40301;

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
