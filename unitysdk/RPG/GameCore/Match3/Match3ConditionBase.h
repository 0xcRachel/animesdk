#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_MATCH3CONDITIONBASE_METHOD_3_0A9FCBF93F9A66F9_OFFSET UNITYSDK_OFFSET(0x16C56810)
#define RPG_GAMECORE_MATCH3_MATCH3CONDITIONBASE_METHOD_3_E9CFF76A54041C6D_OFFSET UNITYSDK_OFFSET(0x16C57640)
#define RPG_GAMECORE_MATCH3_MATCH3CONDITIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16C4ED90)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3ConditionBase_TypeDefinitionIndex = 22147;

	class Match3ConditionBase : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3CONDITIONBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0A9FCBF93F9A66F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3ConditionBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3ConditionBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3CONDITIONBASE_METHOD_3_0A9FCBF93F9A66F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E9CFF76A54041C6D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3ConditionBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3ConditionBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3CONDITIONBASE_METHOD_3_E9CFF76A54041C6D_OFFSET))(a1, a2);
		}
	};
}
