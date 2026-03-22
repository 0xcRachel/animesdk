#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMROUNDCNTUNTILCHAPTERENDCONFIG_METHOD_5_07EA86CF41496DD9_OFFSET UNITYSDK_OFFSET(0x16B3B5E0)
#define RPG_GAMECORE_GRIDFIGHTPARAMROUNDCNTUNTILCHAPTERENDCONFIG_METHOD_5_A7BB253C768EC8E4_OFFSET UNITYSDK_OFFSET(0x16B3B3B0)
#define RPG_GAMECORE_GRIDFIGHTPARAMROUNDCNTUNTILCHAPTERENDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B3B4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamRoundCntUntilChapterEndConfig_TypeDefinitionIndex = 17479;

	class GridFightParamRoundCntUntilChapterEndConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMROUNDCNTUNTILCHAPTERENDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_A7BB253C768EC8E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamRoundCntUntilChapterEndConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamRoundCntUntilChapterEndConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMROUNDCNTUNTILCHAPTERENDCONFIG_METHOD_5_A7BB253C768EC8E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_07EA86CF41496DD9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamRoundCntUntilChapterEndConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamRoundCntUntilChapterEndConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMROUNDCNTUNTILCHAPTERENDCONFIG_METHOD_5_07EA86CF41496DD9_OFFSET))(a1, a2);
		}
	};
}
