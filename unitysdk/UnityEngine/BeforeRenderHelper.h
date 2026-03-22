#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BeforeRenderHelper_OrderBlock.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define UNITYENGINE_BEFORERENDERHELPER_GETUPDATEORDER_OFFSET UNITYSDK_OFFSET(0x181DB1D0)
#define UNITYENGINE_BEFORERENDERHELPER_INVOKE_OFFSET UNITYSDK_OFFSET(0x181D8A60)
#define UNITYENGINE_BEFORERENDERHELPER_REGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x181D7D20)
#define UNITYENGINE_BEFORERENDERHELPER_UNREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x181D80C0)
#define UNITYENGINE_BEFORERENDERHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x181DB2D0)

namespace UnityEngine
{
	inline static constexpr unsigned int BeforeRenderHelper_TypeDefinitionIndex = 3896;

	class BeforeRenderHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper_OrderBlock>** StaticGet_s_OrderBlocks()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper_OrderBlock>**)Il2CppClass::FromTypeDefinitionIndex(BeforeRenderHelper_TypeDefinitionIndex)->GetStaticField(0x19E80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_BEFORERENDERHELPER__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetUpdateOrder(::UnityEngine::Events::UnityAction* callback)
		{
			return ((::System::Int32(*)(::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_BEFORERENDERHELPER_GETUPDATEORDER_OFFSET))(callback);
		}

		static ::System::Void RegisterCallback(::UnityEngine::Events::UnityAction* callback)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_BEFORERENDERHELPER_REGISTERCALLBACK_OFFSET))(callback);
		}

		static ::System::Void UnregisterCallback(::UnityEngine::Events::UnityAction* callback)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_BEFORERENDERHELPER_UNREGISTERCALLBACK_OFFSET))(callback);
		}

		static ::System::Void Invoke()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_BEFORERENDERHELPER_INVOKE_OFFSET))();
		}
	};
}
