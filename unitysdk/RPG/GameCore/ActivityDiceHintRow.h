#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYDICEHINTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16787F00)
#define RPG_GAMECORE_ACTIVITYDICEHINTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16788080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceHintRow_TypeDefinitionIndex = 10487;

	class ActivityDiceHintRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::Client::TextID Content; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICEHINTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityDiceHintRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityDiceHintRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICEHINTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
