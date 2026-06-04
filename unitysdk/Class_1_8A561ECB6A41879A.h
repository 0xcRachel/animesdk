#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/LevelStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_195;
class Class_1_F0C8375E94F25B0D;
class Class_1_F3CA30716D4FAF92_9;
class Class_1_FBCD4FF549575A07_1;
class Class_3_FA020C2C23A72B3F;
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

#define CLASS_1_8A561ECB6A41879A_ADD_ONBATTLEITEMUSEFAILED_OFFSET UNITYSDK_OFFSET(0x171AD860)
#define CLASS_1_8A561ECB6A41879A_ADD_ONBETRSP_OFFSET UNITYSDK_OFFSET(0x171AD420)
#define CLASS_1_8A561ECB6A41879A_ADD_ONCHATRECEIVED_OFFSET UNITYSDK_OFFSET(0x171AD920)
#define CLASS_1_8A561ECB6A41879A_ADD_ONDYNAMICCATBORN_OFFSET UNITYSDK_OFFSET(0x171ADA20)
#define CLASS_1_8A561ECB6A41879A_ADD_ONLEVELSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x171AD320)
#define CLASS_1_8A561ECB6A41879A_ADD_ONSYNCBATTLEITEM_OFFSET UNITYSDK_OFFSET(0x171AD760)
#define CLASS_1_8A561ECB6A41879A_ADD_ONVOTECONFIRMRSP_OFFSET UNITYSDK_OFFSET(0x171AD5A0)
#define CLASS_1_8A561ECB6A41879A_ADD_ONVOTERESULT_OFFSET UNITYSDK_OFFSET(0x171AD660)
#define CLASS_1_8A561ECB6A41879A_ADD_ONVOTERSP_OFFSET UNITYSDK_OFFSET(0x171AD4E0)
#define CLASS_1_8A561ECB6A41879A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x171AE170)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x171ADC90)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_1A184B6C5F44D594_OFFSET UNITYSDK_OFFSET(0x163D4160)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x171ADBA0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_1F5E0226DAD91587_OFFSET UNITYSDK_OFFSET(0x171ADC00)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x171AEE60)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x171ADAE0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_25E12FC181ADC039_OFFSET UNITYSDK_OFFSET(0x163D4110)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_2764269E3FB2594C_OFFSET UNITYSDK_OFFSET(0x171AE350)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_2D8AD55EE43B28F5_OFFSET UNITYSDK_OFFSET(0x171AEB90)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_369BB5E7FA6A1768_1_OFFSET UNITYSDK_OFFSET(0x171AEEE0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_369BB5E7FA6A1768_2_OFFSET UNITYSDK_OFFSET(0x171AF000)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_369BB5E7FA6A1768_3_OFFSET UNITYSDK_OFFSET(0x163D3F90)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_369BB5E7FA6A1768_OFFSET UNITYSDK_OFFSET(0x171AEBE0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_3ACD7E64D848555E_OFFSET UNITYSDK_OFFSET(0x171AE1E0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_3B5C6D652C514B37_OFFSET UNITYSDK_OFFSET(0x171AE460)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_3D0BF1EF6D10A8B1_OFFSET UNITYSDK_OFFSET(0x171AF240)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_5D582D26566137B5_OFFSET UNITYSDK_OFFSET(0x171ADAF0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_6815AD8D97959763_OFFSET UNITYSDK_OFFSET(0x171AE650)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x171AE5B0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0x163D4050)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_8BABFF9139D92BF8_OFFSET UNITYSDK_OFFSET(0x171AEDC0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_BF4D9E2C96B4A31E_OFFSET UNITYSDK_OFFSET(0x171ADB50)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_C7D8041F7874259A_OFFSET UNITYSDK_OFFSET(0x171AE410)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_D67F16DBEA622A07_OFFSET UNITYSDK_OFFSET(0x171AED00)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_E484621534821291_1_OFFSET UNITYSDK_OFFSET(0x171AF120)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_E484621534821291_OFFSET UNITYSDK_OFFSET(0x171AE9D0)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x171AE300)
#define CLASS_1_8A561ECB6A41879A_METHOD_1_F7097473EC9DE578_OFFSET UNITYSDK_OFFSET(0x171AEAD0)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONBATTLEITEMUSEFAILED_OFFSET UNITYSDK_OFFSET(0x171AD8C0)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONBETRSP_OFFSET UNITYSDK_OFFSET(0x171AD480)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONCHATRECEIVED_OFFSET UNITYSDK_OFFSET(0x171AD9A0)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONDYNAMICCATBORN_OFFSET UNITYSDK_OFFSET(0x171ADA80)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONLEVELSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x171AD3A0)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONSYNCBATTLEITEM_OFFSET UNITYSDK_OFFSET(0x171AD7E0)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONVOTECONFIRMRSP_OFFSET UNITYSDK_OFFSET(0x171AD600)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONVOTERESULT_OFFSET UNITYSDK_OFFSET(0x171AD6E0)
#define CLASS_1_8A561ECB6A41879A_REMOVE_ONVOTERSP_OFFSET UNITYSDK_OFFSET(0x171AD540)
#define CLASS_1_8A561ECB6A41879A__CTOR_OFFSET UNITYSDK_OFFSET(0x171ADC80)

