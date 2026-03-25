#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYEXTRAROUND_METHOD_4_29E6C94AF86B2192_OFFSET UNITYSDK_OFFSET(0x1739F370)
#define RPG_GAMECORE_MARBLEBYEXTRAROUND_METHOD_4_610DB39EF786CA98_OFFSET UNITYSDK_OFFSET(0x1739F290)
#define RPG_GAMECORE_MARBLEBYEXTRAROUND__CTOR_OFFSET UNITYSDK_OFFSET(0x1739F320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByExtraRound_TypeDefinitionIndex = 15464;

	class MarbleByExtraRound : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYEXTRAROUND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_610DB39EF786CA98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByExtraRound*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByExtraRound*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYEXTRAROUND_METHOD_4_610DB39EF786CA98_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_29E6C94AF86B2192(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByExtraRound* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByExtraRound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYEXTRAROUND_METHOD_4_29E6C94AF86B2192_OFFSET))(a1, a2);
		}
	};
}
