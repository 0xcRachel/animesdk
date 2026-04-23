#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_ADA685A437CC8307;
namespace RPG::Client::DiceCombat { class DiceCombatV2OpponentData; }
namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0x17A3BE10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_GET_ADVICETEXT_OFFSET UNITYSDK_OFFSET(0x17A3BDA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_GET_AVATARINFO_OFFSET UNITYSDK_OFFSET(0x17A3BB90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_GET_AVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x17A3BBB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_GET_ONDIALOGCLOSE_OFFSET UNITYSDK_OFFSET(0x17A3BBD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_GET_OPPONENTDATA_OFFSET UNITYSDK_OFFSET(0x17A3BD10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_GET_OPPONENTHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x17A3BD20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_GET_PHASETEXT_OFFSET UNITYSDK_OFFSET(0x17A3BDD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_GET__ADVICEROW_OFFSET UNITYSDK_OFFSET(0x17A3BBF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_GET__OPPONENT_OFFSET UNITYSDK_OFFSET(0x17A3BB70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_SET_AVATARINFO_OFFSET UNITYSDK_OFFSET(0x17A3BBA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_SET_AVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x17A3BBC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_SET_ONDIALOGCLOSE_OFFSET UNITYSDK_OFFSET(0x17A3BBE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_SET__OPPONENT_OFFSET UNITYSDK_OFFSET(0x17A3BB80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x17A3BE00)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2BattleBossPhaseAdviceParam_TypeDefinitionIndex = 69955;

	class DiceCombatV2BattleBossPhaseAdviceParam : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* _AvatarInfo_k__BackingField; // 0x10
		::System::Action* _OnDialogClose_k__BackingField; // 0x18
		::RPG::Client::DiceCombat::DiceCombatV2OpponentData* __Opponent_k__BackingField; // 0x20
		::System::UInt32 _AvatarLevel_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM__CTOR_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatV2OpponentData* get__Opponent()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2OpponentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_GET__OPPONENT_OFFSET))(this);
		}

		::System::Void set__Opponent(::RPG::Client::DiceCombat::DiceCombatV2OpponentData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2OpponentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_SET__OPPONENT_OFFSET))(this, value);
		}

		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* get_AvatarInfo()
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_GET_AVATARINFO_OFFSET))(this);
		}

		::System::Void set_AvatarInfo(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_SET_AVATARINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_AvatarLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_GET_AVATARLEVEL_OFFSET))(this);
		}

		::System::Void set_AvatarLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_SET_AVATARLEVEL_OFFSET))(this, value);
		}

		::System::Action* get_OnDialogClose()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_GET_ONDIALOGCLOSE_OFFSET))(this);
		}

		::System::Void set_OnDialogClose(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_SET_ONDIALOGCLOSE_OFFSET))(this, value);
		}

		::Class_1_ADA685A437CC8307* get__AdviceRow()
		{
			return ((::Class_1_ADA685A437CC8307*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_GET__ADVICEROW_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatV2OpponentData* get_OpponentData()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2OpponentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_GET_OPPONENTDATA_OFFSET))(this);
		}

		::System::String* get_OpponentHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_GET_OPPONENTHEADICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_AdviceText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_GET_ADVICETEXT_OFFSET))(this);
		}

		::RPG::Client::TextID get_PhaseText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_GET_PHASETEXT_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2BattleBossPhaseAdviceParam* Create(::RPG::Client::DiceCombat::DiceCombatV2OpponentData* opponent, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* avatarInfo, ::System::UInt32 avatarLevel, ::System::Action* onDialogClose)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2BattleBossPhaseAdviceParam*(*)(::RPG::Client::DiceCombat::DiceCombatV2OpponentData*, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEBOSSPHASEADVICEPARAM_CREATE_OFFSET))(opponent, avatarInfo, avatarLevel, onDialogClose);
		}
	};
}
