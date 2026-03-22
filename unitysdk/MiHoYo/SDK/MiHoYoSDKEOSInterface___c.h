#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Auth { class LoginStatusChangedCallbackInfo; }
namespace Epic::OnlineServices::Auth { class OnLoginStatusChangedCallback; }
namespace Epic::OnlineServices::Logging { class LogMessage; }
namespace Epic::OnlineServices::Logging { class LogMessageFunc; }

#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x81C93A0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x81C93E0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__INITSDK_B__28_0_OFFSET UNITYSDK_OFFSET(0x81C93F0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__INITSDK_B__28_1_OFFSET UNITYSDK_OFFSET(0x81C96E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSInterface___c_TypeDefinitionIndex = 36129;

	class MiHoYoSDKEOSInterface___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MiHoYoSDKEOSInterface___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::MiHoYoSDKEOSInterface___c**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface___c_TypeDefinitionIndex)->GetStaticField(0x412C0);
		}
		static ::Epic::OnlineServices::Auth::OnLoginStatusChangedCallback** StaticGet___9__28_1()
		{
			return (::Epic::OnlineServices::Auth::OnLoginStatusChangedCallback**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface___c_TypeDefinitionIndex)->GetStaticField(0x412C8);
		}
		static ::Epic::OnlineServices::Logging::LogMessageFunc** StaticGet___9__28_0()
		{
			return (::Epic::OnlineServices::Logging::LogMessageFunc**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface___c_TypeDefinitionIndex)->GetStaticField(0x412D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitSDK_b__28_0(::Epic::OnlineServices::Logging::LogMessage* logMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Logging::LogMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__INITSDK_B__28_0_OFFSET))(this, logMessage);
		}

		::System::Void _InitSDK_b__28_1(::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__INITSDK_B__28_1_OFFSET))(this, info);
		}
	};
}
