#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDNOUSVALUECONFIG_METHOD_5_9412AE416F3A3E89_OFFSET UNITYSDK_OFFSET(0x16E61FD0)
#define RPG_GAMECORE_ROGUECONDNOUSVALUECONFIG_METHOD_5_F168FA5502406542_OFFSET UNITYSDK_OFFSET(0x16E61E60)
#define RPG_GAMECORE_ROGUECONDNOUSVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E61F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondNousValueConfig_TypeDefinitionIndex = 17668;

	class RogueCondNousValueConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDNOUSVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_F168FA5502406542(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondNousValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondNousValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDNOUSVALUECONFIG_METHOD_5_F168FA5502406542_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_9412AE416F3A3E89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondNousValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondNousValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDNOUSVALUECONFIG_METHOD_5_9412AE416F3A3E89_OFFSET))(a1, a2);
		}
	};
}
