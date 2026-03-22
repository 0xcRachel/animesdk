#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOLINEBOMBACTION_METHOD_4_1199E97223997C10_OFFSET UNITYSDK_OFFSET(0x16C53C50)
#define RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOLINEBOMBACTION_METHOD_4_1BB386147362F4DE_OFFSET UNITYSDK_OFFSET(0x16C5AC40)
#define RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOLINEBOMBACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C53C00)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int RandomChangeFruitToLineBombAction_TypeDefinitionIndex = 22184;

	class RandomChangeFruitToLineBombAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 StyleID; // 0x10
		::System::UInt32 Count; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOLINEBOMBACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1BB386147362F4DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RandomChangeFruitToLineBombAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RandomChangeFruitToLineBombAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOLINEBOMBACTION_METHOD_4_1BB386147362F4DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1199E97223997C10(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RandomChangeFruitToLineBombAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RandomChangeFruitToLineBombAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOLINEBOMBACTION_METHOD_4_1199E97223997C10_OFFSET))(a1, a2);
		}
	};
}
