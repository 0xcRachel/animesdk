#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A4EF9A599AC1E545;
class Class_3_57ACCC113D2215C7;
class Class_3_C71DDDA66421C541;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::DiceCombat { class DiceCombatBattleQuitInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatBattleResultInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatCardLevelUpPageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatChangeDicePageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatCollectionPageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatGameFlow; }
namespace RPG::Client::DiceCombat { class DiceCombatGameFlowDataContainer; }
namespace RPG::Client::DiceCombat { class DiceCombatGameLoadingParam; }
namespace RPG::Client::DiceCombat { class DiceCombatInviteFriendParam; }
namespace RPG::Client::DiceCombat { class DiceCombatNPCEntrancePageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatPVEProcessPageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatPVPStartMatchParam; }
namespace RPG::Client::DiceCombat { class DiceCombatPvEBattlePreparePageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatShopPageParam; }
namespace RPG::Client::DiceCombat { class DiceCombatStartPVPGameParam; }
namespace RPG::Client::DiceCombat { class DiceCombatTeamEditDialogMsgParam; }
namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_01820C560DDC5DD9_METHOD_1_06AD4E9BBDD4D112_OFFSET UNITYSDK_OFFSET(0x169E3370)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_0767AB3DF0AA516F_OFFSET UNITYSDK_OFFSET(0x169DF530)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_10C83B4AE995C68E_OFFSET UNITYSDK_OFFSET(0x169E07C0)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_1577ED9EEB8249E2_OFFSET UNITYSDK_OFFSET(0x169E1750)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_217E5B668E83DFA8_OFFSET UNITYSDK_OFFSET(0x169E0C50)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_2985744682445383_OFFSET UNITYSDK_OFFSET(0x169E0690)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_2C6D70AACFC3F60C_OFFSET UNITYSDK_OFFSET(0x169E0FE0)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_2C95AFAD0256302F_1_OFFSET UNITYSDK_OFFSET(0x169DF230)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x169DF060)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_4287F255B64C2E4A_OFFSET UNITYSDK_OFFSET(0x169E0900)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_4FCDE86CC03175FB_OFFSET UNITYSDK_OFFSET(0x169E1120)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_5532FD50A412C698_OFFSET UNITYSDK_OFFSET(0x169E0E10)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_57F015DFC718ABA3_OFFSET UNITYSDK_OFFSET(0x169DFB40)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_704804837EF4D390_OFFSET UNITYSDK_OFFSET(0x169E0770)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_7334C2A08B7AB4FC_OFFSET UNITYSDK_OFFSET(0x169DF400)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_73C91468E3177DD9_OFFSET UNITYSDK_OFFSET(0x169DEE50)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x169DEFF0)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_7F50642A2C5201F7_OFFSET UNITYSDK_OFFSET(0x169E21A0)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_8882A95D90D26E8A_OFFSET UNITYSDK_OFFSET(0x169E2590)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_9330E952F1D4442A_OFFSET UNITYSDK_OFFSET(0x169E0510)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_A2E29675A3D496BD_1_OFFSET UNITYSDK_OFFSET(0x169DF280)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_A2E29675A3D496BD_OFFSET UNITYSDK_OFFSET(0x169DF0B0)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_A44277BCD64E622E_OFFSET UNITYSDK_OFFSET(0x169DF450)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_AAD98405180B7E37_OFFSET UNITYSDK_OFFSET(0x169E12E0)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_B6BB704B01BCC35B_1_OFFSET UNITYSDK_OFFSET(0x169E2780)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0x169DF660)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_BB3DE7925D04F35D_OFFSET UNITYSDK_OFFSET(0x169DFB90)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_BB93C69D78C65A48_OFFSET UNITYSDK_OFFSET(0x169DEF50)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_BC191F10BD8E306D_OFFSET UNITYSDK_OFFSET(0x169DF6B0)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_BE74F62EEF508742_OFFSET UNITYSDK_OFFSET(0x169E2890)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_C477D6801237DC5E_OFFSET UNITYSDK_OFFSET(0x169E0560)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x169DEF10)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_D30ADAD4C85C26FE_OFFSET UNITYSDK_OFFSET(0x169E16B0)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_D8E1C14A662ADBC5_OFFSET UNITYSDK_OFFSET(0x169E1030)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_D9AAF6205BC1365B_OFFSET UNITYSDK_OFFSET(0x169E0CA0)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_D9F2F62D2A196B2E_OFFSET UNITYSDK_OFFSET(0x169E1170)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_DE4FED0F25A68BAE_OFFSET UNITYSDK_OFFSET(0x169E2330)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_E09D592A696D3352_OFFSET UNITYSDK_OFFSET(0x169E1770)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_E404EF13F6333461_OFFSET UNITYSDK_OFFSET(0x169E0350)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_EFC62EC38BD87794_OFFSET UNITYSDK_OFFSET(0x169E03A0)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0x169E08A0)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_F5DC3FC87C471995_OFFSET UNITYSDK_OFFSET(0x169E0E60)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_F8102C80C1981C17_OFFSET UNITYSDK_OFFSET(0x169E0640)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_F92232ABCBA95FE7_OFFSET UNITYSDK_OFFSET(0x169E3210)
#define CLASS_1_01820C560DDC5DD9_METHOD_1_FF6EE7287FE6174B_OFFSET UNITYSDK_OFFSET(0x169DF580)
#define CLASS_1_01820C560DDC5DD9__CTOR_OFFSET UNITYSDK_OFFSET(0x169DEF00)
#define CLASS_1_01820C560DDC5DD9__HANDLESHOWFRIENDPVPBATTLEPREPAREPAGE_B__15_0_OFFSET UNITYSDK_OFFSET(0x169E3870)
#define CLASS_1_01820C560DDC5DD9__HANDLESHOWFRIENDPVPBATTLEPREPAREPAGE_B__15_1_OFFSET UNITYSDK_OFFSET(0x169E3950)
#define CLASS_1_01820C560DDC5DD9__HANDLESHOWFRIENDPVPBATTLEPREPAREPAGE_B__15_2_OFFSET UNITYSDK_OFFSET(0x169E3AC0)
#define CLASS_1_01820C560DDC5DD9__HANDLESHOWPVPBATTLEPREPAREPAGE_B__13_0_OFFSET UNITYSDK_OFFSET(0x169E3540)
#define CLASS_1_01820C560DDC5DD9__HANDLESHOWPVPBATTLEPREPAREPAGE_B__13_1_OFFSET UNITYSDK_OFFSET(0x169E3620)
#define CLASS_1_01820C560DDC5DD9__HANDLESHOWPVPBATTLEPREPAREPAGE_B__13_2_OFFSET UNITYSDK_OFFSET(0x169E3790)

