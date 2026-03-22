#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCH3_SHOWSIDEDIALOGACTION_METHOD_4_7D8701654BA8CF9C_OFFSET UNITYSDK_OFFSET(0x16C5BA50)
#define RPG_GAMECORE_MATCH3_SHOWSIDEDIALOGACTION_METHOD_4_8811CE4FA5872E22_OFFSET UNITYSDK_OFFSET(0x16C559A0)
#define RPG_GAMECORE_MATCH3_SHOWSIDEDIALOGACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C55950)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ShowSideDialogAction_TypeDefinitionIndex = 22169;

	class ShowSideDialogAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::String* ImagePath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWSIDEDIALOGACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7D8701654BA8CF9C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowSideDialogAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowSideDialogAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWSIDEDIALOGACTION_METHOD_4_7D8701654BA8CF9C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8811CE4FA5872E22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowSideDialogAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowSideDialogAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWSIDEDIALOGACTION_METHOD_4_8811CE4FA5872E22_OFFSET))(a1, a2);
		}
	};
}
