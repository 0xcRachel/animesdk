#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger::Services { class ConsoleEntry; }
namespace SRDebugger::Services { class IAssetLoaderService; }
namespace SRDebugger::Services { class IDebugService; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { class UnityEvent; }

#define SRDEBUG_GETDEFAULTCOPYCONSOLEITEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x18444D50)
#define SRDEBUG_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18444C80)
#define SRDEBUG_GET_MIHOYOASSETLOADER_OFFSET UNITYSDK_OFFSET(0x18444CC0)
#define SRDEBUG_INIT_OFFSET UNITYSDK_OFFSET(0x18444D00)
#define SRDEBUG__CCTOR_OFFSET UNITYSDK_OFFSET(0x18444E00)

inline static constexpr unsigned int SRDebug_TypeDefinitionIndex = 29592;

class SRDebug : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityEvent** StaticGet_OnRPGAppRestart()
	{
		return (::UnityEngine::Events::UnityEvent**)Il2CppClass::FromTypeDefinitionIndex(SRDebug_TypeDefinitionIndex)->GetStaticField(0x2D6B0);
	}
	static ::System::Action_1<::SRDebugger::Services::ConsoleEntry*>** StaticGet_CopyConsoleItemCallback()
	{
		return (::System::Action_1<::SRDebugger::Services::ConsoleEntry*>**)Il2CppClass::FromTypeDefinitionIndex(SRDebug_TypeDefinitionIndex)->GetStaticField(0x2D6B8);
	}
	// static const ::System::String* Version; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUG__CCTOR_OFFSET))();
	}

	static ::SRDebugger::Services::IDebugService* get_Instance()
	{
		return ((::SRDebugger::Services::IDebugService*(*)())((::PBYTE)hIl2Cpp + SRDEBUG_GET_INSTANCE_OFFSET))();
	}

	static ::SRDebugger::Services::IAssetLoaderService* get_MihoyoAssetLoader()
	{
		return ((::SRDebugger::Services::IAssetLoaderService*(*)())((::PBYTE)hIl2Cpp + SRDEBUG_GET_MIHOYOASSETLOADER_OFFSET))();
	}

	static ::System::Void Init()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUG_INIT_OFFSET))();
	}

	static ::System::Action_1<::SRDebugger::Services::ConsoleEntry*>* GetDefaultCopyConsoleItemCallback()
	{
		return ((::System::Action_1<::SRDebugger::Services::ConsoleEntry*>*(*)())((::PBYTE)hIl2Cpp + SRDEBUG_GETDEFAULTCOPYCONSOLEITEMCALLBACK_OFFSET))();
	}
};
