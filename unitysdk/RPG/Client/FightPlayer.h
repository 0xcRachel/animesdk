#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_12;
namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }

#define RPG_CLIENT_FIGHTPLAYER_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x925D700)
#define RPG_CLIENT_FIGHTPLAYER_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x925D750)
#define RPG_CLIENT_FIGHTPLAYER_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x925D6A0)
#define RPG_CLIENT_FIGHTPLAYER_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x925D820)
#define RPG_CLIENT_FIGHTPLAYER_GET_UID_OFFSET UNITYSDK_OFFSET(0x925D650)
#define RPG_CLIENT_FIGHTPLAYER_SET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x925D830)
#define RPG_CLIENT_FIGHTPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x925D580)

namespace RPG::Client
{
	inline static constexpr unsigned int FightPlayer_TypeDefinitionIndex = 55126;

	class FightPlayer : public ::System::Object
	{
	public:
		::Class_1_21DCD4640D389503_12* _BasicInfo; // 0x10
		::RPG::Client::PlayerPlatformInfo* _PlatformInfo_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_21DCD4640D389503_12* basicInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_12*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTPLAYER__CTOR_OFFSET))(this, basicInfo);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTPLAYER_GET_UID_OFFSET))(this);
		}

		::System::String* get_NickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTPLAYER_GET_NICKNAME_OFFSET))(this);
		}

		::System::UInt32 get_HeadIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTPLAYER_GET_HEADICONID_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTPLAYER_GET_HEADICONPATH_OFFSET))(this);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTPLAYER_GET_PLATFORMINFO_OFFSET))(this);
		}

		::System::Void set_PlatformInfo(::RPG::Client::PlayerPlatformInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTPLAYER_SET_PLATFORMINFO_OFFSET))(this, value);
		}
	};
}
