#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/EAIState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_0272D5A0C4F089B0;
class Class_1_0E117AC86D8E5BCA;
class Class_1_38C460910E5AC181;
class Class_1_586CC94A266070EA;
class Class_1_72E419617CCAA151;
class Class_1_82297B6AFFE49354;
class Class_1_855E018881074DD2;
class Class_1_C16931E567A100F1_Class_1_54FB9F3869E68DB5;
class Class_1_D2DA75CD29265F7F;
class Class_2_1BB8CA1042AACD99;
class Class_2_8C608625ABC8C4FA_1;
class Class_4_38B51614211CBC7D;
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class BitArray; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C16931E567A100F1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1561E4D0)
#define CLASS_1_C16931E567A100F1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x156266D0)
#define CLASS_1_C16931E567A100F1_METHOD_1_0CEBFC693180E04B_OFFSET UNITYSDK_OFFSET(0x156306C0)
#define CLASS_1_C16931E567A100F1_METHOD_1_1AA4C08153C786BA_OFFSET UNITYSDK_OFFSET(0x15629420)
#define CLASS_1_C16931E567A100F1_METHOD_1_1C2DE2AA5CF507CB_1_OFFSET UNITYSDK_OFFSET(0x156307F0)
#define CLASS_1_C16931E567A100F1_METHOD_1_1C2DE2AA5CF507CB_2_OFFSET UNITYSDK_OFFSET(0x15630850)
#define CLASS_1_C16931E567A100F1_METHOD_1_1C2DE2AA5CF507CB_OFFSET UNITYSDK_OFFSET(0x15630790)
#define CLASS_1_C16931E567A100F1_METHOD_1_22D0ADB352880F38_OFFSET UNITYSDK_OFFSET(0x156309D0)
#define CLASS_1_C16931E567A100F1_METHOD_1_2368DFE07F28F7DA_OFFSET UNITYSDK_OFFSET(0x156308B0)
#define CLASS_1_C16931E567A100F1_METHOD_1_241E05522154DA3F_OFFSET UNITYSDK_OFFSET(0x1562E280)
#define CLASS_1_C16931E567A100F1_METHOD_1_28477BC0940AC0A8_OFFSET UNITYSDK_OFFSET(0x1562E430)
#define CLASS_1_C16931E567A100F1_METHOD_1_2858CC98E795D643_OFFSET UNITYSDK_OFFSET(0x1562FB60)
#define CLASS_1_C16931E567A100F1_METHOD_1_2B7C743F7DDCD5F5_OFFSET UNITYSDK_OFFSET(0x15633A80)
#define CLASS_1_C16931E567A100F1_METHOD_1_33D2733A1285B960_OFFSET UNITYSDK_OFFSET(0x15627CE0)
#define CLASS_1_C16931E567A100F1_METHOD_1_3D95B20C736F08DA_OFFSET UNITYSDK_OFFSET(0x15629C70)
#define CLASS_1_C16931E567A100F1_METHOD_1_3DE23685AE148311_OFFSET UNITYSDK_OFFSET(0x156339C0)
#define CLASS_1_C16931E567A100F1_METHOD_1_4DF2B91FD8FC14C9_OFFSET UNITYSDK_OFFSET(0x1562CC50)
#define CLASS_1_C16931E567A100F1_METHOD_1_505ECD9C15AD38F6_OFFSET UNITYSDK_OFFSET(0x1562B580)
#define CLASS_1_C16931E567A100F1_METHOD_1_5A8FEC9AAEC6BBF9_OFFSET UNITYSDK_OFFSET(0x15632210)
#define CLASS_1_C16931E567A100F1_METHOD_1_5B81BCF35938119A_OFFSET UNITYSDK_OFFSET(0x1562EF20)
#define CLASS_1_C16931E567A100F1_METHOD_1_6BB8D786B6E2D153_OFFSET UNITYSDK_OFFSET(0x15632E80)
#define CLASS_1_C16931E567A100F1_METHOD_1_7787508A974C9616_OFFSET UNITYSDK_OFFSET(0x15632D80)
#define CLASS_1_C16931E567A100F1_METHOD_1_799AE31E74D7CDAF_OFFSET UNITYSDK_OFFSET(0x15632CA0)
#define CLASS_1_C16931E567A100F1_METHOD_1_7D1D07E684632F8B_OFFSET UNITYSDK_OFFSET(0x15632170)
#define CLASS_1_C16931E567A100F1_METHOD_1_8723A000853037DA_OFFSET UNITYSDK_OFFSET(0x15630950)
#define CLASS_1_C16931E567A100F1_METHOD_1_A66DC4EEA5545233_OFFSET UNITYSDK_OFFSET(0x15631160)
#define CLASS_1_C16931E567A100F1_METHOD_1_A8CE523760714CCC_OFFSET UNITYSDK_OFFSET(0x1562F580)
#define CLASS_1_C16931E567A100F1_METHOD_1_B900C7E8513B8C44_OFFSET UNITYSDK_OFFSET(0x1562B1C0)
#define CLASS_1_C16931E567A100F1_METHOD_1_BA6874D8CAEE4C85_OFFSET UNITYSDK_OFFSET(0x1562DC70)
#define CLASS_1_C16931E567A100F1_METHOD_1_C07FF5380C515368_OFFSET UNITYSDK_OFFSET(0x1562F910)
#define CLASS_1_C16931E567A100F1_METHOD_1_C3AD4166D687C104_OFFSET UNITYSDK_OFFSET(0x1562C8F0)
#define CLASS_1_C16931E567A100F1_METHOD_1_C4485AC50EE09E33_OFFSET UNITYSDK_OFFSET(0x15631FB0)
#define CLASS_1_C16931E567A100F1_METHOD_1_C7CC2AC3AE39727D_OFFSET UNITYSDK_OFFSET(0x156286B0)
#define CLASS_1_C16931E567A100F1_METHOD_1_CB90D463EEA11F23_OFFSET UNITYSDK_OFFSET(0x15626710)
#define CLASS_1_C16931E567A100F1_METHOD_1_CCB93DB5F893C716_OFFSET UNITYSDK_OFFSET(0x1562C780)
#define CLASS_1_C16931E567A100F1_METHOD_1_CDAF0321B499822E_OFFSET UNITYSDK_OFFSET(0x15630A70)
#define CLASS_1_C16931E567A100F1_METHOD_1_DBF7B3B41259DD38_OFFSET UNITYSDK_OFFSET(0x15628C40)
#define CLASS_1_C16931E567A100F1_METHOD_1_DE2090B5571A9853_1_OFFSET UNITYSDK_OFFSET(0x15627160)
#define CLASS_1_C16931E567A100F1_METHOD_1_DE2090B5571A9853_OFFSET UNITYSDK_OFFSET(0x15626C20)
#define CLASS_1_C16931E567A100F1_METHOD_1_DE386FEEC12DC8FE_OFFSET UNITYSDK_OFFSET(0x1561DF10)
#define CLASS_1_C16931E567A100F1_METHOD_1_DE5CF0058746B7E4_OFFSET UNITYSDK_OFFSET(0x1562B940)
#define CLASS_1_C16931E567A100F1_METHOD_1_E484F5B01BE94568_1_OFFSET UNITYSDK_OFFSET(0x156276A0)
#define CLASS_1_C16931E567A100F1_METHOD_1_E484F5B01BE94568_OFFSET UNITYSDK_OFFSET(0x156268A0)
#define CLASS_1_C16931E567A100F1_METHOD_1_EAD1F8944F4E439A_OFFSET UNITYSDK_OFFSET(0x1562E050)
#define CLASS_1_C16931E567A100F1_METHOD_1_EBF4D3FAD6A368C6_OFFSET UNITYSDK_OFFSET(0x1562EC70)
#define CLASS_1_C16931E567A100F1_METHOD_1_F71FCF743BB85761_OFFSET UNITYSDK_OFFSET(0x1562AF60)
#define CLASS_1_C16931E567A100F1_METHOD_1_FB662B1693E45D85_OFFSET UNITYSDK_OFFSET(0x1562BE20)
#define CLASS_1_C16931E567A100F1_METHOD_1_FD460C2B5F69BC86_OFFSET UNITYSDK_OFFSET(0x15628650)
#define CLASS_1_C16931E567A100F1__CTOR_OFFSET UNITYSDK_OFFSET(0x1561D870)

