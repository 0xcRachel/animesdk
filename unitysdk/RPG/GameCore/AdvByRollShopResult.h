#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RollShopGroupType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVBYROLLSHOPRESULT_METHOD_4_95D0987DFE5AB5CC_OFFSET UNITYSDK_OFFSET(0x1682EE70)
#define RPG_GAMECORE_ADVBYROLLSHOPRESULT_METHOD_4_E532DFC43B8ABDDC_OFFSET UNITYSDK_OFFSET(0x1682EF40)
#define RPG_GAMECORE_ADVBYROLLSHOPRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1682EEF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByRollShopResult_TypeDefinitionIndex = 18363;

	class AdvByRollShopResult : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::RollShopGroupType TargetResult; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYROLLSHOPRESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_95D0987DFE5AB5CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByRollShopResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByRollShopResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYROLLSHOPRESULT_METHOD_4_95D0987DFE5AB5CC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E532DFC43B8ABDDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByRollShopResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByRollShopResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYROLLSHOPRESULT_METHOD_4_E532DFC43B8ABDDC_OFFSET))(a1, a2);
		}
	};
}