inline static constexpr unsigned int Class_1_8A561ECB6A41879A_TypeDefinitionIndex = 72632;

class Class_1_8A561ECB6A41879A : public ::System::Object
{
public:
	::System::Action_1<::RPG::Client::CakeRaceBattleItemSyncData*>* OnSyncBattleItem; // 0x10
	::Class_3_FA020C2C23A72B3F* Field_1_1; // 0x18
	::Class_1_F0C8375E94F25B0D* Field_1_2; // 0x20
	::System::Action_1<::System::UInt32>* OnDynamicCatBorn; // 0x28
	::System::Action_1<::System::Boolean>* OnVoteRsp; // 0x30
	::System::Action_1<::System::Boolean>* OnVoteConfirmRsp; // 0x38
	::System::Action_1<::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType>* OnLevelStateChanged; // 0x40
	::System::Action_1<::RPG::Client::CakeRaceReceiveChatEventData*>* OnChatReceived; // 0x48
	::System::Action_1<::RPG::Client::CakeRaceGameVoteData*>* OnVoteResult; // 0x50
	::Class_1_F3CA30716D4FAF92_9* Field_1_9; // 0x58
	::System::Action* OnBattleItemUseFailed; // 0x60
	::System::Action_1<::System::Boolean>* OnBetRsp; // 0x68

