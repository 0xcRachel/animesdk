#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6D8D23B27B8ED78D;
namespace RPG::Client::DiceCombat { class DiceCombatCardLevelUpPageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatChangeDicePageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatCollectionPageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatInviteFriendParam; }
namespace RPG::Client::DiceCombat { class DiceCombatShopPageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatTeamEditDialogMsgParam; }
namespace RPG::Client::DiceCombat { class DiceCombatV2BattleQuitInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatV2BattleResultInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatV2EnterPVESelectStageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatV2GameFlow; }
namespace RPG::Client::DiceCombat { class DiceCombatV2GameFlowDataContainer; }
namespace RPG::Client::DiceCombat { class DiceCombatV2GameLoadingParam; }
namespace RPG::Client::DiceCombat { class DiceCombatV2MPService; }
namespace RPG::Client::DiceCombat { class DiceCombatV2PVPBattlePreparePageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatV2PvEBattlePreparePageParam; }
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_EC9AE4C13166BF65_METHOD_1_06DB2FBC9CAD72ED_OFFSET UNITYSDK_OFFSET(0xED26B40)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_07E5C569CB977DBA_OFFSET UNITYSDK_OFFSET(0xED24D60)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_092EB25B228C0D58_OFFSET UNITYSDK_OFFSET(0xED24F60)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_0C57E9EADE35AB61_OFFSET UNITYSDK_OFFSET(0xED25110)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_0C6D7541C61D9FBB_OFFSET UNITYSDK_OFFSET(0xED24270)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_18303DB98B6C1398_OFFSET UNITYSDK_OFFSET(0xED26E10)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_1F19B15D5FE5AA3C_OFFSET UNITYSDK_OFFSET(0xED26BB0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_2236C6759199946D_OFFSET UNITYSDK_OFFSET(0xED266F0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_27826B369AFE389B_OFFSET UNITYSDK_OFFSET(0xED247E0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_2B4CF14636B07282_OFFSET UNITYSDK_OFFSET(0xED24480)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_2CD6D17D088D5DB9_1_OFFSET UNITYSDK_OFFSET(0xED24C70)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_2CD6D17D088D5DB9_2_OFFSET UNITYSDK_OFFSET(0xED25630)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_2CD6D17D088D5DB9_OFFSET UNITYSDK_OFFSET(0xED24B80)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_392809B0A038F05F_OFFSET UNITYSDK_OFFSET(0xED24F10)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_3953F10B80B18AED_OFFSET UNITYSDK_OFFSET(0xED268D0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_50B07C777762ABC4_OFFSET UNITYSDK_OFFSET(0xED25420)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_54081072B34941C2_OFFSET UNITYSDK_OFFSET(0xED24390)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_55F701097E6DC72C_OFFSET UNITYSDK_OFFSET(0xED24790)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_56EA4C1F084065BE_OFFSET UNITYSDK_OFFSET(0xED260F0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_5A91E2C23EC5FF42_OFFSET UNITYSDK_OFFSET(0xED24610)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_5F6407122F8187E3_OFFSET UNITYSDK_OFFSET(0xED26780)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_71510BC315E5C050_OFFSET UNITYSDK_OFFSET(0xED24220)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_72D6700E3DE0D164_OFFSET UNITYSDK_OFFSET(0xED25810)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_791E9C6EAC2A3F38_OFFSET UNITYSDK_OFFSET(0xED250C0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_8080E22F79F246F0_OFFSET UNITYSDK_OFFSET(0xED255D0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_8655B3BB86B6442A_OFFSET UNITYSDK_OFFSET(0xED252D0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0xED26620)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_94BF08144DC68B7A_OFFSET UNITYSDK_OFFSET(0xED24770)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_9BED8E264653D4E9_OFFSET UNITYSDK_OFFSET(0xED25320)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xED26CD0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_A7412FC66A6CAEB9_OFFSET UNITYSDK_OFFSET(0xED24010)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_A7DBAB321A573F41_OFFSET UNITYSDK_OFFSET(0xED26440)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_AD52E5051C13C465_OFFSET UNITYSDK_OFFSET(0xED257C0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_B71CCF60BE9F186A_OFFSET UNITYSDK_OFFSET(0xED245C0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_B81D70FC49626FA7_OFFSET UNITYSDK_OFFSET(0xED24DB0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_BB93C69D78C65A48_OFFSET UNITYSDK_OFFSET(0xED24110)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0xED25BA0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xED25720)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0xED25E20)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xED240D0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xED241B0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_DF506F9EAA848B62_OFFSET UNITYSDK_OFFSET(0xED25CF0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_E4DDC118595D11DF_OFFSET UNITYSDK_OFFSET(0xED260A0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_E58F38FB76132F46_OFFSET UNITYSDK_OFFSET(0xED24340)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_EE4A7B84F0103FA2_OFFSET UNITYSDK_OFFSET(0xED244D0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_EEAB16CF7663EB29_OFFSET UNITYSDK_OFFSET(0xED25E70)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_FDB01FC350D315F1_OFFSET UNITYSDK_OFFSET(0xED25470)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_FFB92A5D3ECED755_1_OFFSET UNITYSDK_OFFSET(0xED24D00)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_FFB92A5D3ECED755_2_OFFSET UNITYSDK_OFFSET(0xED256C0)
#define CLASS_1_EC9AE4C13166BF65_METHOD_1_FFB92A5D3ECED755_OFFSET UNITYSDK_OFFSET(0xED24C10)
#define CLASS_1_EC9AE4C13166BF65__CTOR_OFFSET UNITYSDK_OFFSET(0xED240C0)
#define CLASS_1_EC9AE4C13166BF65___CHECKANDTRYRECONNECTTOFIGHT_B__48_0_OFFSET UNITYSDK_OFFSET(0xED26EB0)
#define CLASS_1_EC9AE4C13166BF65___CHECKANDTRYRECONNECTTOFIGHT_B__48_1_OFFSET UNITYSDK_OFFSET(0xED272B0)
#define CLASS_1_EC9AE4C13166BF65___CHECKANDTRYRECONNECTTOFIGHT_B__48_2_OFFSET UNITYSDK_OFFSET(0xED271C0)
#define CLASS_1_EC9AE4C13166BF65___CHECKANDTRYRECONNECTTOFIGHT_B__48_3_OFFSET UNITYSDK_OFFSET(0xED27290)
#define CLASS_1_EC9AE4C13166BF65___CHECKANDTRYRECONNECTTOFIGHT_B__48_4_OFFSET UNITYSDK_OFFSET(0xED27260)

inline static constexpr unsigned int Class_1_EC9AE4C13166BF65_TypeDefinitionIndex = 69947;

class Class_1_EC9AE4C13166BF65 : public ::System::Object
{
public:
	::RPG::Client::DiceCombat::DiceCombatV2GameFlow* Field_1_0; // 0x10
	::Class_1_6D8D23B27B8ED78D* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor(::RPG::Client::DiceCombat::DiceCombatV2GameFlow* a1, ::Class_1_6D8D23B27B8ED78D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2GameFlow*, ::Class_1_6D8D23B27B8ED78D*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_1_EC9AE4C13166BF65* Method_1_A7412FC66A6CAEB9(::RPG::Client::DiceCombat::DiceCombatV2GameFlow* a1, ::Class_1_6D8D23B27B8ED78D* a2)
	{
		return ((::Class_1_EC9AE4C13166BF65*(*)(::RPG::Client::DiceCombat::DiceCombatV2GameFlow*, ::Class_1_6D8D23B27B8ED78D*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_A7412FC66A6CAEB9_OFFSET))(a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_BB93C69D78C65A48()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_BB93C69D78C65A48_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_71510BC315E5C050()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_71510BC315E5C050_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_0C6D7541C61D9FBB()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_0C6D7541C61D9FBB_OFFSET))(this);
	}

	::System::Void Method_1_E58F38FB76132F46(::RPG::Client::DiceCombat::DiceCombatV2GameLoadingParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2GameLoadingParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_E58F38FB76132F46_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_54081072B34941C2(::RPG::Client::DiceCombat::DiceCombatV2GameLoadingParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2GameLoadingParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_54081072B34941C2_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B4CF14636B07282(::RPG::Client::DiceCombat::DiceCombatV2BattleResultInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2BattleResultInfo*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_2B4CF14636B07282_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_EE4A7B84F0103FA2(::RPG::Client::DiceCombat::DiceCombatV2BattleResultInfo* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2BattleResultInfo*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_EE4A7B84F0103FA2_OFFSET))(this, a1);
	}

	::System::Void Method_1_B71CCF60BE9F186A(::RPG::Client::DiceCombat::DiceCombatV2PvEBattlePreparePageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvEBattlePreparePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_B71CCF60BE9F186A_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_5A91E2C23EC5FF42(::RPG::Client::DiceCombat::DiceCombatV2PvEBattlePreparePageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvEBattlePreparePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_5A91E2C23EC5FF42_OFFSET))(this, a1);
	}

	::System::Void Method_1_55F701097E6DC72C(::RPG::Client::DiceCombat::DiceCombatV2PVPBattlePreparePageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PVPBattlePreparePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_55F701097E6DC72C_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_27826B369AFE389B(::RPG::Client::DiceCombat::DiceCombatV2PVPBattlePreparePageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PVPBattlePreparePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_27826B369AFE389B_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CD6D17D088D5DB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_2CD6D17D088D5DB9_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_FFB92A5D3ECED755()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_FFB92A5D3ECED755_OFFSET))(this);
	}

	::System::Void Method_1_2CD6D17D088D5DB9_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_2CD6D17D088D5DB9_1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_FFB92A5D3ECED755_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_FFB92A5D3ECED755_1_OFFSET))(this);
	}

	::System::Void Method_1_07E5C569CB977DBA(::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_07E5C569CB977DBA_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_B81D70FC49626FA7(::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_B81D70FC49626FA7_OFFSET))(this, a1);
	}

	::System::Void Method_1_392809B0A038F05F(::RPG::Client::DiceCombat::DiceCombatShopPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatShopPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_392809B0A038F05F_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_092EB25B228C0D58(::RPG::Client::DiceCombat::DiceCombatShopPageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatShopPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_092EB25B228C0D58_OFFSET))(this, a1);
	}

	::System::Void Method_1_791E9C6EAC2A3F38(::RPG::Client::DiceCombat::DiceCombatCollectionPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_791E9C6EAC2A3F38_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_0C57E9EADE35AB61(::RPG::Client::DiceCombat::DiceCombatCollectionPageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_0C57E9EADE35AB61_OFFSET))(this, a1);
	}

	::System::Void Method_1_8655B3BB86B6442A(::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_8655B3BB86B6442A_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_9BED8E264653D4E9(::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_9BED8E264653D4E9_OFFSET))(this, a1);
	}

	::System::Void Method_1_50B07C777762ABC4(::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_50B07C777762ABC4_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_FDB01FC350D315F1(::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_FDB01FC350D315F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_8080E22F79F246F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_8080E22F79F246F0_OFFSET))(this);
	}

	::System::Void Method_1_2CD6D17D088D5DB9_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_2CD6D17D088D5DB9_2_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_FFB92A5D3ECED755_2()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_FFB92A5D3ECED755_2_OFFSET))(this);
	}

	::System::Void Method_1_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_AD52E5051C13C465(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_AD52E5051C13C465_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_72D6700E3DE0D164(::System::Object* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_72D6700E3DE0D164_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_DF506F9EAA848B62(::System::Boolean a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_DF506F9EAA848B62_OFFSET))(this, a1);
	}

	::System::Void Method_1_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_C5F2E178DAEB1793_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_EEAB16CF7663EB29()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_EEAB16CF7663EB29_OFFSET))(this);
	}

	::System::Void Method_1_E4DDC118595D11DF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_E4DDC118595D11DF_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_56EA4C1F084065BE(::System::Object* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_56EA4C1F084065BE_OFFSET))(this, a1);
	}

	::System::Void Method_1_A7DBAB321A573F41(::RPG::Client::DiceCombat::DiceCombatV2BattleResultInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2BattleResultInfo*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_A7DBAB321A573F41_OFFSET))(this, a1);
	}

	::System::Void Method_1_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_913947B6596EB50A_OFFSET))(this);
	}

	::System::Void Method_1_2236C6759199946D(::RPG::Client::DiceCombat::DiceCombatV2BattleQuitInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2BattleQuitInfo*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_2236C6759199946D_OFFSET))(this, a1);
	}

	::System::Void Method_1_5F6407122F8187E3(::RPG::Client::DiceCombat::DiceCombatV2EnterPVESelectStageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2EnterPVESelectStageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_5F6407122F8187E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F19B15D5FE5AA3C(::RPG::Client::DiceCombat::DiceCombatInviteFriendParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatInviteFriendParam*))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_1F19B15D5FE5AA3C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_3953F10B80B18AED(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_3953F10B80B18AED_OFFSET))(this, a1);
	}

	::System::Void Method_1_06DB2FBC9CAD72ED(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_06DB2FBC9CAD72ED_OFFSET))(this, a1);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::RPG::Client::DiceCombat::DiceCombatV2GameFlowDataContainer* Method_1_94BF08144DC68B7A()
	{
		return ((::RPG::Client::DiceCombat::DiceCombatV2GameFlowDataContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_94BF08144DC68B7A_OFFSET))(this);
	}

	::RPG::Client::DiceCombat::DiceCombatV2MPService* Method_1_18303DB98B6C1398()
	{
		return ((::RPG::Client::DiceCombat::DiceCombatV2MPService*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65_METHOD_1_18303DB98B6C1398_OFFSET))(this);
	}

	::System::Void __CheckAndTryReconnectToFight_b__48_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___CHECKANDTRYRECONNECTTOFIGHT_B__48_0_OFFSET))(this);
	}

	::System::Void __CheckAndTryReconnectToFight_b__48_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___CHECKANDTRYRECONNECTTOFIGHT_B__48_2_OFFSET))(this);
	}

	::System::Void __CheckAndTryReconnectToFight_b__48_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___CHECKANDTRYRECONNECTTOFIGHT_B__48_4_OFFSET))(this);
	}

	::System::Void __CheckAndTryReconnectToFight_b__48_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___CHECKANDTRYRECONNECTTOFIGHT_B__48_3_OFFSET))(this);
	}

	::System::Void __CheckAndTryReconnectToFight_b__48_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___CHECKANDTRYRECONNECTTOFIGHT_B__48_1_OFFSET))(this);
	}
};
