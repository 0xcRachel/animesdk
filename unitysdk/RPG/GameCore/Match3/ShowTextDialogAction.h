#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SHOWTEXTDIALOGACTION_METHOD_4_3DED73C48B7E7DC9_OFFSET UNITYSDK_OFFSET(0x16C55C20)
#define RPG_GAMECORE_MATCH3_SHOWTEXTDIALOGACTION_METHOD_4_DB88F524040EAA3E_OFFSET UNITYSDK_OFFSET(0x16C5BBA0)
#define RPG_GAMECORE_MATCH3_SHOWTEXTDIALOGACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C55BD0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ShowTextDialogAction_TypeDefinitionIndex = 22170;

	class ShowTextDialogAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::RPG::Client::TextID TextID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWTEXTDIALOGACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DB88F524040EAA3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowTextDialogAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowTextDialogAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWTEXTDIALOGACTION_METHOD_4_DB88F524040EAA3E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3DED73C48B7E7DC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowTextDialogAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowTextDialogAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWTEXTDIALOGACTION_METHOD_4_3DED73C48B7E7DC9_OFFSET))(a1, a2);
		}
	};
}
