#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitNewDecalDialogExit; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_WAITNEWDECALDIALOGEXITTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5C4DF0)
#define RPG_GAMECORE_WAITNEWDECALDIALOGEXITTASK_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xA5C4EE0)
#define RPG_GAMECORE_WAITNEWDECALDIALOGEXITTASK_ONNEWDECALDIALOGEXIT_OFFSET UNITYSDK_OFFSET(0xA5C50E0)
#define RPG_GAMECORE_WAITNEWDECALDIALOGEXITTASK_ONSKIP_OFFSET UNITYSDK_OFFSET(0xA5C5090)
#define RPG_GAMECORE_WAITNEWDECALDIALOGEXITTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA5C4EF0)
#define RPG_GAMECORE_WAITNEWDECALDIALOGEXITTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA5C4FE0)
#define RPG_GAMECORE_WAITNEWDECALDIALOGEXITTASK_REGIST_OFFSET UNITYSDK_OFFSET(0xA5C4F40)
#define RPG_GAMECORE_WAITNEWDECALDIALOGEXITTASK_TICK_OFFSET UNITYSDK_OFFSET(0xA5C5030)
#define RPG_GAMECORE_WAITNEWDECALDIALOGEXITTASK_UNREGIST_OFFSET UNITYSDK_OFFSET(0xA5C4E40)
#define RPG_GAMECORE_WAITNEWDECALDIALOGEXITTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xA5C4D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitNewDecalDialogExitTask_TypeDefinitionIndex = 46495;

	class WaitNewDecalDialogExitTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _WaitDecalID; // 0x18
		::RPG::GameCore::TaskContext* _TaskContext; // 0x20
		::RPG::GameCore::WaitNewDecalDialogExit* _ConfigRef; // 0x28
		::System::Boolean _IsRegisted; // 0x30

		::System::Void _ctor(::RPG::GameCore::TaskContext* Context, ::RPG::GameCore::WaitNewDecalDialogExit* Config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitNewDecalDialogExit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITNEWDECALDIALOGEXITTASK__CTOR_OFFSET))(this, Context, Config);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITNEWDECALDIALOGEXITTASK_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITNEWDECALDIALOGEXITTASK_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITNEWDECALDIALOGEXITTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITNEWDECALDIALOGEXITTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITNEWDECALDIALOGEXITTASK_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITNEWDECALDIALOGEXITTASK_ONSKIP_OFFSET))(this);
		}

		::System::Void Regist()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITNEWDECALDIALOGEXITTASK_REGIST_OFFSET))(this);
		}

		::System::Void Unregist()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITNEWDECALDIALOGEXITTASK_UNREGIST_OFFSET))(this);
		}

		::System::Void OnNewDecalDialogExit(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITNEWDECALDIALOGEXITTASK_ONNEWDECALDIALOGEXIT_OFFSET))(this, arg);
		}
	};
}
