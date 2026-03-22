#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_CONDCOMPARECONFIG_METHOD_3_54284A8FEBFE0CA6_OFFSET UNITYSDK_OFFSET(0x169C2F10)
#define RPG_GAMECORE_CONDCOMPARECONFIG_METHOD_3_E0FF3CDF5B2AC9AF_OFFSET UNITYSDK_OFFSET(0x169C3010)
#define RPG_GAMECORE_CONDCOMPARECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x169C2FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CondCompareConfig_TypeDefinitionIndex = 15369;

	class CondCompareConfig : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x18
		::RPG::GameCore::MiParameterConfigBase* LeftValue; // 0x20
		::RPG::GameCore::MiParameterConfigBase* RightValue; // 0x28
		::System::Single Epsilon; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDCOMPARECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_54284A8FEBFE0CA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondCompareConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondCompareConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDCOMPARECONFIG_METHOD_3_54284A8FEBFE0CA6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E0FF3CDF5B2AC9AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondCompareConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondCompareConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDCOMPARECONFIG_METHOD_3_E0FF3CDF5B2AC9AF_OFFSET))(a1, a2);
		}
	};
}
