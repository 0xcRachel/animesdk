#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_POWEROVERTAKEOPPONENTCONDITION_METHOD_4_E844AC36241500AC_OFFSET UNITYSDK_OFFSET(0x16C57BD0)
#define RPG_GAMECORE_MATCH3_POWEROVERTAKEOPPONENTCONDITION_METHOD_4_EFE639DCC38AC472_OFFSET UNITYSDK_OFFSET(0x16C5A910)
#define RPG_GAMECORE_MATCH3_POWEROVERTAKEOPPONENTCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C57B80)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int PowerOvertakeOpponentCondition_TypeDefinitionIndex = 22156;

	class PowerOvertakeOpponentCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_POWEROVERTAKEOPPONENTCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EFE639DCC38AC472(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::PowerOvertakeOpponentCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::PowerOvertakeOpponentCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_POWEROVERTAKEOPPONENTCONDITION_METHOD_4_EFE639DCC38AC472_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E844AC36241500AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::PowerOvertakeOpponentCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::PowerOvertakeOpponentCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_POWEROVERTAKEOPPONENTCONDITION_METHOD_4_E844AC36241500AC_OFFSET))(a1, a2);
		}
	};
}
