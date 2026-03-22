#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }

#define CLASS_1_43BD383C98B4C0C5_138_CLASS_1_663A5BAA9A40D325_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x861F390)
#define CLASS_1_43BD383C98B4C0C5_138_CLASS_1_663A5BAA9A40D325__CTOR_OFFSET UNITYSDK_OFFSET(0x861F380)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_138_Class_1_663A5BAA9A40D325_TypeDefinitionIndex = 52078;

class Class_1_43BD383C98B4C0C5_138_Class_1_663A5BAA9A40D325 : public ::System::Object
{
public:
	::RPG::Client::AvatarData* Field_1_0; // 0x10
	::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::AvatarData* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_138_CLASS_1_663A5BAA9A40D325__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_138_CLASS_1_663A5BAA9A40D325_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}
};
