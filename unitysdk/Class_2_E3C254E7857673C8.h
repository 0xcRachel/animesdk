#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_236D917FE41D3A97.h"
#include "unitysdk/RPG/GameCore/DiceCombatSkillPreviewInvokeType.h"

class Class_2_DFB79F7EE671BF59;
class Class_4_D581BED103406713;
namespace RPG::GameCore { class DiceCombatNotAvatarPreviewConfig; }

#define CLASS_2_E3C254E7857673C8_METHOD_2_3207497D85D64F9A_OFFSET UNITYSDK_OFFSET(0x15F18CC0)
#define CLASS_2_E3C254E7857673C8__CTOR_OFFSET UNITYSDK_OFFSET(0x15F18CA0)

inline static constexpr unsigned int Class_2_E3C254E7857673C8_TypeDefinitionIndex = 27778;

class Class_2_E3C254E7857673C8 : public ::Class_1_236D917FE41D3A97
{
public:
	::System::Void _ctor(::Class_4_D581BED103406713* a1, ::Class_2_DFB79F7EE671BF59* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_D581BED103406713*, ::Class_2_DFB79F7EE671BF59*))((::PBYTE)hIl2Cpp + CLASS_2_E3C254E7857673C8__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::DiceCombatNotAvatarPreviewConfig* Method_2_3207497D85D64F9A(::System::UInt32 a1, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType a2)
	{
		return ((::RPG::GameCore::DiceCombatNotAvatarPreviewConfig*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType))((::PBYTE)hIl2Cpp + CLASS_2_E3C254E7857673C8_METHOD_2_3207497D85D64F9A_OFFSET))(this, a1, a2);
	}
};
