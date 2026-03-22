#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETLASTGAMEPLAYCHAPTERCONFIG_METHOD_5_21A346D2CB2D97E5_OFFSET UNITYSDK_OFFSET(0x16B37FE0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLASTGAMEPLAYCHAPTERCONFIG_METHOD_5_8863A186DA6C2AA8_OFFSET UNITYSDK_OFFSET(0x16B37DB0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLASTGAMEPLAYCHAPTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B37EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetLastGamePlayChapterConfig_TypeDefinitionIndex = 17503;

	class GridFightParamGetLastGamePlayChapterConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLASTGAMEPLAYCHAPTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_8863A186DA6C2AA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetLastGamePlayChapterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetLastGamePlayChapterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLASTGAMEPLAYCHAPTERCONFIG_METHOD_5_8863A186DA6C2AA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_21A346D2CB2D97E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetLastGamePlayChapterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetLastGamePlayChapterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLASTGAMEPLAYCHAPTERCONFIG_METHOD_5_21A346D2CB2D97E5_OFFSET))(a1, a2);
		}
	};
}