	::System::Void _ctor(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A__CTOR_OFFSET))(this, a1);
	}

	::System::Void add_OnLevelStateChanged(::System::Action_1<::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_ADD_ONLEVELSTATECHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnLevelStateChanged(::System::Action_1<::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_REMOVE_ONLEVELSTATECHANGED_OFFSET))(this, a1);
	}

	::System::Void add_OnBetRsp(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_ADD_ONBETRSP_OFFSET))(this, a1);
	}

	::System::Void remove_OnBetRsp(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_REMOVE_ONBETRSP_OFFSET))(this, a1);
	}

	::System::Void add_OnVoteRsp(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_ADD_ONVOTERSP_OFFSET))(this, a1);
	}

	::System::Void remove_OnVoteRsp(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_REMOVE_ONVOTERSP_OFFSET))(this, a1);
	}

	::System::Void add_OnVoteConfirmRsp(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_ADD_ONVOTECONFIRMRSP_OFFSET))(this, a1);
	}

	::System::Void remove_OnVoteConfirmRsp(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_REMOVE_ONVOTECONFIRMRSP_OFFSET))(this, a1);
	}

	::System::Void add_OnVoteResult(::System::Action_1<::RPG::Client::CakeRaceGameVoteData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::CakeRaceGameVoteData*>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_ADD_ONVOTERESULT_OFFSET))(this, a1);
	}

	::System::Void remove_OnVoteResult(::System::Action_1<::RPG::Client::CakeRaceGameVoteData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::CakeRaceGameVoteData*>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_REMOVE_ONVOTERESULT_OFFSET))(this, a1);
	}

	::System::Void add_OnSyncBattleItem(::System::Action_1<::RPG::Client::CakeRaceBattleItemSyncData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::CakeRaceBattleItemSyncData*>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_ADD_ONSYNCBATTLEITEM_OFFSET))(this, a1);
	}

	::System::Void remove_OnSyncBattleItem(::System::Action_1<::RPG::Client::CakeRaceBattleItemSyncData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::CakeRaceBattleItemSyncData*>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_REMOVE_ONSYNCBATTLEITEM_OFFSET))(this, a1);
	}

	::System::Void add_OnBattleItemUseFailed(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_ADD_ONBATTLEITEMUSEFAILED_OFFSET))(this, a1);
	}

	::System::Void remove_OnBattleItemUseFailed(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_REMOVE_ONBATTLEITEMUSEFAILED_OFFSET))(this, a1);
	}

	::System::Void add_OnChatReceived(::System::Action_1<::RPG::Client::CakeRaceReceiveChatEventData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::CakeRaceReceiveChatEventData*>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_ADD_ONCHATRECEIVED_OFFSET))(this, a1);
	}

	::System::Void remove_OnChatReceived(::System::Action_1<::RPG::Client::CakeRaceReceiveChatEventData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::CakeRaceReceiveChatEventData*>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_REMOVE_ONCHATRECEIVED_OFFSET))(this, a1);
	}

	::System::Void add_OnDynamicCatBorn(::System::Action_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_ADD_ONDYNAMICCATBORN_OFFSET))(this, a1);
	}

	::System::Void remove_OnDynamicCatBorn(::System::Action_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_REMOVE_ONDYNAMICCATBORN_OFFSET))(this, a1);
	}

	::Class_1_F0C8375E94F25B0D* Method_1_24748FC20F375725()
	{
		return ((::Class_1_F0C8375E94F25B0D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Int32 Method_1_5D582D26566137B5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_5D582D26566137B5_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType Method_1_BF4D9E2C96B4A31E()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_BF4D9E2C96B4A31E_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	static ::Class_1_8A561ECB6A41879A* Method_1_1F5E0226DAD91587(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::Class_1_8A561ECB6A41879A*(*)(::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_1F5E0226DAD91587_OFFSET))(a1);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_3ACD7E64D848555E(::Class_1_FBCD4FF549575A07_1* a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FBCD4FF549575A07_1*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_3ACD7E64D848555E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_F3CA30716D4FAF92_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_9*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::RPG::Client::CakeRace::CakeRaceFieldSectionGameData* Method_1_2764269E3FB2594C()
	{
		return ((::RPG::Client::CakeRace::CakeRaceFieldSectionGameData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_2764269E3FB2594C_OFFSET))(this);
	}

	::System::UInt32 Method_1_C7D8041F7874259A()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_C7D8041F7874259A_OFFSET))(this);
	}

	::System::Void Method_1_3B5C6D652C514B37(::Class_1_43BD383C98B4C0C5_195* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_195*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_3B5C6D652C514B37_OFFSET))(this, a1);
	}

	::System::Void Method_1_70437D85C11C5222(::Class_1_43BD383C98B4C0C5_195* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_195*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Void Method_1_6815AD8D97959763(::Class_1_43BD383C98B4C0C5_195* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_195*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_6815AD8D97959763_OFFSET))(this, a1);
	}

	::System::Void Method_1_E484621534821291(::Class_1_43BD383C98B4C0C5_195* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_195*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_E484621534821291_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7097473EC9DE578(::Class_1_43BD383C98B4C0C5_195* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_195*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_F7097473EC9DE578_OFFSET))(this, a1);
	}

	::RPG::Client::CakeRaceGameGuessData* Method_1_2D8AD55EE43B28F5()
	{
		return ((::RPG::Client::CakeRaceGameGuessData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_2D8AD55EE43B28F5_OFFSET))(this);
	}

	::System::Void Method_1_369BB5E7FA6A1768(::Class_1_43BD383C98B4C0C5_195* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_195*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_369BB5E7FA6A1768_OFFSET))(this, a1);
	}

	::RPG::Client::CakeRaceGameVoteData* Method_1_D67F16DBEA622A07()
	{
		return ((::RPG::Client::CakeRaceGameVoteData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_D67F16DBEA622A07_OFFSET))(this);
	}

	::RPG::Client::CakeRaceEffectDataItem* Method_1_8BABFF9139D92BF8()
	{
		return ((::RPG::Client::CakeRaceEffectDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_8BABFF9139D92BF8_OFFSET))(this);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}

	::System::Void Method_1_369BB5E7FA6A1768_1(::Class_1_43BD383C98B4C0C5_195* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_195*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_369BB5E7FA6A1768_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_369BB5E7FA6A1768_2(::Class_1_43BD383C98B4C0C5_195* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_195*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_369BB5E7FA6A1768_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_E484621534821291_1(::Class_1_43BD383C98B4C0C5_195* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_195*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_E484621534821291_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_3D0BF1EF6D10A8B1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_3D0BF1EF6D10A8B1_OFFSET))(this);
	}

	::System::Void Method_1_369BB5E7FA6A1768_3(::Class_1_43BD383C98B4C0C5_195* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_195*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_369BB5E7FA6A1768_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_70603E2AE56EBD6B(::Class_1_43BD383C98B4C0C5_195* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_195*))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_70603E2AE56EBD6B_OFFSET))(this, a1);
	}

	::RPG::Client::CakeRaceGameFightResultData* Method_1_25E12FC181ADC039()
	{
		return ((::RPG::Client::CakeRaceGameFightResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_25E12FC181ADC039_OFFSET))(this);
	}

	::RPG::Client::CakeRaceGameSettlementData* Method_1_1A184B6C5F44D594()
	{
		return ((::RPG::Client::CakeRaceGameSettlementData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A_METHOD_1_1A184B6C5F44D594_OFFSET))(this);
	}
};
