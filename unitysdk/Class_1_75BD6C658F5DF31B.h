#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StuffStats.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MuseumAreaData; }
namespace RPG::Client { class MuseumData; }
namespace RPG::Client { class MuseumPropertyData; }
namespace RPG::Client { class MuseumStaffData; }
namespace RPG::Client { class MuseumTurnResult; }
namespace RPG::GameCore { class MuseumAreaRow; }
namespace RPG::GameCore { class MuseumPhaseUpgradeRow; }
namespace RPG::GameCore { class MuseumStatsRow; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_75BD6C658F5DF31B_METHOD_1_100D4AB90C05E3D9_OFFSET UNITYSDK_OFFSET(0x10A66B30)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_1082D2D113071CEB_OFFSET UNITYSDK_OFFSET(0x10A67E10)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x10A67850)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_2D59DA069BD65EB4_OFFSET UNITYSDK_OFFSET(0x10A65B90)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_31970F582DB3F255_OFFSET UNITYSDK_OFFSET(0x10A68320)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x10A67B50)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_46C4875643AE49C7_OFFSET UNITYSDK_OFFSET(0x10A67290)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_569BD2B566FA5DC0_OFFSET UNITYSDK_OFFSET(0x10A66130)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10A69100)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x10A68E40)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_6CF2D90D7ED97F32_OFFSET UNITYSDK_OFFSET(0x10A68900)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_75031AFDB113926A_OFFSET UNITYSDK_OFFSET(0x10A65EA0)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_7966B11DBD07BB00_OFFSET UNITYSDK_OFFSET(0x10A65CD0)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_8517AA51C6B2FA2C_OFFSET UNITYSDK_OFFSET(0x10A66A70)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_8A7172059D851CE3_OFFSET UNITYSDK_OFFSET(0x10A665E0)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_8C5002599077063C_OFFSET UNITYSDK_OFFSET(0x10A65FA0)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x10A67950)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10A67500)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_97C80AC267B67CE0_OFFSET UNITYSDK_OFFSET(0x10A68080)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_9A3891E169F384E4_OFFSET UNITYSDK_OFFSET(0x10A68CA0)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_9D8CB5E47C1952BD_1_OFFSET UNITYSDK_OFFSET(0x10A68460)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0x10A67C10)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x10A69040)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_A5544268D28E0A8E_OFFSET UNITYSDK_OFFSET(0x10A68EC0)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_A7FA672A371B6F14_OFFSET UNITYSDK_OFFSET(0x10A68B60)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_A893DCD4D746C9DB_OFFSET UNITYSDK_OFFSET(0x10A683B0)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_AEAB9A941BD9F3DA_OFFSET UNITYSDK_OFFSET(0x10A661A0)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_AEE3F1CD6539AAB2_OFFSET UNITYSDK_OFFSET(0x10A66DC0)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_AEFEC6249D0AD6EC_OFFSET UNITYSDK_OFFSET(0x10A65D80)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x10A67140)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_B47799517FBFCC30_OFFSET UNITYSDK_OFFSET(0x10A67450)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_B81759F598E35AE1_OFFSET UNITYSDK_OFFSET(0x10A668F0)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_BC6D08900BFD7EBE_OFFSET UNITYSDK_OFFSET(0x10A68110)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_C784934903D1CFFC_OFFSET UNITYSDK_OFFSET(0x10A68F50)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_CC14DAFE4EBDDBE7_OFFSET UNITYSDK_OFFSET(0x10A66470)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_D7312C0167084308_OFFSET UNITYSDK_OFFSET(0x10A658D0)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_E3165986E296864D_1_OFFSET UNITYSDK_OFFSET(0x10A68660)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_E3165986E296864D_OFFSET UNITYSDK_OFFSET(0x10A687B0)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_F2E88133FA6E4C2E_OFFSET UNITYSDK_OFFSET(0x10A666C0)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_F89B1C4D9BFF737D_OFFSET UNITYSDK_OFFSET(0x10A66C70)
#define CLASS_1_75BD6C658F5DF31B__CCTOR_OFFSET UNITYSDK_OFFSET(0x10A69140)

inline static constexpr unsigned int Class_1_75BD6C658F5DF31B_TypeDefinitionIndex = 52813;

