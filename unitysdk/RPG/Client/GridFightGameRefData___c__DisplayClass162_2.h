#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_76AEB9F7CCE28B4E_Class_1_3E75962FCD9FB58B;
class Class_1_7AB88D713F5121B3_45;

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS162_2__CTOR_OFFSET UNITYSDK_OFFSET(0x937E0B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS162_2___COLLECTEQUIPSANDTRAIT_B__2_OFFSET UNITYSDK_OFFSET(0x93835C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass162_2_TypeDefinitionIndex = 51414;

	class GridFightGameRefData___c__DisplayClass162_2 : public ::System::Object
	{
	public:
		::Class_1_76AEB9F7CCE28B4E_Class_1_3E75962FCD9FB58B* finalRole; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS162_2__CTOR_OFFSET))(this);
		}

		::System::Boolean __CollectEquipsAndTrait_b__2(::Class_1_7AB88D713F5121B3_45* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7AB88D713F5121B3_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS162_2___COLLECTEQUIPSANDTRAIT_B__2_OFFSET))(this, x);
		}
	};
}
