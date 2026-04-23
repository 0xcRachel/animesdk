#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STANCELEVELEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18613390)
#define RPG_GAMECORE_STANCELEVELEFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186139F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StanceLevelEffectRow_TypeDefinitionIndex = 14382;

	class StanceLevelEffectRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint StanceLevelEffect; // 0x10
		::System::Int32 LevelDifference; // 0x18
		::System::Int32 ID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::StanceLevelEffectRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StanceLevelEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
