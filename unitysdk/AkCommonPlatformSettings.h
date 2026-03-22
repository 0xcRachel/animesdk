#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBasePlatformSettings.h"

class AkCallbackManager_InitializationSettings;
class AkCommonAdvancedSettings;
class AkCommonCommSettings;
class AkCommonUserSettings;
class AkCommunicationSettings;
class AkInitializationSettings;
class AkSpatialAudioInitSettings;
namespace System { class String; }

#define AKCOMMONPLATFORMSETTINGS_GET_AKCOMMUNICATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x183902A0)
#define AKCOMMONPLATFORMSETTINGS_GET_AKINITIALIZATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x1838F440)
#define AKCOMMONPLATFORMSETTINGS_GET_AKSPATIALAUDIOINITSETTINGS_OFFSET UNITYSDK_OFFSET(0x1838FFE0)
#define AKCOMMONPLATFORMSETTINGS_GET_CALLBACKMANAGERINITIALIZATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x18390100)
#define AKCOMMONPLATFORMSETTINGS_GET_INITIALLANGUAGE_OFFSET UNITYSDK_OFFSET(0x183901B0)
#define AKCOMMONPLATFORMSETTINGS_GET_RENDERDURINGFOCUSLOSS_OFFSET UNITYSDK_OFFSET(0x18390210)
#define AKCOMMONPLATFORMSETTINGS_GET_SOUNDBANKPATH_OFFSET UNITYSDK_OFFSET(0x18390240)
#define AKCOMMONPLATFORMSETTINGS_GET_SOUNDBANKPERSISTENTDATAPATH_OFFSET UNITYSDK_OFFSET(0x183901E0)
#define AKCOMMONPLATFORMSETTINGS_GET_USEASYNCOPEN_OFFSET UNITYSDK_OFFSET(0x18390270)
#define AKCOMMONPLATFORMSETTINGS_SETNUMREFILLSINVOICE_OFFSET UNITYSDK_OFFSET(0x18390390)
#define AKCOMMONPLATFORMSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x183904A0)
#define AKCOMMONPLATFORMSETTINGS___IFIXBASEPROXY_GET_AKCOMMUNICATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x18390620)
#define AKCOMMONPLATFORMSETTINGS___IFIXBASEPROXY_GET_AKINITIALIZATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x183904B0)
#define AKCOMMONPLATFORMSETTINGS___IFIXBASEPROXY_GET_AKSPATIALAUDIOINITSETTINGS_OFFSET UNITYSDK_OFFSET(0x18390540)
#define AKCOMMONPLATFORMSETTINGS___IFIXBASEPROXY_GET_CALLBACKMANAGERINITIALIZATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x183905D0)
#define AKCOMMONPLATFORMSETTINGS___IFIXBASEPROXY_SETNUMREFILLSINVOICE_OFFSET UNITYSDK_OFFSET(0x183906B0)

inline static constexpr unsigned int AkCommonPlatformSettings_TypeDefinitionIndex = 33590;

class AkCommonPlatformSettings : public ::AkBasePlatformSettings
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS__CTOR_OFFSET))(this);
	}

	::AkInitializationSettings* get_AkInitializationSettings()
	{
		return ((::AkInitializationSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS_GET_AKINITIALIZATIONSETTINGS_OFFSET))(this);
	}

	::AkSpatialAudioInitSettings* get_AkSpatialAudioInitSettings()
	{
		return ((::AkSpatialAudioInitSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS_GET_AKSPATIALAUDIOINITSETTINGS_OFFSET))(this);
	}

	::AkCallbackManager_InitializationSettings* get_CallbackManagerInitializationSettings()
	{
		return ((::AkCallbackManager_InitializationSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS_GET_CALLBACKMANAGERINITIALIZATIONSETTINGS_OFFSET))(this);
	}

	::System::String* get_InitialLanguage()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS_GET_INITIALLANGUAGE_OFFSET))(this);
	}

	::System::String* get_SoundBankPersistentDataPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS_GET_SOUNDBANKPERSISTENTDATAPATH_OFFSET))(this);
	}

	::System::Boolean get_RenderDuringFocusLoss()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS_GET_RENDERDURINGFOCUSLOSS_OFFSET))(this);
	}

	::System::String* get_SoundbankPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS_GET_SOUNDBANKPATH_OFFSET))(this);
	}

	::System::Boolean get_UseAsyncOpen()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS_GET_USEASYNCOPEN_OFFSET))(this);
	}

	::AkCommunicationSettings* get_AkCommunicationSettings()
	{
		return ((::AkCommunicationSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS_GET_AKCOMMUNICATIONSETTINGS_OFFSET))(this);
	}

	::System::Void SetNumRefillsInVoice(::System::UInt16 numRefills)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS_SETNUMREFILLSINVOICE_OFFSET))(this, numRefills);
	}

	::AkInitializationSettings* __iFixBaseProxy_get_AkInitializationSettings()
	{
		return ((::AkInitializationSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS___IFIXBASEPROXY_GET_AKINITIALIZATIONSETTINGS_OFFSET))(this);
	}

	::AkSpatialAudioInitSettings* __iFixBaseProxy_get_AkSpatialAudioInitSettings()
	{
		return ((::AkSpatialAudioInitSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS___IFIXBASEPROXY_GET_AKSPATIALAUDIOINITSETTINGS_OFFSET))(this);
	}

	::AkCallbackManager_InitializationSettings* __iFixBaseProxy_get_CallbackManagerInitializationSettings()
	{
		return ((::AkCallbackManager_InitializationSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS___IFIXBASEPROXY_GET_CALLBACKMANAGERINITIALIZATIONSETTINGS_OFFSET))(this);
	}

	::AkCommunicationSettings* __iFixBaseProxy_get_AkCommunicationSettings()
	{
		return ((::AkCommunicationSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS___IFIXBASEPROXY_GET_AKCOMMUNICATIONSETTINGS_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_SetNumRefillsInVoice(::System::UInt16 P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + AKCOMMONPLATFORMSETTINGS___IFIXBASEPROXY_SETNUMREFILLSINVOICE_OFFSET))(this, P0);
	}
};
