#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelGraphState.h"
#include "unitysdk/System/Object.h"

class Class_1_83665B095F1535B5_16;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELGRAPH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19203D40)
#define RPG_GAMECORE_LEVELGRAPH_FINISHIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x19204700)
#define RPG_GAMECORE_LEVELGRAPH_GETTASKCONTEXT_OFFSET UNITYSDK_OFFSET(0x19204830)
#define RPG_GAMECORE_LEVELGRAPH_GET_CONFIGPATH_OFFSET UNITYSDK_OFFSET(0x19204880)
#define RPG_GAMECORE_LEVELGRAPH_GET_GRAPHCONFIG_OFFSET UNITYSDK_OFFSET(0x19204870)
#define RPG_GAMECORE_LEVELGRAPH_GET_LEVELGRAPHSTATE_OFFSET UNITYSDK_OFFSET(0x19204890)
#define RPG_GAMECORE_LEVELGRAPH_ISLEVELGRAPHEXECUTING_OFFSET UNITYSDK_OFFSET(0x19204250)
#define RPG_GAMECORE_LEVELGRAPH_ISLEVELGRAPHFINISH_OFFSET UNITYSDK_OFFSET(0x192042A0)
#define RPG_GAMECORE_LEVELGRAPH_LEVELGRAPHEND_OFFSET UNITYSDK_OFFSET(0x192041F0)
#define RPG_GAMECORE_LEVELGRAPH_LEVELGRAPHINIT_OFFSET UNITYSDK_OFFSET(0x19204430)
#define RPG_GAMECORE_LEVELGRAPH_LEVELGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x19204570)
#define RPG_GAMECORE_LEVELGRAPH_MARKLEVELGRAPHFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x192047D0)
#define RPG_GAMECORE_LEVELGRAPH_SETDISPOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x19204360)
#define RPG_GAMECORE_LEVELGRAPH_SETENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x192042F0)
#define RPG_GAMECORE_LEVELGRAPH_TICK_OFFSET UNITYSDK_OFFSET(0x19203E80)
#define RPG_GAMECORE_LEVELGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x19203970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGraph_TypeDefinitionIndex = 53339;

	class LevelGraph : public ::System::Object
	{
	public:
		::System::Action* _endCallBack; // 0x10
		::System::Action* _DisposeCallBack; // 0x18
		::System::String* _ConfigPath; // 0x20
		::System::Collections::Generic::List_1<::Class_3_E21F6DE9B7FA4D05*>* _StartSequeceList; // 0x28
		::RPG::GameCore::TaskContext* _TaskContext; // 0x30
		::RPG::GameCore::LevelGraphConfig* _GraphConfig; // 0x38
		::System::Collections::Generic::List_1<::Class_3_E21F6DE9B7FA4D05*>* _InitSequeceList; // 0x40
		::RPG::GameCore::LevelGraphState _LevelGraphState; // 0x48

		::System::Void _ctor(::RPG::GameCore::GameEntity* pLevelEntity, ::RPG::GameCore::LevelGraphConfig* Config, ::System::String* sConfigPath, ::Class_1_83665B095F1535B5_16* flags)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::LevelGraphConfig*, ::System::String*, ::Class_1_83665B095F1535B5_16*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH__CTOR_OFFSET))(this, pLevelEntity, Config, sConfigPath, flags);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Boolean IsLevelGraphExecuting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_ISLEVELGRAPHEXECUTING_OFFSET))(this);
		}

		::System::Boolean IsLevelGraphFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_ISLEVELGRAPHFINISH_OFFSET))(this);
		}

		::System::Void SetEndCallBack(::System::Action* endCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_SETENDCALLBACK_OFFSET))(this, endCallBack);
		}

		::System::Void SetDisposeCallback(::System::Action* cb, ::System::Boolean repeat)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_SETDISPOSECALLBACK_OFFSET))(this, cb, repeat);
		}

		::System::Void LevelGraphInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_LEVELGRAPHINIT_OFFSET))(this);
		}

		::System::Void LevelGraphStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_LEVELGRAPHSTART_OFFSET))(this);
		}

		::System::Void FinishImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_FINISHIMMEDIATELY_OFFSET))(this);
		}

		::System::Void MarkLevelGraphFinishImmediatelyInPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_MARKLEVELGRAPHFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this);
		}

		::System::Void LevelGraphEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_LEVELGRAPHEND_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* GetTaskContext()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_GETTASKCONTEXT_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraphConfig* get_GraphConfig()
		{
			return ((::RPG::GameCore::LevelGraphConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_GET_GRAPHCONFIG_OFFSET))(this);
		}

		::System::String* get_ConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_GET_CONFIGPATH_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraphState get_LevelGraphState()
		{
			return ((::RPG::GameCore::LevelGraphState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPH_GET_LEVELGRAPHSTATE_OFFSET))(this);
		}
	};
}
