#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AboveSwitchDialog; }
namespace RPG::Client { class UIController; }
namespace System { class Action; }

#define RPG_CLIENT_TRAINPARTYUTILS___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA61FC20)
#define RPG_CLIENT_TRAINPARTYUTILS___C__DISPLAYCLASS23_0__SHOWSTREAMINGTRANSFER_B__0_OFFSET UNITYSDK_OFFSET(0xA620420)
#define RPG_CLIENT_TRAINPARTYUTILS___C__DISPLAYCLASS23_0__SHOWSTREAMINGTRANSFER_B__1_OFFSET UNITYSDK_OFFSET(0xA620530)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyUtils___c__DisplayClass23_0_TypeDefinitionIndex = 55651;

	class TrainPartyUtils___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::RPG::Client::UIController* buildUI; // 0x10
		::RPG::Client::AboveSwitchDialog* transfer; // 0x18
		::System::Action* __9__1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowStreamingTransfer_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS___C__DISPLAYCLASS23_0__SHOWSTREAMINGTRANSFER_B__0_OFFSET))(this);
		}

		::System::Void _ShowStreamingTransfer_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS___C__DISPLAYCLASS23_0__SHOWSTREAMINGTRANSFER_B__1_OFFSET))(this);
		}
	};
}
