#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AntialiasingMode.h"
#include "unitysdk/RPG/Client/Platform.h"
#include "unitysdk/RPG/Client/RPGQualitySettingsBoolWrapper.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/Resolution.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class CRPEnvDetailSettings; }
namespace RPG::Client { class CRPShadowSettings; }
namespace RPG::Client { class PCResolution; }
namespace RPG::Client { class RPGQualitySettingsData; }
namespace RPG::Client { class RPGQualitySettingsModel; }
namespace RPG::Client { class RPGQualitySettingsPerPlatform; }
namespace RPG::Client { class RPGQualitySettingsPreset; }
namespace RPG::Client { class StreamingFeature; }
namespace RPG::GameCore { class DeviceInfo; }
namespace RPG::GameCore { class ForceGlesDevices; }
namespace RPG::GameCore { class ForceVulkanDevices; }
namespace RPG::GameCore { class GraphicsSettingJson; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }

#define RPG_CLIENT_RPGQUALITYSETTINGS_APPLYCHARACTERSETTINGS_OFFSET UNITYSDK_OFFSET(0x14ECFB00)
#define RPG_CLIENT_RPGQUALITYSETTINGS_APPLYENVDETAILSETTINGS_OFFSET UNITYSDK_OFFSET(0x14ED0040)
#define RPG_CLIENT_RPGQUALITYSETTINGS_APPLYGRAPHICSSETTINGSJSON_OFFSET UNITYSDK_OFFSET(0x14ECCC10)
#define RPG_CLIENT_RPGQUALITYSETTINGS_APPLYLIGHTSETTINGS_OFFSET UNITYSDK_OFFSET(0x14ECF690)
#define RPG_CLIENT_RPGQUALITYSETTINGS_APPLYNPCSETTINGS_OFFSET UNITYSDK_OFFSET(0x14ED11A0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_APPLYREFLECTIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x14ED0890)
#define RPG_CLIENT_RPGQUALITYSETTINGS_APPLYSETTINGS_OFFSET UNITYSDK_OFFSET(0x14ECA290)
#define RPG_CLIENT_RPGQUALITYSETTINGS_APPLYSFXSETTINGS_OFFSET UNITYSDK_OFFSET(0x14ED0D80)
#define RPG_CLIENT_RPGQUALITYSETTINGS_APPLYSHADERWARMUPQUALITYLEVELS_OFFSET UNITYSDK_OFFSET(0x14ED1A70)
#define RPG_CLIENT_RPGQUALITYSETTINGS_APPLYSHADOWSETTINGS_OFFSET UNITYSDK_OFFSET(0x14ECF380)
#define RPG_CLIENT_RPGQUALITYSETTINGS_APPLYSTREAMINGFEATURE_OFFSET UNITYSDK_OFFSET(0x14ED16B0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_APPLYWITHOUTSAVE_OFFSET UNITYSDK_OFFSET(0x14ECB480)
#define RPG_CLIENT_RPGQUALITYSETTINGS_CALCPCRENDERSCALE_OFFSET UNITYSDK_OFFSET(0x14EC7750)
#define RPG_CLIENT_RPGQUALITYSETTINGS_CHECKFORCEGRAPHICSAPICONFIG_OFFSET UNITYSDK_OFFSET(0x14ECE730)
#define RPG_CLIENT_RPGQUALITYSETTINGS_CHECKPCRESOLUTION_OFFSET UNITYSDK_OFFSET(0x14ECD4C0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_CLAMPRENDERSCALE_OFFSET UNITYSDK_OFFSET(0x14ECDE70)
#define RPG_CLIENT_RPGQUALITYSETTINGS_ENABLELOCALLIGHTSHADOWCACHE_OFFSET UNITYSDK_OFFSET(0x14ECC5A0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_ENSURECUSTOMSETTINGS_OFFSET UNITYSDK_OFFSET(0x14ECDBA0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_FORCECLOSEHIZOC_OFFSET UNITYSDK_OFFSET(0x14ECBC50)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GETALLDEVICERESOLUTIONS_OFFSET UNITYSDK_OFFSET(0x14EC8B60)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GETCRPENVSETTINGSPRESETBYQUALITY_OFFSET UNITYSDK_OFFSET(0x14ECDD40)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GETDEFAULTPCRESOLUTION_OFFSET UNITYSDK_OFFSET(0x14ECCED0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GETDEFAULTPSRESOLUTION_OFFSET UNITYSDK_OFFSET(0x14ECD020)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GETDEVICEINFO_OFFSET UNITYSDK_OFFSET(0x14EC7DB0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GETFORMATTEDCPUNAME_OFFSET UNITYSDK_OFFSET(0x14ECE990)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GETFORMATTEDGPUNAME_OFFSET UNITYSDK_OFFSET(0x14ECEE20)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GETPERPLATFORMSETTINGS_OFFSET UNITYSDK_OFFSET(0x14EC8990)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GETPLATFORM_OFFSET UNITYSDK_OFFSET(0x14EC6F30)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GETPRESETSETTINGS_OFFSET UNITYSDK_OFFSET(0x14EC6F80)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GETREALPLATFORM_OFFSET UNITYSDK_OFFSET(0x14EC7CC0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GETSAMESETTINGPRESETGRAPHICSQUALITY_OFFSET UNITYSDK_OFFSET(0x14EC6D80)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_AAMODE_OFFSET UNITYSDK_OFFSET(0x14EC73B0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_BLOOMQUALITY_OFFSET UNITYSDK_OFFSET(0x14EC7380)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_BUGGYCPUSKINNING_OFFSET UNITYSDK_OFFSET(0x14ED1FC0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_CHARACTERQUALITY_OFFSET UNITYSDK_OFFSET(0x14EC72C0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_DLSSQUALITY_OFFSET UNITYSDK_OFFSET(0x14EC7470)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_ENABLEHALFRESTRANSPARENT_OFFSET UNITYSDK_OFFSET(0x14EC7410)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_ENABLEMETALFXSU_OFFSET UNITYSDK_OFFSET(0x14EC73E0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_ENABLESELFSHADOW_OFFSET UNITYSDK_OFFSET(0x14EC7440)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_ENABLEVSYNC_OFFSET UNITYSDK_OFFSET(0x14EC7200)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_ENVDETAILQUALITY_OFFSET UNITYSDK_OFFSET(0x14EC72F0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_FORCECHOOSEPLATFORM_OFFSET UNITYSDK_OFFSET(0x14EC7C50)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_FPS_OFFSET UNITYSDK_OFFSET(0x14EC71A0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_GRAPHICSQUALITY_OFFSET UNITYSDK_OFFSET(0x14ED20A0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_INITIALGRAPHICSQUALITY_OFFSET UNITYSDK_OFFSET(0x14EC74D0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_ISSUPPORT120FPS_OFFSET UNITYSDK_OFFSET(0x14ED2220)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_LIGHTQUALITY_OFFSET UNITYSDK_OFFSET(0x14EC7290)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_NATIVERESOLUTION_OFFSET UNITYSDK_OFFSET(0x14EC74F0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_PARTICLETRAILSMOOTHNESS_OFFSET UNITYSDK_OFFSET(0x14EC74A0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_PCRESOLUTIONS_OFFSET UNITYSDK_OFFSET(0x14EC74E0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_PCRESOLUTION_OFFSET UNITYSDK_OFFSET(0x14ED23E0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_PERDEVICESETTINGS_OFFSET UNITYSDK_OFFSET(0x14EC7D90)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_PERPLATFORMSETTINGS_OFFSET UNITYSDK_OFFSET(0x14EC7D70)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_PERSCENESHADOWDISTANCE_OFFSET UNITYSDK_OFFSET(0x14ED2000)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_REFLECTIONQUALITY_OFFSET UNITYSDK_OFFSET(0x14EC7320)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_RENDERSCALE_OFFSET UNITYSDK_OFFSET(0x14EC71D0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_RESOLUTIONQUALITY_OFFSET UNITYSDK_OFFSET(0x14EC7230)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_RPGSTREAMINGFEATURE_OFFSET UNITYSDK_OFFSET(0x14ED2190)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_SFXQUALITY_OFFSET UNITYSDK_OFFSET(0x14EC7350)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_SHADOWQUALITY_OFFSET UNITYSDK_OFFSET(0x14EC7260)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_WARMUPQUALITYLEVELS_OFFSET UNITYSDK_OFFSET(0x14ED1AC0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_HANDLECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x14ECD620)
#define RPG_CLIENT_RPGQUALITYSETTINGS_INIT_OFFSET UNITYSDK_OFFSET(0x14EBE5E0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_ISDEVICEEXISTS_1_OFFSET UNITYSDK_OFFSET(0x14ECE250)
#define RPG_CLIENT_RPGQUALITYSETTINGS_ISDEVICEEXISTS_OFFSET UNITYSDK_OFFSET(0x14ECDF10)
#define RPG_CLIENT_RPGQUALITYSETTINGS_LOADGRAPHICSSETTINGJSON_OFFSET UNITYSDK_OFFSET(0x14ECE770)
#define RPG_CLIENT_RPGQUALITYSETTINGS_ONGRAPHICSETTINGCHANGED_OFFSET UNITYSDK_OFFSET(0x14ECB4F0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_ONRESOLUTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x14ED21B0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_POSTAPPLYSETTINGS_OFFSET UNITYSDK_OFFSET(0x14ECDD00)
#define RPG_CLIENT_RPGQUALITYSETTINGS_REFRESHCUSTOMCONDITIONCONSOLEVAR_OFFSET UNITYSDK_OFFSET(0x14ED20B0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_REFRESHSTREAMINGMIPMAPSMEMORYBUDGET_OFFSET UNITYSDK_OFFSET(0x14ECEFA0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_RESETALLSETTINGS_OFFSET UNITYSDK_OFFSET(0x14ECD3C0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_RESETCASCADE4SPLIT_OFFSET UNITYSDK_OFFSET(0x14ECCAC0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_RESETLOCALLIGHTSHADOWCACHE_OFFSET UNITYSDK_OFFSET(0x14ECC750)
#define RPG_CLIENT_RPGQUALITYSETTINGS_RESETPOSMCOUNT_OFFSET UNITYSDK_OFFSET(0x14ED1E70)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SAVE_OFFSET UNITYSDK_OFFSET(0x14ECADE0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SCREEN_SETRESOLUTION_OFFSET UNITYSDK_OFFSET(0x14EC7530)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SETCASCADE4SPLIT_OFFSET UNITYSDK_OFFSET(0x14ECC890)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SETCHIMERAGAMEMODE_OFFSET UNITYSDK_OFFSET(0x14ECC1A0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_AAMODE_OFFSET UNITYSDK_OFFSET(0x14ED27F0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_BLOOMQUALITY_OFFSET UNITYSDK_OFFSET(0x14ED2760)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_BUGGYCPUSKINNING_OFFSET UNITYSDK_OFFSET(0x14ECCD80)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_CHARACTERQUALITY_OFFSET UNITYSDK_OFFSET(0x14ED25B0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_DLSSQUALITY_OFFSET UNITYSDK_OFFSET(0x14ED29A0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_ENABLEHALFRESTRANSPARENT_OFFSET UNITYSDK_OFFSET(0x14ED28E0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_ENABLEMETALFXSU_OFFSET UNITYSDK_OFFSET(0x14ED2880)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_ENABLESELFSHADOW_OFFSET UNITYSDK_OFFSET(0x14ECDC70)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_ENABLEVSYNC_OFFSET UNITYSDK_OFFSET(0x14ED2280)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_ENVDETAILQUALITY_OFFSET UNITYSDK_OFFSET(0x14ED2640)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_FORCECHOOSEPLATFORM_OFFSET UNITYSDK_OFFSET(0x14EC7C60)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_FPS_OFFSET UNITYSDK_OFFSET(0x14ED1A10)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_GRAPHICSQUALITY_OFFSET UNITYSDK_OFFSET(0x14ECD080)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_LIGHTQUALITY_OFFSET UNITYSDK_OFFSET(0x14ED2520)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_NATIVERESOLUTION_OFFSET UNITYSDK_OFFSET(0x14EC7510)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_PARTICLETRAILSMOOTHNESS_OFFSET UNITYSDK_OFFSET(0x14ED2940)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_PCRESOLUTION_OFFSET UNITYSDK_OFFSET(0x14ED23F0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_PERDEVICESETTINGS_OFFSET UNITYSDK_OFFSET(0x14EC7DA0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_PERPLATFORMSETTINGS_OFFSET UNITYSDK_OFFSET(0x14EC7D80)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_PERSCENESHADOWDISTANCE_OFFSET UNITYSDK_OFFSET(0x14ED2010)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_REFLECTIONQUALITY_OFFSET UNITYSDK_OFFSET(0x14ED26D0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_RENDERSCALE_OFFSET UNITYSDK_OFFSET(0x14ED22E0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_RESOLUTIONQUALITY_OFFSET UNITYSDK_OFFSET(0x14ED2350)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_RPGSTREAMINGFEATURE_OFFSET UNITYSDK_OFFSET(0x14ED21A0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_SFXQUALITY_OFFSET UNITYSDK_OFFSET(0x14ECDBE0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_SHADOWQUALITY_OFFSET UNITYSDK_OFFSET(0x14ED2490)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SWITCHBATTLEMODE_OFFSET UNITYSDK_OFFSET(0x14ECBD90)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SWITCHSTORYMODE_OFFSET UNITYSDK_OFFSET(0x14ECB540)
#define RPG_CLIENT_RPGQUALITYSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x14ED2A40)
#define RPG_CLIENT_RPGQUALITYSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x14ED2A30)
#define RPG_CLIENT_RPGQUALITYSETTINGS__GETSHADOWSETTINGS_OFFSET UNITYSDK_OFFSET(0x14ED1C10)
#define RPG_CLIENT_RPGQUALITYSETTINGS__ISEQUALPRESETSETTING_OFFSET UNITYSDK_OFFSET(0x14EC7060)
#define RPG_CLIENT_RPGQUALITYSETTINGS__NEEDLOWERRESOLUTION_OFFSET UNITYSDK_OFFSET(0x14ECF070)
#define RPG_CLIENT_RPGQUALITYSETTINGS__OVERRIDEENVDETAILSETTINGSBYCMDLINEINPUT_OFFSET UNITYSDK_OFFSET(0x14ECDA80)
#define RPG_CLIENT_RPGQUALITYSETTINGS__OVERRIDESETTINGSBYCMDLINEINPUT_OFFSET UNITYSDK_OFFSET(0x14EC95E0)
#define RPG_CLIENT_RPGQUALITYSETTINGS__OVERRIDESETTINGSBYLOCALSAVEDATA_OFFSET UNITYSDK_OFFSET(0x14EC9150)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGQualitySettings_TypeDefinitionIndex = 62610;

	class RPGQualitySettings : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet__gpuNamePostFixPattern()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0xB4E0);
		}
		static ::RPG::Client::RPGQualitySettingsModel** StaticGet_m_Model()
		{
			return (::RPG::Client::RPGQualitySettingsModel**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0xB4E8);
		}
		static ::System::String** StaticGet_PCMatchGPUName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0xB4F0);
		}
		static ::RPG::GameCore::DeviceInfo** StaticGet__PerDeviceSettings_k__BackingField()
		{
			return (::RPG::GameCore::DeviceInfo**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0xB4F8);
		}
		static ::RPG::Client::PCResolution** StaticGet_m_PSResolution()
		{
			return (::RPG::Client::PCResolution**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0xB500);
		}
		static ::System::String** StaticGet_PCMatchCPUName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0xB508);
		}
		static ::RPG::GameCore::GraphicsSettingJson** StaticGet__graphicsSetting()
		{
			return (::RPG::GameCore::GraphicsSettingJson**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0xB510);
		}
		static ::RPG::Client::RPGQualitySettingsData** StaticGet_m_QualityData()
		{
			return (::RPG::Client::RPGQualitySettingsData**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0xB518);
		}
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_s_PlayerFastQuit()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0xB520);
		}
		static ::RPG::Client::PCResolution** StaticGet_m_PCCurResolution()
		{
			return (::RPG::Client::PCResolution**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0xB530);
		}
		static ::RPG::Client::StreamingFeature** StaticGet__RPGStreamingFeature_k__BackingField()
		{
			return (::RPG::Client::StreamingFeature**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0xB538);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::PCResolution*>** StaticGet__PCResolutions_k__BackingField()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::PCResolution*>**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0xB540);
		}
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Resolution>** StaticGet_m_UniqueDeviceResolutions()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Resolution>**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0xB548);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet__gpuNameRemovePattern()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0xB550);
		}
		static ::RPG::Client::RPGQualitySettingsPerPlatform** StaticGet__PerPlatformSettings_k__BackingField()
		{
			return (::RPG::Client::RPGQualitySettingsPerPlatform**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0xB558);
		}
		static ::RPG::CustomRP::Quality* StaticGet__LastValueForCustomConditionConsoleVar()
		{
			return (::RPG::CustomRP::Quality*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x4740);
		}
		static ::System::Int32* StaticGet_PCMatchGPUGrade()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x4744);
		}
		static ::System::Single* StaticGet_m_PresetRenderScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x4748);
		}
		static ::System::Nullable_1<::UnityEngine::Vector3>* StaticGet__Cascade4SplitBefore()
		{
			return (::System::Nullable_1<::UnityEngine::Vector3>*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x474C);
		}
		static ::System::Int32* StaticGet_PCMatchCPUGrade()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x475C);
		}
		static ::RPG::CustomRP::Quality* StaticGet_m_InitialGraphicsQuality()
		{
			return (::RPG::CustomRP::Quality*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x4760);
		}
		static ::System::Int32* StaticGet__Width()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x4764);
		}
		static ::RPG::CustomRP::Quality* StaticGet_m_GraphicsQuality()
		{
			return (::RPG::CustomRP::Quality*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x4768);
		}
		static ::UnityEngine::Resolution* StaticGet__NativeResolution_k__BackingField()
		{
			return (::UnityEngine::Resolution*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x476C);
		}
		static ::System::Int32* StaticGet__Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x4778);
		}
		static ::RPG::Client::Platform* StaticGet_m_ForceChoosePlatform()
		{
			return (::RPG::Client::Platform*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x477C);
		}
		static ::System::Single* StaticGet_m_PerSceneShadowDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x4780);
		}
		static ::System::Boolean* StaticGet__FullScreen()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x4784);
		}
		static ::System::Nullable_1<::System::Boolean>* StaticGet__EnableLocalLightShadowCacheBefore()
		{
			return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x4785);
		}
		static ::System::Nullable_1<::System::Boolean>* StaticGet__EnableHiZOCBefore()
		{
			return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x4787);
		}
		static ::System::Int32* StaticGet_PCMatchCommonGrade()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x478C);
		}
		// static const ::System::Int32 VERSION = 0xA; // 0x0
		// static const ::System::Int32 RESOLUTION_4K_WIDTH = 0xF00; // 0x0
		// static const ::System::Int32 RESOLUTION_4K_HEIGHT = 0x870; // 0x0
		// static const ::System::Int32 LOWER_RESOLUTION_ADRENO_DRIVER_MAIN_VERSION = 0x320; // 0x0
		// static const ::System::Int32 LOWER_RESOLUTION_ADRENO_DRIVER_SUB_VERSION = 0xE; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS__CCTOR_OFFSET))();
		}

		static ::RPG::CustomRP::Quality GetSameSettingPresetGraphicsQuality()
		{
			return ((::RPG::CustomRP::Quality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GETSAMESETTINGPRESETGRAPHICSQUALITY_OFFSET))();
		}

		static ::System::Boolean _IsEqualPresetSetting(::RPG::Client::RPGQualitySettingsModel* model)
		{
			return ((::System::Boolean(*)(::RPG::Client::RPGQualitySettingsModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS__ISEQUALPRESETSETTING_OFFSET))(model);
		}

		static ::RPG::CustomRP::Quality get_InitialGraphicsQuality()
		{
			return ((::RPG::CustomRP::Quality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_INITIALGRAPHICSQUALITY_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::PCResolution*>* get_PCResolutions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PCResolution*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_PCRESOLUTIONS_OFFSET))();
		}

		static ::UnityEngine::Resolution get_NativeResolution()
		{
			return ((::UnityEngine::Resolution(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_NATIVERESOLUTION_OFFSET))();
		}

		static ::System::Void set_NativeResolution(::UnityEngine::Resolution value)
		{
			return ((::System::Void(*)(::UnityEngine::Resolution))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_NATIVERESOLUTION_OFFSET))(value);
		}

		static ::System::Void Screen_SetResolution(::System::Int32 width, ::System::Int32 height, ::System::Boolean fullScreen)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SCREEN_SETRESOLUTION_OFFSET))(width, height, fullScreen);
		}

		static ::System::Single CalcPCRenderScale(::System::Single renderScale)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_CALCPCRENDERSCALE_OFFSET))(renderScale);
		}

		static ::RPG::Client::Platform get_ForceChoosePlatform()
		{
			return ((::RPG::Client::Platform(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_FORCECHOOSEPLATFORM_OFFSET))();
		}

		static ::System::Void set_ForceChoosePlatform(::RPG::Client::Platform value)
		{
			return ((::System::Void(*)(::RPG::Client::Platform))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_FORCECHOOSEPLATFORM_OFFSET))(value);
		}

		static ::RPG::Client::Platform GetRealPlatform()
		{
			return ((::RPG::Client::Platform(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GETREALPLATFORM_OFFSET))();
		}

		static ::RPG::Client::Platform GetPlatform()
		{
			return ((::RPG::Client::Platform(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GETPLATFORM_OFFSET))();
		}

		static ::RPG::Client::RPGQualitySettingsPerPlatform* get_PerPlatformSettings()
		{
			return ((::RPG::Client::RPGQualitySettingsPerPlatform*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_PERPLATFORMSETTINGS_OFFSET))();
		}

		static ::System::Void set_PerPlatformSettings(::RPG::Client::RPGQualitySettingsPerPlatform* value)
		{
			return ((::System::Void(*)(::RPG::Client::RPGQualitySettingsPerPlatform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_PERPLATFORMSETTINGS_OFFSET))(value);
		}

		static ::RPG::GameCore::DeviceInfo* get_PerDeviceSettings()
		{
			return ((::RPG::GameCore::DeviceInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_PERDEVICESETTINGS_OFFSET))();
		}

		static ::System::Void set_PerDeviceSettings(::RPG::GameCore::DeviceInfo* value)
		{
			return ((::System::Void(*)(::RPG::GameCore::DeviceInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_PERDEVICESETTINGS_OFFSET))(value);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_INIT_OFFSET))();
		}

		static ::System::Void Save()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SAVE_OFFSET))();
		}

		static ::System::Void ApplyWithoutSave()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_APPLYWITHOUTSAVE_OFFSET))();
		}

		static ::System::Void SwitchStoryMode(::System::Boolean isStoryMode)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SWITCHSTORYMODE_OFFSET))(isStoryMode);
		}

		static ::System::Void ForceCloseHiZOC(::System::Boolean close)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_FORCECLOSEHIZOC_OFFSET))(close);
		}

		static ::System::Void SwitchBattleMode(::System::Boolean isBattleMode)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SWITCHBATTLEMODE_OFFSET))(isBattleMode);
		}

		static ::System::Void SetChimeraGameMode(::System::Boolean isChimeraMode)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SETCHIMERAGAMEMODE_OFFSET))(isChimeraMode);
		}

		static ::System::Void EnableLocalLightShadowCache(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_ENABLELOCALLIGHTSHADOWCACHE_OFFSET))(enable);
		}

		static ::System::Void SetCascade4Split(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SETCASCADE4SPLIT_OFFSET))(x, y, z);
		}

		static ::System::Void ResetLocalLightShadowCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_RESETLOCALLIGHTSHADOWCACHE_OFFSET))();
		}

		static ::System::Void ResetCascade4Split()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_RESETCASCADE4SPLIT_OFFSET))();
		}

		static ::System::Void ApplyGraphicsSettingsJson()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_APPLYGRAPHICSSETTINGSJSON_OFFSET))();
		}

		static ::System::Void _OverrideSettingsByLocalSaveData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS__OVERRIDESETTINGSBYLOCALSAVEDATA_OFFSET))();
		}

		static ::System::Void _OverrideSettingsByCmdLineInput()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS__OVERRIDESETTINGSBYCMDLINEINPUT_OFFSET))();
		}

		static ::System::Void _OverrideEnvDetailSettingsByCmdLineInput()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS__OVERRIDEENVDETAILSETTINGSBYCMDLINEINPUT_OFFSET))();
		}

		static ::System::Void EnsureCustomSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_ENSURECUSTOMSETTINGS_OFFSET))();
		}

		static ::System::Void ResetAllSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_RESETALLSETTINGS_OFFSET))();
		}

		static ::System::Void HandleCompatible()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_HANDLECOMPATIBLE_OFFSET))();
		}

		static ::System::Void PostApplySettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_POSTAPPLYSETTINGS_OFFSET))();
		}

		static ::RPG::Client::CRPEnvDetailSettings* GetCRPEnvSettingsPresetByQuality(::RPG::CustomRP::Quality quality)
		{
			return ((::RPG::Client::CRPEnvDetailSettings*(*)(::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GETCRPENVSETTINGSPRESETBYQUALITY_OFFSET))(quality);
		}

		static ::RPG::Client::RPGQualitySettingsPreset* GetPresetSettings()
		{
			return ((::RPG::Client::RPGQualitySettingsPreset*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GETPRESETSETTINGS_OFFSET))();
		}

		static ::RPG::Client::RPGQualitySettingsPerPlatform* GetPerPlatformSettings()
		{
			return ((::RPG::Client::RPGQualitySettingsPerPlatform*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GETPERPLATFORMSETTINGS_OFFSET))();
		}

		static ::System::Void GetAllDeviceResolutions()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GETALLDEVICERESOLUTIONS_OFFSET))();
		}

		static ::RPG::Client::PCResolution* GetDefaultPCResolution()
		{
			return ((::RPG::Client::PCResolution*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GETDEFAULTPCRESOLUTION_OFFSET))();
		}

		static ::RPG::Client::PCResolution* GetDefaultPSResolution()
		{
			return ((::RPG::Client::PCResolution*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GETDEFAULTPSRESOLUTION_OFFSET))();
		}

		static ::RPG::Client::PCResolution* CheckPCResolution(::RPG::Client::PCResolution* src)
		{
			return ((::RPG::Client::PCResolution*(*)(::RPG::Client::PCResolution*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_CHECKPCRESOLUTION_OFFSET))(src);
		}

		static ::System::Void ClampRenderScale()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_CLAMPRENDERSCALE_OFFSET))();
		}

		static ::System::Boolean IsDeviceExists(::RPG::GameCore::ForceGlesDevices* forceGlesDevices, ::System::String* deviceModel, ::System::String* graphicDeviceName, ::System::Int32 apiLevel)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ForceGlesDevices*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_ISDEVICEEXISTS_OFFSET))(forceGlesDevices, deviceModel, graphicDeviceName, apiLevel);
		}

		static ::System::Boolean IsDeviceExists_1(::RPG::GameCore::ForceVulkanDevices* forceVulkanDevices, ::System::String* deviceModel, ::System::String* graphicDeviceName, ::System::Int32 apiLevel)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ForceVulkanDevices*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_ISDEVICEEXISTS_1_OFFSET))(forceVulkanDevices, deviceModel, graphicDeviceName, apiLevel);
		}

		static ::System::Void CheckForceGraphicsAPIConfig(::RPG::GameCore::GraphicsSettingJson* graphicsSetting)
		{
			return ((::System::Void(*)(::RPG::GameCore::GraphicsSettingJson*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_CHECKFORCEGRAPHICSAPICONFIG_OFFSET))(graphicsSetting);
		}

		static ::RPG::GameCore::GraphicsSettingJson* LoadGraphicsSettingJson()
		{
			return ((::RPG::GameCore::GraphicsSettingJson*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_LOADGRAPHICSSETTINGJSON_OFFSET))();
		}

		static ::RPG::GameCore::DeviceInfo* GetDeviceInfo()
		{
			return ((::RPG::GameCore::DeviceInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GETDEVICEINFO_OFFSET))();
		}

		static ::System::String* GetFormattedCPUName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GETFORMATTEDCPUNAME_OFFSET))();
		}

		static ::System::String* GetFormattedGPUName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GETFORMATTEDGPUNAME_OFFSET))();
		}

		static ::System::Void ApplySettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_APPLYSETTINGS_OFFSET))();
		}

		static ::Il2CppArray<::System::Int32>* get_WarmupQualityLevels()
		{
			return ((::Il2CppArray<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_WARMUPQUALITYLEVELS_OFFSET))();
		}

		static ::System::Void ApplyShaderWarmupQualityLevels()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_APPLYSHADERWARMUPQUALITYLEVELS_OFFSET))();
		}

		static ::System::Boolean _NeedLowerResolution()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS__NEEDLOWERRESOLUTION_OFFSET))();
		}

		static ::System::Void RefreshStreamingMipmapsMemoryBudget()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_REFRESHSTREAMINGMIPMAPSMEMORYBUDGET_OFFSET))();
		}

		static ::System::Void ApplyShadowSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_APPLYSHADOWSETTINGS_OFFSET))();
		}

		static ::RPG::Client::CRPShadowSettings* _GetShadowSettings()
		{
			return ((::RPG::Client::CRPShadowSettings*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS__GETSHADOWSETTINGS_OFFSET))();
		}

		static ::System::Void ResetPOSMCount()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_RESETPOSMCOUNT_OFFSET))();
		}

		static ::System::Void ApplyLightSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_APPLYLIGHTSETTINGS_OFFSET))();
		}

		static ::System::Void ApplyCharacterSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_APPLYCHARACTERSETTINGS_OFFSET))();
		}

		static ::System::Void ApplyEnvDetailSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_APPLYENVDETAILSETTINGS_OFFSET))();
		}

		static ::System::Void ApplyReflectionSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_APPLYREFLECTIONSETTINGS_OFFSET))();
		}

		static ::System::Void ApplySFXSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_APPLYSFXSETTINGS_OFFSET))();
		}

		static ::System::Void ApplyNPCSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_APPLYNPCSETTINGS_OFFSET))();
		}

		static ::System::Void ApplyStreamingFeature()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_APPLYSTREAMINGFEATURE_OFFSET))();
		}

		static ::System::Single get_PerSceneShadowDistance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_PERSCENESHADOWDISTANCE_OFFSET))();
		}

		static ::System::Void set_PerSceneShadowDistance(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_PERSCENESHADOWDISTANCE_OFFSET))(value);
		}

		static ::RPG::CustomRP::Quality get_GraphicsQuality()
		{
			return ((::RPG::CustomRP::Quality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_GRAPHICSQUALITY_OFFSET))();
		}

		static ::System::Void set_GraphicsQuality(::RPG::CustomRP::Quality value)
		{
			return ((::System::Void(*)(::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_GRAPHICSQUALITY_OFFSET))(value);
		}

		static ::RPG::Client::StreamingFeature* get_RPGStreamingFeature()
		{
			return ((::RPG::Client::StreamingFeature*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_RPGSTREAMINGFEATURE_OFFSET))();
		}

		static ::System::Void set_RPGStreamingFeature(::RPG::Client::StreamingFeature* value)
		{
			return ((::System::Void(*)(::RPG::Client::StreamingFeature*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_RPGSTREAMINGFEATURE_OFFSET))(value);
		}

		static ::System::Void OnGraphicSettingChanged()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_ONGRAPHICSETTINGCHANGED_OFFSET))();
		}

		static ::System::Void OnResolutionChanged()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_ONRESOLUTIONCHANGED_OFFSET))();
		}

		static ::System::Boolean get_IsSupport120FPS()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_ISSUPPORT120FPS_OFFSET))();
		}

		static ::System::Int32 get_FPS()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_FPS_OFFSET))();
		}

		static ::System::Void set_FPS(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_FPS_OFFSET))(value);
		}

		static ::System::Boolean get_EnableVSync()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_ENABLEVSYNC_OFFSET))();
		}

		static ::System::Void set_EnableVSync(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_ENABLEVSYNC_OFFSET))(value);
		}

		static ::System::Single get_RenderScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_RENDERSCALE_OFFSET))();
		}

		static ::System::Void set_RenderScale(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_RENDERSCALE_OFFSET))(value);
		}

		static ::RPG::CustomRP::Quality get_ResolutionQuality()
		{
			return ((::RPG::CustomRP::Quality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_RESOLUTIONQUALITY_OFFSET))();
		}

		static ::System::Void set_ResolutionQuality(::RPG::CustomRP::Quality value)
		{
			return ((::System::Void(*)(::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_RESOLUTIONQUALITY_OFFSET))(value);
		}

		static ::RPG::Client::PCResolution* get_PCResolution()
		{
			return ((::RPG::Client::PCResolution*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_PCRESOLUTION_OFFSET))();
		}

		static ::System::Void set_PCResolution(::RPG::Client::PCResolution* value)
		{
			return ((::System::Void(*)(::RPG::Client::PCResolution*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_PCRESOLUTION_OFFSET))(value);
		}

		static ::RPG::CustomRP::Quality get_ShadowQuality()
		{
			return ((::RPG::CustomRP::Quality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_SHADOWQUALITY_OFFSET))();
		}

		static ::System::Void set_ShadowQuality(::RPG::CustomRP::Quality value)
		{
			return ((::System::Void(*)(::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_SHADOWQUALITY_OFFSET))(value);
		}

		static ::RPG::CustomRP::Quality get_LightQuality()
		{
			return ((::RPG::CustomRP::Quality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_LIGHTQUALITY_OFFSET))();
		}

		static ::System::Void set_LightQuality(::RPG::CustomRP::Quality value)
		{
			return ((::System::Void(*)(::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_LIGHTQUALITY_OFFSET))(value);
		}

		static ::RPG::CustomRP::Quality get_CharacterQuality()
		{
			return ((::RPG::CustomRP::Quality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_CHARACTERQUALITY_OFFSET))();
		}

		static ::System::Void set_CharacterQuality(::RPG::CustomRP::Quality value)
		{
			return ((::System::Void(*)(::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_CHARACTERQUALITY_OFFSET))(value);
		}

		static ::RPG::CustomRP::Quality get_EnvDetailQuality()
		{
			return ((::RPG::CustomRP::Quality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_ENVDETAILQUALITY_OFFSET))();
		}

		static ::System::Void set_EnvDetailQuality(::RPG::CustomRP::Quality value)
		{
			return ((::System::Void(*)(::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_ENVDETAILQUALITY_OFFSET))(value);
		}

		static ::RPG::CustomRP::Quality get_ReflectionQuality()
		{
			return ((::RPG::CustomRP::Quality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_REFLECTIONQUALITY_OFFSET))();
		}

		static ::System::Void set_ReflectionQuality(::RPG::CustomRP::Quality value)
		{
			return ((::System::Void(*)(::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_REFLECTIONQUALITY_OFFSET))(value);
		}

		static ::RPG::CustomRP::Quality get_SFXQuality()
		{
			return ((::RPG::CustomRP::Quality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_SFXQUALITY_OFFSET))();
		}

		static ::System::Void set_SFXQuality(::RPG::CustomRP::Quality value)
		{
			return ((::System::Void(*)(::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_SFXQUALITY_OFFSET))(value);
		}

		static ::RPG::CustomRP::Quality get_BloomQuality()
		{
			return ((::RPG::CustomRP::Quality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_BLOOMQUALITY_OFFSET))();
		}

		static ::System::Void set_BloomQuality(::RPG::CustomRP::Quality value)
		{
			return ((::System::Void(*)(::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_BLOOMQUALITY_OFFSET))(value);
		}

		static ::RPG::Client::AntialiasingMode get_AAMode()
		{
			return ((::RPG::Client::AntialiasingMode(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_AAMODE_OFFSET))();
		}

		static ::System::Void set_AAMode(::RPG::Client::AntialiasingMode value)
		{
			return ((::System::Void(*)(::RPG::Client::AntialiasingMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_AAMODE_OFFSET))(value);
		}

		static ::System::Boolean get_EnableMetalFXSU()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_ENABLEMETALFXSU_OFFSET))();
		}

		static ::System::Void set_EnableMetalFXSU(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_ENABLEMETALFXSU_OFFSET))(value);
		}

		static ::System::Boolean get_EnableHalfResTransparent()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_ENABLEHALFRESTRANSPARENT_OFFSET))();
		}

		static ::System::Void set_EnableHalfResTransparent(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_ENABLEHALFRESTRANSPARENT_OFFSET))(value);
		}

		static ::System::Int32 get_ParticleTrailSmoothness()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_PARTICLETRAILSMOOTHNESS_OFFSET))();
		}

		static ::System::Void set_ParticleTrailSmoothness(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_PARTICLETRAILSMOOTHNESS_OFFSET))(value);
		}

		static ::RPG::Client::RPGQualitySettingsBoolWrapper get_EnableSelfShadow()
		{
			return ((::RPG::Client::RPGQualitySettingsBoolWrapper(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_ENABLESELFSHADOW_OFFSET))();
		}

		static ::System::Void set_EnableSelfShadow(::RPG::Client::RPGQualitySettingsBoolWrapper value)
		{
			return ((::System::Void(*)(::RPG::Client::RPGQualitySettingsBoolWrapper))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_ENABLESELFSHADOW_OFFSET))(value);
		}

		static ::RPG::CustomRP::Quality get_DlssQuality()
		{
			return ((::RPG::CustomRP::Quality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_DLSSQUALITY_OFFSET))();
		}

		static ::System::Void set_DlssQuality(::RPG::CustomRP::Quality value)
		{
			return ((::System::Void(*)(::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_DLSSQUALITY_OFFSET))(value);
		}

		static ::System::Boolean get_BuggyCpuSkinning()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_BUGGYCPUSKINNING_OFFSET))();
		}

		static ::System::Void set_BuggyCpuSkinning(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_BUGGYCPUSKINNING_OFFSET))(value);
		}

		static ::System::Void RefreshCustomConditionConsoleVar()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_REFRESHCUSTOMCONDITIONCONSOLEVAR_OFFSET))();
		}
	};
}
