#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_126;
namespace RPG::Client::TrainParty { class TrainPartyPassengerSkillInfo; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17819570)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__DISPLAYCLASS9_0__UPDATESKILLINFO_B__0_OFFSET UNITYSDK_OFFSET(0x1781AE10)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyPassengerManager___c__DisplayClass9_0_TypeDefinitionIndex = 68617;

	class TrainPartyPassengerManager___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::Class_1_D1E0AD3915BCCF29_126* skillInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateSkillInfo_b__0(::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__DISPLAYCLASS9_0__UPDATESKILLINFO_B__0_OFFSET))(this, a);
		}
	};
}
