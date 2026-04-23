#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MiniGameCollectCoinState.h"
#include "unitysdk/System/Object.h"

class Class_1_3440222A86BF3335;
namespace System { class Action; }

#define CLASS_1_2CF216D11FB56512_CLEAR_OFFSET UNITYSDK_OFFSET(0x16DF35D0)
#define CLASS_1_2CF216D11FB56512_GET_STATE_OFFSET UNITYSDK_OFFSET(0x16DF35B0)
#define CLASS_1_2CF216D11FB56512_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x16DF3680)
#define CLASS_1_2CF216D11FB56512_ONALLOC_OFFSET UNITYSDK_OFFSET(0x16DF36F0)
#define CLASS_1_2CF216D11FB56512_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x16DF3770)
#define CLASS_1_2CF216D11FB56512_SET_STATE_OFFSET UNITYSDK_OFFSET(0x16DF35C0)
#define CLASS_1_2CF216D11FB56512__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF37B0)

inline static constexpr unsigned int Class_1_2CF216D11FB56512_TypeDefinitionIndex = 39201;

class Class_1_2CF216D11FB56512 : public ::System::Object
{
public:
	::Class_1_3440222A86BF3335* Field_1_3; // 0x10
	::System::Action* Field_1_10; // 0x18
	::System::Action* Field_1_9; // 0x20
	::System::Action* Field_1_8; // 0x28
	::Class_1_3440222A86BF3335* Field_1_4; // 0x30
	::System::Single Field_1_7; // 0x38
	::System::Int32 Field_1_5; // 0x3C
	::System::UInt32 Field_1_2; // 0x40
	::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState _State_k__BackingField; // 0x44
	::System::Int32 Field_1_1; // 0x48
	::System::Single Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CF216D11FB56512__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState get_State()
	{
		return ((::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CF216D11FB56512_GET_STATE_OFFSET))(this);
	}

	::System::Void set_State(::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState))((::PBYTE)hIl2Cpp + CLASS_1_2CF216D11FB56512_SET_STATE_OFFSET))(this, value);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CF216D11FB56512_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CF216D11FB56512_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CF216D11FB56512_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CF216D11FB56512_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}
};
