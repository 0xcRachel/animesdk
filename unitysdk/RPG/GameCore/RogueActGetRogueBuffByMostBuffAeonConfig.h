#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYMOSTBUFFAEONCONFIG_METHOD_5_39955F73DCFDC576_OFFSET UNITYSDK_OFFSET(0x16DFCBE0)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYMOSTBUFFAEONCONFIG_METHOD_5_8D06F1B6809C1D0A_OFFSET UNITYSDK_OFFSET(0x16DFCDA0)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYMOSTBUFFAEONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFCCE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueBuffByMostBuffAeonConfig_TypeDefinitionIndex = 17609;

	class RogueActGetRogueBuffByMostBuffAeonConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYMOSTBUFFAEONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_39955F73DCFDC576(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByMostBuffAeonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByMostBuffAeonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYMOSTBUFFAEONCONFIG_METHOD_5_39955F73DCFDC576_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_8D06F1B6809C1D0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByMostBuffAeonConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByMostBuffAeonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYMOSTBUFFAEONCONFIG_METHOD_5_8D06F1B6809C1D0A_OFFSET))(a1, a2);
		}
	};
}
