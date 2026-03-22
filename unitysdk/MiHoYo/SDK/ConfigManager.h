#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/EnvType.h"
#include "unitysdk/MiHoYo/SDK/SceneType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ABTestModel; }
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class AccountPlatEnable; }
namespace MiHoYo::SDK { class ColorModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class LocalConfig; }
namespace MiHoYo::SDK { class MDKConfig; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class PSConfig; }
namespace MiHoYo::SDK { class SkinColorModel; }
namespace MiHoYo::SDK::Base::ABTestPlatform::Const { class ABTestRequestParam; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONFIGMANAGER_ADDPAYLIMITTIPSKEY_OFFSET UNITYSDK_OFFSET(0x1572C520)
#define MIHOYO_SDK_CONFIGMANAGER_CHECKSCENETYPE_OFFSET UNITYSDK_OFFSET(0x15729E00)
#define MIHOYO_SDK_CONFIGMANAGER_CHECKSHOWMAILBIND_OFFSET UNITYSDK_OFFSET(0x157295B0)
#define MIHOYO_SDK_CONFIGMANAGER_DEVICEFPREFRESH_OFFSET UNITYSDK_OFFSET(0x157221A0)
#define MIHOYO_SDK_CONFIGMANAGER_ENVISOVERSEA_OFFSET UNITYSDK_OFFSET(0x157255A0)
#define MIHOYO_SDK_CONFIGMANAGER_GETABTESTCONFIG_OFFSET UNITYSDK_OFFSET(0x1572B510)
#define MIHOYO_SDK_CONFIGMANAGER_GETABTESTKEY_OFFSET UNITYSDK_OFFSET(0x157291A0)
#define MIHOYO_SDK_CONFIGMANAGER_GETASBPATH_OFFSET UNITYSDK_OFFSET(0x157226B0)
#define MIHOYO_SDK_CONFIGMANAGER_GETBOXCONFIGCACHEKEY_OFFSET UNITYSDK_OFFSET(0x15728480)
#define MIHOYO_SDK_CONFIGMANAGER_GETBOXCONFIG_OFFSET UNITYSDK_OFFSET(0x15729A50)
#define MIHOYO_SDK_CONFIGMANAGER_GETBUNDLEID_OFFSET UNITYSDK_OFFSET(0x157229C0)
#define MIHOYO_SDK_CONFIGMANAGER_GETDEVICEFP_OFFSET UNITYSDK_OFFSET(0x15722150)
#define MIHOYO_SDK_CONFIGMANAGER_GETDEVICEID_OFFSET UNITYSDK_OFFSET(0x156F7080)
#define MIHOYO_SDK_CONFIGMANAGER_GETENVTYPEWITHSTRING_OFFSET UNITYSDK_OFFSET(0x15719080)
#define MIHOYO_SDK_CONFIGMANAGER_GETJOYPADCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x15725E10)
#define MIHOYO_SDK_CONFIGMANAGER_GETJOYPADENABLE_OFFSET UNITYSDK_OFFSET(0x15725E30)
#define MIHOYO_SDK_CONFIGMANAGER_GETJOYPADEXCHANGE_OFFSET UNITYSDK_OFFSET(0x15725E70)
#define MIHOYO_SDK_CONFIGMANAGER_GETJOYPADTYPE_OFFSET UNITYSDK_OFFSET(0x15725E50)
#define MIHOYO_SDK_CONFIGMANAGER_GETLISTPRICETIERKEY_1_OFFSET UNITYSDK_OFFSET(0x1572CA30)
#define MIHOYO_SDK_CONFIGMANAGER_GETLISTPRICETIERKEY_OFFSET UNITYSDK_OFFSET(0x1572C6B0)
#define MIHOYO_SDK_CONFIGMANAGER_GETLOGINABMODEL_OFFSET UNITYSDK_OFFSET(0x15728A80)
#define MIHOYO_SDK_CONFIGMANAGER_GETLOGOUTCHOICE_OFFSET UNITYSDK_OFFSET(0x1572CF40)
#define MIHOYO_SDK_CONFIGMANAGER_GETMODULESCONFIG_OFFSET UNITYSDK_OFFSET(0x15722A20)
#define MIHOYO_SDK_CONFIGMANAGER_GETPROTOCOLURL_OFFSET UNITYSDK_OFFSET(0x1572D040)
#define MIHOYO_SDK_CONFIGMANAGER_GETRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x157226F0)
#define MIHOYO_SDK_CONFIGMANAGER_GET_ANNOUNCEURL_OFFSET UNITYSDK_OFFSET(0x15721F90)
#define MIHOYO_SDK_CONFIGMANAGER_ISEXISTPAYLIMITTIPSKEY_OFFSET UNITYSDK_OFFSET(0x1572B890)
#define MIHOYO_SDK_CONFIGMANAGER_ISINVALIDDEVICEID_OFFSET UNITYSDK_OFFSET(0x15722090)
#define MIHOYO_SDK_CONFIGMANAGER_ISLOGINRECORDCHECKED_OFFSET UNITYSDK_OFFSET(0x1572D7F0)
#define MIHOYO_SDK_CONFIGMANAGER_ISOVERSEA_OFFSET UNITYSDK_OFFSET(0x156F4060)
#define MIHOYO_SDK_CONFIGMANAGER_ISTEST_OFFSET UNITYSDK_OFFSET(0x1572A330)
#define MIHOYO_SDK_CONFIGMANAGER_ISUSECNPAYPLAT_OFFSET UNITYSDK_OFFSET(0x15725C60)
#define MIHOYO_SDK_CONFIGMANAGER_LOADBOXCONFIGCACHECONSOLEOVERSEAS_OFFSET UNITYSDK_OFFSET(0x15726C90)
#define MIHOYO_SDK_CONFIGMANAGER_LOADBOXCONFIGCACHE_OFFSET UNITYSDK_OFFSET(0x15727040)
#define MIHOYO_SDK_CONFIGMANAGER_LOADCOLORCONFIG_OFFSET UNITYSDK_OFFSET(0x157255C0)
#define MIHOYO_SDK_CONFIGMANAGER_LOADLOCALABTESTCONFIG_OFFSET UNITYSDK_OFFSET(0x157292D0)
#define MIHOYO_SDK_CONFIGMANAGER_LOADLOCALCONFIG_OFFSET UNITYSDK_OFFSET(0x15724A60)
#define MIHOYO_SDK_CONFIGMANAGER_LOADLOCALMDKCONFIG_OFFSET UNITYSDK_OFFSET(0x1572A590)
#define MIHOYO_SDK_CONFIGMANAGER_LOADPSCONFIG_OFFSET UNITYSDK_OFFSET(0x15725A10)
#define MIHOYO_SDK_CONFIGMANAGER_LOADSKINCOLORCONFIG_OFFSET UNITYSDK_OFFSET(0x15725860)
#define MIHOYO_SDK_CONFIGMANAGER_ONGETBOXCONFIG_OFFSET UNITYSDK_OFFSET(0x157273E0)
#define MIHOYO_SDK_CONFIGMANAGER_ONGETCOMBOCONFIGPS_OFFSET UNITYSDK_OFFSET(0x1572B320)
#define MIHOYO_SDK_CONFIGMANAGER_ONGETCOMBOCONFIG_OFFSET UNITYSDK_OFFSET(0x1572AAC0)
#define MIHOYO_SDK_CONFIGMANAGER_ONGETSWBOXCONFIG_OFFSET UNITYSDK_OFFSET(0x15727D90)
#define MIHOYO_SDK_CONFIGMANAGER_REQUESTBOXCONFIG_OFFSET UNITYSDK_OFFSET(0x15718B70)
#define MIHOYO_SDK_CONFIGMANAGER_REQUESTCOMBOCONFIGPS_OFFSET UNITYSDK_OFFSET(0x157266C0)
#define MIHOYO_SDK_CONFIGMANAGER_REQUESTCOMBOCONFIG_1_OFFSET UNITYSDK_OFFSET(0x157269C0)
#define MIHOYO_SDK_CONFIGMANAGER_REQUESTCOMBOCONFIG_OFFSET UNITYSDK_OFFSET(0x157263C0)
#define MIHOYO_SDK_CONFIGMANAGER_REQUESTLOGINABTEST_OFFSET UNITYSDK_OFFSET(0x15728530)
#define MIHOYO_SDK_CONFIGMANAGER_REQUESTMDKCONFIG_OFFSET UNITYSDK_OFFSET(0x15725E80)
#define MIHOYO_SDK_CONFIGMANAGER_REQUESTSWBOXCONFIG_OFFSET UNITYSDK_OFFSET(0x15727B10)
#define MIHOYO_SDK_CONFIGMANAGER_SAVEBOXCONFIGCACHE_OFFSET UNITYSDK_OFFSET(0x157277A0)
#define MIHOYO_SDK_CONFIGMANAGER_SAVEBOXCONFIG_OFFSET UNITYSDK_OFFSET(0x15729AE0)
#define MIHOYO_SDK_CONFIGMANAGER_SAVELOGINABTEST_OFFSET UNITYSDK_OFFSET(0x15729010)
#define MIHOYO_SDK_CONFIGMANAGER_SAVELOGOUTCHOICE_OFFSET UNITYSDK_OFFSET(0x1572CE60)
#define MIHOYO_SDK_CONFIGMANAGER_SETAPPID_OFFSET UNITYSDK_OFFSET(0x15722730)
#define MIHOYO_SDK_CONFIGMANAGER_SETAPPKEY_OFFSET UNITYSDK_OFFSET(0x15722950)
#define MIHOYO_SDK_CONFIGMANAGER_SETCOMBOAPPID_OFFSET UNITYSDK_OFFSET(0x157227A0)
#define MIHOYO_SDK_CONFIGMANAGER_SETCOMBOAPPKEY_OFFSET UNITYSDK_OFFSET(0x15722810)
#define MIHOYO_SDK_CONFIGMANAGER_SETDEVICEID_OFFSET UNITYSDK_OFFSET(0x157189C0)
#define MIHOYO_SDK_CONFIGMANAGER_SETENV_OFFSET UNITYSDK_OFFSET(0x157191D0)
#define MIHOYO_SDK_CONFIGMANAGER_SETGAMEKEY_OFFSET UNITYSDK_OFFSET(0x15722880)
#define MIHOYO_SDK_CONFIGMANAGER_SETGAMEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x15722200)
#define MIHOYO_SDK_CONFIGMANAGER_SETJOYPADCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x15725E00)
#define MIHOYO_SDK_CONFIGMANAGER_SETJOYPADENABLE_1_OFFSET UNITYSDK_OFFSET(0x15725E20)
#define MIHOYO_SDK_CONFIGMANAGER_SETJOYPADENABLE_OFFSET UNITYSDK_OFFSET(0x15725DC0)
#define MIHOYO_SDK_CONFIGMANAGER_SETJOYPADEXCHANGE_OFFSET UNITYSDK_OFFSET(0x15725E60)
#define MIHOYO_SDK_CONFIGMANAGER_SETJOYPADTYPE_OFFSET UNITYSDK_OFFSET(0x15725E40)
#define MIHOYO_SDK_CONFIGMANAGER_SETLISTPRICETIERKEY_1_OFFSET UNITYSDK_OFFSET(0x1572CDF0)
#define MIHOYO_SDK_CONFIGMANAGER_SETLISTPRICETIERKEY_OFFSET UNITYSDK_OFFSET(0x1572CAA0)
#define MIHOYO_SDK_CONFIGMANAGER_SETLOCALGUESTSTATUS_OFFSET UNITYSDK_OFFSET(0x15722570)
#define MIHOYO_SDK_CONFIGMANAGER_SETPAYLIMITTIPSKEY_OFFSET UNITYSDK_OFFSET(0x1572BDB0)
#define MIHOYO_SDK_CONFIGMANAGER_SETSHOWLOGINCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x15722610)
#define MIHOYO_SDK_CONFIGMANAGER_SET_ANNOUNCEURL_OFFSET UNITYSDK_OFFSET(0x15722010)
#define MIHOYO_SDK_CONFIGMANAGER_UPDATECHANNEL_OFFSET UNITYSDK_OFFSET(0x15725BF0)
#define MIHOYO_SDK_CONFIGMANAGER_UPDATECONFIG_OFFSET UNITYSDK_OFFSET(0x1572A430)
#define MIHOYO_SDK_CONFIGMANAGER_UPDATEGAMEKEY_OFFSET UNITYSDK_OFFSET(0x15719070)
#define MIHOYO_SDK_CONFIGMANAGER_UPDATELOGINABTESTCONFIG_OFFSET UNITYSDK_OFFSET(0x15728BB0)
#define MIHOYO_SDK_CONFIGMANAGER_UPDATEQRAPPICONS_OFFSET UNITYSDK_OFFSET(0x1572A650)
#define MIHOYO_SDK_CONFIGMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1572D920)
#define MIHOYO_SDK_CONFIGMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1572D8F0)
#define MIHOYO_SDK_CONFIGMANAGER__DEVICEFPREFRESH_B__50_0_OFFSET UNITYSDK_OFFSET(0x1572D9D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigManager_TypeDefinitionIndex = 7071;

