#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYPREVIEWVALUE_METHOD_3_5A15F42037794CE9_OFFSET UNITYSDK_OFFSET(0x16A42EC0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYPREVIEWVALUE_METHOD_3_863CFDFE2D71D630_OFFSET UNITYSDK_OFFSET(0x16A40710)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYPREVIEWVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A406F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_ModifyPreviewValue_TypeDefinitionIndex = 14583;

	class DiceCombatTaskConfig_ModifyPreviewValue : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Value; // 0x10
		::RPG::GameCore::DiceCombatValueOperation Operation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYPREVIEWVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5A15F42037794CE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_ModifyPreviewValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_ModifyPreviewValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYPREVIEWVALUE_METHOD_3_5A15F42037794CE9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_863CFDFE2D71D630(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_ModifyPreviewValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_ModifyPreviewValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYPREVIEWVALUE_METHOD_3_863CFDFE2D71D630_OFFSET))(a1, a2);
		}
	};
}
