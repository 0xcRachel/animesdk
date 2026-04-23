#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/LevelStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_184;
class Class_1_BB4B99DE4C2501EC_5;
class Class_1_F0C8375E94F25B0D;
class Class_1_F3CA30716D4FAF92_9;
class Class_3_626F93E2306641CC;
namespace RPG::Client { class CakeRaceBattleItemSyncData; }
namespace RPG::Client { class CakeRaceEffectDataItem; }
namespace RPG::Client { class CakeRaceGameFightResultData; }
namespace RPG::Client { class CakeRaceGameGuessData; }
namespace RPG::Client { class CakeRaceGameSettlementData; }
namespace RPG::Client { class CakeRaceGameVoteData; }
namespace RPG::Client { class CakeRaceReceiveChatEventData; }
namespace RPG::Client::CakeRace { class CakeRaceFieldSectionGameData; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_79F789DF1A08B53B_ADD_ONBATTLEITEMUSEFAILED_OFFSET UNITYSDK_OFFSET(0xF4701B0)
#define CLASS_1_79F789DF1A08B53B_ADD_ONBETRSP_OFFSET UNITYSDK_OFFSET(0xF46FD70)
#define CLASS_1_79F789DF1A08B53B_ADD_ONCHATRECEIVED_OFFSET UNITYSDK_OFFSET(0xF470270)
#define CLASS_1_79F789DF1A08B53B_ADD_ONDYNAMICCATBORN_OFFSET UNITYSDK_OFFSET(0xF470370)
#define CLASS_1_79F789DF1A08B53B_ADD_ONLEVELSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xF46FC70)
#define CLASS_1_79F789DF1A08B53B_ADD_ONSYNCBATTLEITEM_OFFSET UNITYSDK_OFFSET(0xF4700B0)
#define CLASS_1_79F789DF1A08B53B_ADD_ONVOTECONFIRMRSP_OFFSET UNITYSDK_OFFSET(0xF46FEF0)
#define CLASS_1_79F789DF1A08B53B_ADD_ONVOTERESULT_OFFSET UNITYSDK_OFFSET(0xF46FFB0)
#define CLASS_1_79F789DF1A08B53B_ADD_ONVOTERSP_OFFSET UNITYSDK_OFFSET(0xF46FE30)
#define CLASS_1_79F789DF1A08B53B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF470A30)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_0F43B59E3B7133BF_OFFSET UNITYSDK_OFFSET(0xF470F10)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xF4705E0)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_1A184B6C5F44D594_OFFSET UNITYSDK_OFFSET(0xF471E50)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xF4704F0)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_1F5E0226DAD91587_OFFSET UNITYSDK_OFFSET(0xF470550)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0xF4716F0)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xF470430)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_25E12FC181ADC039_OFFSET UNITYSDK_OFFSET(0xF471E00)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_2764269E3FB2594C_OFFSET UNITYSDK_OFFSET(0xF470C10)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_2D8AD55EE43B28F5_OFFSET UNITYSDK_OFFSET(0xF471430)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_3D0BF1EF6D10A8B1_OFFSET UNITYSDK_OFFSET(0xF471A90)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_5D582D26566137B5_OFFSET UNITYSDK_OFFSET(0xF470440)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0xF470D20)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_70603E2AE56EBD6B_1_OFFSET UNITYSDK_OFFSET(0xF471770)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_70603E2AE56EBD6B_2_OFFSET UNITYSDK_OFFSET(0xF471880)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0xF471480)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_8BABFF9139D92BF8_OFFSET UNITYSDK_OFFSET(0xF471650)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_B76301C0F828A4B6_OFFSET UNITYSDK_OFFSET(0xF471370)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_BF4D9E2C96B4A31E_OFFSET UNITYSDK_OFFSET(0xF4704A0)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_C7D8041F7874259A_OFFSET UNITYSDK_OFFSET(0xF470CD0)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_CFC95121222309BD_1_OFFSET UNITYSDK_OFFSET(0xF471280)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_CFC95121222309BD_2_OFFSET UNITYSDK_OFFSET(0xF471990)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_CFC95121222309BD_3_OFFSET UNITYSDK_OFFSET(0xF471C90)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_CFC95121222309BD_4_OFFSET UNITYSDK_OFFSET(0xF471D40)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0xF470E70)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_D67F16DBEA622A07_OFFSET UNITYSDK_OFFSET(0xF471590)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xF470BC0)
#define CLASS_1_79F789DF1A08B53B_METHOD_1_F2D69028EC518EE7_OFFSET UNITYSDK_OFFSET(0xF470AA0)
#define CLASS_1_79F789DF1A08B53B_REMOVE_ONBATTLEITEMUSEFAILED_OFFSET UNITYSDK_OFFSET(0xF470210)
#define CLASS_1_79F789DF1A08B53B_REMOVE_ONBETRSP_OFFSET UNITYSDK_OFFSET(0xF46FDD0)
#define CLASS_1_79F789DF1A08B53B_REMOVE_ONCHATRECEIVED_OFFSET UNITYSDK_OFFSET(0xF4702F0)
#define CLASS_1_79F789DF1A08B53B_REMOVE_ONDYNAMICCATBORN_OFFSET UNITYSDK_OFFSET(0xF4703D0)
#define CLASS_1_79F789DF1A08B53B_REMOVE_ONLEVELSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xF46FCF0)
#define CLASS_1_79F789DF1A08B53B_REMOVE_ONSYNCBATTLEITEM_OFFSET UNITYSDK_OFFSET(0xF470130)
#define CLASS_1_79F789DF1A08B53B_REMOVE_ONVOTECONFIRMRSP_OFFSET UNITYSDK_OFFSET(0xF46FF50)
#define CLASS_1_79F789DF1A08B53B_REMOVE_ONVOTERESULT_OFFSET UNITYSDK_OFFSET(0xF470030)
#define CLASS_1_79F789DF1A08B53B_REMOVE_ONVOTERSP_OFFSET UNITYSDK_OFFSET(0xF46FE90)
#define CLASS_1_79F789DF1A08B53B__CTOR_OFFSET UNITYSDK_OFFSET(0xF4705D0)

inline static constexpr unsigned int Class_1_79F789DF1A08B53B_TypeDefinitionIndex = 71610;

class Class_1_79F789DF1A08B53B : public ::System::Object
{
public:
	::System::Action_1<::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType>* OnLevelStateChanged; // 0x10
	::System::Action_1<::RPG::Client::CakeRaceGameVoteData*>* OnVoteResult; // 0x18
	::System::Action_1<::System::Boolean>* OnVoteRsp; // 0x20
	::System::Action_1<::System::UInt32>* OnDynamicCatBorn; // 0x28
	::Class_1_F0C8375E94F25B0D* Field_1_1; // 0x30
	::Class_3_626F93E2306641CC* Field_1_0; // 0x38
	::Class_1_F3CA30716D4FAF92_9* Field_1_2; // 0x40
	::System::Action_1<::System::Boolean>* OnVoteConfirmRsp; // 0x48
	::System::Action_1<::RPG::Client::CakeRaceReceiveChatEventData*>* OnChatReceived; // 0x50
	::System::Action_1<::System::Boolean>* OnBetRsp; // 0x58
	::System::Action_1<::RPG::Client::CakeRaceBattleItemSyncData*>* OnSyncBattleItem; // 0x60
	::System::Action* OnBattleItemUseFailed; // 0x68

