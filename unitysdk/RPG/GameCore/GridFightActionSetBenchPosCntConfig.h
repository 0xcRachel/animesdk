#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONSETBENCHPOSCNTCONFIG_METHOD_5_9017193608E2CBBC_OFFSET UNITYSDK_OFFSET(0x16B184F0)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETBENCHPOSCNTCONFIG_METHOD_5_E4EBB5898DBF0556_OFFSET UNITYSDK_OFFSET(0x16B18E00)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETBENCHPOSCNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B18470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionSetBenchPosCntConfig_TypeDefinitionIndex = 17328;

	class GridFightActionSetBenchPosCntConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETBENCHPOSCNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_E4EBB5898DBF0556(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionSetBenchPosCntConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionSetBenchPosCntConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETBENCHPOSCNTCONFIG_METHOD_5_E4EBB5898DBF0556_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_9017193608E2CBBC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionSetBenchPosCntConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionSetBenchPosCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETBENCHPOSCNTCONFIG_METHOD_5_9017193608E2CBBC_OFFSET))(a1, a2);
		}
	};
}
