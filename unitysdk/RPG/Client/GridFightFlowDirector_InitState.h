#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFlowDirector_IFlowState; }
namespace RPG::Client { class GridFightFlowDirector_IFlowStateEvent; }

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_INITSTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x174CD660)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_INITSTATE_ONEVENT_OFFSET UNITYSDK_OFFSET(0x174CD700)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_INITSTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x174CD6B0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_INITSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x174C75F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_InitState_TypeDefinitionIndex = 59442;

	class GridFightFlowDirector_InitState : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_INITSTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnter(::RPG::Client::GridFightFlowDirector_IFlowState* last)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_INITSTATE_ONENTER_OFFSET))(this, last);
		}

		::System::Void OnExit(::RPG::Client::GridFightFlowDirector_IFlowState* next)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_INITSTATE_ONEXIT_OFFSET))(this, next);
		}

		::System::Void OnEvent(::RPG::Client::GridFightFlowDirector_IFlowStateEvent* event)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowStateEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_INITSTATE_ONEVENT_OFFSET))(this, event);
		}
	};
}
