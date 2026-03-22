#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFlowDirector_IFlowState; }
namespace RPG::Client { class GridFightFlowDirector_IFlowStateEvent; }

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PREPARATIONSTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x93695F0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PREPARATIONSTATE_ONEVENT_OFFSET UNITYSDK_OFFSET(0x9369C50)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PREPARATIONSTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x9369C00)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PREPARATIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x9366CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_PreparationState_TypeDefinitionIndex = 51353;

	class GridFightFlowDirector_PreparationState : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PREPARATIONSTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnter(::RPG::Client::GridFightFlowDirector_IFlowState* last)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PREPARATIONSTATE_ONENTER_OFFSET))(this, last);
		}

		::System::Void OnExit(::RPG::Client::GridFightFlowDirector_IFlowState* next)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PREPARATIONSTATE_ONEXIT_OFFSET))(this, next);
		}

		::System::Void OnEvent(::RPG::Client::GridFightFlowDirector_IFlowStateEvent* event)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowStateEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PREPARATIONSTATE_ONEVENT_OFFSET))(this, event);
		}
	};
}
