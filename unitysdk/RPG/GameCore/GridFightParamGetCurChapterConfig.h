#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCHAPTERCONFIG_METHOD_5_0C6502E38DAD3BD8_OFFSET UNITYSDK_OFFSET(0x16B362B0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCHAPTERCONFIG_METHOD_5_A4E8289FD5FEE415_OFFSET UNITYSDK_OFFSET(0x16B364E0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCHAPTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B363F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetCurChapterConfig_TypeDefinitionIndex = 17498;

	class GridFightParamGetCurChapterConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCHAPTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_0C6502E38DAD3BD8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurChapterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurChapterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCHAPTERCONFIG_METHOD_5_0C6502E38DAD3BD8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A4E8289FD5FEE415(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurChapterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurChapterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCHAPTERCONFIG_METHOD_5_A4E8289FD5FEE415_OFFSET))(a1, a2);
		}
	};
}
