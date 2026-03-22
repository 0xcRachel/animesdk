#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURGLOBALHPCONFIG_METHOD_5_4796B500E456E3CC_OFFSET UNITYSDK_OFFSET(0x16B36970)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURGLOBALHPCONFIG_METHOD_5_ECB10779612FD801_OFFSET UNITYSDK_OFFSET(0x16B36BA0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURGLOBALHPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B36AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetCurGlobalHpConfig_TypeDefinitionIndex = 17496;

	class GridFightParamGetCurGlobalHpConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURGLOBALHPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_4796B500E456E3CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurGlobalHpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurGlobalHpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURGLOBALHPCONFIG_METHOD_5_4796B500E456E3CC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_ECB10779612FD801(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurGlobalHpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurGlobalHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURGLOBALHPCONFIG_METHOD_5_ECB10779612FD801_OFFSET))(a1, a2);
		}
	};
}
