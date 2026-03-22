#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYPOSTACTION_METHOD_4_00CEB0229A1BF44A_OFFSET UNITYSDK_OFFSET(0x16C535C0)
#define RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYPOSTACTION_METHOD_4_C61CB556E1002358_OFFSET UNITYSDK_OFFSET(0x16C59730)
#define RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYPOSTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C53570)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3TagApplyPostAction_TypeDefinitionIndex = 22206;

	class Match3TagApplyPostAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::PieceTag>* RemovePieceTags; // 0x10
		::Il2CppArray<::RPG::GameCore::Match3::GridTag>* RemoveGridTags; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYPOSTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C61CB556E1002358(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3TagApplyPostAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3TagApplyPostAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYPOSTACTION_METHOD_4_C61CB556E1002358_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_00CEB0229A1BF44A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3TagApplyPostAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3TagApplyPostAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYPOSTACTION_METHOD_4_00CEB0229A1BF44A_OFFSET))(a1, a2);
		}
	};
}
