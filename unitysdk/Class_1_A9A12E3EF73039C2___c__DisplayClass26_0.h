#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A9A12E3EF73039C2;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define CLASS_1_A9A12E3EF73039C2___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8434990)
#define CLASS_1_A9A12E3EF73039C2___C__DISPLAYCLASS26_0__TRYJOINLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0x8434EF0)

inline static constexpr unsigned int Class_1_A9A12E3EF73039C2___c__DisplayClass26_0_TypeDefinitionIndex = 50036;

class Class_1_A9A12E3EF73039C2___c__DisplayClass26_0 : public ::System::Object
{
public:
	::Class_1_A9A12E3EF73039C2* __4__this; // 0x10
	::System::UInt64 joinLobbyID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9A12E3EF73039C2___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _TryJoinLobby_b__0()
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9A12E3EF73039C2___C__DISPLAYCLASS26_0__TRYJOINLOBBY_B__0_OFFSET))(this);
	}
};
