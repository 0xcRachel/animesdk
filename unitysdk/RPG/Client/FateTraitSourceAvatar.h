#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class FateBuffTraitInfo; }
namespace System { class String; }

#define RPG_CLIENT_FATETRAITSOURCEAVATAR_GETDESC_OFFSET UNITYSDK_OFFSET(0x9243030)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_GETIMGICON_OFFSET UNITYSDK_OFFSET(0x9242CE0)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_GETNAME_OFFSET UNITYSDK_OFFSET(0x9242F10)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_GETRARITYBG_OFFSET UNITYSDK_OFFSET(0x9242EA0)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0x9242DE0)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x9243170)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x92430B0)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x9242190)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x9243180)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x9242280)

namespace RPG::Client
{
	inline static constexpr unsigned int FateTraitSourceAvatar_TypeDefinitionIndex = 50794;

	class FateTraitSourceAvatar : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* _DescParamList; // 0x10
		::RPG::Client::FateBuffTraitInfo* _BelongTraitInfo; // 0x18
		::RPG::Client::AvatarData* _AvatarData; // 0x20
		::RPG::Client::TextID _AvatarTipDesc; // 0x28
		::System::UInt32 _AvatarID_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 avatarId, ::RPG::Client::TextID desc, ::Il2CppArray<::RPG::GameCore::FixPoint>* descParamList, ::RPG::Client::FateBuffTraitInfo* belongTraitInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::RPG::Client::FateBuffTraitInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR__CTOR_OFFSET))(this, avatarId, desc, descParamList, belongTraitInfo);
		}

		::System::String* GetImgIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_GETIMGICON_OFFSET))(this);
		}

		::System::String* GetRarityBg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_GETRARITYBG_OFFSET))(this);
		}

		::RPG::Client::TextID GetName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_GETNAME_OFFSET))(this);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_GETDESC_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_ISACTIVE_OFFSET))(this);
		}

		static ::System::Boolean IsUnlock(::System::UInt32 difficulty)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_ISUNLOCK_OFFSET))(difficulty);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_SET_AVATARID_OFFSET))(this, value);
		}

		::RPG::Client::AvatarData* get_AvatarData()
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_GET_AVATARDATA_OFFSET))(this);
		}
	};
}
