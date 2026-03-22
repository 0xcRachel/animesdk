#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_0B97624EA2BF3959;
class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCHECKMONSTERDIE_METHOD_4_0F6567A429D89661_OFFSET UNITYSDK_OFFSET(0x16903AD0)
#define RPG_GAMECORE_BYCHECKMONSTERDIE_METHOD_4_79C7E717A254DB63_OFFSET UNITYSDK_OFFSET(0x16903BA0)
#define RPG_GAMECORE_BYCHECKMONSTERDIE__CTOR_OFFSET UNITYSDK_OFFSET(0x16903B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckMonsterDie_TypeDefinitionIndex = 21106;

	class ByCheckMonsterDie : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MonsterID; // 0x20
		::Class_1_0B97624EA2BF3959* OverrideConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERDIE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0F6567A429D89661(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckMonsterDie*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckMonsterDie*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERDIE_METHOD_4_0F6567A429D89661_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_79C7E717A254DB63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckMonsterDie* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckMonsterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERDIE_METHOD_4_79C7E717A254DB63_OFFSET))(a1, a2);
		}
	};
}
