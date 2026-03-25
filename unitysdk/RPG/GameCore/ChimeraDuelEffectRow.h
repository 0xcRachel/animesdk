#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelServerEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170ADF40)
#define RPG_GAMECORE_CHIMERADUELEFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x170AE220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEffectRow_TypeDefinitionIndex = 10402;

	class ChimeraDuelEffectRow : public ::System::Object
	{
	public:
		::System::Int32 ParamInt; // 0x10
		::System::Int32 Hp; // 0x14
		::RPG::GameCore::ChimeraDuelServerEffectType EffectType; // 0x18
		::System::Boolean ParamBool; // 0x1C
		::System::Int32 Attack; // 0x20
		::System::UInt32 EffectID; // 0x24
		::System::UInt32 Exp; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraDuelEffectRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEFFECTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
