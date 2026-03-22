#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETNPCNUMCONFIG_METHOD_5_644BC0AEEBA96F86_OFFSET UNITYSDK_OFFSET(0x16B38D70)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETNPCNUMCONFIG_METHOD_5_886DBC9242870A13_OFFSET UNITYSDK_OFFSET(0x16B38FA0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETNPCNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B38EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetNpcNumConfig_TypeDefinitionIndex = 17485;

	class GridFightParamGetNpcNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETNPCNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_644BC0AEEBA96F86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetNpcNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetNpcNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETNPCNUMCONFIG_METHOD_5_644BC0AEEBA96F86_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_886DBC9242870A13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetNpcNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetNpcNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETNPCNUMCONFIG_METHOD_5_886DBC9242870A13_OFFSET))(a1, a2);
		}
	};
}
