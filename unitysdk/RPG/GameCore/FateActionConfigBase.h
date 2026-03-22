#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTIONCONFIGBASE_METHOD_4_0B90552648AA7250_OFFSET UNITYSDK_OFFSET(0x16A92880)
#define RPG_GAMECORE_FATEACTIONCONFIGBASE_METHOD_4_3B3EF6CACB3BB2A9_OFFSET UNITYSDK_OFFSET(0x16A93B10)
#define RPG_GAMECORE_FATEACTIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A90B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActionConfigBase_TypeDefinitionIndex = 17242;

	class FateActionConfigBase : public ::RPG::GameCore::PlayerActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0B90552648AA7250(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTIONCONFIGBASE_METHOD_4_0B90552648AA7250_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3B3EF6CACB3BB2A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTIONCONFIGBASE_METHOD_4_3B3EF6CACB3BB2A9_OFFSET))(a1, a2);
		}
	};
}
