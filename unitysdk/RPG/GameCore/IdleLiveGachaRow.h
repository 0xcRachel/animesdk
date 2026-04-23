#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEGACHAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A8ADC0)
#define RPG_GAMECORE_IDLELIVEGACHAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A8B150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveGachaRow_TypeDefinitionIndex = 11213;

	class IdleLiveGachaRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* StarProbabilityList; // 0x10
		::Il2CppArray<::System::UInt32>* WorldTagList; // 0x18
		::System::UInt32 GachaID; // 0x20
		::System::Boolean IsStarUp; // 0x24
		::System::Boolean IsAvatarGroupUp; // 0x25
		::RPG::Client::TextID GachaName; // 0x28
		::System::UInt32 UpgradeCount; // 0x38
		::RPG::GameCore::FixPoint CrystalProbability; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEGACHAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveGachaRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveGachaRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEGACHAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
