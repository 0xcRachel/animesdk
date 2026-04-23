#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYRELICBOXQUESTTABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18DA7400)
#define RPG_GAMECORE_ACTIVITYRELICBOXQUESTTABROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18DA7560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRelicBoxQuestTabRow_TypeDefinitionIndex = 11659;

	class ActivityRelicBoxQuestTabRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID TabName; // 0x10
		::System::UInt32 TabID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRELICBOXQUESTTABROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityRelicBoxQuestTabRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityRelicBoxQuestTabRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRELICBOXQUESTTABROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
