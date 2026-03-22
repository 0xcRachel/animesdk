#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_70787F697C8A9AFB;
namespace RPG::Client::DiceCombat { class DiceCombatTeamEditDialogMsgParam; }
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_70787F697C8A9AFB___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x103C8350)
#define CLASS_1_70787F697C8A9AFB___C__DISPLAYCLASS17_0__HANDLESHOWTEAMEDITDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x103CBC00)

inline static constexpr unsigned int Class_1_70787F697C8A9AFB___c__DisplayClass17_0_TypeDefinitionIndex = 60166;

class Class_1_70787F697C8A9AFB___c__DisplayClass17_0 : public ::System::Object
{
public:
	::Class_1_70787F697C8A9AFB* __4__this; // 0x10
	::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam* param; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _HandleShowTeamEditDialog_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70787F697C8A9AFB___C__DISPLAYCLASS17_0__HANDLESHOWTEAMEDITDIALOG_B__0_OFFSET))(this);
	}
};
