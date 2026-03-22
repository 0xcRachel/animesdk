#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETLASTNODETYPECONFIG_METHOD_5_9ED43730999B4FB7_OFFSET UNITYSDK_OFFSET(0x16B37FF0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLASTNODETYPECONFIG_METHOD_5_AD8C7C203715C4C2_OFFSET UNITYSDK_OFFSET(0x16B38220)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLASTNODETYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B38130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetLastNodeTypeConfig_TypeDefinitionIndex = 17506;

	class GridFightParamGetLastNodeTypeConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLASTNODETYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_9ED43730999B4FB7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetLastNodeTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetLastNodeTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLASTNODETYPECONFIG_METHOD_5_9ED43730999B4FB7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_AD8C7C203715C4C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetLastNodeTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetLastNodeTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLASTNODETYPECONFIG_METHOD_5_AD8C7C203715C4C2_OFFSET))(a1, a2);
		}
	};
}
