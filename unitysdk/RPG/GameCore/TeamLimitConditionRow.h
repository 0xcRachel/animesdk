#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TeamLimitType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEAMLIMITCONDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170EB840)
#define RPG_GAMECORE_TEAMLIMITCONDITIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x170EBF80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamLimitConditionRow_TypeDefinitionIndex = 13884;

	class TeamLimitConditionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamIntList; // 0x10
		::System::UInt32 ParamInt1; // 0x18
		::RPG::GameCore::TeamLimitType LimitType; // 0x1C
		::System::UInt32 ParamInt2; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::Client::TextID LimitDesc; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TeamLimitConditionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamLimitConditionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
