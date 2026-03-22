#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONCONFIGBASE_METHOD_4_B477C9F026A737D8_OFFSET UNITYSDK_OFFSET(0x16B16C10)
#define RPG_GAMECORE_GRIDFIGHTACTIONCONFIGBASE_METHOD_4_BA93A024380D78F1_OFFSET UNITYSDK_OFFSET(0x16B17F50)
#define RPG_GAMECORE_GRIDFIGHTACTIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16B16000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionConfigBase_TypeDefinitionIndex = 17313;

	class GridFightActionConfigBase : public ::RPG::GameCore::PlayerActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B477C9F026A737D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCONFIGBASE_METHOD_4_B477C9F026A737D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BA93A024380D78F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCONFIGBASE_METHOD_4_BA93A024380D78F1_OFFSET))(a1, a2);
		}
	};
}
