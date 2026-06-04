#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::LimaoNews { class LimaoNewsRewardNumControl; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x189A27C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x189A2690)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x189A2450)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x189A2850)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x189A27F0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsStateTagControl_TypeDefinitionIndex = 73810;

	class LimaoNewsStateTagControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::Transform* _NodeUnSearch; // 0x38
		::UnityEngine::Transform* _NodeInProgress; // 0x40
		::UnityEngine::Transform* _NodeFinish; // 0x48
		::UnityEngine::Transform* _NodePublish; // 0x50
		::RPG::Client::LimaoNews::LimaoNewsRewardNumControl* _RewardNumControl; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
