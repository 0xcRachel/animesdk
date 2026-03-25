#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingGameBoy/ChenLingGameBoyChallengeState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingGameBoy { class ChenLingGameBoyChallengeData; }
namespace RPG::GameCore { class ChenLingGameBoyChallengePackRow; }

#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9363DD0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_GET_CHEATCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x9363F50)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_GET_HARDCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x9363F30)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9363F00)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9363F90)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x9363F70)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9363F10)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_GET_STATETHISGAME_OFFSET UNITYSDK_OFFSET(0x9363FC0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x9363FA0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_SET_CHEATCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x9363F60)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_SET_HARDCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x9363F40)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x9363F20)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_SET_STATETHISGAME_OFFSET UNITYSDK_OFFSET(0x9363FD0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_SET_STATE_OFFSET UNITYSDK_OFFSET(0x9363FB0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9363E50)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA__INIT_OFFSET UNITYSDK_OFFSET(0x9363E60)

namespace RPG::Client::ChenLingGameBoy
{
	inline static constexpr unsigned int ChenLingGameBoyChallengePackData_TypeDefinitionIndex = 61510;

	class ChenLingGameBoyChallengePackData : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeData* _CheatChallengeData_k__BackingField; // 0x10
		::RPG::GameCore::ChenLingGameBoyChallengePackRow* _Row_k__BackingField; // 0x18
		::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeData* _HardChallengeData_k__BackingField; // 0x20
		::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeState _State_k__BackingField; // 0x28
		::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeState _StateThisGame_k__BackingField; // 0x2C
		::System::UInt32 _ID_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA__CTOR_OFFSET))(this, id);
		}

		static ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_CREATE_OFFSET))(id);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA__INIT_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingGameBoyChallengePackRow* get_Row()
		{
			return ((::RPG::GameCore::ChenLingGameBoyChallengePackRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ChenLingGameBoyChallengePackRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingGameBoyChallengePackRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_SET_ROW_OFFSET))(this, value);
		}

		::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeData* get_HardChallengeData()
		{
			return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_GET_HARDCHALLENGEDATA_OFFSET))(this);
		}

		::System::Void set_HardChallengeData(::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_SET_HARDCHALLENGEDATA_OFFSET))(this, value);
		}

		::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeData* get_CheatChallengeData()
		{
			return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_GET_CHEATCHALLENGEDATA_OFFSET))(this);
		}

		::System::Void set_CheatChallengeData(::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_SET_CHEATCHALLENGEDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_GET_REWARDID_OFFSET))(this);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_GET_ISCOMPLETE_OFFSET))(this);
		}

		::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeState get_State()
		{
			return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeState))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_SET_STATE_OFFSET))(this, value);
		}

		::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeState get_StateThisGame()
		{
			return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_GET_STATETHISGAME_OFFSET))(this);
		}

		::System::Void set_StateThisGame(::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeState))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYCHALLENGEPACKDATA_SET_STATETHISGAME_OFFSET))(this, value);
		}
	};
}
