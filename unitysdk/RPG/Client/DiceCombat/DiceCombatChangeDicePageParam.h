#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATCHANGEDICEPAGEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0x9024970)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCHANGEDICEPAGEPARAM_GET_AVATARINFO_OFFSET UNITYSDK_OFFSET(0x9024A00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCHANGEDICEPAGEPARAM_SET_AVATARINFO_OFFSET UNITYSDK_OFFSET(0x9024A10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCHANGEDICEPAGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x90249F0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatChangeDicePageParam_TypeDefinitionIndex = 60176;

	class DiceCombatChangeDicePageParam : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* _AvatarInfo_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCHANGEDICEPAGEPARAM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam* Create(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* avatarInfo)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam*(*)(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCHANGEDICEPAGEPARAM_CREATE_OFFSET))(avatarInfo);
		}

		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* get_AvatarInfo()
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCHANGEDICEPAGEPARAM_GET_AVATARINFO_OFFSET))(this);
		}

		::System::Void set_AvatarInfo(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCHANGEDICEPAGEPARAM_SET_AVATARINFO_OFFSET))(this, value);
		}
	};
}
