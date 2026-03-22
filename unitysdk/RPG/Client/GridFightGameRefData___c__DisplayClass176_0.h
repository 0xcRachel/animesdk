#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_76AEB9F7CCE28B4E_Class_1_3E75962FCD9FB58B;

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS176_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9380330)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS176_0__ISROLEFINAL_B__0_OFFSET UNITYSDK_OFFSET(0x9383850)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS176_0__ISROLEFINAL_B__1_OFFSET UNITYSDK_OFFSET(0x9383870)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass176_0_TypeDefinitionIndex = 51420;

	class GridFightGameRefData___c__DisplayClass176_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS176_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsRoleFinal_b__0(::Class_1_76AEB9F7CCE28B4E_Class_1_3E75962FCD9FB58B* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_76AEB9F7CCE28B4E_Class_1_3E75962FCD9FB58B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS176_0__ISROLEFINAL_B__0_OFFSET))(this, x);
		}

		::System::Boolean _IsRoleFinal_b__1(::Class_1_76AEB9F7CCE28B4E_Class_1_3E75962FCD9FB58B* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_76AEB9F7CCE28B4E_Class_1_3E75962FCD9FB58B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS176_0__ISROLEFINAL_B__1_OFFSET))(this, x);
		}
	};
}
