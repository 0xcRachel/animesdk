#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraDuelCustomStringPresetType.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuel/ChimeraDuelAccelerateMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHIMERADUELTOOLS_CLAMPATTACK_OFFSET UNITYSDK_OFFSET(0x17471AD0)
#define RPG_CLIENT_CHIMERADUELTOOLS_CLAMPHP_OFFSET UNITYSDK_OFFSET(0x174718B0)
#define RPG_CLIENT_CHIMERADUELTOOLS_CLEARPREFS_OFFSET UNITYSDK_OFFSET(0x174714E0)
#define RPG_CLIENT_CHIMERADUELTOOLS_CREATEVSMANIKINUI3DENTITY_OFFSET UNITYSDK_OFFSET(0x17472870)
#define RPG_CLIENT_CHIMERADUELTOOLS_GETDEFAULTCRITICALHITDAMAGE_OFFSET UNITYSDK_OFFSET(0x17471A70)
#define RPG_CLIENT_CHIMERADUELTOOLS_GETDEFAULTMAXATTACK_OFFSET UNITYSDK_OFFSET(0x174719B0)
#define RPG_CLIENT_CHIMERADUELTOOLS_GETDEFAULTMAXHP_OFFSET UNITYSDK_OFFSET(0x174717F0)
#define RPG_CLIENT_CHIMERADUELTOOLS_GETDEFAULTMINATTACK_OFFSET UNITYSDK_OFFSET(0x17471A10)
#define RPG_CLIENT_CHIMERADUELTOOLS_GETDEFAULTMINHP_OFFSET UNITYSDK_OFFSET(0x17471850)
#define RPG_CLIENT_CHIMERADUELTOOLS_GETMAXTALKBUBBLEDURATION_OFFSET UNITYSDK_OFFSET(0x17471BD0)
#define RPG_CLIENT_CHIMERADUELTOOLS_GETMAXTRASHTALKDURATION_OFFSET UNITYSDK_OFFSET(0x17471F50)
#define RPG_CLIENT_CHIMERADUELTOOLS_GETORCREATETEMPAVATARDATA_OFFSET UNITYSDK_OFFSET(0x174727D0)
#define RPG_CLIENT_CHIMERADUELTOOLS_GETTEAMSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x17471790)
#define RPG_CLIENT_CHIMERADUELTOOLS_STARTGAME_OFFSET UNITYSDK_OFFSET(0x17472060)
#define RPG_CLIENT_CHIMERADUELTOOLS_STARTSHOWCASEBATTLE_OFFSET UNITYSDK_OFFSET(0x17472310)
#define RPG_CLIENT_CHIMERADUELTOOLS_SWITCHSPEEDAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0x17472920)
#define RPG_CLIENT_CHIMERADUELTOOLS_TRIGGERCUSTOMSTRING_OFFSET UNITYSDK_OFFSET(0x174720F0)
#define RPG_CLIENT_CHIMERADUELTOOLS__TRIGGERCUSTOMSTRING_OFFSET UNITYSDK_OFFSET(0x174721C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelTools_TypeDefinitionIndex = 58317;

	class ChimeraDuelTools : public ::System::Object
	{
	public:
		static ::System::Void ClearPrefs()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_CLEARPREFS_OFFSET))();
		}

		static ::System::UInt32 GetTeamSlotCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_GETTEAMSLOTCOUNT_OFFSET))();
		}

		static ::System::Int32 GetDefaultMaxHP()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_GETDEFAULTMAXHP_OFFSET))();
		}

		static ::System::Int32 GetDefaultMinHP()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_GETDEFAULTMINHP_OFFSET))();
		}

		static ::System::Int32 ClampHP(::System::Int32 hp)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_CLAMPHP_OFFSET))(hp);
		}

		static ::System::Int32 GetDefaultMaxAttack()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_GETDEFAULTMAXATTACK_OFFSET))();
		}

		static ::System::Int32 GetDefaultMinAttack()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_GETDEFAULTMINATTACK_OFFSET))();
		}

		static ::System::Int32 GetDefaultCriticalHitDamage()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_GETDEFAULTCRITICALHITDAMAGE_OFFSET))();
		}

		static ::System::Int32 ClampAttack(::System::Int32 attack)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_CLAMPATTACK_OFFSET))(attack);
		}

		static ::System::Single GetMaxTalkBubbleDuration()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_GETMAXTALKBUBBLEDURATION_OFFSET))();
		}

		static ::System::Single GetMaxTrashTalkDuration()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_GETMAXTRASHTALKDURATION_OFFSET))();
		}

		static ::System::Void StartGame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_STARTGAME_OFFSET))();
		}

		static ::System::Void _TriggerCustomString(::System::String* customString)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS__TRIGGERCUSTOMSTRING_OFFSET))(customString);
		}

		static ::System::Void TriggerCustomString(::RPG::Client::ChimeraDuelCustomStringPresetType customStringPreset)
		{
			return ((::System::Void(*)(::RPG::Client::ChimeraDuelCustomStringPresetType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_TRIGGERCUSTOMSTRING_OFFSET))(customStringPreset);
		}

		static ::System::Void StartShowcaseBattle()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_STARTSHOWCASEBATTLE_OFFSET))();
		}

		static ::RPG::Client::AvatarData* GetOrCreateTempAvatarData(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::AvatarData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_GETORCREATETEMPAVATARDATA_OFFSET))(avatarID);
		}

		static ::RPG::GameCore::GameEntity* CreateVSManikinUI3DEntity(::System::UInt32 avatarID, ::UnityEngine::Transform* anchor)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_CREATEVSMANIKINUI3DENTITY_OFFSET))(avatarID, anchor);
		}

		static ::System::Void SwitchSpeedAudioState(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelAccelerateMode accelerateMode)
		{
			return ((::System::Void(*)(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelAccelerateMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_SWITCHSPEEDAUDIOSTATE_OFFSET))(accelerateMode);
		}
	};
}
