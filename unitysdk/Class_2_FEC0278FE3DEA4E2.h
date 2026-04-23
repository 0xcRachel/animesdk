#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_8FDC5D7AC7567D61;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::Client { class EmoPlayableGraphConfig; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class BattlePerformCaptureActor; }
namespace RPG::GameCore { class BattlePerformConfig; }
namespace RPG::GameCore { class BattlePerformCreateActor; }
namespace RPG::GameCore { class BattlePerformInit; }
namespace RPG::GameCore { class BattlePerformStageConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FEC0278FE3DEA4E2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDB63130)
#define CLASS_2_FEC0278FE3DEA4E2_GET_WORKFINISH_OFFSET UNITYSDK_OFFSET(0xDB67320)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xDB63180)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xDB63310)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_1B59235A910528B9_OFFSET UNITYSDK_OFFSET(0xDB66190)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_27C87B63AFD1A352_OFFSET UNITYSDK_OFFSET(0xDB66900)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_27EC2C099D14356D_OFFSET UNITYSDK_OFFSET(0xDB671C0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_28C834B59E1D0120_OFFSET UNITYSDK_OFFSET(0xDB63810)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_2E6FB1478A87D6D2_OFFSET UNITYSDK_OFFSET(0xDB64150)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_2F820B7CD0C616C8_OFFSET UNITYSDK_OFFSET(0xDB663F0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xDB67340)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_41A074549EF25F63_1_OFFSET UNITYSDK_OFFSET(0xDB634B0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xDB633B0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_435C766C09C307BB_OFFSET UNITYSDK_OFFSET(0xDB65940)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0xDB64380)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_4C9E0464E121B71C_OFFSET UNITYSDK_OFFSET(0xDB635B0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_5B479E7D4ED7C8A3_OFFSET UNITYSDK_OFFSET(0xDB65EF0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_62882324FFF46D85_OFFSET UNITYSDK_OFFSET(0xDB65B80)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_698AEA6086494C95_OFFSET UNITYSDK_OFFSET(0xDB652A0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_7B0A407379BA27E7_OFFSET UNITYSDK_OFFSET(0xDB67060)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_7E462A97DE7ACFDA_1_OFFSET UNITYSDK_OFFSET(0xDB66820)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_7E462A97DE7ACFDA_OFFSET UNITYSDK_OFFSET(0xDB65B00)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_91B479DECE7491D8_OFFSET UNITYSDK_OFFSET(0xDB659B0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_AC0A9C526236C80D_OFFSET UNITYSDK_OFFSET(0xDB65010)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xDB67170)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_AF35526B98502BDF_OFFSET UNITYSDK_OFFSET(0xDB63990)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_B0E5A94005A811FC_OFFSET UNITYSDK_OFFSET(0xDB66470)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_B1690D489F43825A_OFFSET UNITYSDK_OFFSET(0xDB64F00)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_B208000F46964589_OFFSET UNITYSDK_OFFSET(0xDB65350)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_C0D4F45F16A4FB85_OFFSET UNITYSDK_OFFSET(0xDB656E0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_C39FA4BD61753B2D_OFFSET UNITYSDK_OFFSET(0xDB66680)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_C4AFE676986D96B9_OFFSET UNITYSDK_OFFSET(0xDB65120)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xDB67120)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDB64100)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_D34432C0B65E6441_OFFSET UNITYSDK_OFFSET(0xDB668A0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_EB522918F22FFA3B_OFFSET UNITYSDK_OFFSET(0xDB63740)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_EB8DB967ADFFC4B2_OFFSET UNITYSDK_OFFSET(0xDB66530)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_EEABD52C0F4D0C8A_OFFSET UNITYSDK_OFFSET(0xDB63FB0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_F89C48EE20723849_OFFSET UNITYSDK_OFFSET(0xDB63BB0)
#define CLASS_2_FEC0278FE3DEA4E2_SET_WORKFINISH_OFFSET UNITYSDK_OFFSET(0xDB67330)
#define CLASS_2_FEC0278FE3DEA4E2_TICK_OFFSET UNITYSDK_OFFSET(0xDB63290)
#define CLASS_2_FEC0278FE3DEA4E2__CCTOR_OFFSET UNITYSDK_OFFSET(0xDB673E0)
#define CLASS_2_FEC0278FE3DEA4E2__CTOR_OFFSET UNITYSDK_OFFSET(0xDB673A0)
#define CLASS_2_FEC0278FE3DEA4E2___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xDB67400)

inline static constexpr unsigned int Class_2_FEC0278FE3DEA4E2_TypeDefinitionIndex = 52860;

