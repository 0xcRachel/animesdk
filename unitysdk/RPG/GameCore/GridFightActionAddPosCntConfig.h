#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONADDPOSCNTCONFIG_METHOD_5_13B091825ADBD805_OFFSET UNITYSDK_OFFSET(0x16B16980)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDPOSCNTCONFIG_METHOD_5_FBA18950A544736F_OFFSET UNITYSDK_OFFSET(0x16B16850)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDPOSCNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B16900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddPosCntConfig_TypeDefinitionIndex = 17329;

	class GridFightActionAddPosCntConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDPOSCNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_FBA18950A544736F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddPosCntConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddPosCntConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDPOSCNTCONFIG_METHOD_5_FBA18950A544736F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_13B091825ADBD805(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddPosCntConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddPosCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDPOSCNTCONFIG_METHOD_5_13B091825ADBD805_OFFSET))(a1, a2);
		}
	};
}
