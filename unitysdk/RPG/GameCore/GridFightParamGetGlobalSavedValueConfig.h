#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETGLOBALSAVEDVALUECONFIG_METHOD_5_CE1DB592AF856908_OFFSET UNITYSDK_OFFSET(0x16B376F0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETGLOBALSAVEDVALUECONFIG_METHOD_5_DED794AC13C05F45_OFFSET UNITYSDK_OFFSET(0x16B37920)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETGLOBALSAVEDVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B37830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetGlobalSavedValueConfig_TypeDefinitionIndex = 17508;

	class GridFightParamGetGlobalSavedValueConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETGLOBALSAVEDVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_CE1DB592AF856908(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetGlobalSavedValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetGlobalSavedValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETGLOBALSAVEDVALUECONFIG_METHOD_5_CE1DB592AF856908_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_DED794AC13C05F45(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetGlobalSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetGlobalSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETGLOBALSAVEDVALUECONFIG_METHOD_5_DED794AC13C05F45_OFFSET))(a1, a2);
		}
	};
}
