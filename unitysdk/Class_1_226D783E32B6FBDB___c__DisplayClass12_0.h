#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

class Class_1_27E511E181CEAAFF;

#define CLASS_1_226D783E32B6FBDB___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E170C0)
#define CLASS_1_226D783E32B6FBDB___C__DISPLAYCLASS12_0__ISFILEEXISTBYSHORTPATHHASH_B__0_OFFSET UNITYSDK_OFFSET(0x15E19360)

inline static constexpr unsigned int Class_1_226D783E32B6FBDB___c__DisplayClass12_0_TypeDefinitionIndex = 31119;

class Class_1_226D783E32B6FBDB___c__DisplayClass12_0 : public ::System::Object
{
public:
	::RPG::Client::ByteHash16 hash; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_226D783E32B6FBDB___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _IsFileExistByShortPathHash_b__0(::Class_1_27E511E181CEAAFF* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_27E511E181CEAAFF*))((::PBYTE)hIl2Cpp + CLASS_1_226D783E32B6FBDB___C__DISPLAYCLASS12_0__ISFILEEXISTBYSHORTPATHHASH_B__0_OFFSET))(this, e);
	}
};
