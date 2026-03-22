#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FUNNUMMULTIPLIERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16AEA910)
#define RPG_GAMECORE_FUNNUMMULTIPLIERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16AEAA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FunNumMultiplierRow_TypeDefinitionIndex = 11992;

	class FunNumMultiplierRow : public ::System::Object
	{
	public:
		::System::UInt32 FunNum; // 0x10
		::RPG::GameCore::FixPoint Multiplier; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNNUMMULTIPLIERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FunNumMultiplierRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FunNumMultiplierRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNNUMMULTIPLIERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
