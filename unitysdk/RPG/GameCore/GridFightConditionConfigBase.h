#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerCondConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDITIONCONFIGBASE_METHOD_4_6FC81A1EEE810C42_OFFSET UNITYSDK_OFFSET(0x16B1DB10)
#define RPG_GAMECORE_GRIDFIGHTCONDITIONCONFIGBASE_METHOD_4_74A52943B8458D4B_OFFSET UNITYSDK_OFFSET(0x16B1D240)
#define RPG_GAMECORE_GRIDFIGHTCONDITIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16B1C720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightConditionConfigBase_TypeDefinitionIndex = 17340;

	class GridFightConditionConfigBase : public ::RPG::GameCore::PlayerCondConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDITIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_74A52943B8458D4B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightConditionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightConditionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDITIONCONFIGBASE_METHOD_4_74A52943B8458D4B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6FC81A1EEE810C42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDITIONCONFIGBASE_METHOD_4_6FC81A1EEE810C42_OFFSET))(a1, a2);
		}
	};
}
