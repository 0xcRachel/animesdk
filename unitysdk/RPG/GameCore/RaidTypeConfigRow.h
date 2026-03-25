#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RaidConfigType.h"
#include "unitysdk/RPG/GameCore/RaidFailedResult.h"
#include "unitysdk/RPG/GameCore/RaidFailedType.h"
#include "unitysdk/RPG/GameCore/RaidFinishType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RAIDTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17593D10)
#define RPG_GAMECORE_RAIDTYPECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17593F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidTypeConfigRow_TypeDefinitionIndex = 13333;

	class RaidTypeConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::RaidConfigType RaidType; // 0x10
		::System::UInt32 FinishCountDown; // 0x14
		::RPG::GameCore::RaidFailedType FailedType; // 0x18
		::RPG::GameCore::RaidFinishType FinishType; // 0x1C
		::RPG::GameCore::RaidFailedResult FailedResult; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDTYPECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RaidTypeConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RaidTypeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDTYPECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
