#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCH3_TRIGGERCUSTOMSTRINGACTION_METHOD_4_4F69A3439F1D803A_OFFSET UNITYSDK_OFFSET(0x16C55EA0)
#define RPG_GAMECORE_MATCH3_TRIGGERCUSTOMSTRINGACTION_METHOD_4_B8211A6DC4185B74_OFFSET UNITYSDK_OFFSET(0x16C5C0A0)
#define RPG_GAMECORE_MATCH3_TRIGGERCUSTOMSTRINGACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C55E50)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int TriggerCustomStringAction_TypeDefinitionIndex = 22172;

	class TriggerCustomStringAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::String* CustomString; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_TRIGGERCUSTOMSTRINGACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B8211A6DC4185B74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::TriggerCustomStringAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::TriggerCustomStringAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_TRIGGERCUSTOMSTRINGACTION_METHOD_4_B8211A6DC4185B74_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4F69A3439F1D803A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::TriggerCustomStringAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::TriggerCustomStringAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_TRIGGERCUSTOMSTRINGACTION_METHOD_4_4F69A3439F1D803A_OFFSET))(a1, a2);
		}
	};
}
