#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define CLASS_1_61A1C536275272D5___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0x111D2590)
#define CLASS_1_61A1C536275272D5___C__DISPLAYCLASS53_0___SHOWCONFIRMFORCECHALLENGENORMALDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x111D2C50)

inline static constexpr unsigned int Class_1_61A1C536275272D5___c__DisplayClass53_0_TypeDefinitionIndex = 50122;

class Class_1_61A1C536275272D5___c__DisplayClass53_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise_1<::System::Boolean>* result; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61A1C536275272D5___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
	}

	::System::Void __ShowConfirmForceChallengeNormalDialog_b__0(::System::Boolean confirm)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_61A1C536275272D5___C__DISPLAYCLASS53_0___SHOWCONFIRMFORCECHALLENGENORMALDIALOG_B__0_OFFSET))(this, confirm);
	}
};