inline static constexpr unsigned int Class_1_01820C560DDC5DD9_TypeDefinitionIndex = 70683;

class Class_1_01820C560DDC5DD9 : public ::System::Object
{
public:
	::Class_1_A4EF9A599AC1E545* Field_1_0; // 0x10
	::RPG::Client::DiceCombat::DiceCombatGameFlow* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::DiceCombat::DiceCombatGameFlow* a1, ::Class_1_A4EF9A599AC1E545* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGameFlow*, ::Class_1_A4EF9A599AC1E545*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_1_01820C560DDC5DD9* Method_1_73C91468E3177DD9(::RPG::Client::DiceCombat::DiceCombatGameFlow* a1, ::Class_1_A4EF9A599AC1E545* a2)
	{
		return ((::Class_1_01820C560DDC5DD9*(*)(::RPG::Client::DiceCombat::DiceCombatGameFlow*, ::Class_1_A4EF9A599AC1E545*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_73C91468E3177DD9_OFFSET))(a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_BB93C69D78C65A48()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_BB93C69D78C65A48_OFFSET))(this);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_A2E29675A3D496BD()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_A2E29675A3D496BD_OFFSET))(this);
	}

	::System::Void Method_1_2C95AFAD0256302F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_2C95AFAD0256302F_1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_A2E29675A3D496BD_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_A2E29675A3D496BD_1_OFFSET))(this);
	}

	::System::Void Method_1_7334C2A08B7AB4FC(::RPG::Client::DiceCombat::DiceCombatNPCEntrancePageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatNPCEntrancePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_7334C2A08B7AB4FC_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_A44277BCD64E622E(::RPG::Client::DiceCombat::DiceCombatNPCEntrancePageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatNPCEntrancePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_A44277BCD64E622E_OFFSET))(this, a1);
	}

	::System::Void Method_1_0767AB3DF0AA516F(::RPG::Client::DiceCombat::DiceCombatPvEBattlePreparePageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPvEBattlePreparePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_0767AB3DF0AA516F_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_FF6EE7287FE6174B(::RPG::Client::DiceCombat::DiceCombatPvEBattlePreparePageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPvEBattlePreparePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_FF6EE7287FE6174B_OFFSET))(this, a1);
	}

	::System::Void Method_1_B6BB704B01BCC35B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_B6BB704B01BCC35B_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_BC191F10BD8E306D()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_BC191F10BD8E306D_OFFSET))(this);
	}

	::System::Void Method_1_57F015DFC718ABA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_57F015DFC718ABA3_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_BB3DE7925D04F35D()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_BB3DE7925D04F35D_OFFSET))(this);
	}

	::System::Void Method_1_E404EF13F6333461(::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_E404EF13F6333461_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_EFC62EC38BD87794(::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_EFC62EC38BD87794_OFFSET))(this, a1);
	}

	::System::Void Method_1_9330E952F1D4442A(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_9330E952F1D4442A_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_C477D6801237DC5E(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_C477D6801237DC5E_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8102C80C1981C17(::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_F8102C80C1981C17_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_2985744682445383(::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_2985744682445383_OFFSET))(this, a1);
	}

	::System::Void Method_1_704804837EF4D390(::RPG::Client::DiceCombat::DiceCombatGameLoadingParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGameLoadingParam*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_704804837EF4D390_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_10C83B4AE995C68E(::RPG::Client::DiceCombat::DiceCombatGameLoadingParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGameLoadingParam*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_10C83B4AE995C68E_OFFSET))(this, a1);
	}

	::System::Void Method_1_F0F8DE036FE283F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_F0F8DE036FE283F6_OFFSET))(this);
	}

	::System::Void Method_1_4287F255B64C2E4A(::RPG::Client::DiceCombat::DiceCombatBattleResultInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatBattleResultInfo*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_4287F255B64C2E4A_OFFSET))(this, a1);
	}

	::System::Void Method_1_217E5B668E83DFA8(::RPG::Client::DiceCombat::DiceCombatShopPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatShopPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_217E5B668E83DFA8_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_D9AAF6205BC1365B(::RPG::Client::DiceCombat::DiceCombatShopPageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatShopPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_D9AAF6205BC1365B_OFFSET))(this, a1);
	}

	::System::Void Method_1_5532FD50A412C698(::RPG::Client::DiceCombat::DiceCombatCollectionPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_5532FD50A412C698_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_F5DC3FC87C471995(::RPG::Client::DiceCombat::DiceCombatCollectionPageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_F5DC3FC87C471995_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C6D70AACFC3F60C(::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_2C6D70AACFC3F60C_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_D8E1C14A662ADBC5(::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_D8E1C14A662ADBC5_OFFSET))(this, a1);
	}

	::System::Void Method_1_4FCDE86CC03175FB(::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_4FCDE86CC03175FB_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_D9F2F62D2A196B2E(::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_D9F2F62D2A196B2E_OFFSET))(this, a1);
	}

	::System::Void Method_1_AAD98405180B7E37(::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_AAD98405180B7E37_OFFSET))(this, a1);
	}

	::System::Void Method_1_D30ADAD4C85C26FE(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_D30ADAD4C85C26FE_OFFSET))(this, a1);
	}

	::System::Void Method_1_E09D592A696D3352(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_E09D592A696D3352_OFFSET))(this, a1);
	}

	::System::Void Method_1_DE4FED0F25A68BAE(::RPG::Client::DiceCombat::DiceCombatPVPStartMatchParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPVPStartMatchParam*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_DE4FED0F25A68BAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_8882A95D90D26E8A(::RPG::Client::DiceCombat::DiceCombatStartPVPGameParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatStartPVPGameParam*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_8882A95D90D26E8A_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_7F50642A2C5201F7(::Class_3_57ACCC113D2215C7* a1, ::System::Action_1<::Class_3_C71DDDA66421C541*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_3_57ACCC113D2215C7*, ::System::Action_1<::Class_3_C71DDDA66421C541*>*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_7F50642A2C5201F7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B6BB704B01BCC35B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_B6BB704B01BCC35B_1_OFFSET))(this);
	}

	::System::Void Method_1_BE74F62EEF508742(::RPG::Client::DiceCombat::DiceCombatBattleResultInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatBattleResultInfo*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_BE74F62EEF508742_OFFSET))(this, a1);
	}

	::System::Void Method_1_F92232ABCBA95FE7(::RPG::Client::DiceCombat::DiceCombatBattleQuitInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatBattleQuitInfo*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_F92232ABCBA95FE7_OFFSET))(this, a1);
	}

	::System::Void Method_1_06AD4E9BBDD4D112(::RPG::Client::DiceCombat::DiceCombatInviteFriendParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatInviteFriendParam*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_06AD4E9BBDD4D112_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::Client::DiceCombat::DiceCombatGameFlowDataContainer* Method_1_1577ED9EEB8249E2()
	{
		return ((::RPG::Client::DiceCombat::DiceCombatGameFlowDataContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9_METHOD_1_1577ED9EEB8249E2_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _HandleShowPvPBattlePreparePage_b__13_0(::RPG::Client::BaseLobby* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9__HANDLESHOWPVPBATTLEPREPAREPAGE_B__13_0_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* _HandleShowPvPBattlePreparePage_b__13_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9__HANDLESHOWPVPBATTLEPREPAREPAGE_B__13_1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _HandleShowPvPBattlePreparePage_b__13_2(::RPG::Client::BaseLobby* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9__HANDLESHOWPVPBATTLEPREPAREPAGE_B__13_2_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* _HandleShowFriendPVPBattlePreparePage_b__15_0(::RPG::Client::BaseLobby* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9__HANDLESHOWFRIENDPVPBATTLEPREPAREPAGE_B__15_0_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* _HandleShowFriendPVPBattlePreparePage_b__15_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9__HANDLESHOWFRIENDPVPBATTLEPREPAREPAGE_B__15_1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _HandleShowFriendPVPBattlePreparePage_b__15_2(::RPG::Client::BaseLobby* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9__HANDLESHOWFRIENDPVPBATTLEPREPAREPAGE_B__15_2_OFFSET))(this, a1);
	}
};