class Class_1_75BD6C658F5DF31B : public ::System::Object
{
public:
	static ::RPG::Client::MuseumAreaData** StaticGet_Field_1_3()
	{
		return (::RPG::Client::MuseumAreaData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75BD6C658F5DF31B_TypeDefinitionIndex)->GetStaticField(0x42AF0);
	}
	static ::RPG::GameCore::MuseumPhaseUpgradeRow** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::MuseumPhaseUpgradeRow**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75BD6C658F5DF31B_TypeDefinitionIndex)->GetStaticField(0x42AF8);
	}
	static ::System::Text::StringBuilder** StaticGet_Field_1_6()
	{
		return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75BD6C658F5DF31B_TypeDefinitionIndex)->GetStaticField(0x42B00);
	}
	static ::RPG::GameCore::MuseumAreaRow** StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::MuseumAreaRow**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75BD6C658F5DF31B_TypeDefinitionIndex)->GetStaticField(0x42B08);
	}
	static ::RPG::Client::MuseumData** StaticGet_Field_1_4()
	{
		return (::RPG::Client::MuseumData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75BD6C658F5DF31B_TypeDefinitionIndex)->GetStaticField(0x42B10);
	}
	static ::RPG::GameCore::MuseumStatsRow** StaticGet_Field_1_2()
	{
		return (::RPG::GameCore::MuseumStatsRow**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75BD6C658F5DF31B_TypeDefinitionIndex)->GetStaticField(0x42B18);
	}
	static ::Il2CppArray<::System::UInt32>** StaticGet_Field_1_7()
	{
		return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75BD6C658F5DF31B_TypeDefinitionIndex)->GetStaticField(0x42B20);
	}
	static ::RPG::Client::MuseumPropertyData** StaticGet_Field_1_5()
	{
		return (::RPG::Client::MuseumPropertyData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75BD6C658F5DF31B_TypeDefinitionIndex)->GetStaticField(0x42B28);
	}
	static ::System::UInt32* StaticGet_Field_1_8()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_75BD6C658F5DF31B_TypeDefinitionIndex)->GetStaticField(0xF630);
	}
	// static const ::System::Int32 Field_1_9 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x64; // 0x0
	// static const ::System::String* Field_1_11; // 0x0
	// static const ::System::String* Field_1_12; // 0x0
	// static const ::System::String* Field_1_13; // 0x0
	// static const ::System::String* Field_1_14; // 0x0
	// static const ::System::String* Field_1_15; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_D7312C0167084308(::RPG::Client::MuseumAreaData* a1)
	{
		return ((::System::Void(*)(::RPG::Client::MuseumAreaData*))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_D7312C0167084308_OFFSET))(a1);
	}

	static ::System::Void Method_1_8C5002599077063C(::RPG::Client::MuseumData* a1)
	{
		return ((::System::Void(*)(::RPG::Client::MuseumData*))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_8C5002599077063C_OFFSET))(a1);
	}

	static ::System::Void Method_1_CC14DAFE4EBDDBE7(::RPG::Client::MuseumAreaData* a1, ::RPG::GameCore::StuffStats a2)
	{
		return ((::System::Void(*)(::RPG::Client::MuseumAreaData*, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_CC14DAFE4EBDDBE7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F2E88133FA6E4C2E(::RPG::Client::MuseumAreaData* a1)
	{
		return ((::System::Void(*)(::RPG::Client::MuseumAreaData*))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_F2E88133FA6E4C2E_OFFSET))(a1);
	}

	static ::System::Void Method_1_B81759F598E35AE1(::RPG::Client::MuseumAreaData* a1, ::RPG::Client::MuseumStaffData* a2)
	{
		return ((::System::Void(*)(::RPG::Client::MuseumAreaData*, ::RPG::Client::MuseumStaffData*))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_B81759F598E35AE1_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_100D4AB90C05E3D9(::RPG::Client::MuseumAreaData* a1, ::RPG::GameCore::StuffStats a2)
	{
		return ((::System::UInt32(*)(::RPG::Client::MuseumAreaData*, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_100D4AB90C05E3D9_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_F89B1C4D9BFF737D(::RPG::Client::MuseumAreaData* a1)
	{
		return ((::System::UInt32(*)(::RPG::Client::MuseumAreaData*))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_F89B1C4D9BFF737D_OFFSET))(a1);
	}

	static ::System::Void Method_1_AEE3F1CD6539AAB2(::RPG::Client::MuseumData* a1, ::RPG::Client::MuseumTurnResult* a2)
	{
		return ((::System::Void(*)(::RPG::Client::MuseumData*, ::RPG::Client::MuseumTurnResult*))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_AEE3F1CD6539AAB2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_9681042564541CD6_OFFSET))();
	}

	static ::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_B1936CE4DA97AA45_OFFSET))();
	}

	static ::System::Void Method_1_2D59DA069BD65EB4(::RPG::Client::MuseumAreaData* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::RPG::Client::MuseumAreaData*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_2D59DA069BD65EB4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7966B11DBD07BB00(::RPG::Client::MuseumAreaData* a1, ::System::UInt32 a2, ::RPG::GameCore::StuffStats a3)
	{
		return ((::System::Void(*)(::RPG::Client::MuseumAreaData*, ::System::UInt32, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_7966B11DBD07BB00_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_569BD2B566FA5DC0(::RPG::Client::MuseumData* a1)
	{
		return ((::System::Void(*)(::RPG::Client::MuseumData*))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_569BD2B566FA5DC0_OFFSET))(a1);
	}

	static ::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_1290EA767C459179_OFFSET))();
	}

	static ::System::Void Method_1_AEAB9A941BD9F3DA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_AEAB9A941BD9F3DA_OFFSET))(a1);
	}

	static ::System::Void Method_1_75031AFDB113926A(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_75031AFDB113926A_OFFSET))(a1);
	}

	static ::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_33ACA6CB2ABC73F7_OFFSET))();
	}

	static ::System::Void Method_1_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_9D8CB5E47C1952BD_OFFSET))();
	}

	static ::System::Void Method_1_AEFEC6249D0AD6EC(::System::UInt32 a1, ::RPG::GameCore::StuffStats a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_AEFEC6249D0AD6EC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_31970F582DB3F255(::RPG::GameCore::StuffStats a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_31970F582DB3F255_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_6CF2D90D7ED97F32(::System::UInt32 a1, ::RPG::GameCore::StuffStats a2)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_6CF2D90D7ED97F32_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A893DCD4D746C9DB(::RPG::GameCore::StuffStats a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_A893DCD4D746C9DB_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_9A3891E169F384E4(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_9A3891E169F384E4_OFFSET))(a1);
	}

	static ::System::Void Method_1_8A7172059D851CE3(::RPG::Client::MuseumPropertyData* a1)
	{
		return ((::System::Void(*)(::RPG::Client::MuseumPropertyData*))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_8A7172059D851CE3_OFFSET))(a1);
	}

	static ::System::Void Method_1_9D8CB5E47C1952BD_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_9D8CB5E47C1952BD_1_OFFSET))();
	}

	static ::System::UInt32 Method_1_E3165986E296864D(::RPG::GameCore::StuffStats a1)
	{
		return ((::System::UInt32(*)(::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_E3165986E296864D_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_E3165986E296864D_1(::RPG::GameCore::StuffStats a1)
	{
		return ((::System::UInt32(*)(::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_E3165986E296864D_1_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_A7FA672A371B6F14(::RPG::GameCore::StuffStats a1)
	{
		return ((::System::UInt32(*)(::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_A7FA672A371B6F14_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_8517AA51C6B2FA2C(::RPG::Client::MuseumStaffData* a1, ::RPG::GameCore::StuffStats a2)
	{
		return ((::System::UInt32(*)(::RPG::Client::MuseumStaffData*, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_8517AA51C6B2FA2C_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_1082D2D113071CEB()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_1082D2D113071CEB_OFFSET))();
	}

	static ::System::Boolean Method_1_97C80AC267B67CE0(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_97C80AC267B67CE0_OFFSET))(a1);
	}

	static ::System::Void Method_1_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_921C3C3E09D59CD4_OFFSET))();
	}

	static ::System::Void Method_1_BC6D08900BFD7EBE(::RPG::GameCore::StuffStats a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_BC6D08900BFD7EBE_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_B47799517FBFCC30(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_B47799517FBFCC30_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_46C4875643AE49C7()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_46C4875643AE49C7_OFFSET))();
	}

	static ::System::Void Method_1_61929A3103595552()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_61929A3103595552_OFFSET))();
	}

	static ::System::Void Method_1_A5544268D28E0A8E(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_A5544268D28E0A8E_OFFSET))(a1);
	}

	static ::System::Void Method_1_C784934903D1CFFC(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_C784934903D1CFFC_OFFSET))(a1);
	}

	static ::System::Void Method_1_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_9FA85F81BF5EE3CA_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_5790A55946AA509D_OFFSET))();
	}
};
