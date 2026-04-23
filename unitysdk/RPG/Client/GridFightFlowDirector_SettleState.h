#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFlowDirector_IFlowState; }
namespace RPG::Client { class GridFightFlowDirector_IFlowStateEvent; }

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLESTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x174CEFC0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLESTATE_ONEVENT_OFFSET UNITYSDK_OFFSET(0x174CF400)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLESTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x174CF3B0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x174CBBD0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLESTATE__TRYSHOWSETTLERESULT_OFFSET UNITYSDK_OFFSET(0x174CF1D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_SettleState_TypeDefinitionIndex = 59454;

	class GridFightFlowDirector_SettleState : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLESTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnter(::RPG::Client::GridFightFlowDirector_IFlowState* last)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLESTATE_ONENTER_OFFSET))(this, last);
		}

		::System::Void OnExit(::RPG::Client::GridFightFlowDirector_IFlowState* next)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLESTATE_ONEXIT_OFFSET))(this, next);
		}

		::System::Void OnEvent(::RPG::Client::GridFightFlowDirector_IFlowStateEvent* event)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowStateEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLESTATE_ONEVENT_OFFSET))(this, event);
		}

		::System::Void _TryShowSettleResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_SETTLESTATE__TRYSHOWSETTLERESULT_OFFSET))(this);
		}
	};
}
