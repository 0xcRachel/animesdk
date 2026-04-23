#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CB24331611AE644_ColumeType.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_382;
class Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class CSVRow; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9CB24331611AE644_METHOD_1_02B490C9189918DC_1_OFFSET UNITYSDK_OFFSET(0xA5F26B0)
#define CLASS_1_9CB24331611AE644_METHOD_1_02B490C9189918DC_2_OFFSET UNITYSDK_OFFSET(0xA5F4270)
#define CLASS_1_9CB24331611AE644_METHOD_1_02B490C9189918DC_3_OFFSET UNITYSDK_OFFSET(0xA5F4CA0)
#define CLASS_1_9CB24331611AE644_METHOD_1_02B490C9189918DC_4_OFFSET UNITYSDK_OFFSET(0xA5F4F60)
#define CLASS_1_9CB24331611AE644_METHOD_1_02B490C9189918DC_5_OFFSET UNITYSDK_OFFSET(0xA5F54D0)
#define CLASS_1_9CB24331611AE644_METHOD_1_02B490C9189918DC_6_OFFSET UNITYSDK_OFFSET(0xA5F59F0)
#define CLASS_1_9CB24331611AE644_METHOD_1_02B490C9189918DC_7_OFFSET UNITYSDK_OFFSET(0xA5F5E00)
#define CLASS_1_9CB24331611AE644_METHOD_1_02B490C9189918DC_8_OFFSET UNITYSDK_OFFSET(0xA5F62A0)
#define CLASS_1_9CB24331611AE644_METHOD_1_02B490C9189918DC_9_OFFSET UNITYSDK_OFFSET(0xA5F6680)
#define CLASS_1_9CB24331611AE644_METHOD_1_02B490C9189918DC_OFFSET UNITYSDK_OFFSET(0xA5F2500)
#define CLASS_1_9CB24331611AE644_METHOD_1_08DFFB522415A616_OFFSET UNITYSDK_OFFSET(0xA5F1400)
#define CLASS_1_9CB24331611AE644_METHOD_1_10174DABAE4BE0E1_OFFSET UNITYSDK_OFFSET(0xA5EDF80)
#define CLASS_1_9CB24331611AE644_METHOD_1_1B9CC121BDC8766D_1_OFFSET UNITYSDK_OFFSET(0xA5F7380)
#define CLASS_1_9CB24331611AE644_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xA5F7270)
#define CLASS_1_9CB24331611AE644_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xA5ED690)
#define CLASS_1_9CB24331611AE644_METHOD_1_4037F54396AA95EF_OFFSET UNITYSDK_OFFSET(0xA5F1440)
#define CLASS_1_9CB24331611AE644_METHOD_1_4C2F83AB6E861A93_OFFSET UNITYSDK_OFFSET(0xA5F64E0)
#define CLASS_1_9CB24331611AE644_METHOD_1_56FD732C92374785_OFFSET UNITYSDK_OFFSET(0xA5EE4A0)
#define CLASS_1_9CB24331611AE644_METHOD_1_58E4F6A5F8FAF17F_1_OFFSET UNITYSDK_OFFSET(0xA5F4C20)
#define CLASS_1_9CB24331611AE644_METHOD_1_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0xA5F4A30)
#define CLASS_1_9CB24331611AE644_METHOD_1_612F73C5F773C442_OFFSET UNITYSDK_OFFSET(0xA5EE840)
#define CLASS_1_9CB24331611AE644_METHOD_1_81E7A4FD20EC860C_OFFSET UNITYSDK_OFFSET(0xA5F2230)
#define CLASS_1_9CB24331611AE644_METHOD_1_84089D51E7DA5C2D_1_OFFSET UNITYSDK_OFFSET(0xA5F16B0)
#define CLASS_1_9CB24331611AE644_METHOD_1_84089D51E7DA5C2D_OFFSET UNITYSDK_OFFSET(0xA5F1910)
#define CLASS_1_9CB24331611AE644_METHOD_1_8E9E3E0D1D6E6E24_OFFSET UNITYSDK_OFFSET(0xA5ED780)
#define CLASS_1_9CB24331611AE644_METHOD_1_95E181670AB28CF8_OFFSET UNITYSDK_OFFSET(0xA5F1640)
#define CLASS_1_9CB24331611AE644_METHOD_1_A3A5363DC5B4E085_OFFSET UNITYSDK_OFFSET(0xA5F2C70)
#define CLASS_1_9CB24331611AE644_METHOD_1_A578E8216C519018_OFFSET UNITYSDK_OFFSET(0xA5EE0F0)
#define CLASS_1_9CB24331611AE644_METHOD_1_ADBC9359D67A6B9C_OFFSET UNITYSDK_OFFSET(0xA5ECCF0)
#define CLASS_1_9CB24331611AE644_METHOD_1_B4CCC42D866F3519_1_OFFSET UNITYSDK_OFFSET(0xA5F5670)
#define CLASS_1_9CB24331611AE644_METHOD_1_B4CCC42D866F3519_2_OFFSET UNITYSDK_OFFSET(0xA5F5B80)
#define CLASS_1_9CB24331611AE644_METHOD_1_B4CCC42D866F3519_3_OFFSET UNITYSDK_OFFSET(0xA5F5FE0)
#define CLASS_1_9CB24331611AE644_METHOD_1_B4CCC42D866F3519_OFFSET UNITYSDK_OFFSET(0xA5F5190)
#define CLASS_1_9CB24331611AE644_METHOD_1_C14ED3F9B41F2361_OFFSET UNITYSDK_OFFSET(0xA5F4AB0)
#define CLASS_1_9CB24331611AE644_METHOD_1_C2245F7B8D6891C4_OFFSET UNITYSDK_OFFSET(0xA5F4610)
#define CLASS_1_9CB24331611AE644_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xA5F2C20)
#define CLASS_1_9CB24331611AE644_METHOD_1_C74120A854383421_OFFSET UNITYSDK_OFFSET(0xA5F2860)
#define CLASS_1_9CB24331611AE644_METHOD_1_CE34EA208837238D_1_OFFSET UNITYSDK_OFFSET(0xA5F7310)
#define CLASS_1_9CB24331611AE644_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0xA5F7200)
#define CLASS_1_9CB24331611AE644_METHOD_1_D00B093DA0675A09_OFFSET UNITYSDK_OFFSET(0xA5F1B50)
#define CLASS_1_9CB24331611AE644_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xA5EDF40)
#define CLASS_1_9CB24331611AE644_METHOD_1_E0C5B55BC002764E_OFFSET UNITYSDK_OFFSET(0xA5F2EA0)
#define CLASS_1_9CB24331611AE644__CCTOR_OFFSET UNITYSDK_OFFSET(0xA5F6820)
#define CLASS_1_9CB24331611AE644__CTOR_OFFSET UNITYSDK_OFFSET(0xA5F7420)
#define CLASS_1_9CB24331611AE644___ONLIGHTCHARACTERCREATE_G___CONCATBUILDDATA_24_0_OFFSET UNITYSDK_OFFSET(0xA5F4250)

