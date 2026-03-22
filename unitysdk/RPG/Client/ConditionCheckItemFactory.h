#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConditionType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_463;

#define RPG_CLIENT_CONDITIONCHECKITEMFACTORY_CREATECONDITIONCHECKITEM_OFFSET UNITYSDK_OFFSET(0x8FCA1C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ConditionCheckItemFactory_TypeDefinitionIndex = 47430;

	class ConditionCheckItemFactory : public ::System::Object
	{
	public:
		static ::Class_0_16E4307DCC419505_463* CreateConditionCheckItem(::RPG::GameCore::ConditionType conditionType, ::System::Object* param)
		{
			return ((::Class_0_16E4307DCC419505_463*(*)(::RPG::GameCore::ConditionType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKITEMFACTORY_CREATECONDITIONCHECKITEM_OFFSET))(conditionType, param);
		}
	};
}
