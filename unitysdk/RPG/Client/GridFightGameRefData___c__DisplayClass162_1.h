#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_76AEB9F7CCE28B4E_Class_1_3E75962FCD9FB58B;
class Class_1_7AB88D713F5121B3_45;

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS162_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9383570)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS162_1___COLLECTEQUIPSANDTRAIT_B__1_OFFSET UNITYSDK_OFFSET(0x9383580)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass162_1_TypeDefinitionIndex = 51413;

	class GridFightGameRefData___c__DisplayClass162_1 : public ::System::Object
	{
	public:
		::Class_1_76AEB9F7CCE28B4E_Class_1_3E75962FCD9FB58B* role; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS162_1__CTOR_OFFSET))(this);
		}

		::System::Boolean __CollectEquipsAndTrait_b__1(::Class_1_7AB88D713F5121B3_45* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7AB88D713F5121B3_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS162_1___COLLECTEQUIPSANDTRAIT_B__1_OFFSET))(this, x);
		}
	};
}
