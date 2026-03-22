#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueMagicEffectType.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/RPG/GameCore/RogueMagicRangeType.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterFuncType.h"
#include "unitysdk/RPG/GameCore/RogueMagicSpecialType.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/RPG/GameCore/RogueMagicUnitCategory.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazeBuffRow; }

#define RPG_GAMECORE_ROGUEMAGICUNITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16E8A910)
#define RPG_GAMECORE_ROGUEMAGICUNITROW_GETMAZEBUFF_OFFSET UNITYSDK_OFFSET(0x16E8AFC0)
#define RPG_GAMECORE_ROGUEMAGICUNITROW_GET_ISACTIVEUNIT_OFFSET UNITYSDK_OFFSET(0x16E8B0D0)
#define RPG_GAMECORE_ROGUEMAGICUNITROW_GET_ISPASSIVEUNIT_OFFSET UNITYSDK_OFFSET(0x16E8B0C0)
#define RPG_GAMECORE_ROGUEMAGICUNITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16E8AFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicUnitRow_TypeDefinitionIndex = 13538;

	class RogueMagicUnitRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ExtraEffectID; // 0x10
		::Il2CppArray<::RPG::GameCore::RogueMagicEffectType>* EffectTypeList; // 0x18
		::Il2CppArray<::RPG::GameCore::RogueMagicRangeType>* AttachRangeTypeList; // 0x20
		::RPG::GameCore::RogueMagicScepterFuncType FuncType; // 0x28
		::System::UInt32 MagicUnitLevel; // 0x2C
		::System::UInt32 MagicUnitMazeBuffID; // 0x30
		::RPG::GameCore::RogueMagicStyleType StyleType; // 0x34
		::RPG::GameCore::RogueMagicUnitCategory MagicUnitCategory; // 0x38
		::System::UInt32 UnlockID; // 0x3C
		::RPG::GameCore::FixPoint UnitBasicPower; // 0x40
		::RPG::Client::TextID MagicUnitDesc; // 0x48
		::System::UInt32 MagicUnitID; // 0x58
		::RPG::GameCore::RogueMagicRangeType LimitRange; // 0x5C
		::RPG::GameCore::RogueMagicMountType MagicUnitType; // 0x60
		::RPG::GameCore::RogueMagicSpecialType SpecialType; // 0x64
		::RPG::Client::TextID MagicUnitSimpleDesc; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICUNITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMagicUnitRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicUnitRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICUNITROW_FROMBINARY_OFFSET))(array, val);
		}

		::RPG::GameCore::MazeBuffRow* GetMazeBuff()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICUNITROW_GETMAZEBUFF_OFFSET))(this);
		}

		::System::Boolean get_IsPassiveUnit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICUNITROW_GET_ISPASSIVEUNIT_OFFSET))(this);
		}

		::System::Boolean get_IsActiveUnit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICUNITROW_GET_ISACTIVEUNIT_OFFSET))(this);
		}
	};
}
