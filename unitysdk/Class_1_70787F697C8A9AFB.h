#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B7DA92BA25C1DC79;
class Class_3_163A9557988CEBBE;
class Class_3_E5B65FD9338F9400;
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

#define CLASS_1_70787F697C8A9AFB_METHOD_1_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x103CA540)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_0B578FC96E923242_OFFSET UNITYSDK_OFFSET(0x103C7A50)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_0C57E9EADE35AB61_OFFSET UNITYSDK_OFFSET(0x103C8CE0)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_1577ED9EEB8249E2_OFFSET UNITYSDK_OFFSET(0x103C9530)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_17388B3B7D07EB40_OFFSET UNITYSDK_OFFSET(0x103C8EA0)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_217E5B668E83DFA8_OFFSET UNITYSDK_OFFSET(0x103C8AE0)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x103C7560)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_3F4A0F472FA9D240_OFFSET UNITYSDK_OFFSET(0x103C83B0)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_402337E8CF40B661_OFFSET UNITYSDK_OFFSET(0x103C84F0)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_4FCDE86CC03175FB_OFFSET UNITYSDK_OFFSET(0x103C8FF0)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_518ECC1FEB909E36_OFFSET UNITYSDK_OFFSET(0x103CA680)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_5960CBFD3F02644F_OFFSET UNITYSDK_OFFSET(0x103C8780)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_6CC8CCA8AE02CCED_OFFSET UNITYSDK_OFFSET(0x103C9550)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_78E6A00449C33009_OFFSET UNITYSDK_OFFSET(0x103C7470)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_791E9C6EAC2A3F38_OFFSET UNITYSDK_OFFSET(0x103C8C90)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_7E22C2317A005514_OFFSET UNITYSDK_OFFSET(0x103CA0B0)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_832FA43600B976F4_OFFSET UNITYSDK_OFFSET(0x103C9EC0)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_8894E534FED3129C_OFFSET UNITYSDK_OFFSET(0x103C8720)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_8F3F75E2D2B20353_OFFSET UNITYSDK_OFFSET(0x103C94C0)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_93E8A6EDE33FEB2C_OFFSET UNITYSDK_OFFSET(0x103CB040)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_977EE892EB85645C_OFFSET UNITYSDK_OFFSET(0x103C8EF0)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_AA8E02552C49232E_OFFSET UNITYSDK_OFFSET(0x103C91A0)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_AEE5404ED8BBC220_OFFSET UNITYSDK_OFFSET(0x103CAEF0)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x103C7A00)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_B76C141DF28ADB2C_OFFSET UNITYSDK_OFFSET(0x103CA340)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_BB93C69D78C65A48_OFFSET UNITYSDK_OFFSET(0x103C6E90)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_C4C929466F5AAF90_OFFSET UNITYSDK_OFFSET(0x103C6DB0)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x103C6E50)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x103C6F30)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_CFF8BB6F2697FF1F_OFFSET UNITYSDK_OFFSET(0x103C85E0)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_D013CBC4E4E5B30C_OFFSET UNITYSDK_OFFSET(0x103C7420)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_D5CC34101AF0250F_1_OFFSET UNITYSDK_OFFSET(0x103C7190)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_D5CC34101AF0250F_OFFSET UNITYSDK_OFFSET(0x103C6FF0)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_D9AAF6205BC1365B_OFFSET UNITYSDK_OFFSET(0x103C8B30)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_D9F2F62D2A196B2E_OFFSET UNITYSDK_OFFSET(0x103C9040)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_DCED190F6B433EC9_OFFSET UNITYSDK_OFFSET(0x103C8360)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_E02E71B578B26410_OFFSET UNITYSDK_OFFSET(0x103C7330)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_E404EF13F6333461_OFFSET UNITYSDK_OFFSET(0x103C81B0)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_E6623D857B027B70_OFFSET UNITYSDK_OFFSET(0x103C8630)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_EFC62EC38BD87794_OFFSET UNITYSDK_OFFSET(0x103C8200)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_F51D45972C745A0B_OFFSET UNITYSDK_OFFSET(0x103C72E0)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_F5447CD65612575D_1_OFFSET UNITYSDK_OFFSET(0x103C7140)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x103C6FA0)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_F6A9686B6C487FB3_OFFSET UNITYSDK_OFFSET(0x103C75B0)
#define CLASS_1_70787F697C8A9AFB_METHOD_1_FB8648D81F5B3574_OFFSET UNITYSDK_OFFSET(0x103C84A0)
#define CLASS_1_70787F697C8A9AFB__CTOR_OFFSET UNITYSDK_OFFSET(0x103C6E40)
#define CLASS_1_70787F697C8A9AFB__HANDLESHOWFRIENDPVPBATTLEPREPAREPAGE_B__15_0_OFFSET UNITYSDK_OFFSET(0x103CB5E0)
#define CLASS_1_70787F697C8A9AFB__HANDLESHOWFRIENDPVPBATTLEPREPAREPAGE_B__15_1_OFFSET UNITYSDK_OFFSET(0x103CB6E0)
#define CLASS_1_70787F697C8A9AFB__HANDLESHOWFRIENDPVPBATTLEPREPAREPAGE_B__15_2_OFFSET UNITYSDK_OFFSET(0x103CB820)
#define CLASS_1_70787F697C8A9AFB__HANDLESHOWPVPBATTLEPREPAREPAGE_B__13_0_OFFSET UNITYSDK_OFFSET(0x103CB2A0)
#define CLASS_1_70787F697C8A9AFB__HANDLESHOWPVPBATTLEPREPAREPAGE_B__13_1_OFFSET UNITYSDK_OFFSET(0x103CB3A0)
#define CLASS_1_70787F697C8A9AFB__HANDLESHOWPVPBATTLEPREPAREPAGE_B__13_2_OFFSET UNITYSDK_OFFSET(0x103CB4E0)

