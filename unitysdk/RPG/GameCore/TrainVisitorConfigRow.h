#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINVISITORCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1949B8F0)
#define RPG_GAMECORE_TRAINVISITORCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1949CAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainVisitorConfigRow_TypeDefinitionIndex = 14569;

	class TrainVisitorConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 MissionID; // 0x10
		::System::UInt32 AvatarID; // 0x14
		::System::Boolean ToastFinishMainMission; // 0x18
		::RPG::Client::TextID MessageResident; // 0x20
		::RPG::Client::TextID MessageCome; // 0x30
		::RPG::Client::TextID MessageLeave; // 0x40
		::System::UInt32 VisitorID; // 0x50
		::System::UInt32 LockMissionID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainVisitorConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainVisitorConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
