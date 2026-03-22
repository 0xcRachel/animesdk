#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYACTIONCONFIGBASE_METHOD_3_62130F8CD2F8F62F_OFFSET UNITYSDK_OFFSET(0x171002A0)
#define RPG_GAMECORE_TRAINPARTYACTIONCONFIGBASE_METHOD_3_E1BBFC8A569900BC_OFFSET UNITYSDK_OFFSET(0x170FFB10)
#define RPG_GAMECORE_TRAINPARTYACTIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x170FF210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionConfigBase_TypeDefinitionIndex = 16206;

	class TrainPartyActionConfigBase : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E1BBFC8A569900BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONCONFIGBASE_METHOD_3_E1BBFC8A569900BC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_62130F8CD2F8F62F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONCONFIGBASE_METHOD_3_62130F8CD2F8F62F_OFFSET))(a1, a2);
		}
	};
}
