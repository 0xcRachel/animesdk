#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_REPLACEPREVIEWAVATARFORCHANGEENHANCEDPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0x14D25290)
#define RPG_CLIENT_REPLACEPREVIEWAVATARFORCHANGEENHANCEDPARAM_GET_NEWAVATAR_OFFSET UNITYSDK_OFFSET(0x14D25270)
#define RPG_CLIENT_REPLACEPREVIEWAVATARFORCHANGEENHANCEDPARAM_GET_ORIGINAVATAR_OFFSET UNITYSDK_OFFSET(0x14D25250)
#define RPG_CLIENT_REPLACEPREVIEWAVATARFORCHANGEENHANCEDPARAM_SET_NEWAVATAR_OFFSET UNITYSDK_OFFSET(0x14D25280)
#define RPG_CLIENT_REPLACEPREVIEWAVATARFORCHANGEENHANCEDPARAM_SET_ORIGINAVATAR_OFFSET UNITYSDK_OFFSET(0x14D25260)
#define RPG_CLIENT_REPLACEPREVIEWAVATARFORCHANGEENHANCEDPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x14D25310)

namespace RPG::Client
{
	inline static constexpr unsigned int ReplacePreviewAvatarForChangeEnhancedParam_TypeDefinitionIndex = 58535;

	class ReplacePreviewAvatarForChangeEnhancedParam : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* _NewAvatar_k__BackingField; // 0x10
		::RPG::AvatarSystem::IAvatar* _OriginAvatar_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLACEPREVIEWAVATARFORCHANGEENHANCEDPARAM__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::IAvatar* get_OriginAvatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLACEPREVIEWAVATARFORCHANGEENHANCEDPARAM_GET_ORIGINAVATAR_OFFSET))(this);
		}

		::System::Void set_OriginAvatar(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLACEPREVIEWAVATARFORCHANGEENHANCEDPARAM_SET_ORIGINAVATAR_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* get_NewAvatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLACEPREVIEWAVATARFORCHANGEENHANCEDPARAM_GET_NEWAVATAR_OFFSET))(this);
		}

		::System::Void set_NewAvatar(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLACEPREVIEWAVATARFORCHANGEENHANCEDPARAM_SET_NEWAVATAR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ReplacePreviewAvatarForChangeEnhancedParam* Create(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::RPG::Client::ReplacePreviewAvatarForChangeEnhancedParam*(*)(::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLACEPREVIEWAVATARFORCHANGEENHANCEDPARAM_CREATE_OFFSET))(a1, a2);
		}
	};
}