	class ConfigManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_psClientId()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ConfigManager_TypeDefinitionIndex)->GetStaticField(0x3E00);
		}
		static ::MiHoYo::SDK::AccountPlatEnable** StaticGet_accountPlatEnable()
		{
			return (::MiHoYo::SDK::AccountPlatEnable**)Il2CppClass::FromTypeDefinitionIndex(ConfigManager_TypeDefinitionIndex)->GetStaticField(0x3E08);
		}
		static ::MiHoYo::SDK::ConfigManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::ConfigManager**)Il2CppClass::FromTypeDefinitionIndex(ConfigManager_TypeDefinitionIndex)->GetStaticField(0x3E10);
		}
		static ::System::Boolean* StaticGet_configLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigManager_TypeDefinitionIndex)->GetStaticField(0x10C0);
		}
		static ::System::Boolean* StaticGet_isAutoTestEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigManager_TypeDefinitionIndex)->GetStaticField(0x10C1);
		}
		// static const ::System::String* DEVICE_ID; // 0x0
		// static const ::System::String* DEVICE_FP; // 0x0
		// static const ::System::String* REGISTRY_KEY_NAME; // 0x0
		// static const ::System::String* SOFTWARE; // 0x0
		// static const ::System::String* ANNOUNCE_URL; // 0x0
		// static const ::System::String* PROTOCOL_KEY; // 0x0
		// static const ::System::String* PROTOCOL_SHOW_FLAG; // 0x0
		// static const ::System::String* PROTOCOL_LAUNCH_VERSION; // 0x0
		// static const ::System::String* PROTOCOL_LAUNCH_SHOW_FLAG; // 0x0
		// static const ::System::String* PROTOCOL_LAUNCH_FALLBACK_FLAG; // 0x0
		// static const ::System::String* CONFIG_MODEL_NAME; // 0x0
		// static const ::System::String* AB_TEST_LOGIN_CONFIGS; // 0x0
		// static const ::System::String* CLIENT_CONFIG; // 0x0
		// static const ::System::String* PAY_DIALOG_ABTEST_CN; // 0x0
		// static const ::System::String* WEBVIEW_RENDER_METHOD; // 0x0
		// static const ::System::String* USER_AGREEMENT_SHOW_FLAG; // 0x0
		// static const ::System::String* PAY_LIMIT_TIPS_KEY; // 0x0
		// static const ::System::String* MIHOYOSDK_LIST_PRICE_TIER_KEY; // 0x0
		// static const ::System::String* USER_AGREEMENT_STATE_LAST_TIME; // 0x0
		// static const ::System::String* USER_CENTER_ENABLE_LAST_TIME; // 0x0
		// static const ::System::String* QR_CODE_ENABLE_LAST_TIME; // 0x0
		// static const ::System::String* QR_CODE_BBS_ENABLE_LAST_TIME; // 0x0
		// static const ::System::String* QR_CODE_CLOUD_ENABLE_LAST_TIME; // 0x0
		// static const ::System::String* LOGOUT_CHOICE_CACHED; // 0x0
		// static const ::System::String* BOX_CONFIGS; // 0x0
		// static const ::System::String* PRELOAD_ENABLE; // 0x0
		// static const ::System::String* PRELOAD_URL; // 0x0
		::System::String* joypadExchange; // 0x10
		::System::String* joypadType; // 0x18
		::System::String* webViewRenderMethod; // 0x20
		::System::String* deviceID; // 0x28
		::System::String* _announce_url; // 0x30
		::System::String* deviceFP; // 0x38
		::System::Boolean hoyopass; // 0x40
		::System::Boolean accountListLoginInProcess; // 0x41
		::System::Boolean joypadEnable; // 0x42
		::System::Boolean userLogin; // 0x43
		::System::Int32 joypadCloseBtn; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER__CCTOR_OFFSET))();
		}

		::System::String* get_announceURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GET_ANNOUNCEURL_OFFSET))(this);
		}

		::System::Void set_announceURL(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SET_ANNOUNCEURL_OFFSET))(this, value);
		}

		::System::Void SetDeviceID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETDEVICEID_OFFSET))(this, value);
		}

		::System::Boolean IsInvalidDeviceID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ISINVALIDDEVICEID_OFFSET))(this);
		}

		::System::String* GetDeviceID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETDEVICEID_OFFSET))(this);
		}

		::System::String* GetDeviceFP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETDEVICEFP_OFFSET))(this);
		}

		::System::Void DeviceFPRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_DEVICEFPREFRESH_OFFSET))(this);
		}

		::System::Void SetGameParameters(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETGAMEPARAMETERS_OFFSET))(this, jsonString);
		}

		::System::Void SetLocalGuestStatus(::System::String* flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETLOCALGUESTSTATUS_OFFSET))(this, flag);
		}

		::System::Void SetShowLoginCloseButton(::System::String* flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETSHOWLOGINCLOSEBUTTON_OFFSET))(this, flag);
		}

		::System::String* GetAsbPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETASBPATH_OFFSET))(this);
		}

		::System::String* GetResourcePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETRESOURCEPATH_OFFSET))(this);
		}

		::System::Void SetAppID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETAPPID_OFFSET))(this, value);
		}

		::System::Void SetComboAppID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETCOMBOAPPID_OFFSET))(this, value);
		}

		::System::Void SetComboAppKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETCOMBOAPPKEY_OFFSET))(this, value);
		}

		::System::Void SetGameKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETGAMEKEY_OFFSET))(this, value);
		}

		::System::Void SetAppKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETAPPKEY_OFFSET))(this, value);
		}

		::System::String* GetBundleID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETBUNDLEID_OFFSET))(this);
		}

		::MiHoYo::SDK::LocalConfig* GetModulesConfig(::MiHoYo::SDK::EnvType eEnvType)
		{
			return ((::MiHoYo::SDK::LocalConfig*(*)(::PVOID, ::MiHoYo::SDK::EnvType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETMODULESCONFIG_OFFSET))(this, eEnvType);
		}

		::MiHoYo::SDK::LocalConfig* LoadLocalConfig(::MiHoYo::SDK::EnvType env, ::System::Boolean readOnly)
		{
			return ((::MiHoYo::SDK::LocalConfig*(*)(::PVOID, ::MiHoYo::SDK::EnvType, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_LOADLOCALCONFIG_OFFSET))(this, env, readOnly);
		}

		::MiHoYo::SDK::ColorModel* LoadColorConfig()
		{
			return ((::MiHoYo::SDK::ColorModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_LOADCOLORCONFIG_OFFSET))(this);
		}

		::MiHoYo::SDK::SkinColorModel* LoadSkinColorConfig()
		{
			return ((::MiHoYo::SDK::SkinColorModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_LOADSKINCOLORCONFIG_OFFSET))(this);
		}

		::MiHoYo::SDK::PSConfig* LoadPSConfig()
		{
			return ((::MiHoYo::SDK::PSConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_LOADPSCONFIG_OFFSET))(this);
		}

		static ::MiHoYo::SDK::EnvType GetEnvTypeWithString(::System::String* env)
		{
			return ((::MiHoYo::SDK::EnvType(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETENVTYPEWITHSTRING_OFFSET))(env);
		}

		::System::Void SetEnv(::MiHoYo::SDK::EnvType type)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::EnvType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETENV_OFFSET))(this, type);
		}

		::System::Void UpdateGameKey(::System::String* gameKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_UPDATEGAMEKEY_OFFSET))(this, gameKey);
		}

		::System::Void UpdateChannel(::System::String* channelId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_UPDATECHANNEL_OFFSET))(this, channelId);
		}

		::System::Boolean IsOverSea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ISOVERSEA_OFFSET))(this);
		}

		::System::Boolean EnvIsOversea(::MiHoYo::SDK::EnvType env)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::EnvType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ENVISOVERSEA_OFFSET))(this, env);
		}

		::System::Boolean IsUseCNPayPlat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ISUSECNPAYPLAT_OFFSET))(this);
		}

		::System::Void SetJoyPadEnable(::System::String* enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETJOYPADENABLE_OFFSET))(this, enable);
		}

		::System::Void SetJoyPadCloseButton(::System::Int32 btnId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETJOYPADCLOSEBUTTON_OFFSET))(this, btnId);
		}

		::System::Int32 GetJoyPadCloseButton()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETJOYPADCLOSEBUTTON_OFFSET))(this);
		}

		::System::Void SetJoyPadEnable_1(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETJOYPADENABLE_1_OFFSET))(this, enable);
		}

		::System::Boolean GetJoyPadEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETJOYPADENABLE_OFFSET))(this);
		}

		::System::Void SetJoyPadType(::System::String* padType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETJOYPADTYPE_OFFSET))(this, padType);
		}

		::System::String* GetJoyPadType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETJOYPADTYPE_OFFSET))(this);
		}

		::System::Void SetJoyPadExchange(::System::String* enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETJOYPADEXCHANGE_OFFSET))(this, enable);
		}

		::System::String* GetJoyPadExchange()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETJOYPADEXCHANGE_OFFSET))(this);
		}

		::System::Void RequestMDKConfig(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_REQUESTMDKCONFIG_OFFSET))(this, callback);
		}

		::System::Void RequestComboConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_REQUESTCOMBOCONFIG_OFFSET))(this);
		}

		::System::Void RequestComboConfigPS()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_REQUESTCOMBOCONFIGPS_OFFSET))(this);
		}

		::System::Void RequestComboConfig_1(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_REQUESTCOMBOCONFIG_1_OFFSET))(this, callback);
		}

		::System::Void RequestBoxConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_REQUESTBOXCONFIG_OFFSET))(this);
		}

		::System::Void OnGetBoxConfig(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ONGETBOXCONFIG_OFFSET))(this, response);
		}

		::System::Void RequestSwBoxConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_REQUESTSWBOXCONFIG_OFFSET))(this);
		}

		::System::Void OnGetSwBoxConfig(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ONGETSWBOXCONFIG_OFFSET))(this, response);
		}

		::System::Void SaveBoxConfigCache(::System::String* boxConfigVals)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SAVEBOXCONFIGCACHE_OFFSET))(this, boxConfigVals);
		}

		::System::Void LoadBoxConfigCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_LOADBOXCONFIGCACHE_OFFSET))(this);
		}

		::System::Void LoadBoxConfigCacheConsoleOverseas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_LOADBOXCONFIGCACHECONSOLEOVERSEAS_OFFSET))(this);
		}

		::System::String* GetBoxConfigCacheKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETBOXCONFIGCACHEKEY_OFFSET))(this);
		}

		::System::Void RequestLoginABTest(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_REQUESTLOGINABTEST_OFFSET))(this, callback);
		}

		::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam* GetLoginAbModel()
		{
			return ((::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETLOGINABMODEL_OFFSET))(this);
		}

		::System::Void UpdateLoginABTestConfig(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_UPDATELOGINABTESTCONFIG_OFFSET))(this, data);
		}

		::System::Void SaveLoginABTest(::System::Boolean bEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SAVELOGINABTEST_OFFSET))(this, bEnable);
		}

		::System::Void LoadLocalABTestConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_LOADLOCALABTESTCONFIG_OFFSET))(this);
		}

		::System::Boolean CheckShowMailBind(::MiHoYo::SDK::AccountModel* userDataModel)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_CHECKSHOWMAILBIND_OFFSET))(this, userDataModel);
		}

		::System::String* GetBoxConfig()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETBOXCONFIG_OFFSET))(this);
		}

		::System::Void SaveBoxConfig(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SAVEBOXCONFIG_OFFSET))(this, key);
		}

		::MiHoYo::SDK::SceneType CheckSceneType()
		{
			return ((::MiHoYo::SDK::SceneType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_CHECKSCENETYPE_OFFSET))(this);
		}

		::System::Boolean IsTest(::System::String*& name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ISTEST_OFFSET))(this, name);
		}

		::System::Void UpdateConfig(::MiHoYo::SDK::MDKConfig* model)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MDKConfig*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_UPDATECONFIG_OFFSET))(this, model);
		}

		::System::Void LoadLocalMDKConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_LOADLOCALMDKCONFIG_OFFSET))(this);
		}

		::System::Void UpdateQRAppIcons()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_UPDATEQRAPPICONS_OFFSET))(this);
		}

		::System::Void OnGetComboConfig(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ONGETCOMBOCONFIG_OFFSET))(this, response);
		}

		::System::Void OnGetComboConfigPS(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ONGETCOMBOCONFIGPS_OFFSET))(this, response);
		}

		::System::String* GetABTestKey(::System::String* storageKey, ::System::String* accountId)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETABTESTKEY_OFFSET))(this, storageKey, accountId);
		}

		::MiHoYo::SDK::ABTestModel* GetABTestConfig(::System::String* storageKey)
		{
			return ((::MiHoYo::SDK::ABTestModel*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETABTESTCONFIG_OFFSET))(this, storageKey);
		}

		::System::Boolean IsExistPayLimitTipsKey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ISEXISTPAYLIMITTIPSKEY_OFFSET))(this);
		}

		::System::Void SetPayLimitTipsKey(::System::Boolean isAdd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETPAYLIMITTIPSKEY_OFFSET))(this, isAdd);
		}

		::System::Void AddPayLimitTipsKey(::System::String* dateString, ::System::String* accountId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ADDPAYLIMITTIPSKEY_OFFSET))(this, dateString, accountId);
		}

		::MiHoYo::SDK::JSONNode* GetListPriceTierKey(::System::String* country, ::System::String* currency, ::System::String* language)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETLISTPRICETIERKEY_OFFSET))(this, country, currency, language);
		}

		::MiHoYo::SDK::JSONNode* GetListPriceTierKey_1(::System::String* country, ::System::String* currency)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETLISTPRICETIERKEY_1_OFFSET))(this, country, currency);
		}

		::System::Void SetListPriceTierKey(::System::String* country, ::System::String* currency, ::System::String* language, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETLISTPRICETIERKEY_OFFSET))(this, country, currency, language, value);
		}

		::System::Void SetListPriceTierKey_1(::System::String* country, ::System::String* currency, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETLISTPRICETIERKEY_1_OFFSET))(this, country, currency, value);
		}

		::System::Void SaveLogoutChoice(::System::Boolean isSaved)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SAVELOGOUTCHOICE_OFFSET))(this, isSaved);
		}

		::System::Boolean GetLogoutChoice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETLOGOUTCHOICE_OFFSET))(this);
		}

		::System::String* GetProtocolUrl(::System::String* jsonString, ::System::String*& appId)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETPROTOCOLURL_OFFSET))(this, jsonString, appId);
		}

		::System::Boolean IsLoginRecordChecked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ISLOGINRECORDCHECKED_OFFSET))(this);
		}

		::System::Void _DeviceFPRefresh_b__50_0(::System::String* fp)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER__DEVICEFPREFRESH_B__50_0_OFFSET))(this, fp);
		}
	};
}
