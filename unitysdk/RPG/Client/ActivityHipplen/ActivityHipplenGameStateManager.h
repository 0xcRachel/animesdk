#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenGameStateType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace RPG::Client::ActivityHipplen { class IActivityHipplenGameState; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_CHECKCURSTATETYPE_OFFSET UNITYSDK_OFFSET(0x171EDE80)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x171ED350)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x171ED1F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_FINISHCURGAMESTATE_OFFSET UNITYSDK_OFFSET(0x171ED990)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_GET_CURGAMESTATE_OFFSET UNITYSDK_OFFSET(0x171EE010)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_GET_LASTGAMESTATETYPE_OFFSET UNITYSDK_OFFSET(0x171EE030)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x171ECEB0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_PUSH_OFFSET UNITYSDK_OFFSET(0x171ED6B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_SET_CURGAMESTATE_OFFSET UNITYSDK_OFFSET(0x171EE020)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_SET_LASTGAMESTATETYPE_OFFSET UNITYSDK_OFFSET(0x171EE040)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x171ECEA0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER__SETCURGAMESTATE_OFFSET UNITYSDK_OFFSET(0x171EDD60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER__TRYMOVENEXT_OFFSET UNITYSDK_OFFSET(0x171EDF80)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenGameStateManager_TypeDefinitionIndex = 69573;

	class ActivityHipplenGameStateManager : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::IActivityHipplenGameState* _CurGameState_k__BackingField; // 0x10
		::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* _Owner; // 0x18
		::System::Collections::Generic::Queue_1<::RPG::Client::ActivityHipplen::IActivityHipplenGameState*>* _PendingGameStateQueue; // 0x20
		::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType _LastGameStateType_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_INIT_OFFSET))(this, owner);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_CLEAR_OFFSET))(this);
		}

		::System::Void Push(::RPG::Client::ActivityHipplen::IActivityHipplenGameState* gameState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::IActivityHipplenGameState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_PUSH_OFFSET))(this, gameState);
		}

		::System::Boolean CheckCurStateType(::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_CHECKCURSTATETYPE_OFFSET))(this, type);
		}

		::System::Void FinishCurGameState(::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType type)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_FINISHCURGAMESTATE_OFFSET))(this, type);
		}

		::System::Void _SetCurGameState(::RPG::Client::ActivityHipplen::IActivityHipplenGameState* gameState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::IActivityHipplenGameState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER__SETCURGAMESTATE_OFFSET))(this, gameState);
		}

		::System::Void _TryMoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER__TRYMOVENEXT_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::IActivityHipplenGameState* get_CurGameState()
		{
			return ((::RPG::Client::ActivityHipplen::IActivityHipplenGameState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_GET_CURGAMESTATE_OFFSET))(this);
		}

		::System::Void set_CurGameState(::RPG::Client::ActivityHipplen::IActivityHipplenGameState* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::IActivityHipplenGameState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_SET_CURGAMESTATE_OFFSET))(this, value);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType get_LastGameStateType()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_GET_LASTGAMESTATETYPE_OFFSET))(this);
		}

		::System::Void set_LastGameStateType(::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMESTATEMANAGER_SET_LASTGAMESTATETYPE_OFFSET))(this, value);
		}
	};
}
