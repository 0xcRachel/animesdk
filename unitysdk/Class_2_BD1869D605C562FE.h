#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_30467842FAA5266B;
namespace RPG::GameCore { class DiceCombatTaskConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_BD1869D605C562FE_METHOD_2_46E5C482BD9D2AA2_OFFSET UNITYSDK_OFFSET(0x16070E40)
#define CLASS_2_BD1869D605C562FE_METHOD_2_5739CCCE693D1FCB_OFFSET UNITYSDK_OFFSET(0x1603E010)
#define CLASS_2_BD1869D605C562FE_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x16071110)
#define CLASS_2_BD1869D605C562FE_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x16071180)
#define CLASS_2_BD1869D605C562FE_METHOD_2_899EC372DEC6EBDF_OFFSET UNITYSDK_OFFSET(0x16070F60)
#define CLASS_2_BD1869D605C562FE__CTOR_OFFSET UNITYSDK_OFFSET(0x1603DF20)

inline static constexpr unsigned int Class_2_BD1869D605C562FE_TypeDefinitionIndex = 27701;

class Class_2_BD1869D605C562FE : public ::Class_1_B55037134F9E6688
{
public:
	::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::Class_1_B55037134F9E6688*>* Field_2_1; // 0x20

	::System::Void _ctor(::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_2_BD1869D605C562FE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5739CCCE693D1FCB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD1869D605C562FE_METHOD_2_5739CCCE693D1FCB_OFFSET))(this);
	}

	::System::Void Method_2_46E5C482BD9D2AA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD1869D605C562FE_METHOD_2_46E5C482BD9D2AA2_OFFSET))(this);
	}

	::System::Void Method_2_899EC372DEC6EBDF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BD1869D605C562FE_METHOD_2_899EC372DEC6EBDF_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD1869D605C562FE_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BD1869D605C562FE_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
