#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/EAIState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_0272D5A0C4F089B0;
class Class_1_38C460910E5AC181;
class Class_1_72E419617CCAA151;
class Class_1_82297B6AFFE49354;
class Class_1_855E018881074DD2;
class Class_1_9EC29AF2E7DF73E5;
class Class_1_C16931E567A100F1_Class_1_54FB9F3869E68DB5;
class Class_1_D2DA75CD29265F7F;
class Class_2_D5AD64F6FB3109AB;
class Class_2_DFB79F7EE671BF59;
class Class_4_0FE2F2FA8B5CD496;
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class BitArray; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C16931E567A100F1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15F49F10)
#define CLASS_1_C16931E567A100F1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15F499A0)
#define CLASS_1_C16931E567A100F1_METHOD_1_077A5E6E872CACE4_OFFSET UNITYSDK_OFFSET(0x15F4FC30)
#define CLASS_1_C16931E567A100F1_METHOD_1_1B671AD5B88F5193_OFFSET UNITYSDK_OFFSET(0x15F4E450)
#define CLASS_1_C16931E567A100F1_METHOD_1_20D684252BFAB267_OFFSET UNITYSDK_OFFSET(0x15F4DDA0)
#define CLASS_1_C16931E567A100F1_METHOD_1_21F905C6B474E9D1_OFFSET UNITYSDK_OFFSET(0x15F51860)
#define CLASS_1_C16931E567A100F1_METHOD_1_2B7C743F7DDCD5F5_OFFSET UNITYSDK_OFFSET(0x15F557B0)
#define CLASS_1_C16931E567A100F1_METHOD_1_3DE23685AE148311_OFFSET UNITYSDK_OFFSET(0x15F556F0)
#define CLASS_1_C16931E567A100F1_METHOD_1_4CFC5F9F40A751DF_OFFSET UNITYSDK_OFFSET(0x15F4BBD0)
#define CLASS_1_C16931E567A100F1_METHOD_1_505ECD9C15AD38F6_OFFSET UNITYSDK_OFFSET(0x15F4E090)
#define CLASS_1_C16931E567A100F1_METHOD_1_56AFD7423E52AC06_OFFSET UNITYSDK_OFFSET(0x15F4BC30)
#define CLASS_1_C16931E567A100F1_METHOD_1_6BB8D786B6E2D153_OFFSET UNITYSDK_OFFSET(0x15F54090)
#define CLASS_1_C16931E567A100F1_METHOD_1_72BFCFBB7E38A983_OFFSET UNITYSDK_OFFSET(0x15F524A0)
#define CLASS_1_C16931E567A100F1_METHOD_1_7787508A974C9616_OFFSET UNITYSDK_OFFSET(0x15F53F90)
#define CLASS_1_C16931E567A100F1_METHOD_1_7917924331D5049D_1_OFFSET UNITYSDK_OFFSET(0x15F4A360)
#define CLASS_1_C16931E567A100F1_METHOD_1_7917924331D5049D_OFFSET UNITYSDK_OFFSET(0x15F4A130)
#define CLASS_1_C16931E567A100F1_METHOD_1_7921AFB5F70359D4_OFFSET UNITYSDK_OFFSET(0x15F34A90)
#define CLASS_1_C16931E567A100F1_METHOD_1_799AE31E74D7CDAF_OFFSET UNITYSDK_OFFSET(0x15F53EB0)
#define CLASS_1_C16931E567A100F1_METHOD_1_7B495677C65F093E_OFFSET UNITYSDK_OFFSET(0x15F52990)
#define CLASS_1_C16931E567A100F1_METHOD_1_7B5848737148C835_OFFSET UNITYSDK_OFFSET(0x15F532C0)
#define CLASS_1_C16931E567A100F1_METHOD_1_8723A000853037DA_OFFSET UNITYSDK_OFFSET(0x15F535A0)
#define CLASS_1_C16931E567A100F1_METHOD_1_8F5AA154C09F9F70_OFFSET UNITYSDK_OFFSET(0x15F4F4D0)
#define CLASS_1_C16931E567A100F1_METHOD_1_9BF11703172EB6ED_OFFSET UNITYSDK_OFFSET(0x15F52080)
#define CLASS_1_C16931E567A100F1_METHOD_1_AE7E2410B13C9CCF_OFFSET UNITYSDK_OFFSET(0x15F50CD0)
#define CLASS_1_C16931E567A100F1_METHOD_1_B18326060A548589_OFFSET UNITYSDK_OFFSET(0x15F4ACE0)
#define CLASS_1_C16931E567A100F1_METHOD_1_C07FF5380C515368_OFFSET UNITYSDK_OFFSET(0x15F52740)
#define CLASS_1_C16931E567A100F1_METHOD_1_C7CC2AC3AE39727D_1_OFFSET UNITYSDK_OFFSET(0x15F4A900)
#define CLASS_1_C16931E567A100F1_METHOD_1_C7CC2AC3AE39727D_OFFSET UNITYSDK_OFFSET(0x15F4A520)
#define CLASS_1_C16931E567A100F1_METHOD_1_D81B3FF2EAA8B564_OFFSET UNITYSDK_OFFSET(0x15F51460)
#define CLASS_1_C16931E567A100F1_METHOD_1_F71FCF743BB85761_OFFSET UNITYSDK_OFFSET(0x15F4D1E0)
#define CLASS_1_C16931E567A100F1_METHOD_1_FB662B1693E45D85_OFFSET UNITYSDK_OFFSET(0x15F4EB70)
#define CLASS_1_C16931E567A100F1_METHOD_1_FD0996A1723D07F6_OFFSET UNITYSDK_OFFSET(0x15F4B440)
#define CLASS_1_C16931E567A100F1__CTOR_OFFSET UNITYSDK_OFFSET(0x15F49910)

