#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueAreaData; }

#define RPG_CLIENT_ROGUEPROGRESSINFO___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9E44780)
#define RPG_CLIENT_ROGUEPROGRESSINFO___C__DISPLAYCLASS4_0__GETAREADATABYID_B__0_OFFSET UNITYSDK_OFFSET(0x9E44D90)
#define RPG_CLIENT_ROGUEPROGRESSINFO___C__DISPLAYCLASS4_0__GETAREADATABYID_B__1_OFFSET UNITYSDK_OFFSET(0x9E44DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueProgressInfo___c__DisplayClass4_0_TypeDefinitionIndex = 53622;

	class RogueProgressInfo___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 areaID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAreaDataByID_b__0(::RPG::Client::RogueAreaData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO___C__DISPLAYCLASS4_0__GETAREADATABYID_B__0_OFFSET))(this, x);
		}

		::System::Boolean _GetAreaDataByID_b__1(::RPG::Client::RogueAreaData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO___C__DISPLAYCLASS4_0__GETAREADATABYID_B__1_OFFSET))(this, x);
		}
	};
}
