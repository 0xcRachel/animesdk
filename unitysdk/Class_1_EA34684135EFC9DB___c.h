#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueMiracleData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_EA34684135EFC9DB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9451920)
#define CLASS_1_EA34684135EFC9DB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9451960)
#define CLASS_1_EA34684135EFC9DB___C__TOSTRING_B__1_0_OFFSET UNITYSDK_OFFSET(0x9451970)
#define CLASS_1_EA34684135EFC9DB___C__TOSTRING_B__1_1_OFFSET UNITYSDK_OFFSET(0x9451990)
#define CLASS_1_EA34684135EFC9DB___C__TOSTRING_B__1_2_OFFSET UNITYSDK_OFFSET(0x94519B0)
#define CLASS_1_EA34684135EFC9DB___C__TOSTRING_B__1_3_OFFSET UNITYSDK_OFFSET(0x94519D0)

inline static constexpr unsigned int Class_1_EA34684135EFC9DB___c_TypeDefinitionIndex = 53671;

class Class_1_EA34684135EFC9DB___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Nullable_1<::System::UInt32>>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Nullable_1<::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA34684135EFC9DB___c_TypeDefinitionIndex)->GetStaticField(0x41DB0);
	}
	static ::System::Func_2<::RPG::Client::RogueMiracleData*, ::System::Nullable_1<::System::UInt32>>** StaticGet___9__1_2()
	{
		return (::System::Func_2<::RPG::Client::RogueMiracleData*, ::System::Nullable_1<::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA34684135EFC9DB___c_TypeDefinitionIndex)->GetStaticField(0x41DB8);
	}
	static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Nullable_1<::System::UInt32>>** StaticGet___9__1_1()
	{
		return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Nullable_1<::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA34684135EFC9DB___c_TypeDefinitionIndex)->GetStaticField(0x41DC0);
	}
	static ::System::Func_2<::RPG::Client::RogueMiracleData*, ::System::Nullable_1<::System::UInt32>>** StaticGet___9__1_3()
	{
		return (::System::Func_2<::RPG::Client::RogueMiracleData*, ::System::Nullable_1<::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA34684135EFC9DB___c_TypeDefinitionIndex)->GetStaticField(0x41DC8);
	}
	static ::Class_1_EA34684135EFC9DB___c** StaticGet___9()
	{
		return (::Class_1_EA34684135EFC9DB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA34684135EFC9DB___c_TypeDefinitionIndex)->GetStaticField(0x41DD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA34684135EFC9DB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA34684135EFC9DB___C__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::System::UInt32> _ToString_b__1_0(::RPG::Client::RogueFormulaData* f)
	{
		return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + CLASS_1_EA34684135EFC9DB___C__TOSTRING_B__1_0_OFFSET))(this, f);
	}

	::System::Nullable_1<::System::UInt32> _ToString_b__1_1(::RPG::Client::RogueFormulaData* f)
	{
		return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + CLASS_1_EA34684135EFC9DB___C__TOSTRING_B__1_1_OFFSET))(this, f);
	}

	::System::Nullable_1<::System::UInt32> _ToString_b__1_2(::RPG::Client::RogueMiracleData* m)
	{
		return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::RPG::Client::RogueMiracleData*))((::PBYTE)hIl2Cpp + CLASS_1_EA34684135EFC9DB___C__TOSTRING_B__1_2_OFFSET))(this, m);
	}

	::System::Nullable_1<::System::UInt32> _ToString_b__1_3(::RPG::Client::RogueMiracleData* m)
	{
		return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::RPG::Client::RogueMiracleData*))((::PBYTE)hIl2Cpp + CLASS_1_EA34684135EFC9DB___C__TOSTRING_B__1_3_OFFSET))(this, m);
	}
};
