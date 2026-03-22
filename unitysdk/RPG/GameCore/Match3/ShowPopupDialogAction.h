#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SHOWPOPUPDIALOGACTION_METHOD_4_42FE985A43D47BC7_OFFSET UNITYSDK_OFFSET(0x16C55780)
#define RPG_GAMECORE_MATCH3_SHOWPOPUPDIALOGACTION_METHOD_4_E6E1F9EA1B5262DD_OFFSET UNITYSDK_OFFSET(0x16C5B920)
#define RPG_GAMECORE_MATCH3_SHOWPOPUPDIALOGACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C55730)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ShowPopupDialogAction_TypeDefinitionIndex = 22168;

	class ShowPopupDialogAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 PopupID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWPOPUPDIALOGACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E6E1F9EA1B5262DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowPopupDialogAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowPopupDialogAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWPOPUPDIALOGACTION_METHOD_4_E6E1F9EA1B5262DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_42FE985A43D47BC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowPopupDialogAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowPopupDialogAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWPOPUPDIALOGACTION_METHOD_4_42FE985A43D47BC7_OFFSET))(a1, a2);
		}
	};
}