inline static constexpr unsigned int Class_1_70787F697C8A9AFB_TypeDefinitionIndex = 60164;

class Class_1_70787F697C8A9AFB : public ::System::Object
{
public:
	::RPG::Client::DiceCombat::DiceCombatGameFlow* Field_1_0; // 0x10
	::Class_1_B7DA92BA25C1DC79* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::DiceCombat::DiceCombatGameFlow* a1, ::Class_1_B7DA92BA25C1DC79* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGameFlow*, ::Class_1_B7DA92BA25C1DC79*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_1_70787F697C8A9AFB* Method_1_C4C929466F5AAF90(::RPG::Client::DiceCombat::DiceCombatGameFlow* a1, ::Class_1_B7DA92BA25C1DC79* a2)
	{
		return ((::Class_1_70787F697C8A9AFB*(*)(::RPG::Client::DiceCombat::DiceCombatGameFlow*, ::Class_1_B7DA92BA25C1DC79*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_C4C929466F5AAF90_OFFSET))(a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_BB93C69D78C65A48()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_BB93C69D78C65A48_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_D5CC34101AF0250F()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_D5CC34101AF0250F_OFFSET))(this);
	}

	::System::Void Method_1_F5447CD65612575D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_F5447CD65612575D_1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_D5CC34101AF0250F_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_D5CC34101AF0250F_1_OFFSET))(this);
	}

	::System::Void Method_1_F51D45972C745A0B(::RPG::Client::DiceCombat::DiceCombatNPCEntrancePageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatNPCEntrancePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_F51D45972C745A0B_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_E02E71B578B26410(::RPG::Client::DiceCombat::DiceCombatNPCEntrancePageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatNPCEntrancePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_E02E71B578B26410_OFFSET))(this, a1);
	}

	::System::Void Method_1_D013CBC4E4E5B30C(::RPG::Client::DiceCombat::DiceCombatPvEBattlePreparePageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPvEBattlePreparePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_D013CBC4E4E5B30C_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_78E6A00449C33009(::RPG::Client::DiceCombat::DiceCombatPvEBattlePreparePageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPvEBattlePreparePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_78E6A00449C33009_OFFSET))(this, a1);
	}

	::System::Void Method_1_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_229CEF33F0AF9039_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_F6A9686B6C487FB3()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_F6A9686B6C487FB3_OFFSET))(this);
	}

	::System::Void Method_1_AFC8215C57A0845A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_AFC8215C57A0845A_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_0B578FC96E923242()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_0B578FC96E923242_OFFSET))(this);
	}

	::System::Void Method_1_E404EF13F6333461(::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_E404EF13F6333461_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_EFC62EC38BD87794(::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_EFC62EC38BD87794_OFFSET))(this, a1);
	}

	::System::Void Method_1_DCED190F6B433EC9(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_DCED190F6B433EC9_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_3F4A0F472FA9D240(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_3F4A0F472FA9D240_OFFSET))(this, a1);
	}

	::System::Void Method_1_FB8648D81F5B3574(::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_FB8648D81F5B3574_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_402337E8CF40B661(::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_402337E8CF40B661_OFFSET))(this, a1);
	}

	::System::Void Method_1_CFF8BB6F2697FF1F(::RPG::Client::DiceCombat::DiceCombatGameLoadingParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGameLoadingParam*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_CFF8BB6F2697FF1F_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_E6623D857B027B70(::RPG::Client::DiceCombat::DiceCombatGameLoadingParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGameLoadingParam*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_E6623D857B027B70_OFFSET))(this, a1);
	}

	::System::Void Method_1_8894E534FED3129C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_8894E534FED3129C_OFFSET))(this);
	}

	::System::Void Method_1_5960CBFD3F02644F(::RPG::Client::DiceCombat::DiceCombatBattleResultInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatBattleResultInfo*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_5960CBFD3F02644F_OFFSET))(this, a1);
	}

	::System::Void Method_1_217E5B668E83DFA8(::RPG::Client::DiceCombat::DiceCombatShopPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatShopPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_217E5B668E83DFA8_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_D9AAF6205BC1365B(::RPG::Client::DiceCombat::DiceCombatShopPageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatShopPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_D9AAF6205BC1365B_OFFSET))(this, a1);
	}

	::System::Void Method_1_791E9C6EAC2A3F38(::RPG::Client::DiceCombat::DiceCombatCollectionPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_791E9C6EAC2A3F38_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_0C57E9EADE35AB61(::RPG::Client::DiceCombat::DiceCombatCollectionPageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_0C57E9EADE35AB61_OFFSET))(this, a1);
	}

	::System::Void Method_1_17388B3B7D07EB40(::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_17388B3B7D07EB40_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_977EE892EB85645C(::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_977EE892EB85645C_OFFSET))(this, a1);
	}

	::System::Void Method_1_4FCDE86CC03175FB(::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_4FCDE86CC03175FB_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_D9F2F62D2A196B2E(::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_D9F2F62D2A196B2E_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA8E02552C49232E(::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_AA8E02552C49232E_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F3F75E2D2B20353(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_8F3F75E2D2B20353_OFFSET))(this, a1);
	}

	::System::Void Method_1_6CC8CCA8AE02CCED(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_6CC8CCA8AE02CCED_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E22C2317A005514(::RPG::Client::DiceCombat::DiceCombatPVPStartMatchParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPVPStartMatchParam*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_7E22C2317A005514_OFFSET))(this, a1);
	}

	::System::Void Method_1_B76C141DF28ADB2C(::RPG::Client::DiceCombat::DiceCombatStartPVPGameParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatStartPVPGameParam*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_B76C141DF28ADB2C_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_832FA43600B976F4(::Class_3_163A9557988CEBBE* a1, ::System::Action_1<::Class_3_E5B65FD9338F9400*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_3_163A9557988CEBBE*, ::System::Action_1<::Class_3_E5B65FD9338F9400*>*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_832FA43600B976F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_092CD57850778EFC_OFFSET))(this);
	}

	::System::Void Method_1_518ECC1FEB909E36(::RPG::Client::DiceCombat::DiceCombatBattleResultInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatBattleResultInfo*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_518ECC1FEB909E36_OFFSET))(this, a1);
	}

	::System::Void Method_1_AEE5404ED8BBC220(::RPG::Client::DiceCombat::DiceCombatBattleQuitInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatBattleQuitInfo*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_AEE5404ED8BBC220_OFFSET))(this, a1);
	}

	::System::Void Method_1_93E8A6EDE33FEB2C(::RPG::Client::DiceCombat::DiceCombatInviteFriendParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatInviteFriendParam*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_93E8A6EDE33FEB2C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::RPG::Client::DiceCombat::DiceCombatGameFlowDataContainer* Method_1_1577ED9EEB8249E2()
	{
		return ((::RPG::Client::DiceCombat::DiceCombatGameFlowDataContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB_METHOD_1_1577ED9EEB8249E2_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _HandleShowPvPBattlePreparePage_b__13_0(::RPG::Client::BaseLobby* lobby)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB__HANDLESHOWPVPBATTLEPREPAREPAGE_B__13_0_OFFSET))(this, lobby);
	}

	::RPG::Client::Promises::IPromise* _HandleShowPvPBattlePreparePage_b__13_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB__HANDLESHOWPVPBATTLEPREPAREPAGE_B__13_1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _HandleShowPvPBattlePreparePage_b__13_2(::RPG::Client::BaseLobby* lobby)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB__HANDLESHOWPVPBATTLEPREPAREPAGE_B__13_2_OFFSET))(this, lobby);
	}

	::RPG::Client::Promises::IPromise* _HandleShowFriendPVPBattlePreparePage_b__15_0(::RPG::Client::BaseLobby* lobby)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB__HANDLESHOWFRIENDPVPBATTLEPREPAREPAGE_B__15_0_OFFSET))(this, lobby);
	}

	::RPG::Client::Promises::IPromise* _HandleShowFriendPVPBattlePreparePage_b__15_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB__HANDLESHOWFRIENDPVPBATTLEPREPAREPAGE_B__15_1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _HandleShowFriendPVPBattlePreparePage_b__15_2(::RPG::Client::BaseLobby* lobby)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB__HANDLESHOWFRIENDPVPBATTLEPREPAREPAGE_B__15_2_OFFSET))(this, lobby);
	}
};
