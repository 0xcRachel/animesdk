#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_RANDOMCHANGEBOMBTOMULTISTYLEACTION_METHOD_4_D264BFD3B6FC193A_OFFSET UNITYSDK_OFFSET(0x16C53920)
#define RPG_GAMECORE_MATCH3_RANDOMCHANGEBOMBTOMULTISTYLEACTION_METHOD_4_F54F915A1B5B25F8_OFFSET UNITYSDK_OFFSET(0x16C5AA80)
#define RPG_GAMECORE_MATCH3_RANDOMCHANGEBOMBTOMULTISTYLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C538D0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int RandomChangeBombToMultiStyleAction_TypeDefinitionIndex = 22183;

	class RandomChangeBombToMultiStyleAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 Count; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEBOMBTOMULTISTYLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F54F915A1B5B25F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RandomChangeBombToMultiStyleAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RandomChangeBombToMultiStyleAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEBOMBTOMULTISTYLEACTION_METHOD_4_F54F915A1B5B25F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D264BFD3B6FC193A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RandomChangeBombToMultiStyleAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RandomChangeBombToMultiStyleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEBOMBTOMULTISTYLEACTION_METHOD_4_D264BFD3B6FC193A_OFFSET))(a1, a2);
		}
	};
}
