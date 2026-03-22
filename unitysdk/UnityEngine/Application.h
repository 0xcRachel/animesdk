#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ApplicationInstallMode.h"
#include "unitysdk/UnityEngine/ApplicationSandboxType.h"
#include "unitysdk/UnityEngine/LogType.h"
#include "unitysdk/UnityEngine/NetworkReachability.h"
#include "unitysdk/UnityEngine/PooledName.h"
#include "unitysdk/UnityEngine/RuntimePlatform.h"
#include "unitysdk/UnityEngine/StackTraceLogType.h"
#include "unitysdk/UnityEngine/SystemLanguage.h"
#include "unitysdk/UnityEngine/ThreadPriority.h"
#include "unitysdk/UnityEngine/UserAuthorization.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Application_AdvertisingIdentifierCallback; }
namespace UnityEngine { class Application_LogCallback; }
namespace UnityEngine { class Application_LowMemoryCallback; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Events { class UnityAction; }

#define UNITYENGINE_APPLICATION_ADD_DEEPLINKACTIVATED_OFFSET UNITYSDK_OFFSET(0x181D8530)
#define UNITYENGINE_APPLICATION_ADD_FOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x181D8410)
#define UNITYENGINE_APPLICATION_ADD_LOGMESSAGERECEIVEDTHREADED_OFFSET UNITYSDK_OFFSET(0x181D6050)
#define UNITYENGINE_APPLICATION_ADD_LOGMESSAGERECEIVED_OFFSET UNITYSDK_OFFSET(0x181D5F60)
#define UNITYENGINE_APPLICATION_ADD_LOWMEMORY_OFFSET UNITYSDK_OFFSET(0x181D5A50)
#define UNITYENGINE_APPLICATION_ADD_ONBEFORERENDER_OFFSET UNITYSDK_OFFSET(0x181D7CF0)
#define UNITYENGINE_APPLICATION_ADD_QUITTING_OFFSET UNITYSDK_OFFSET(0x181D87B0)
#define UNITYENGINE_APPLICATION_ADD_WANTSTOQUIT_OFFSET UNITYSDK_OFFSET(0x181D8650)
#define UNITYENGINE_APPLICATION_BUILDINVOCATIONFORARGUMENTS_OFFSET UNITYSDK_OFFSET(0x181D7AC0)
#define UNITYENGINE_APPLICATION_CALLLOGCALLBACK_OFFSET UNITYSDK_OFFSET(0x181D6140)
#define UNITYENGINE_APPLICATION_CALLLOWMEMORY_OFFSET UNITYSDK_OFFSET(0x181D5B70)
#define UNITYENGINE_APPLICATION_CANCELQUIT_OFFSET UNITYSDK_OFFSET(0x181D5370)
#define UNITYENGINE_APPLICATION_CANSTREAMEDLEVELBELOADED_1_OFFSET UNITYSDK_OFFSET(0x181D5460)
#define UNITYENGINE_APPLICATION_CANSTREAMEDLEVELBELOADED_OFFSET UNITYSDK_OFFSET(0x181D5420)
#define UNITYENGINE_APPLICATION_CAPTURESCREENSHOT_1_OFFSET UNITYSDK_OFFSET(0x181D7CA0)
#define UNITYENGINE_APPLICATION_CAPTURESCREENSHOT_OFFSET UNITYSDK_OFFSET(0x181D7C50)
#define UNITYENGINE_APPLICATION_CUSTOMFINDSCRIPTBYCLASSOPT_OFFSET UNITYSDK_OFFSET(0x181D5920)
#define UNITYENGINE_APPLICATION_CUSTOMUPDATEPRELOADMANAGER_OFFSET UNITYSDK_OFFSET(0x181D5910)
#define UNITYENGINE_APPLICATION_DONTDESTROYONLOAD_OFFSET UNITYSDK_OFFSET(0x181D7C30)
#define UNITYENGINE_APPLICATION_EXTERNALCALL_OFFSET UNITYSDK_OFFSET(0x181D7AA0)
#define UNITYENGINE_APPLICATION_EXTERNALEVAL_OFFSET UNITYSDK_OFFSET(0x181D56E0)
#define UNITYENGINE_APPLICATION_FORCECRASH_OFFSET UNITYSDK_OFFSET(0x181D5810)
#define UNITYENGINE_APPLICATION_GETAVAILABLEDISKSPACE_OFFSET UNITYSDK_OFFSET(0x181D56D0)
#define UNITYENGINE_APPLICATION_GETBUILDTAGS_OFFSET UNITYSDK_OFFSET(0x181D54D0)
#define UNITYENGINE_APPLICATION_GETGFXRENDERTHREADKERNELIDANDROID_OFFSET UNITYSDK_OFFSET(0x181D5980)
#define UNITYENGINE_APPLICATION_GETINTEGRATEQUEUESIZE_OFFSET UNITYSDK_OFFSET(0x181D5960)
#define UNITYENGINE_APPLICATION_GETJOBQUEUETHREADKERNELIDSANDROID_OFFSET UNITYSDK_OFFSET(0x181D59A0)
#define UNITYENGINE_APPLICATION_GETLOADINGTHREADKERNELIDANDROID_OFFSET UNITYSDK_OFFSET(0x181D5990)
#define UNITYENGINE_APPLICATION_GETMAINTHREADKERNELIDANDROID_OFFSET UNITYSDK_OFFSET(0x181D5970)
#define UNITYENGINE_APPLICATION_GETPRELOADQUEUESIZE_OFFSET UNITYSDK_OFFSET(0x181D5940)
#define UNITYENGINE_APPLICATION_GETSTACKTRACELOGTYPE_OFFSET UNITYSDK_OFFSET(0x181D5870)
#define UNITYENGINE_APPLICATION_GETSTREAMPROGRESSFORLEVEL_1_OFFSET UNITYSDK_OFFSET(0x181D53F0)
#define UNITYENGINE_APPLICATION_GETSTREAMPROGRESSFORLEVEL_OFFSET UNITYSDK_OFFSET(0x181D53A0)
#define UNITYENGINE_APPLICATION_GETVALUEFORARGV_OFFSET UNITYSDK_OFFSET(0x181D5570)
#define UNITYENGINE_APPLICATION_GET_ABSOLUTEURL_OFFSET UNITYSDK_OFFSET(0x181D56C0)
#define UNITYENGINE_APPLICATION_GET_BACKGROUNDLOADINGPRIORITY_OFFSET UNITYSDK_OFFSET(0x181D58A0)
#define UNITYENGINE_APPLICATION_GET_BUILDGUID_OFFSET UNITYSDK_OFFSET(0x181D54F0)
#define UNITYENGINE_APPLICATION_GET_CLOUDPROJECTID_OFFSET UNITYSDK_OFFSET(0x181D57E0)
#define UNITYENGINE_APPLICATION_GET_COMPANYNAME_OFFSET UNITYSDK_OFFSET(0x181D57D0)
#define UNITYENGINE_APPLICATION_GET_CONSOLELOGPATH_OFFSET UNITYSDK_OFFSET(0x181D5890)
#define UNITYENGINE_APPLICATION_GET_DATAPATHNAME_INJECTED_OFFSET UNITYSDK_OFFSET(0x181D55C0)
#define UNITYENGINE_APPLICATION_GET_DATAPATHNAME_OFFSET UNITYSDK_OFFSET(0x181D5590)
#define UNITYENGINE_APPLICATION_GET_DATAPATH_OFFSET UNITYSDK_OFFSET(0x181D5580)
#define UNITYENGINE_APPLICATION_GET_GENUINECHECKAVAILABLE_OFFSET UNITYSDK_OFFSET(0x181D58D0)
#define UNITYENGINE_APPLICATION_GET_GENUINE_OFFSET UNITYSDK_OFFSET(0x181D58C0)
#define UNITYENGINE_APPLICATION_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x181D5790)
#define UNITYENGINE_APPLICATION_GET_INSTALLERNAME_OFFSET UNITYSDK_OFFSET(0x181D5780)
#define UNITYENGINE_APPLICATION_GET_INSTALLMODE_OFFSET UNITYSDK_OFFSET(0x181D57A0)
#define UNITYENGINE_APPLICATION_GET_INTERNETREACHABILITY_OFFSET UNITYSDK_OFFSET(0x181D5A40)
#define UNITYENGINE_APPLICATION_GET_ISBATCHMODE_OFFSET UNITYSDK_OFFSET(0x181D5530)
#define UNITYENGINE_APPLICATION_GET_ISCONSOLEPLATFORM_OFFSET UNITYSDK_OFFSET(0x181D5A00)
#define UNITYENGINE_APPLICATION_GET_ISEDITOR_OFFSET UNITYSDK_OFFSET(0x181D7C20)
#define UNITYENGINE_APPLICATION_GET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0x181D5490)
#define UNITYENGINE_APPLICATION_GET_ISFOREGROUNDWINDOW_OFFSET UNITYSDK_OFFSET(0x181D54A0)
#define UNITYENGINE_APPLICATION_GET_ISHUMANCONTROLLINGUS_OFFSET UNITYSDK_OFFSET(0x181D5550)
#define UNITYENGINE_APPLICATION_GET_ISLOADINGLEVEL_OFFSET UNITYSDK_OFFSET(0x181D5390)
#define UNITYENGINE_APPLICATION_GET_ISMOBILEPLATFORM_OFFSET UNITYSDK_OFFSET(0x181D59C0)
#define UNITYENGINE_APPLICATION_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0x181D7C10)
#define UNITYENGINE_APPLICATION_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x181D5470)
#define UNITYENGINE_APPLICATION_GET_ISTESTRUN_OFFSET UNITYSDK_OFFSET(0x181D5540)
#define UNITYENGINE_APPLICATION_GET_LEVELCOUNT_OFFSET UNITYSDK_OFFSET(0x181D8DD0)
#define UNITYENGINE_APPLICATION_GET_LOADEDLEVELNAME_OFFSET UNITYSDK_OFFSET(0x181D8E60)
#define UNITYENGINE_APPLICATION_GET_LOADEDLEVEL_OFFSET UNITYSDK_OFFSET(0x181D8E00)
#define UNITYENGINE_APPLICATION_GET_PERSISTENTDATAPATHNAME_INJECTED_OFFSET UNITYSDK_OFFSET(0x181D5660)
#define UNITYENGINE_APPLICATION_GET_PERSISTENTDATAPATHNAME_OFFSET UNITYSDK_OFFSET(0x181D5630)
#define UNITYENGINE_APPLICATION_GET_PERSISTENTDATAPATH_OFFSET UNITYSDK_OFFSET(0x181D5620)
#define UNITYENGINE_APPLICATION_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x181D59B0)
#define UNITYENGINE_APPLICATION_GET_PLAYERFASTQUIT_OFFSET UNITYSDK_OFFSET(0x181D54B0)
#define UNITYENGINE_APPLICATION_GET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x181D57C0)
#define UNITYENGINE_APPLICATION_GET_RUNINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x181D5500)
#define UNITYENGINE_APPLICATION_GET_SANDBOXTYPE_OFFSET UNITYSDK_OFFSET(0x181D57B0)
#define UNITYENGINE_APPLICATION_GET_STACKTRACELOGTYPE_OFFSET UNITYSDK_OFFSET(0x181D5850)
#define UNITYENGINE_APPLICATION_GET_STREAMEDBYTES_OFFSET UNITYSDK_OFFSET(0x181D5400)
#define UNITYENGINE_APPLICATION_GET_STREAMINGASSETSPATHNAME_INJECTED_OFFSET UNITYSDK_OFFSET(0x181D5610)
#define UNITYENGINE_APPLICATION_GET_STREAMINGASSETSPATHNAME_OFFSET UNITYSDK_OFFSET(0x181D55E0)
#define UNITYENGINE_APPLICATION_GET_STREAMINGASSETSPATH_OFFSET UNITYSDK_OFFSET(0x181D55D0)
#define UNITYENGINE_APPLICATION_GET_SUBMITANALYTICS_OFFSET UNITYSDK_OFFSET(0x181D5900)
#define UNITYENGINE_APPLICATION_GET_SYSTEMLANGUAGE_OFFSET UNITYSDK_OFFSET(0x181D5A30)
#define UNITYENGINE_APPLICATION_GET_TARGETFRAMERATE_OFFSET UNITYSDK_OFFSET(0x181D5820)
#define UNITYENGINE_APPLICATION_GET_TEMPORARYCACHEPATHNAME_INJECTED_OFFSET UNITYSDK_OFFSET(0x181D56B0)
#define UNITYENGINE_APPLICATION_GET_TEMPORARYCACHEPATHNAME_OFFSET UNITYSDK_OFFSET(0x181D5680)
#define UNITYENGINE_APPLICATION_GET_TEMPORARYCACHEPATH_OFFSET UNITYSDK_OFFSET(0x181D5670)
#define UNITYENGINE_APPLICATION_GET_UNITYVERSION_OFFSET UNITYSDK_OFFSET(0x181D5760)
#define UNITYENGINE_APPLICATION_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x181D5770)
#define UNITYENGINE_APPLICATION_GET_WEBSECURITYENABLED_OFFSET UNITYSDK_OFFSET(0x181D5410)
#define UNITYENGINE_APPLICATION_HASARGV_OFFSET UNITYSDK_OFFSET(0x181D5560)
#define UNITYENGINE_APPLICATION_HASPROLICENSE_OFFSET UNITYSDK_OFFSET(0x181D5520)
#define UNITYENGINE_APPLICATION_HASUSERAUTHORIZATION_OFFSET UNITYSDK_OFFSET(0x181D58F0)
#define UNITYENGINE_APPLICATION_INTERNAL_APPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x181D8A10)
#define UNITYENGINE_APPLICATION_INTERNAL_APPLICATIONWANTSTOQUIT_OFFSET UNITYSDK_OFFSET(0x181D88D0)
#define UNITYENGINE_APPLICATION_INTERNAL_EXTERNALCALL_OFFSET UNITYSDK_OFFSET(0x181D5750)
#define UNITYENGINE_APPLICATION_INVOKEDEEPLINKACTIVATED_OFFSET UNITYSDK_OFFSET(0x181D8BF0)
#define UNITYENGINE_APPLICATION_INVOKEFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x181D8BD0)
#define UNITYENGINE_APPLICATION_INVOKEONADVERTISINGIDENTIFIERCALLBACK_OFFSET UNITYSDK_OFFSET(0x181D6A50)
#define UNITYENGINE_APPLICATION_INVOKEONBEFORERENDER_OFFSET UNITYSDK_OFFSET(0x181D8A30)
#define UNITYENGINE_APPLICATION_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x181D5480)
#define UNITYENGINE_APPLICATION_LOADLEVELADDITIVEASYNC_1_OFFSET UNITYSDK_OFFSET(0x181D9150)
#define UNITYENGINE_APPLICATION_LOADLEVELADDITIVEASYNC_OFFSET UNITYSDK_OFFSET(0x181D90C0)
#define UNITYENGINE_APPLICATION_LOADLEVELADDITIVE_1_OFFSET UNITYSDK_OFFSET(0x181D8F50)
#define UNITYENGINE_APPLICATION_LOADLEVELADDITIVE_OFFSET UNITYSDK_OFFSET(0x181D8F20)
#define UNITYENGINE_APPLICATION_LOADLEVELASYNC_1_OFFSET UNITYSDK_OFFSET(0x181D9020)
#define UNITYENGINE_APPLICATION_LOADLEVELASYNC_OFFSET UNITYSDK_OFFSET(0x181D8F90)
#define UNITYENGINE_APPLICATION_LOADLEVEL_1_OFFSET UNITYSDK_OFFSET(0x181D8EF0)
#define UNITYENGINE_APPLICATION_LOADLEVEL_OFFSET UNITYSDK_OFFSET(0x181D8EC0)
#define UNITYENGINE_APPLICATION_OBJECTTOJSSTRING_OFFSET UNITYSDK_OFFSET(0x181D7410)
#define UNITYENGINE_APPLICATION_OPENURL_OFFSET UNITYSDK_OFFSET(0x181D5800)
#define UNITYENGINE_APPLICATION_QUIT_1_OFFSET UNITYSDK_OFFSET(0x181D5360)
#define UNITYENGINE_APPLICATION_QUIT_OFFSET UNITYSDK_OFFSET(0x181D5350)
#define UNITYENGINE_APPLICATION_REGISTERLOGCALLBACKTHREADED_OFFSET UNITYSDK_OFFSET(0x181D8DC0)
#define UNITYENGINE_APPLICATION_REGISTERLOGCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x181D8C20)
#define UNITYENGINE_APPLICATION_REGISTERLOGCALLBACK_OFFSET UNITYSDK_OFFSET(0x181D8C10)
#define UNITYENGINE_APPLICATION_REMOVE_DEEPLINKACTIVATED_OFFSET UNITYSDK_OFFSET(0x181D85C0)
#define UNITYENGINE_APPLICATION_REMOVE_FOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x181D84A0)
#define UNITYENGINE_APPLICATION_REMOVE_LOGMESSAGERECEIVEDTHREADED_OFFSET UNITYSDK_OFFSET(0x181D60D0)
#define UNITYENGINE_APPLICATION_REMOVE_LOGMESSAGERECEIVED_OFFSET UNITYSDK_OFFSET(0x181D5FE0)
#define UNITYENGINE_APPLICATION_REMOVE_LOWMEMORY_OFFSET UNITYSDK_OFFSET(0x181D5AE0)
#define UNITYENGINE_APPLICATION_REMOVE_ONBEFORERENDER_OFFSET UNITYSDK_OFFSET(0x181D8090)
#define UNITYENGINE_APPLICATION_REMOVE_QUITTING_OFFSET UNITYSDK_OFFSET(0x181D8840)
#define UNITYENGINE_APPLICATION_REMOVE_WANTSTOQUIT_OFFSET UNITYSDK_OFFSET(0x181D8700)
#define UNITYENGINE_APPLICATION_REQUESTADVERTISINGIDENTIFIERASYNC_OFFSET UNITYSDK_OFFSET(0x181D57F0)
#define UNITYENGINE_APPLICATION_REQUESTUSERAUTHORIZATION_OFFSET UNITYSDK_OFFSET(0x181D58E0)
#define UNITYENGINE_APPLICATION_SETBUILDTAGS_OFFSET UNITYSDK_OFFSET(0x181D54E0)
#define UNITYENGINE_APPLICATION_SETLOGCALLBACKDEFINED_OFFSET UNITYSDK_OFFSET(0x181D5840)
#define UNITYENGINE_APPLICATION_SETSTACKTRACELOGTYPE_OFFSET UNITYSDK_OFFSET(0x181D5880)
#define UNITYENGINE_APPLICATION_SET_BACKGROUNDLOADINGPRIORITY_OFFSET UNITYSDK_OFFSET(0x181D58B0)
#define UNITYENGINE_APPLICATION_SET_PLAYERFASTQUIT_OFFSET UNITYSDK_OFFSET(0x181D54C0)
#define UNITYENGINE_APPLICATION_SET_RUNINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x181D5510)
#define UNITYENGINE_APPLICATION_SET_STACKTRACELOGTYPE_OFFSET UNITYSDK_OFFSET(0x181D5860)
#define UNITYENGINE_APPLICATION_SET_TARGETFRAMERATE_OFFSET UNITYSDK_OFFSET(0x181D5830)
#define UNITYENGINE_APPLICATION_TRYFREEZEPRELOADOPERATION_OFFSET UNITYSDK_OFFSET(0x181D5930)
#define UNITYENGINE_APPLICATION_UNFREEZEPRELOADOPERATION_OFFSET UNITYSDK_OFFSET(0x181D5950)
#define UNITYENGINE_APPLICATION_UNLOADLEVEL_1_OFFSET UNITYSDK_OFFSET(0x181D9290)
#define UNITYENGINE_APPLICATION_UNLOADLEVEL_OFFSET UNITYSDK_OFFSET(0x181D91F0)
#define UNITYENGINE_APPLICATION_UNLOAD_OFFSET UNITYSDK_OFFSET(0x181D5380)
#define UNITYENGINE_APPLICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x181D9320)

namespace UnityEngine
{
	inline static constexpr unsigned int Application_TypeDefinitionIndex = 3828;

