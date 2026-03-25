#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NVIDIA/DLSSCommandExecutionData.h"
#include "unitysdk/UnityEngine/NVIDIA/DLSSCommandInitializationData.h"

namespace UnityEngine::NVIDIA { template <typename T> class NativeData_1; }

#define UNITYENGINE_NVIDIA_DLSSCONTEXT_GETEXECUTECMDPTR_OFFSET UNITYSDK_OFFSET(0x18A9F850)
#define UNITYENGINE_NVIDIA_DLSSCONTEXT_GETINITCMDPTR_OFFSET UNITYSDK_OFFSET(0x18A9F810)
#define UNITYENGINE_NVIDIA_DLSSCONTEXT_GET_EXECUTEDATA_OFFSET UNITYSDK_OFFSET(0x18A9F640)
#define UNITYENGINE_NVIDIA_DLSSCONTEXT_GET_FEATURESLOT_OFFSET UNITYSDK_OFFSET(0x18A9F660)
#define UNITYENGINE_NVIDIA_DLSSCONTEXT_GET_INITDATA_OFFSET UNITYSDK_OFFSET(0x18A9F620)
#define UNITYENGINE_NVIDIA_DLSSCONTEXT_INIT_OFFSET UNITYSDK_OFFSET(0x18A9F780)
#define UNITYENGINE_NVIDIA_DLSSCONTEXT_RESET_OFFSET UNITYSDK_OFFSET(0x18A9F7C0)
#define UNITYENGINE_NVIDIA_DLSSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18A9F680)

namespace UnityEngine::NVIDIA
{
	inline static constexpr unsigned int DLSSContext_TypeDefinitionIndex = 5172;

	class DLSSContext : public ::System::Object
	{
	public:
		::UnityEngine::NVIDIA::NativeData_1<::UnityEngine::NVIDIA::DLSSCommandInitializationData>* m_InitData; // 0x10
		::UnityEngine::NVIDIA::NativeData_1<::UnityEngine::NVIDIA::DLSSCommandExecutionData>* m_ExecData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCONTEXT__CTOR_OFFSET))(this);
		}

		::UnityEngine::NVIDIA::DLSSCommandInitializationData& get_initData()
		{
			return ((::UnityEngine::NVIDIA::DLSSCommandInitializationData&(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCONTEXT_GET_INITDATA_OFFSET))(this);
		}

		::UnityEngine::NVIDIA::DLSSCommandExecutionData& get_executeData()
		{
			return ((::UnityEngine::NVIDIA::DLSSCommandExecutionData&(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCONTEXT_GET_EXECUTEDATA_OFFSET))(this);
		}

		::System::UInt32 get_featureSlot()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCONTEXT_GET_FEATURESLOT_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::NVIDIA::DLSSCommandInitializationData initSettings, ::System::UInt32 featureSlot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NVIDIA::DLSSCommandInitializationData, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCONTEXT_INIT_OFFSET))(this, initSettings, featureSlot);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCONTEXT_RESET_OFFSET))(this);
		}

		::System::IntPtr GetInitCmdPtr()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCONTEXT_GETINITCMDPTR_OFFSET))(this);
		}

		::System::IntPtr GetExecuteCmdPtr()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCONTEXT_GETEXECUTECMDPTR_OFFSET))(this);
		}
	};
}