inline static constexpr unsigned int Class_1_C16931E567A100F1_TypeDefinitionIndex = 27763;

class Class_1_C16931E567A100F1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9EC29AF2E7DF73E5*>* Field_1_2; // 0x10
	::Class_2_DFB79F7EE671BF59* Field_1_1; // 0x18
	::Class_4_0FE2F2FA8B5CD496* Field_1_0; // 0x20

	::System::Void _ctor(::Class_4_0FE2F2FA8B5CD496* a1, ::Class_2_DFB79F7EE671BF59* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_0FE2F2FA8B5CD496*, ::Class_2_DFB79F7EE671BF59*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_7917924331D5049D(::Class_2_D5AD64F6FB3109AB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_7917924331D5049D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_56AFD7423E52AC06(::Class_2_D5AD64F6FB3109AB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_56AFD7423E52AC06_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8F5AA154C09F9F70(::Class_2_D5AD64F6FB3109AB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_8F5AA154C09F9F70_OFFSET))(this, a1);
	}

	::System::Void Method_1_AE7E2410B13C9CCF(::Class_2_D5AD64F6FB3109AB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_AE7E2410B13C9CCF_OFFSET))(this, a1);
	}

	::System::Void Method_1_7917924331D5049D_1(::Class_2_D5AD64F6FB3109AB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_7917924331D5049D_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_82297B6AFFE49354*>* Method_1_21F905C6B474E9D1(::Class_2_D5AD64F6FB3109AB* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Single a4)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_82297B6AFFE49354*>*(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_21F905C6B474E9D1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_9BF11703172EB6ED(::Class_2_D5AD64F6FB3109AB* a1, ::System::Collections::Generic::List_1<::Class_1_82297B6AFFE49354*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*, ::System::Collections::Generic::List_1<::Class_1_82297B6AFFE49354*>*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_9BF11703172EB6ED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C7CC2AC3AE39727D(::Class_2_D5AD64F6FB3109AB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_C7CC2AC3AE39727D_OFFSET))(this, a1);
	}

	::System::Void Method_1_C7CC2AC3AE39727D_1(::Class_2_D5AD64F6FB3109AB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_C7CC2AC3AE39727D_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_4CFC5F9F40A751DF(::Class_2_D5AD64F6FB3109AB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_4CFC5F9F40A751DF_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_7921AFB5F70359D4(::Class_2_D5AD64F6FB3109AB* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_7921AFB5F70359D4_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Single, ::System::Collections::Generic::List_1<::System::Int32>*> Method_1_F71FCF743BB85761(::Class_2_D5AD64F6FB3109AB* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Int32 a4)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Collections::Generic::List_1<::System::Int32>*>(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_F71FCF743BB85761_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_B18326060A548589(::Class_2_D5AD64F6FB3109AB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_B18326060A548589_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD0996A1723D07F6(::Class_2_D5AD64F6FB3109AB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_FD0996A1723D07F6_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B5848737148C835(::Class_2_D5AD64F6FB3109AB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_7B5848737148C835_OFFSET))(this, a1);
	}

	::System::ValueTuple_3<::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*> Method_1_077A5E6E872CACE4(::Class_2_D5AD64F6FB3109AB* a1, ::System::Int32 a2)
	{
		return ((::System::ValueTuple_3<::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*>(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_077A5E6E872CACE4_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_FB662B1693E45D85(::Class_1_D2DA75CD29265F7F* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::BitArray* a3)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_D2DA75CD29265F7F*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::BitArray*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_FB662B1693E45D85_OFFSET))(this, a1, a2, a3);
	}

	::System::ValueTuple_2<::System::Single, ::System::Collections::Generic::List_1<::System::Int32>*> Method_1_7B495677C65F093E(::Class_1_855E018881074DD2* a1)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Collections::Generic::List_1<::System::Int32>*>(*)(::PVOID, ::Class_1_855E018881074DD2*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_7B495677C65F093E_OFFSET))(this, a1);
	}

	::Class_1_38C460910E5AC181* Method_1_6BB8D786B6E2D153(::Class_1_72E419617CCAA151* a1)
	{
		return ((::Class_1_38C460910E5AC181*(*)(::PVOID, ::Class_1_72E419617CCAA151*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_6BB8D786B6E2D153_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_72BFCFBB7E38A983(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_72BFCFBB7E38A983_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_C07FF5380C515368(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_C07FF5380C515368_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*>* Method_1_505ECD9C15AD38F6(::Class_2_D5AD64F6FB3109AB* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*>*(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_505ECD9C15AD38F6_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_20D684252BFAB267(::Class_2_D5AD64F6FB3109AB* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_20D684252BFAB267_OFFSET))(this, a1);
	}

	::Class_1_0272D5A0C4F089B0* Method_1_1B671AD5B88F5193(::Class_2_D5AD64F6FB3109AB* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::Class_1_0272D5A0C4F089B0*(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_1B671AD5B88F5193_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_D81B3FF2EAA8B564(::Class_2_D5AD64F6FB3109AB* a1, ::RPG::LittleGameShare::DiceCombatCore::EAIState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*, ::RPG::LittleGameShare::DiceCombatCore::EAIState))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_D81B3FF2EAA8B564_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8723A000853037DA(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_8723A000853037DA_OFFSET))(this, a1, a2);
	}

	static ::System::Collections::Generic::IEnumerable_1<::Class_1_C16931E567A100F1_Class_1_54FB9F3869E68DB5*>* Method_1_3DE23685AE148311(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_C16931E567A100F1_Class_1_54FB9F3869E68DB5*>*(*)(::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_3DE23685AE148311_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_799AE31E74D7CDAF(::System::Int32 a1, ::System::Int32 a2, ::System::Action_1<::System::UInt64>* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Action_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_799AE31E74D7CDAF_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_2B7C743F7DDCD5F5(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::UInt64 a5, ::System::Action_1<::System::UInt64>* a6)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt64, ::System::Action_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_2B7C743F7DDCD5F5_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_7787508A974C9616(::System::UInt64 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::UInt64, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_7787508A974C9616_OFFSET))(a1, a2, a3);
	}
};
