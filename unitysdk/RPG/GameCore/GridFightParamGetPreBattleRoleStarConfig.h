#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETPREBATTLEROLESTARCONFIG_METHOD_5_C11FDBDBB1E8B2FA_OFFSET UNITYSDK_OFFSET(0x16B398B0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPREBATTLEROLESTARCONFIG_METHOD_5_E4750D67B8D53F9F_OFFSET UNITYSDK_OFFSET(0x16B39AE0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPREBATTLEROLESTARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B399F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetPreBattleRoleStarConfig_TypeDefinitionIndex = 17490;

	class GridFightParamGetPreBattleRoleStarConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPREBATTLEROLESTARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_C11FDBDBB1E8B2FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetPreBattleRoleStarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetPreBattleRoleStarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPREBATTLEROLESTARCONFIG_METHOD_5_C11FDBDBB1E8B2FA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_E4750D67B8D53F9F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetPreBattleRoleStarConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetPreBattleRoleStarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPREBATTLEROLESTARCONFIG_METHOD_5_E4750D67B8D53F9F_OFFSET))(a1, a2);
		}
	};
}
