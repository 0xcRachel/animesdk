#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATEACTION_METHOD_4_0B3B994BA6CFC6AC_OFFSET UNITYSDK_OFFSET(0x16C4F480)
#define RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATEACTION_METHOD_4_53D53A974C364E32_OFFSET UNITYSDK_OFFSET(0x16C4F620)
#define RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C4F5D0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ApplyChessBoardTemplateAction_TypeDefinitionIndex = 22163;

	class ApplyChessBoardTemplateAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::String* TemplatePath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0B3B994BA6CFC6AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ApplyChessBoardTemplateAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ApplyChessBoardTemplateAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATEACTION_METHOD_4_0B3B994BA6CFC6AC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_53D53A974C364E32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ApplyChessBoardTemplateAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ApplyChessBoardTemplateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATEACTION_METHOD_4_53D53A974C364E32_OFFSET))(a1, a2);
		}
	};
}
