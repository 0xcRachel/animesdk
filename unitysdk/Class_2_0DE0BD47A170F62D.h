#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/GroupStateType.h"

class Class_0_16E4307DCC419505_401;
class Class_1_F44524D91BEABB41_1;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_0DE0BD47A170F62D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1553EF30)
#define CLASS_2_0DE0BD47A170F62D_METHOD_2_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x1553EE30)
#define CLASS_2_0DE0BD47A170F62D_METHOD_2_536C2E82540C2DBA_OFFSET UNITYSDK_OFFSET(0x1553F560)
#define CLASS_2_0DE0BD47A170F62D_METHOD_2_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x1553F690)
#define CLASS_2_0DE0BD47A170F62D_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x1553F0E0)
#define CLASS_2_0DE0BD47A170F62D_METHOD_2_95E3CC00A2E05FB7_OFFSET UNITYSDK_OFFSET(0x1553F300)
#define CLASS_2_0DE0BD47A170F62D_METHOD_2_A0374C870A27A45B_OFFSET UNITYSDK_OFFSET(0x1553F8F0)
#define CLASS_2_0DE0BD47A170F62D_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x1553F880)
#define CLASS_2_0DE0BD47A170F62D_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x1553F9B0)
#define CLASS_2_0DE0BD47A170F62D_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x1553F510)
#define CLASS_2_0DE0BD47A170F62D_METHOD_2_E70E7CFB1DF7C909_OFFSET UNITYSDK_OFFSET(0x1553F9A0)
#define CLASS_2_0DE0BD47A170F62D_TICK_OFFSET UNITYSDK_OFFSET(0x1553F080)
#define CLASS_2_0DE0BD47A170F62D__CTOR_OFFSET UNITYSDK_OFFSET(0x1553F9C0)
#define CLASS_2_0DE0BD47A170F62D___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x1553FA50)

inline static constexpr unsigned int Class_2_0DE0BD47A170F62D_TypeDefinitionIndex = 53309;

class Class_2_0DE0BD47A170F62D : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F44524D91BEABB41_1*>* Field_2_1; // 0x20
	::RPG::GameCore::GroupStateType Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DE0BD47A170F62D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DE0BD47A170F62D_METHOD_2_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DE0BD47A170F62D_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0DE0BD47A170F62D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_95E3CC00A2E05FB7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0DE0BD47A170F62D_METHOD_2_95E3CC00A2E05FB7_OFFSET))(this, a1);
	}

	::System::Void Method_2_536C2E82540C2DBA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0DE0BD47A170F62D_METHOD_2_536C2E82540C2DBA_OFFSET))(this, a1);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DE0BD47A170F62D_METHOD_2_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DE0BD47A170F62D_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0DE0BD47A170F62D_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_2_652F3820D8B242FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DE0BD47A170F62D_METHOD_2_652F3820D8B242FF_OFFSET))(this);
	}

	::System::Void Method_2_A0374C870A27A45B(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_0DE0BD47A170F62D_METHOD_2_A0374C870A27A45B_OFFSET))(this, a1);
	}

	::RPG::GameCore::GroupStateType Method_2_E70E7CFB1DF7C909()
	{
		return ((::RPG::GameCore::GroupStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DE0BD47A170F62D_METHOD_2_E70E7CFB1DF7C909_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DE0BD47A170F62D_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0DE0BD47A170F62D___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