inline static constexpr unsigned int Class_1_C16931E567A100F1_TypeDefinitionIndex = 34195;

class Class_1_C16931E567A100F1 : public ::System::Object
{
public:
	::Class_2_8C608625ABC8C4FA_1* Field_1_1; // 0x10
	::Class_4_38B51614211CBC7D* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_586CC94A266070EA*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_4_38B51614211CBC7D* a1, ::Class_2_8C608625ABC8C4FA_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_38B51614211CBC7D*, ::Class_2_8C608625ABC8C4FA_1*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_DE386FEEC12DC8FE(::System::Collections::Generic::List_1<::Class_2_1BB8CA1042AACD99*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_1BB8CA1042AACD99*>*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_DE386FEEC12DC8FE_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_CB90D463EEA11F23(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_CB90D463EEA11F23_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3D95B20C736F08DA(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_3D95B20C736F08DA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C3AD4166D687C104(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_C3AD4166D687C104_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA6874D8CAEE4C85(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_BA6874D8CAEE4C85_OFFSET))(this, a1);
	}

	::System::Void Method_1_E484F5B01BE94568(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_E484F5B01BE94568_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_82297B6AFFE49354*>* Method_1_28477BC0940AC0A8(::Class_2_1BB8CA1042AACD99* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Single a4)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_82297B6AFFE49354*>*(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_28477BC0940AC0A8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_EBF4D3FAD6A368C6(::Class_2_1BB8CA1042AACD99* a1, ::System::Collections::Generic::List_1<::Class_1_82297B6AFFE49354*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::System::Collections::Generic::List_1<::Class_1_82297B6AFFE49354*>*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_EBF4D3FAD6A368C6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DE2090B5571A9853(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_DE2090B5571A9853_OFFSET))(this, a1);
	}

	::System::Void Method_1_DE2090B5571A9853_1(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_DE2090B5571A9853_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD460C2B5F69BC86(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_FD460C2B5F69BC86_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_5B81BCF35938119A(::Class_2_1BB8CA1042AACD99* a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_5B81BCF35938119A_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_241E05522154DA3F(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_241E05522154DA3F_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Single, ::System::Collections::Generic::List_1<::System::Int32>*> Method_1_F71FCF743BB85761(::Class_2_1BB8CA1042AACD99* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Int32 a4)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Collections::Generic::List_1<::System::Int32>*>(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_F71FCF743BB85761_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E484F5B01BE94568_1(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_E484F5B01BE94568_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_33D2733A1285B960(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_33D2733A1285B960_OFFSET))(this, a1);
	}

	::System::Void Method_1_0CEBFC693180E04B(::Class_2_1BB8CA1042AACD99* a1, ::RPG::LittleGameShare::DiceCombatCore::EAIState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::RPG::LittleGameShare::DiceCombatCore::EAIState))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_0CEBFC693180E04B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1C2DE2AA5CF507CB(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_1C2DE2AA5CF507CB_OFFSET))(this, a1);
	}

	::System::Void Method_1_1C2DE2AA5CF507CB_1(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_1C2DE2AA5CF507CB_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_1C2DE2AA5CF507CB_2(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_1C2DE2AA5CF507CB_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_2368DFE07F28F7DA(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_2368DFE07F28F7DA_OFFSET))(this, a1);
	}

	::System::Void Method_1_C7CC2AC3AE39727D(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_C7CC2AC3AE39727D_OFFSET))(this, a1);
	}

	::System::Void Method_1_DBF7B3B41259DD38(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_DBF7B3B41259DD38_OFFSET))(this, a1);
	}

