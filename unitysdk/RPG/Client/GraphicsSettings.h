#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PrefGroup.h"
#include "unitysdk/RPG/CustomRP/Quality.h"

namespace RPG::Client { class PCResolution; }
namespace RPG::Client { class RPGQualitySettingsModel; }
namespace System { class String; }

#define RPG_CLIENT_GRAPHICSSETTINGS_GET_CUSTOMHORIZONTALINDENT_OFFSET UNITYSDK_OFFSET(0x1604F970)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_ENABLEPSOSHADERWARMUP_OFFSET UNITYSDK_OFFSET(0x16050120)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_GRAPHICSQUALITY_OFFSET UNITYSDK_OFFSET(0x1604F4D0)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_ISUSERSAVE_OFFSET UNITYSDK_OFFSET(0x1604F3F0)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_MAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x1604FAC0)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x1604F650)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_PAPERWHITE_OFFSET UNITYSDK_OFFSET(0x1604FC10)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_PCRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1604F7F0)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_SYSTEMCALIBRATEDFULLFRAMEMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x1604FEA0)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_SYSTEMCALIBRATEDMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x1604FD60)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_SYSTEMCALIBRATEDMINLUMINANCE_OFFSET UNITYSDK_OFFSET(0x1604FFE0)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1604F310)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_CUSTOMHORIZONTALINDENT_OFFSET UNITYSDK_OFFSET(0x1604FA20)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_ENABLEPSOSHADERWARMUP_OFFSET UNITYSDK_OFFSET(0x160501B0)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_GRAPHICSQUALITY_OFFSET UNITYSDK_OFFSET(0x1604F590)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_ISUSERSAVE_OFFSET UNITYSDK_OFFSET(0x1604F460)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_MAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x1604FB60)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_MODEL_OFFSET UNITYSDK_OFFSET(0x1604F730)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_PAPERWHITE_OFFSET UNITYSDK_OFFSET(0x1604FCB0)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_PCRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1604F8B0)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_SYSTEMCALIBRATEDFULLFRAMEMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x1604FF30)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_SYSTEMCALIBRATEDMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x1604FDF0)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_SYSTEMCALIBRATEDMINLUMINANCE_OFFSET UNITYSDK_OFFSET(0x16050070)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1604F380)
#define RPG_CLIENT_GRAPHICSSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1604F290)

namespace RPG::Client
{
	inline static constexpr unsigned int GraphicsSettings_TypeDefinitionIndex = 54753;

	class GraphicsSettings : public ::RPG::Client::PrefGroup
	{
	public:
		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS__CTOR_OFFSET))(this, name);
		}

		::System::Int32 get_Version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_VERSION_OFFSET))(this, value);
		}

		::System::Boolean get_IsUserSave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_ISUSERSAVE_OFFSET))(this);
		}

		::System::Void set_IsUserSave(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_ISUSERSAVE_OFFSET))(this, value);
		}

		::RPG::CustomRP::Quality get_GraphicsQuality()
		{
			return ((::RPG::CustomRP::Quality(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_GRAPHICSQUALITY_OFFSET))(this);
		}

		::System::Void set_GraphicsQuality(::RPG::CustomRP::Quality value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_GRAPHICSQUALITY_OFFSET))(this, value);
		}

		::RPG::Client::RPGQualitySettingsModel* get_Model()
		{
			return ((::RPG::Client::RPGQualitySettingsModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_MODEL_OFFSET))(this);
		}

		::System::Void set_Model(::RPG::Client::RPGQualitySettingsModel* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RPGQualitySettingsModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_MODEL_OFFSET))(this, value);
		}

		::RPG::Client::PCResolution* get_PCResolution()
		{
			return ((::RPG::Client::PCResolution*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_PCRESOLUTION_OFFSET))(this);
		}

		::System::Void set_PCResolution(::RPG::Client::PCResolution* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PCResolution*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_PCRESOLUTION_OFFSET))(this, value);
		}

		::System::Single get_CustomHorizontalIndent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_CUSTOMHORIZONTALINDENT_OFFSET))(this);
		}

		::System::Void set_CustomHorizontalIndent(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_CUSTOMHORIZONTALINDENT_OFFSET))(this, value);
		}

		::System::Single get_MaxLuminance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_MAXLUMINANCE_OFFSET))(this);
		}

		::System::Void set_MaxLuminance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_MAXLUMINANCE_OFFSET))(this, value);
		}

		::System::Single get_PaperWhite()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_PAPERWHITE_OFFSET))(this);
		}

		::System::Void set_PaperWhite(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_PAPERWHITE_OFFSET))(this, value);
		}

		::System::Single get_SystemCalibratedMaxLuminance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_SYSTEMCALIBRATEDMAXLUMINANCE_OFFSET))(this);
		}

		::System::Void set_SystemCalibratedMaxLuminance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_SYSTEMCALIBRATEDMAXLUMINANCE_OFFSET))(this, value);
		}

		::System::Single get_SystemCalibratedFullFrameMaxLuminance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_SYSTEMCALIBRATEDFULLFRAMEMAXLUMINANCE_OFFSET))(this);
		}

		::System::Void set_SystemCalibratedFullFrameMaxLuminance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_SYSTEMCALIBRATEDFULLFRAMEMAXLUMINANCE_OFFSET))(this, value);
		}

		::System::Single get_SystemCalibratedMinLuminance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_SYSTEMCALIBRATEDMINLUMINANCE_OFFSET))(this);
		}

		::System::Void set_SystemCalibratedMinLuminance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_SYSTEMCALIBRATEDMINLUMINANCE_OFFSET))(this, value);
		}

		::System::Boolean get_EnablePsoShaderWarmup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_ENABLEPSOSHADERWARMUP_OFFSET))(this);
		}

		::System::Void set_EnablePsoShaderWarmup(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_ENABLEPSOSHADERWARMUP_OFFSET))(this, value);
		}
	};
}
