#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleMonoStateBase.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleStateType.h"

namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleMonoStateView; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTSTATE_GETVIEW_OFFSET UNITYSDK_OFFSET(0xA05BB80)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTSTATE_GET__STATETYPE_OFFSET UNITYSDK_OFFSET(0xA05BB30)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTSTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0xA05BBC0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA05BDC0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTSTATE___IFIXBASEPROXY_ONENTER_OFFSET UNITYSDK_OFFSET(0xA05BDD0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleMasterSelectState_TypeDefinitionIndex = 63829;

	class ChimeraDuelMainPuzzleMasterSelectState : public ::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTSTATE__CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType get__StateType()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTSTATE_GET__STATETYPE_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView* GetView()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTSTATE_GETVIEW_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTSTATE_ONENTER_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTSTATE___IFIXBASEPROXY_ONENTER_OFFSET))(this);
		}
	};
}