inline static constexpr unsigned int Class_1_9CB24331611AE644_TypeDefinitionIndex = 51797;

class Class_1_9CB24331611AE644 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_5()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CB24331611AE644_TypeDefinitionIndex)->GetStaticField(0x5E410);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CB24331611AE644_TypeDefinitionIndex)->GetStaticField(0x5E418);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_58()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CB24331611AE644_TypeDefinitionIndex)->GetStaticField(0x5E420);
	}
	static ::Il2CppArray<::RPG::GameCore::AbilityProperty>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::RPG::GameCore::AbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CB24331611AE644_TypeDefinitionIndex)->GetStaticField(0x5E428);
	}
	static ::Il2CppArray<::RPG::GameCore::AbilityProperty>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::RPG::GameCore::AbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CB24331611AE644_TypeDefinitionIndex)->GetStaticField(0x5E430);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CB24331611AE644_TypeDefinitionIndex)->GetStaticField(0x5E438);
	}
	static ::System::String** StaticGet_Field_1_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CB24331611AE644_TypeDefinitionIndex)->GetStaticField(0x5E440);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CB24331611AE644_TypeDefinitionIndex)->GetStaticField(0x5E448);
	}
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	// static const ::System::String* Field_1_10; // 0x0
	// static const ::System::String* Field_1_11; // 0x0
	// static const ::System::String* Field_1_12; // 0x0
	// static const ::System::String* Field_1_13; // 0x0
	// static const ::System::String* Field_1_14; // 0x0
	// static const ::System::String* Field_1_15; // 0x0
	// static const ::System::String* Field_1_16; // 0x0
	// static const ::System::String* Field_1_17; // 0x0
	// static const ::System::String* Field_1_18; // 0x0
	// static const ::System::String* Field_1_19; // 0x0
	// static const ::System::String* Field_1_20; // 0x0
	// static const ::System::String* Field_1_21; // 0x0
	// static const ::System::String* Field_1_22; // 0x0
	// static const ::System::String* Field_1_23; // 0x0
	// static const ::System::String* Field_1_24; // 0x0
	// static const ::System::String* Field_1_25; // 0x0
	// static const ::System::String* Field_1_26; // 0x0
	// static const ::System::String* Field_1_27; // 0x0
	// static const ::System::String* Field_1_28; // 0x0
	// static const ::System::String* Field_1_29; // 0x0
	// static const ::System::String* Field_1_30; // 0x0
	// static const ::System::String* Field_1_31; // 0x0
	// static const ::System::String* Field_1_32; // 0x0
	// static const ::System::String* Field_1_33; // 0x0
	// static const ::System::String* Field_1_34; // 0x0
	// static const ::System::String* Field_1_35; // 0x0
	// static const ::System::String* Field_1_36; // 0x0
	// static const ::System::String* Field_1_37; // 0x0
	// static const ::System::String* Field_1_38; // 0x0
	// static const ::System::String* Field_1_39; // 0x0
	// static const ::System::String* Field_1_40; // 0x0
	// static const ::System::String* Field_1_41; // 0x0
	// static const ::System::String* Field_1_42; // 0x0
	// static const ::System::String* Field_1_43; // 0x0
	// static const ::System::String* Field_1_44; // 0x0
	// static const ::System::String* Field_1_45; // 0x0
	// static const ::System::String* Field_1_46; // 0x0
	// static const ::System::String* Field_1_47; // 0x0
	// static const ::System::String* Field_1_48; // 0x0
	// static const ::System::String* Field_1_49; // 0x0
	// static const ::System::String* Field_1_50; // 0x0
	// static const ::System::String* Field_1_51; // 0x0
	// static const ::System::String* Field_1_52; // 0x0
	// static const ::System::String* Field_1_53; // 0x0
	// static const ::System::String* Field_1_54; // 0x0
	// static const ::System::String* Field_1_55; // 0x0
	// static const ::System::String* Field_1_56; // 0x0
	// static const ::System::String* Field_1_57; // 0x0
	::System::Collections::Generic::List_1<::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824*>* Field_1_60; // 0x10
	::RPG::GameCore::BattleInstance* Field_1_59; // 0x18
	::System::Collections::Generic::SortedList_2<::System::Int32, ::System::String*>* Field_1_0; // 0x20
	::System::String* Field_1_61; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ADBC9359D67A6B9C(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::BattleLineupData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::BattleLineupData*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_ADBC9359D67A6B9C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8E9E3E0D1D6E6E24()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_8E9E3E0D1D6E6E24_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_10174DABAE4BE0E1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_10174DABAE4BE0E1_OFFSET))(this, a1);
	}

	::System::Void Method_1_56FD732C92374785(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_56FD732C92374785_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A578E8216C519018(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_A578E8216C519018_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824*>* Method_1_08DFFB522415A616()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_08DFFB522415A616_OFFSET))(this);
	}

	::System::String* Method_1_4037F54396AA95EF(::Class_1_9CB24331611AE644_ColumeType a1, ::RPG::GameCore::AbilityProperty a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_9CB24331611AE644_ColumeType, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_4037F54396AA95EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_612F73C5F773C442(::RPG::GameCore::CSVRow* a1, ::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_612F73C5F773C442_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_95E181670AB28CF8(::RPG::GameCore::CSVRow* a1, ::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_95E181670AB28CF8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_84089D51E7DA5C2D(::RPG::GameCore::CSVRow* a1, ::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_84089D51E7DA5C2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_84089D51E7DA5C2D_1(::RPG::GameCore::CSVRow* a1, ::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_84089D51E7DA5C2D_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D00B093DA0675A09(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_D00B093DA0675A09_OFFSET))(this, a1);
	}

	::System::Void Method_1_81E7A4FD20EC860C(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_81E7A4FD20EC860C_OFFSET))(this, a1);
	}

	::System::Void Method_1_02B490C9189918DC(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_02B490C9189918DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_02B490C9189918DC_1(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_02B490C9189918DC_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74120A854383421(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_C74120A854383421_OFFSET))(this, a1);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3A5363DC5B4E085(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_A3A5363DC5B4E085_OFFSET))(this, a1);
	}

	::System::Void Method_1_E0C5B55BC002764E(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_E0C5B55BC002764E_OFFSET))(this, a1);
	}

	::System::Void Method_1_02B490C9189918DC_2(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_02B490C9189918DC_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_C2245F7B8D6891C4(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_C2245F7B8D6891C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_1_58E4F6A5F8FAF17F_1(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_58E4F6A5F8FAF17F_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C14ED3F9B41F2361(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_C14ED3F9B41F2361_OFFSET))(this, a1);
	}

	::System::Void Method_1_02B490C9189918DC_3(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_02B490C9189918DC_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_02B490C9189918DC_4(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_02B490C9189918DC_4_OFFSET))(this, a1);
	}

	::System::Void Method_1_B4CCC42D866F3519(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_B4CCC42D866F3519_OFFSET))(this, a1);
	}

	::System::Void Method_1_02B490C9189918DC_5(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_02B490C9189918DC_5_OFFSET))(this, a1);
	}

	::System::Void Method_1_B4CCC42D866F3519_1(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_B4CCC42D866F3519_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_02B490C9189918DC_6(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_02B490C9189918DC_6_OFFSET))(this, a1);
	}

	::System::Void Method_1_B4CCC42D866F3519_2(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_B4CCC42D866F3519_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_02B490C9189918DC_7(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_02B490C9189918DC_7_OFFSET))(this, a1);
	}

	::System::Void Method_1_B4CCC42D866F3519_3(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_B4CCC42D866F3519_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_02B490C9189918DC_8(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_02B490C9189918DC_8_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C2F83AB6E861A93(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_4C2F83AB6E861A93_OFFSET))(this, a1);
	}

	::System::Void Method_1_02B490C9189918DC_9(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_02B490C9189918DC_9_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_1B9CC121BDC8766D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_CE34EA208837238D_1_OFFSET))();
	}

	static ::System::Void Method_1_1B9CC121BDC8766D_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_1B9CC121BDC8766D_1_OFFSET))(a1);
	}

	static ::System::String* __OnLightCharacterCreate_g___ConcatBuildData_24_0(::Il2CppArray<::System::UInt32>* items)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644___ONLIGHTCHARACTERCREATE_G___CONCATBUILDDATA_24_0_OFFSET))(items);
	}
};