class Class_2_FEC0278FE3DEA4E2 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::String** StaticGet_Field_2_22()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FEC0278FE3DEA4E2_TypeDefinitionIndex)->GetStaticField(0xDF50);
	}
	// static const ::System::String* Field_2_20; // 0x0
	::Class_1_8FDC5D7AC7567D61* Field_2_11; // 0x18
	::RPG::Client::Promises::Promise* Field_2_16; // 0x20
	::Class_1_8FDC5D7AC7567D61* Field_2_12; // 0x28
	::RPG::GameCore::BattlePerformInit* Field_2_0; // 0x30
	::RPG::Client::Promises::Promise* Field_2_15; // 0x38
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::RPG::GameCore::BattlePerformCreateActor*, ::RPG::GameCore::GameEntity*>>* Field_2_13; // 0x40
	::RPG::GameCore::LevelGraphComponent* Field_2_10; // 0x48
	::RPG::GameCore::GameWorld* Field_2_2; // 0x50
	::Class_3_E21F6DE9B7FA4D05* Field_2_7; // 0x58
	::RPG::GameCore::BattlePerformStageConfig* Field_2_5; // 0x60
	::System::String* Field_2_3; // 0x68
	::RPG::GameCore::BattlePerformConfig* Field_2_4; // 0x70
	::System::Exception* Field_2_21; // 0x78
	::Class_3_E21F6DE9B7FA4D05* Field_2_8; // 0x80
	::RPG::Client::Promises::Promise* Field_2_14; // 0x88
	::RPG::Client::EmoPlayableGraphConfig* Field_2_6; // 0x90
	::RPG::GameCore::TaskContext* Field_2_1; // 0x98
	::System::Collections::Generic::List_1<::Class_3_E21F6DE9B7FA4D05*>* Field_2_9; // 0xA0
	::System::Int32 Field_2_17; // 0xA8
	::System::Boolean _WorkFinish_k__BackingField; // 0xAC
	::System::Boolean Field_2_18; // 0xAD

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_AF35526B98502BDF(::RPG::GameCore::BattlePerformInit* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::RPG::GameCore::BattlePerformInit*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_AF35526B98502BDF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EEABD52C0F4D0C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_EEABD52C0F4D0C8A_OFFSET))(this);
	}

	::System::Void Method_2_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Method_2_AC0A9C526236C80D(::RPG::GameCore::BattlePerformCreateActor* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCreateActor*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_AC0A9C526236C80D_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1690D489F43825A(::RPG::GameCore::BattlePerformCaptureActor* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_B1690D489F43825A_OFFSET))(this, a1);
	}

	::System::Void Method_2_B208000F46964589()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_B208000F46964589_OFFSET))(this);
	}

	::System::Int32 Method_2_435C766C09C307BB(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::BattlePerformCaptureActor* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::BattlePerformCaptureActor*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_435C766C09C307BB_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_2_91B479DECE7491D8(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_91B479DECE7491D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B59235A910528B9(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_1B59235A910528B9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B0E5A94005A811FC(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_B0E5A94005A811FC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EB8DB967ADFFC4B2(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_EB8DB967ADFFC4B2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7E462A97DE7ACFDA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_7E462A97DE7ACFDA_OFFSET))(this, a1);
	}

	::System::Void Method_2_7E462A97DE7ACFDA_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_7E462A97DE7ACFDA_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C39FA4BD61753B2D(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_C39FA4BD61753B2D_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_2_C4AFE676986D96B9(::RPG::GameCore::BattlePerformCreateActor* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::BattlePerformCreateActor*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_C4AFE676986D96B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C0D4F45F16A4FB85(::RPG::GameCore::BattlePerformCreateActor* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCreateActor*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_C0D4F45F16A4FB85_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2F820B7CD0C616C8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_2F820B7CD0C616C8_OFFSET))(this, a1);
	}

	::System::Void Method_2_62882324FFF46D85(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_62882324FFF46D85_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_698AEA6086494C95(::RPG::GameCore::BattlePerformCaptureActor* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_698AEA6086494C95_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B479E7D4ED7C8A3(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_5B479E7D4ED7C8A3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4C9E0464E121B71C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_4C9E0464E121B71C_OFFSET))(this, a1);
	}

	::System::Void Method_2_28C834B59E1D0120()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_28C834B59E1D0120_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_41A074549EF25F63_1_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_2E6FB1478A87D6D2()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_2E6FB1478A87D6D2_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_F89C48EE20723849()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_F89C48EE20723849_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_27C87B63AFD1A352()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_27C87B63AFD1A352_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B0A407379BA27E7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_7B0A407379BA27E7_OFFSET))(this);
	}

	::System::Void Method_2_EB522918F22FFA3B(::RPG::Client::Promises::Promise* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_EB522918F22FFA3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_D34432C0B65E6441(::RPG::Client::Promises::Promise* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_D34432C0B65E6441_OFFSET))(this, a1);
	}

	::System::Void Method_2_27EC2C099D14356D(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_27EC2C099D14356D_OFFSET))(this, a1);
	}

	::System::Boolean get_WorkFinish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_GET_WORKFINISH_OFFSET))(this);
	}

	::System::Void set_WorkFinish(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_SET_WORKFINISH_OFFSET))(this, value);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