	class Application : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_quitting()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x19D10);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet_focusChanged()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x19D18);
		}
		static ::UnityEngine::Application_AdvertisingIdentifierCallback** StaticGet_OnAdvertisingIdentifierCallback()
		{
			return (::UnityEngine::Application_AdvertisingIdentifierCallback**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x19D20);
		}
		static ::System::Action_1<::System::String*>** StaticGet_deepLinkActivated()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x19D28);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet_wantsToQuit()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x19D30);
		}
		static ::UnityEngine::Application_LowMemoryCallback** StaticGet_lowMemory()
		{
			return (::UnityEngine::Application_LowMemoryCallback**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x19D38);
		}
		static ::UnityEngine::Application_LogCallback** StaticGet_s_LogCallbackHandler()
		{
			return (::UnityEngine::Application_LogCallback**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x19D40);
		}
		static ::UnityEngine::Application_LogCallback** StaticGet_s_LogCallbackHandlerThreaded()
		{
			return (::UnityEngine::Application_LogCallback**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x19D48);
		}
		static ::UnityEngine::Application_LogCallback** StaticGet_s_RegisterLogCallbackDeprecated()
		{
			return (::UnityEngine::Application_LogCallback**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x19D50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Quit(::System::Int32 exitCode)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_QUIT_OFFSET))(exitCode);
		}

		static ::System::Void Quit_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_QUIT_1_OFFSET))();
		}

		static ::System::Void CancelQuit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CANCELQUIT_OFFSET))();
		}

		static ::System::Void Unload()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_UNLOAD_OFFSET))();
		}

		static ::System::Boolean get_isLoadingLevel()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISLOADINGLEVEL_OFFSET))();
		}

		static ::System::Single GetStreamProgressForLevel(::System::Int32 levelIndex)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETSTREAMPROGRESSFORLEVEL_OFFSET))(levelIndex);
		}

		static ::System::Single GetStreamProgressForLevel_1(::System::String* levelName)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETSTREAMPROGRESSFORLEVEL_1_OFFSET))(levelName);
		}

		static ::System::Int32 get_streamedBytes()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_STREAMEDBYTES_OFFSET))();
		}

		static ::System::Boolean get_webSecurityEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_WEBSECURITYENABLED_OFFSET))();
		}

		static ::System::Boolean CanStreamedLevelBeLoaded(::System::Int32 levelIndex)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CANSTREAMEDLEVELBELOADED_OFFSET))(levelIndex);
		}

		static ::System::Boolean CanStreamedLevelBeLoaded_1(::System::String* levelName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CANSTREAMEDLEVELBELOADED_1_OFFSET))(levelName);
		}

		static ::System::Boolean get_isPlaying()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISPLAYING_OFFSET))();
		}

		static ::System::Boolean IsPlaying(::UnityEngine::Object* obj)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ISPLAYING_OFFSET))(obj);
		}

		static ::System::Boolean get_isFocused()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISFOCUSED_OFFSET))();
		}

		static ::System::Boolean get_isForegroundWindow()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISFOREGROUNDWINDOW_OFFSET))();
		}

		static ::System::Boolean get_playerFastQuit()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_PLAYERFASTQUIT_OFFSET))();
		}

		static ::System::Void set_playerFastQuit(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SET_PLAYERFASTQUIT_OFFSET))(value);
		}

		static ::Il2CppArray<::System::String*>* GetBuildTags()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETBUILDTAGS_OFFSET))();
		}

		static ::System::Void SetBuildTags(::Il2CppArray<::System::String*>* buildTags)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SETBUILDTAGS_OFFSET))(buildTags);
		}

		static ::System::String* get_buildGUID()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_BUILDGUID_OFFSET))();
		}

		static ::System::Boolean get_runInBackground()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_RUNINBACKGROUND_OFFSET))();
		}

		static ::System::Void set_runInBackground(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SET_RUNINBACKGROUND_OFFSET))(value);
		}

		static ::System::Boolean HasProLicense()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_HASPROLICENSE_OFFSET))();
		}

		static ::System::Boolean get_isBatchMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISBATCHMODE_OFFSET))();
		}

		static ::System::Boolean get_isTestRun()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISTESTRUN_OFFSET))();
		}

		static ::System::Boolean get_isHumanControllingUs()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISHUMANCONTROLLINGUS_OFFSET))();
		}

		static ::System::Boolean HasARGV(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_HASARGV_OFFSET))(name);
		}

		static ::System::String* GetValueForARGV(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETVALUEFORARGV_OFFSET))(name);
		}

		static ::System::String* get_dataPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_DATAPATH_OFFSET))();
		}

		static ::UnityEngine::PooledName get_dataPathName()
		{
			return ((::UnityEngine::PooledName(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_DATAPATHNAME_OFFSET))();
		}

		static ::System::String* get_streamingAssetsPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_STREAMINGASSETSPATH_OFFSET))();
		}

		static ::UnityEngine::PooledName get_streamingAssetsPathName()
		{
			return ((::UnityEngine::PooledName(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_STREAMINGASSETSPATHNAME_OFFSET))();
		}

		static ::System::String* get_persistentDataPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_PERSISTENTDATAPATH_OFFSET))();
		}

		static ::UnityEngine::PooledName get_persistentDataPathName()
		{
			return ((::UnityEngine::PooledName(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_PERSISTENTDATAPATHNAME_OFFSET))();
		}

		static ::System::String* get_temporaryCachePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_TEMPORARYCACHEPATH_OFFSET))();
		}

		static ::UnityEngine::PooledName get_temporaryCachePathName()
		{
			return ((::UnityEngine::PooledName(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_TEMPORARYCACHEPATHNAME_OFFSET))();
		}

		static ::System::String* get_absoluteURL()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ABSOLUTEURL_OFFSET))();
		}

		static ::System::Boolean GetAvailableDiskSpace(::System::UInt64& availableBytes, ::System::UInt64& totalBytes)
		{
			return ((::System::Boolean(*)(::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETAVAILABLEDISKSPACE_OFFSET))(availableBytes, totalBytes);
		}

		static ::System::Void ExternalEval(::System::String* script)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_EXTERNALEVAL_OFFSET))(script);
		}

		static ::System::Void Internal_ExternalCall(::System::String* script)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INTERNAL_EXTERNALCALL_OFFSET))(script);
		}

		static ::System::String* get_unityVersion()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_UNITYVERSION_OFFSET))();
		}

		static ::System::String* get_version()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_VERSION_OFFSET))();
		}

		static ::System::String* get_installerName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_INSTALLERNAME_OFFSET))();
		}

		static ::System::String* get_identifier()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_IDENTIFIER_OFFSET))();
		}

		static ::UnityEngine::ApplicationInstallMode get_installMode()
		{
			return ((::UnityEngine::ApplicationInstallMode(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_INSTALLMODE_OFFSET))();
		}

		static ::UnityEngine::ApplicationSandboxType get_sandboxType()
		{
			return ((::UnityEngine::ApplicationSandboxType(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_SANDBOXTYPE_OFFSET))();
		}

		static ::System::String* get_productName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_PRODUCTNAME_OFFSET))();
		}

		static ::System::String* get_companyName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_COMPANYNAME_OFFSET))();
		}

		static ::System::String* get_cloudProjectId()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_CLOUDPROJECTID_OFFSET))();
		}

		static ::System::Boolean RequestAdvertisingIdentifierAsync(::UnityEngine::Application_AdvertisingIdentifierCallback* delegateMethod)
		{
			return ((::System::Boolean(*)(::UnityEngine::Application_AdvertisingIdentifierCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REQUESTADVERTISINGIDENTIFIERASYNC_OFFSET))(delegateMethod);
		}

		static ::System::Void OpenURL(::System::String* url)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_OPENURL_OFFSET))(url);
		}

		static ::System::Void ForceCrash(::System::Int32 mode)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_FORCECRASH_OFFSET))(mode);
		}

		static ::System::Int32 get_targetFrameRate()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_TARGETFRAMERATE_OFFSET))();
		}

		static ::System::Void set_targetFrameRate(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SET_TARGETFRAMERATE_OFFSET))(value);
		}

		static ::System::Void SetLogCallbackDefined(::System::Boolean defined)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SETLOGCALLBACKDEFINED_OFFSET))(defined);
		}

		static ::UnityEngine::StackTraceLogType get_stackTraceLogType()
		{
			return ((::UnityEngine::StackTraceLogType(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_STACKTRACELOGTYPE_OFFSET))();
		}

		static ::System::Void set_stackTraceLogType(::UnityEngine::StackTraceLogType value)
		{
			return ((::System::Void(*)(::UnityEngine::StackTraceLogType))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SET_STACKTRACELOGTYPE_OFFSET))(value);
		}

		static ::UnityEngine::StackTraceLogType GetStackTraceLogType(::UnityEngine::LogType logType)
		{
			return ((::UnityEngine::StackTraceLogType(*)(::UnityEngine::LogType))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETSTACKTRACELOGTYPE_OFFSET))(logType);
		}

		static ::System::Void SetStackTraceLogType(::UnityEngine::LogType logType, ::UnityEngine::StackTraceLogType stackTraceType)
		{
			return ((::System::Void(*)(::UnityEngine::LogType, ::UnityEngine::StackTraceLogType))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SETSTACKTRACELOGTYPE_OFFSET))(logType, stackTraceType);
		}

		static ::System::String* get_consoleLogPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_CONSOLELOGPATH_OFFSET))();
		}

		static ::UnityEngine::ThreadPriority get_backgroundLoadingPriority()
		{
			return ((::UnityEngine::ThreadPriority(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_BACKGROUNDLOADINGPRIORITY_OFFSET))();
		}

		static ::System::Void set_backgroundLoadingPriority(::UnityEngine::ThreadPriority value)
		{
			return ((::System::Void(*)(::UnityEngine::ThreadPriority))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SET_BACKGROUNDLOADINGPRIORITY_OFFSET))(value);
		}

		static ::System::Boolean get_genuine()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_GENUINE_OFFSET))();
		}

		static ::System::Boolean get_genuineCheckAvailable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_GENUINECHECKAVAILABLE_OFFSET))();
		}

		static ::UnityEngine::AsyncOperation* RequestUserAuthorization(::UnityEngine::UserAuthorization mode)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::UnityEngine::UserAuthorization))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REQUESTUSERAUTHORIZATION_OFFSET))(mode);
		}

		static ::System::Boolean HasUserAuthorization(::UnityEngine::UserAuthorization mode)
		{
			return ((::System::Boolean(*)(::UnityEngine::UserAuthorization))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_HASUSERAUTHORIZATION_OFFSET))(mode);
		}

		static ::System::Boolean get_submitAnalytics()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_SUBMITANALYTICS_OFFSET))();
		}

		static ::System::Boolean CustomUpdatePreloadManager(::System::Int32 timeLimitMS)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CUSTOMUPDATEPRELOADMANAGER_OFFSET))(timeLimitMS);
		}

		static ::System::Void CustomFindScriptByClassOpt(::System::Boolean toggle)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CUSTOMFINDSCRIPTBYCLASSOPT_OFFSET))(toggle);
		}

		static ::System::Boolean TryFreezePreloadOperation()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_TRYFREEZEPRELOADOPERATION_OFFSET))();
		}

		static ::System::Int32 GetPreloadQueueSize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETPRELOADQUEUESIZE_OFFSET))();
		}

		static ::System::Void UnFreezePreloadOperation()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_UNFREEZEPRELOADOPERATION_OFFSET))();
		}

		static ::System::Int32 GetIntegrateQueueSize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETINTEGRATEQUEUESIZE_OFFSET))();
		}

		static ::System::Int32 GetMainThreadKernelIdAndroid()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETMAINTHREADKERNELIDANDROID_OFFSET))();
		}

		static ::System::Int32 GetGfxRenderThreadKernelIdAndroid()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETGFXRENDERTHREADKERNELIDANDROID_OFFSET))();
		}

		static ::System::Int32 GetLoadingThreadKernelIdAndroid()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETLOADINGTHREADKERNELIDANDROID_OFFSET))();
		}

		static ::Il2CppArray<::System::Int32>* GetJobQueueThreadKernelIdsAndroid()
		{
			return ((::Il2CppArray<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETJOBQUEUETHREADKERNELIDSANDROID_OFFSET))();
		}

		static ::UnityEngine::RuntimePlatform get_platform()
		{
			return ((::UnityEngine::RuntimePlatform(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_PLATFORM_OFFSET))();
		}

		static ::System::Boolean get_isMobilePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISMOBILEPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_isConsolePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISCONSOLEPLATFORM_OFFSET))();
		}

		static ::UnityEngine::SystemLanguage get_systemLanguage()
		{
			return ((::UnityEngine::SystemLanguage(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_SYSTEMLANGUAGE_OFFSET))();
		}

		static ::UnityEngine::NetworkReachability get_internetReachability()
		{
			return ((::UnityEngine::NetworkReachability(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_INTERNETREACHABILITY_OFFSET))();
		}

		static ::System::Void add_lowMemory(::UnityEngine::Application_LowMemoryCallback* value)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LowMemoryCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_LOWMEMORY_OFFSET))(value);
		}

		static ::System::Void remove_lowMemory(::UnityEngine::Application_LowMemoryCallback* value)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LowMemoryCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_LOWMEMORY_OFFSET))(value);
		}

		static ::System::Void CallLowMemory()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CALLLOWMEMORY_OFFSET))();
		}

		static ::System::Void add_logMessageReceived(::UnityEngine::Application_LogCallback* value)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_LOGMESSAGERECEIVED_OFFSET))(value);
		}

		static ::System::Void remove_logMessageReceived(::UnityEngine::Application_LogCallback* value)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_LOGMESSAGERECEIVED_OFFSET))(value);
		}

		static ::System::Void add_logMessageReceivedThreaded(::UnityEngine::Application_LogCallback* value)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_LOGMESSAGERECEIVEDTHREADED_OFFSET))(value);
		}

		static ::System::Void remove_logMessageReceivedThreaded(::UnityEngine::Application_LogCallback* value)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_LOGMESSAGERECEIVEDTHREADED_OFFSET))(value);
		}

		static ::System::Void CallLogCallback(::System::String* logString, ::System::String* stackTrace, ::UnityEngine::LogType type, ::System::Boolean invokedOnMainThread)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::LogType, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CALLLOGCALLBACK_OFFSET))(logString, stackTrace, type, invokedOnMainThread);
		}

		static ::System::Void InvokeOnAdvertisingIdentifierCallback(::System::String* advertisingId, ::System::Boolean trackingEnabled)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INVOKEONADVERTISINGIDENTIFIERCALLBACK_OFFSET))(advertisingId, trackingEnabled);
		}

		static ::System::String* ObjectToJSString(::System::Object* o)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_OBJECTTOJSSTRING_OFFSET))(o);
		}

		static ::System::Void ExternalCall(::System::String* functionName, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_EXTERNALCALL_OFFSET))(functionName, args);
		}

		static ::System::String* BuildInvocationForArguments(::System::String* functionName, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_BUILDINVOCATIONFORARGUMENTS_OFFSET))(functionName, args);
		}

		static ::System::Boolean get_isPlayer()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISPLAYER_OFFSET))();
		}

		static ::System::Void DontDestroyOnLoad(::UnityEngine::Object* o)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_DONTDESTROYONLOAD_OFFSET))(o);
		}

		static ::System::Void CaptureScreenshot(::System::String* filename, ::System::Int32 superSize)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CAPTURESCREENSHOT_OFFSET))(filename, superSize);
		}

		static ::System::Void CaptureScreenshot_1(::System::String* filename)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CAPTURESCREENSHOT_1_OFFSET))(filename);
		}

		static ::System::Void add_onBeforeRender(::UnityEngine::Events::UnityAction* value)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_ONBEFORERENDER_OFFSET))(value);
		}

		static ::System::Void remove_onBeforeRender(::UnityEngine::Events::UnityAction* value)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_ONBEFORERENDER_OFFSET))(value);
		}

		static ::System::Void add_focusChanged(::System::Action_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_FOCUSCHANGED_OFFSET))(value);
		}

		static ::System::Void remove_focusChanged(::System::Action_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_FOCUSCHANGED_OFFSET))(value);
		}

		static ::System::Void add_deepLinkActivated(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_DEEPLINKACTIVATED_OFFSET))(value);
		}

		static ::System::Void remove_deepLinkActivated(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_DEEPLINKACTIVATED_OFFSET))(value);
		}

		static ::System::Void add_wantsToQuit(::System::Func_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_WANTSTOQUIT_OFFSET))(value);
		}

		static ::System::Void remove_wantsToQuit(::System::Func_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_WANTSTOQUIT_OFFSET))(value);
		}

		static ::System::Void add_quitting(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_QUITTING_OFFSET))(value);
		}

		static ::System::Void remove_quitting(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_QUITTING_OFFSET))(value);
		}

		static ::System::Boolean Internal_ApplicationWantsToQuit()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INTERNAL_APPLICATIONWANTSTOQUIT_OFFSET))();
		}

		static ::System::Void Internal_ApplicationQuit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INTERNAL_APPLICATIONQUIT_OFFSET))();
		}

		static ::System::Void InvokeOnBeforeRender()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INVOKEONBEFORERENDER_OFFSET))();
		}

		static ::System::Void InvokeFocusChanged(::System::Boolean focus)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INVOKEFOCUSCHANGED_OFFSET))(focus);
		}

		static ::System::Void InvokeDeepLinkActivated(::System::String* url)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INVOKEDEEPLINKACTIVATED_OFFSET))(url);
		}

		static ::System::Void RegisterLogCallback(::UnityEngine::Application_LogCallback* handler)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REGISTERLOGCALLBACK_OFFSET))(handler);
		}

		static ::System::Void RegisterLogCallbackThreaded(::UnityEngine::Application_LogCallback* handler)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REGISTERLOGCALLBACKTHREADED_OFFSET))(handler);
		}

		static ::System::Void RegisterLogCallback_1(::UnityEngine::Application_LogCallback* handler, ::System::Boolean threaded)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REGISTERLOGCALLBACK_1_OFFSET))(handler, threaded);
		}

		static ::System::Int32 get_levelCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_LEVELCOUNT_OFFSET))();
		}

		static ::System::Int32 get_loadedLevel()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_LOADEDLEVEL_OFFSET))();
		}

		static ::System::String* get_loadedLevelName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_LOADEDLEVELNAME_OFFSET))();
		}

		static ::System::Void LoadLevel(::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOADLEVEL_OFFSET))(index);
		}

		static ::System::Void LoadLevel_1(::System::String* name)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOADLEVEL_1_OFFSET))(name);
		}

		static ::System::Void LoadLevelAdditive(::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOADLEVELADDITIVE_OFFSET))(index);
		}

		static ::System::Void LoadLevelAdditive_1(::System::String* name)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOADLEVELADDITIVE_1_OFFSET))(name);
		}

		static ::UnityEngine::AsyncOperation* LoadLevelAsync(::System::Int32 index)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOADLEVELASYNC_OFFSET))(index);
		}

		static ::UnityEngine::AsyncOperation* LoadLevelAsync_1(::System::String* levelName)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOADLEVELASYNC_1_OFFSET))(levelName);
		}

		static ::UnityEngine::AsyncOperation* LoadLevelAdditiveAsync(::System::Int32 index)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOADLEVELADDITIVEASYNC_OFFSET))(index);
		}

		static ::UnityEngine::AsyncOperation* LoadLevelAdditiveAsync_1(::System::String* levelName)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOADLEVELADDITIVEASYNC_1_OFFSET))(levelName);
		}

		static ::System::Boolean UnloadLevel(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_UNLOADLEVEL_OFFSET))(index);
		}

		static ::System::Boolean UnloadLevel_1(::System::String* scenePath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_UNLOADLEVEL_1_OFFSET))(scenePath);
		}

		static ::System::Boolean get_isEditor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISEDITOR_OFFSET))();
		}

		static ::System::Void get_dataPathName_Injected(::UnityEngine::PooledName& ret)
		{
			return ((::System::Void(*)(::UnityEngine::PooledName&))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_DATAPATHNAME_INJECTED_OFFSET))(ret);
		}

		static ::System::Void get_streamingAssetsPathName_Injected(::UnityEngine::PooledName& ret)
		{
			return ((::System::Void(*)(::UnityEngine::PooledName&))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_STREAMINGASSETSPATHNAME_INJECTED_OFFSET))(ret);
		}

		static ::System::Void get_persistentDataPathName_Injected(::UnityEngine::PooledName& ret)
		{
			return ((::System::Void(*)(::UnityEngine::PooledName&))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_PERSISTENTDATAPATHNAME_INJECTED_OFFSET))(ret);
		}

		static ::System::Void get_temporaryCachePathName_Injected(::UnityEngine::PooledName& ret)
		{
			return ((::System::Void(*)(::UnityEngine::PooledName&))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_TEMPORARYCACHEPATHNAME_INJECTED_OFFSET))(ret);
		}
	};
}
