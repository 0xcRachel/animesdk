#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONCOPYNPCCONFIG_METHOD_5_64B61209E794B41D_OFFSET UNITYSDK_OFFSET(0x16B18880)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOPYNPCCONFIG_METHOD_5_B689A3F4AC5F5D27_OFFSET UNITYSDK_OFFSET(0x16B18070)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOPYNPCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B17FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionCopyNpcConfig_TypeDefinitionIndex = 17318;

	class GridFightActionCopyNpcConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOPYNPCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_64B61209E794B41D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCopyNpcConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCopyNpcConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOPYNPCCONFIG_METHOD_5_64B61209E794B41D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_B689A3F4AC5F5D27(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCopyNpcConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCopyNpcConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOPYNPCCONFIG_METHOD_5_B689A3F4AC5F5D27_OFFSET))(a1, a2);
		}
	};
}
