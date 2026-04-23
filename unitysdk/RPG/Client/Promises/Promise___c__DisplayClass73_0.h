#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Exception; }

#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS73_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7176A0)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS73_0__FINALLY_B__0_OFFSET UNITYSDK_OFFSET(0x1A718910)

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise___c__DisplayClass73_0_TypeDefinitionIndex = 8678;

	class Promise___c__DisplayClass73_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::System::Action* onComplete; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS73_0__CTOR_OFFSET))(this);
		}

		::System::Void _Finally_b__0(::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS73_0__FINALLY_B__0_OFFSET))(this, e);
		}
	};
}