	::System::Void Method_1_1AA4C08153C786BA(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_1AA4C08153C786BA_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D1D07E684632F8B(::Class_2_1BB8CA1042AACD99* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_7D1D07E684632F8B_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::Class_1_0E117AC86D8E5BCA*, ::Class_1_0E117AC86D8E5BCA*>* Method_1_C4485AC50EE09E33(::Class_2_1BB8CA1042AACD99* a1, ::Class_1_586CC94A266070EA* a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::Class_1_0E117AC86D8E5BCA*, ::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::Class_1_586CC94A266070EA*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_C4485AC50EE09E33_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::Class_1_0E117AC86D8E5BCA*, ::Class_1_0E117AC86D8E5BCA*>* Method_1_5A8FEC9AAEC6BBF9(::Class_2_1BB8CA1042AACD99* a1, ::Class_1_586CC94A266070EA* a2, ::System::Int32 a3)
	{
		return ((::System::Collections::Generic::Dictionary_2<::Class_1_0E117AC86D8E5BCA*, ::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::Class_1_586CC94A266070EA*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_5A8FEC9AAEC6BBF9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CDAF0321B499822E(::Class_2_1BB8CA1042AACD99* a1, ::Class_1_586CC94A266070EA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::Class_1_586CC94A266070EA*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_CDAF0321B499822E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A66DC4EEA5545233(::Class_2_1BB8CA1042AACD99* a1, ::Class_2_1BB8CA1042AACD99* a2, ::Class_1_586CC94A266070EA* a3, ::System::Single a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::Class_2_1BB8CA1042AACD99*, ::Class_1_586CC94A266070EA*, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_A66DC4EEA5545233_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::ValueTuple_3<::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*> Method_1_4DF2B91FD8FC14C9(::Class_2_1BB8CA1042AACD99* a1, ::System::Int32 a2)
	{
		return ((::System::ValueTuple_3<::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*>(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_4DF2B91FD8FC14C9_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_FB662B1693E45D85(::Class_1_D2DA75CD29265F7F* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::BitArray* a3)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_D2DA75CD29265F7F*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::BitArray*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_FB662B1693E45D85_OFFSET))(this, a1, a2, a3);
	}

	::System::ValueTuple_2<::System::Single, ::System::Collections::Generic::List_1<::System::Int32>*> Method_1_2858CC98E795D643(::Class_1_855E018881074DD2* a1)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Collections::Generic::List_1<::System::Int32>*>(*)(::PVOID, ::Class_1_855E018881074DD2*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_2858CC98E795D643_OFFSET))(this, a1);
	}

	::Class_1_38C460910E5AC181* Method_1_6BB8D786B6E2D153(::Class_1_72E419617CCAA151* a1)
	{
		return ((::Class_1_38C460910E5AC181*(*)(::PVOID, ::Class_1_72E419617CCAA151*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_6BB8D786B6E2D153_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A8CE523760714CCC(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_A8CE523760714CCC_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_C07FF5380C515368(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_C07FF5380C515368_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*>* Method_1_505ECD9C15AD38F6(::Class_2_1BB8CA1042AACD99* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*>*(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_505ECD9C15AD38F6_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_B900C7E8513B8C44(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_B900C7E8513B8C44_OFFSET))(this, a1);
	}

	::Class_1_0272D5A0C4F089B0* Method_1_DE5CF0058746B7E4(::Class_2_1BB8CA1042AACD99* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::Class_1_0272D5A0C4F089B0*(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_DE5CF0058746B7E4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_EAD1F8944F4E439A(::Class_2_1BB8CA1042AACD99* a1, ::RPG::LittleGameShare::DiceCombatCore::EAIState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::RPG::LittleGameShare::DiceCombatCore::EAIState))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_EAD1F8944F4E439A_OFFSET))(this, a1, a2);
	}

	::Class_1_586CC94A266070EA* Method_1_CCB93DB5F893C716(::System::UInt32 a1)
	{
		return ((::Class_1_586CC94A266070EA*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_CCB93DB5F893C716_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8723A000853037DA(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_8723A000853037DA_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_22D0ADB352880F38(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1_METHOD_1_22D0ADB352880F38_OFFSET))(this, a1, a2);
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
