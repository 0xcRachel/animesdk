#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYCONDITIONCONFIGBASE_METHOD_3_5316E93E0DE57BC7_OFFSET UNITYSDK_OFFSET(0x17102E60)
#define RPG_GAMECORE_TRAINPARTYCONDITIONCONFIGBASE_METHOD_3_C4AFD50365EC494E_OFFSET UNITYSDK_OFFSET(0x17102A40)
#define RPG_GAMECORE_TRAINPARTYCONDITIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x17102670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyConditionConfigBase_TypeDefinitionIndex = 16221;

	class TrainPartyConditionConfigBase : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDITIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C4AFD50365EC494E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyConditionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyConditionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDITIONCONFIGBASE_METHOD_3_C4AFD50365EC494E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5316E93E0DE57BC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDITIONCONFIGBASE_METHOD_3_5316E93E0DE57BC7_OFFSET))(a1, a2);
		}
	};
}
