#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CaseContainerBase.h"
#include "unitysdk/RPG/GameCore/RollShopGroupType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROLLSHOWREWARDCASECONTAINER_METHOD_3_7D7C5CFCCA810F76_OFFSET UNITYSDK_OFFSET(0x16ED3EC0)
#define RPG_GAMECORE_ROLLSHOWREWARDCASECONTAINER_METHOD_3_A2FECBDB819D7545_OFFSET UNITYSDK_OFFSET(0x16ED3F00)
#define RPG_GAMECORE_ROLLSHOWREWARDCASECONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x16ED3EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RollShowRewardCaseContainer_TypeDefinitionIndex = 15839;

	class RollShowRewardCaseContainer : public ::RPG::GameCore::CaseContainerBase
	{
	public:
		::RPG::GameCore::RollShopGroupType Case; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLSHOWREWARDCASECONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7D7C5CFCCA810F76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RollShowRewardCaseContainer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RollShowRewardCaseContainer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLSHOWREWARDCASECONTAINER_METHOD_3_7D7C5CFCCA810F76_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A2FECBDB819D7545(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RollShowRewardCaseContainer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RollShowRewardCaseContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLSHOWREWARDCASECONTAINER_METHOD_3_A2FECBDB819D7545_OFFSET))(a1, a2);
		}
	};
}