	::System::Void _ctor(::Class_3_626F93E2306641CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B__CTOR_OFFSET))(this, a1);
	}

	::System::Void add_OnLevelStateChanged(::System::Action_1<::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType>*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_ADD_ONLEVELSTATECHANGED_OFFSET))(this, value);
	}

	::System::Void remove_OnLevelStateChanged(::System::Action_1<::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType>*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_REMOVE_ONLEVELSTATECHANGED_OFFSET))(this, value);
	}

	::System::Void add_OnBetRsp(::System::Action_1<::System::Boolean>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_ADD_ONBETRSP_OFFSET))(this, value);
	}

	::System::Void remove_OnBetRsp(::System::Action_1<::System::Boolean>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_REMOVE_ONBETRSP_OFFSET))(this, value);
	}

	::System::Void add_OnVoteRsp(::System::Action_1<::System::Boolean>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_ADD_ONVOTERSP_OFFSET))(this, value);
	}

	::System::Void remove_OnVoteRsp(::System::Action_1<::System::Boolean>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_REMOVE_ONVOTERSP_OFFSET))(this, value);
	}

	::System::Void add_OnVoteConfirmRsp(::System::Action_1<::System::Boolean>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_ADD_ONVOTECONFIRMRSP_OFFSET))(this, value);
	}

	::System::Void remove_OnVoteConfirmRsp(::System::Action_1<::System::Boolean>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_REMOVE_ONVOTECONFIRMRSP_OFFSET))(this, value);
	}

	::System::Void add_OnVoteResult(::System::Action_1<::RPG::Client::CakeRaceGameVoteData*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::CakeRaceGameVoteData*>*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_ADD_ONVOTERESULT_OFFSET))(this, value);
	}

	::System::Void remove_OnVoteResult(::System::Action_1<::RPG::Client::CakeRaceGameVoteData*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::CakeRaceGameVoteData*>*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_REMOVE_ONVOTERESULT_OFFSET))(this, value);
	}

	::System::Void add_OnSyncBattleItem(::System::Action_1<::RPG::Client::CakeRaceBattleItemSyncData*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::CakeRaceBattleItemSyncData*>*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_ADD_ONSYNCBATTLEITEM_OFFSET))(this, value);
	}

	::System::Void remove_OnSyncBattleItem(::System::Action_1<::RPG::Client::CakeRaceBattleItemSyncData*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::CakeRaceBattleItemSyncData*>*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_REMOVE_ONSYNCBATTLEITEM_OFFSET))(this, value);
	}

	::System::Void add_OnBattleItemUseFailed(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_ADD_ONBATTLEITEMUSEFAILED_OFFSET))(this, value);
	}

	::System::Void remove_OnBattleItemUseFailed(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_REMOVE_ONBATTLEITEMUSEFAILED_OFFSET))(this, value);
	}

	::System::Void add_OnChatReceived(::System::Action_1<::RPG::Client::CakeRaceReceiveChatEventData*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::CakeRaceReceiveChatEventData*>*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_ADD_ONCHATRECEIVED_OFFSET))(this, value);
	}

	::System::Void remove_OnChatReceived(::System::Action_1<::RPG::Client::CakeRaceReceiveChatEventData*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::CakeRaceReceiveChatEventData*>*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_REMOVE_ONCHATRECEIVED_OFFSET))(this, value);
	}

	::System::Void add_OnDynamicCatBorn(::System::Action_1<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_ADD_ONDYNAMICCATBORN_OFFSET))(this, value);
	}

	::System::Void remove_OnDynamicCatBorn(::System::Action_1<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_REMOVE_ONDYNAMICCATBORN_OFFSET))(this, value);
	}

	::Class_1_F0C8375E94F25B0D* Method_1_24748FC20F375725()
	{
		return ((::Class_1_F0C8375E94F25B0D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Int32 Method_1_5D582D26566137B5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_5D582D26566137B5_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType Method_1_BF4D9E2C96B4A31E()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_BF4D9E2C96B4A31E_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	static ::Class_1_79F789DF1A08B53B* Method_1_1F5E0226DAD91587(::Class_3_626F93E2306641CC* a1)
	{
		return ((::Class_1_79F789DF1A08B53B*(*)(::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_1F5E0226DAD91587_OFFSET))(a1);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F2D69028EC518EE7(::Class_1_BB4B99DE4C2501EC_5* a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_5*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_F2D69028EC518EE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_F3CA30716D4FAF92_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_9*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::RPG::Client::CakeRace::CakeRaceFieldSectionGameData* Method_1_2764269E3FB2594C()
	{
		return ((::RPG::Client::CakeRace::CakeRaceFieldSectionGameData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_2764269E3FB2594C_OFFSET))(this);
	}

	::System::UInt32 Method_1_C7D8041F7874259A()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_C7D8041F7874259A_OFFSET))(this);
	}

	::System::Void Method_1_6DFEF4918C679AF0(::Class_1_43BD383C98B4C0C5_184* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_184*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_6DFEF4918C679AF0_OFFSET))(this, a1);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_43BD383C98B4C0C5_184* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_184*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F43B59E3B7133BF(::Class_1_43BD383C98B4C0C5_184* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_184*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_0F43B59E3B7133BF_OFFSET))(this, a1);
	}

	::System::Void Method_1_CFC95121222309BD_1(::Class_1_43BD383C98B4C0C5_184* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_184*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_CFC95121222309BD_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B76301C0F828A4B6(::Class_1_43BD383C98B4C0C5_184* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_184*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_B76301C0F828A4B6_OFFSET))(this, a1);
	}

	::RPG::Client::CakeRaceGameGuessData* Method_1_2D8AD55EE43B28F5()
	{
		return ((::RPG::Client::CakeRaceGameGuessData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_2D8AD55EE43B28F5_OFFSET))(this);
	}

	::System::Void Method_1_70603E2AE56EBD6B(::Class_1_43BD383C98B4C0C5_184* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_184*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_70603E2AE56EBD6B_OFFSET))(this, a1);
	}

	::RPG::Client::CakeRaceGameVoteData* Method_1_D67F16DBEA622A07()
	{
		return ((::RPG::Client::CakeRaceGameVoteData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_D67F16DBEA622A07_OFFSET))(this);
	}

	::RPG::Client::CakeRaceEffectDataItem* Method_1_8BABFF9139D92BF8()
	{
		return ((::RPG::Client::CakeRaceEffectDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_8BABFF9139D92BF8_OFFSET))(this);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}

	::System::Void Method_1_70603E2AE56EBD6B_1(::Class_1_43BD383C98B4C0C5_184* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_184*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_70603E2AE56EBD6B_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_70603E2AE56EBD6B_2(::Class_1_43BD383C98B4C0C5_184* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_184*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_70603E2AE56EBD6B_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CFC95121222309BD_2(::Class_1_43BD383C98B4C0C5_184* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_184*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_CFC95121222309BD_2_OFFSET))(this, a1);
	}

	::System::Single Method_1_3D0BF1EF6D10A8B1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_3D0BF1EF6D10A8B1_OFFSET))(this);
	}

	::System::Void Method_1_CFC95121222309BD_3(::Class_1_43BD383C98B4C0C5_184* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_184*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_CFC95121222309BD_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_CFC95121222309BD_4(::Class_1_43BD383C98B4C0C5_184* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_184*))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_CFC95121222309BD_4_OFFSET))(this, a1);
	}

	::RPG::Client::CakeRaceGameFightResultData* Method_1_25E12FC181ADC039()
	{
		return ((::RPG::Client::CakeRaceGameFightResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_25E12FC181ADC039_OFFSET))(this);
	}

	::RPG::Client::CakeRaceGameSettlementData* Method_1_1A184B6C5F44D594()
	{
		return ((::RPG::Client::CakeRaceGameSettlementData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79F789DF1A08B53B_METHOD_1_1A184B6C5F44D594_OFFSET))(this);
	}
};
