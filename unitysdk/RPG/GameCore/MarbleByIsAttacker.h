#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYISATTACKER_METHOD_4_1C6BA16CB147C9F5_OFFSET UNITYSDK_OFFSET(0x19C33EC0)
#define RPG_GAMECORE_MARBLEBYISATTACKER_METHOD_4_48DF30B15A40B92D_OFFSET UNITYSDK_OFFSET(0x19C33FA0)
#define RPG_GAMECORE_MARBLEBYISATTACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x19C33F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByIsAttacker_TypeDefinitionIndex = 16018;

	class MarbleByIsAttacker : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISATTACKER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1C6BA16CB147C9F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByIsAttacker*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByIsAttacker*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISATTACKER_METHOD_4_1C6BA16CB147C9F5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_48DF30B15A40B92D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByIsAttacker* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByIsAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISATTACKER_METHOD_4_48DF30B15A40B92D_OFFSET))(a1, a2);
		}
	};
}
