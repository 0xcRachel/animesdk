#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTNODENUMCONFIG_METHOD_5_8B66F081A28260DA_OFFSET UNITYSDK_OFFSET(0x16B38470)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTNODENUMCONFIG_METHOD_5_C0B81D242C217B7F_OFFSET UNITYSDK_OFFSET(0x16B386A0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTNODENUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B385B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetLeftNodeNumConfig_TypeDefinitionIndex = 17502;

	class GridFightParamGetLeftNodeNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTNODENUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_8B66F081A28260DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetLeftNodeNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetLeftNodeNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTNODENUMCONFIG_METHOD_5_8B66F081A28260DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_C0B81D242C217B7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetLeftNodeNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetLeftNodeNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTNODENUMCONFIG_METHOD_5_C0B81D242C217B7F_OFFSET))(a1, a2);
		}
	};
}
