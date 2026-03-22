#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_347;
class Class_1_66B8E3396BDA68B8;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0A12E545170318AA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9451D10)
#define CLASS_2_0A12E545170318AA_METHOD_2_02B490C9189918DC_OFFSET UNITYSDK_OFFSET(0x94524F0)
#define CLASS_2_0A12E545170318AA_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x9452680)
#define CLASS_2_0A12E545170318AA_METHOD_2_37A5C60F98F51C1E_OFFSET UNITYSDK_OFFSET(0x9452120)
#define CLASS_2_0A12E545170318AA_METHOD_2_47680E2642F37A1B_OFFSET UNITYSDK_OFFSET(0x9451E40)
#define CLASS_2_0A12E545170318AA_METHOD_2_D434794AF9EB725C_OFFSET UNITYSDK_OFFSET(0x9452750)
#define CLASS_2_0A12E545170318AA_METHOD_2_DB915699370309DA_OFFSET UNITYSDK_OFFSET(0x9452250)
#define CLASS_2_0A12E545170318AA_METHOD_2_E3D854E5F21563DF_OFFSET UNITYSDK_OFFSET(0x9451FC0)
#define CLASS_2_0A12E545170318AA__CTOR_OFFSET UNITYSDK_OFFSET(0x9451C00)

inline static constexpr unsigned int Class_2_0A12E545170318AA_TypeDefinitionIndex = 45641;

class Class_2_0A12E545170318AA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_66B8E3396BDA68B8*>* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_3; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_4; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A12E545170318AA__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A12E545170318AA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E3D854E5F21563DF(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_0A12E545170318AA_METHOD_2_E3D854E5F21563DF_OFFSET))(this, a1);
	}

	::System::Void Method_2_37A5C60F98F51C1E(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_0A12E545170318AA_METHOD_2_37A5C60F98F51C1E_OFFSET))(this, a1);
	}

	::System::Void Method_2_DB915699370309DA(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_0A12E545170318AA_METHOD_2_DB915699370309DA_OFFSET))(this, a1);
	}

	::System::Void Method_2_47680E2642F37A1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A12E545170318AA_METHOD_2_47680E2642F37A1B_OFFSET))(this);
	}

	::System::Void Method_2_02B490C9189918DC(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_0A12E545170318AA_METHOD_2_02B490C9189918DC_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A12E545170318AA_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_D434794AF9EB725C(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_0A12E545170318AA_METHOD_2_D434794AF9EB725C_OFFSET))(this, a1);
	}
};
