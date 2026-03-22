#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class EOSParametersModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETCLIENTIDGFX_OFFSET UNITYSDK_OFFSET(0x81CBAD0)
#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETCLIENTID_OFFSET UNITYSDK_OFFSET(0x81CBCC0)
#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETCLIENTSECRETGFX_OFFSET UNITYSDK_OFFSET(0x81CBEB0)
#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETCLIENTSECRET_OFFSET UNITYSDK_OFFSET(0x81CC0A0)
#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETDEPLOYMENTIDGFX_OFFSET UNITYSDK_OFFSET(0x81CC670)
#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETDEPLOYMENTID_OFFSET UNITYSDK_OFFSET(0x81CC860)
#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETPLATFORMHANDLERGFX_OFFSET UNITYSDK_OFFSET(0x81CB5F0)
#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETPLATFORMHANDLER_OFFSET UNITYSDK_OFFSET(0x81CB670)
#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETPRODUCTIDGFX_OFFSET UNITYSDK_OFFSET(0x81CB6F0)
#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETPRODUCTID_OFFSET UNITYSDK_OFFSET(0x81CB8E0)
#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETSANDBOXIDGFX_OFFSET UNITYSDK_OFFSET(0x81CC290)
#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETSANDBOXID_OFFSET UNITYSDK_OFFSET(0x81CC480)
#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_GETEOSPARAMETERSMODEL_OFFSET UNITYSDK_OFFSET(0x81CCB70)
#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_GETPLATFORMHANDLER_OFFSET UNITYSDK_OFFSET(0x81CCB60)
#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_GETSTRINGFROMNATIVE_OFFSET UNITYSDK_OFFSET(0x81CCA50)
#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x81C4BD0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSPluginImport_TypeDefinitionIndex = 36138;

	class MiHoYoSDKEOSPluginImport : public ::System::Object
	{
	public:
		::MiHoYo::SDK::EOSParametersModel* parametersModel; // 0x10
		::System::IntPtr eosPlatform; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT__CTOR_OFFSET))(this);
		}

		static ::System::IntPtr EOS_Unity_GetPlatformHandlerGfx()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETPLATFORMHANDLERGFX_OFFSET))();
		}

		static ::System::IntPtr EOS_Unity_GetPlatformHandler()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETPLATFORMHANDLER_OFFSET))();
		}

		static ::System::Int32 EOS_Unity_GetProductIdGfx(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 bufferSize)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETPRODUCTIDGFX_OFFSET))(buffer, bufferSize);
		}

		static ::System::Int32 EOS_Unity_GetProductId(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 bufferSize)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETPRODUCTID_OFFSET))(buffer, bufferSize);
		}

		static ::System::Int32 EOS_Unity_GetClientIdGfx(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 bufferSize)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETCLIENTIDGFX_OFFSET))(buffer, bufferSize);
		}

		static ::System::Int32 EOS_Unity_GetClientId(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 bufferSize)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETCLIENTID_OFFSET))(buffer, bufferSize);
		}

		static ::System::Int32 EOS_Unity_GetClientSecretGfx(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 bufferSize)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETCLIENTSECRETGFX_OFFSET))(buffer, bufferSize);
		}

		static ::System::Int32 EOS_Unity_GetClientSecret(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 bufferSize)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETCLIENTSECRET_OFFSET))(buffer, bufferSize);
		}

		static ::System::Int32 EOS_Unity_GetSandboxIdGfx(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 bufferSize)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETSANDBOXIDGFX_OFFSET))(buffer, bufferSize);
		}

		static ::System::Int32 EOS_Unity_GetSandboxId(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 bufferSize)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETSANDBOXID_OFFSET))(buffer, bufferSize);
		}

		static ::System::Int32 EOS_Unity_GetDeploymentIdGfx(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 bufferSize)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETDEPLOYMENTIDGFX_OFFSET))(buffer, bufferSize);
		}

		static ::System::Int32 EOS_Unity_GetDeploymentId(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 bufferSize)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETDEPLOYMENTID_OFFSET))(buffer, bufferSize);
		}

		static ::System::String* GetStringFromNative(::System::Func_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32>* nativeFunction)
		{
			return ((::System::String*(*)(::System::Func_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_GETSTRINGFROMNATIVE_OFFSET))(nativeFunction);
		}

		::System::IntPtr GetPlatformHandler()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_GETPLATFORMHANDLER_OFFSET))(this);
		}

		::MiHoYo::SDK::EOSParametersModel* GetEOSParametersModel()
		{
			return ((::MiHoYo::SDK::EOSParametersModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_GETEOSPARAMETERSMODEL_OFFSET))(this);
		}
	};
}
