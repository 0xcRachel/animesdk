#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatSkillPreviewInvokeType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatTaskConfig; }

#define RPG_GAMECORE_DICECOMBATNOTAVATARPREVIEWCONFIG_METHOD_2_BBF4479ED512072C_OFFSET UNITYSDK_OFFSET(0x16A36970)
#define RPG_GAMECORE_DICECOMBATNOTAVATARPREVIEWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A36AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatNotAvatarPreviewConfig_TypeDefinitionIndex = 14554;

	class DiceCombatNotAvatarPreviewConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DiceCombatSkillPreviewInvokeType InvokeType; // 0x10
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnStart; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATNOTAVATARPREVIEWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BBF4479ED512072C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatNotAvatarPreviewConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatNotAvatarPreviewConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATNOTAVATARPREVIEWCONFIG_METHOD_2_BBF4479ED512072C_OFFSET))(a1, a2);
		}
	};
}
