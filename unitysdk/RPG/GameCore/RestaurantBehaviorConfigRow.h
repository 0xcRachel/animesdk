#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTBEHAVIORCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16DE9AE0)
#define RPG_GAMECORE_RESTAURANTBEHAVIORCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16DEAB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantBehaviorConfigRow_TypeDefinitionIndex = 10537;

	class RestaurantBehaviorConfigRow : public ::System::Object
	{
	public:
		::System::String* BehaviorJSON; // 0x10
		::RPG::Client::TextID CleanObstacle; // 0x18
		::RPG::Client::TextID Thank; // 0x28
		::RPG::Client::TextID SelectYes; // 0x38
		::RPG::Client::TextID LeaveBloodShot; // 0x48
		::RPG::Client::TextID LeavePerfect; // 0x58
		::RPG::Client::TextID CallStop; // 0x68
		::RPG::Client::TextID Help; // 0x78
		::System::UInt32 BehaviorID; // 0x88
		::RPG::Client::TextID CleanTip; // 0x90
		::RPG::Client::TextID ProcessComplaint; // 0xA0
		::RPG::Client::TextID SelectNo; // 0xB0
		::RPG::Client::TextID Drink; // 0xC0
		::RPG::Client::TextID Complaint; // 0xD0
		::RPG::Client::TextID KeepInLinePerform; // 0xE0
		::RPG::Client::TextID CleanTable; // 0xF0
		::RPG::Client::TextID PutDownFoodBloodShot; // 0x100
		::RPG::Client::TextID WaiterPutDownFoodNormal; // 0x110
		::RPG::Client::TextID EatingNormal; // 0x120
		::RPG::Client::TextID ProcessHelp; // 0x130
		::RPG::Client::TextID WaiterPutDownFoodBloodShot; // 0x140
		::RPG::Client::TextID ProcessEscapeBill; // 0x150
		::RPG::Client::TextID Sleep; // 0x160
		::RPG::Client::TextID TimeOverPerform; // 0x170
		::RPG::Client::TextID ProcessThank; // 0x180
		::RPG::Client::TextID PutDownFoodNormal; // 0x190
		::RPG::Client::TextID AngryLeave; // 0x1A0
		::RPG::Client::TextID EatingPerfect; // 0x1B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTBEHAVIORCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RestaurantBehaviorConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantBehaviorConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTBEHAVIORCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
