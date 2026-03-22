#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYCONDITION_METHOD_4_46E21690E7407596_OFFSET UNITYSDK_OFFSET(0x16C57750)
#define RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYCONDITION_METHOD_4_AF1C33BA43764006_OFFSET UNITYSDK_OFFSET(0x16C596A0)
#define RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C57700)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3TagApplyCondition_TypeDefinitionIndex = 22204;

	class Match3TagApplyCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::BombType>* AvoidBombTypes; // 0x18
		::Il2CppArray<::RPG::GameCore::Match3::PieceTag>* AvoidPieceTags; // 0x20
		::Il2CppArray<::RPG::GameCore::Match3::GridTag>* AvoidGridTags; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AF1C33BA43764006(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3TagApplyCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3TagApplyCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYCONDITION_METHOD_4_AF1C33BA43764006_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_46E21690E7407596(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3TagApplyCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3TagApplyCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYCONDITION_METHOD_4_46E21690E7407596_OFFSET))(a1, a2);
		}
	};
}
