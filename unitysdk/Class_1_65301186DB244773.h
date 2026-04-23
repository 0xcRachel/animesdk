#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_1.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightDropCfgType.h"
#include "unitysdk/RPG/GameCore/GridFightSkillType.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/Struct_2_34C03801479AC814.h"
#include "unitysdk/System/Object.h"

class Class_1_827373C1CEDFE355;
class Class_1_8EA2534C822D9706;
class Class_2_1DB6C02CA182EEBA;
namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class AvatarRowData; }
namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class BattleEventRow; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightAvatarRow_AvatarCommonRowWrap; }
namespace RPG::GameCore { class GridFightBattleTemplate; }
namespace RPG::GameCore { class GridFightCyreneModifyConfigRow; }
namespace RPG::GameCore { class GridFightManager; }
namespace RPG::GameCore { class GridFightRankSkillModifyConfigRow; }
namespace RPG::GameCore { class GridFightStageTemplateConfig; }
namespace RPG::GameCore { class GridFightWaveInfo; }
namespace RPG::GameCore { class ICharacterRowData; }
namespace RPG::GameCore { class ServantConfig; }
namespace RPG::GameCore { class ServantRowData; }
namespace RPG::GameCore { class TeamFormationComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_65301186DB244773_METHOD_1_025C99816BF8E01E_OFFSET UNITYSDK_OFFSET(0xEE545C0)
#define CLASS_1_65301186DB244773_METHOD_1_033CBC0A00EAC33B_OFFSET UNITYSDK_OFFSET(0xEE52310)
#define CLASS_1_65301186DB244773_METHOD_1_080BD971D4308AEF_OFFSET UNITYSDK_OFFSET(0xEE55A10)
#define CLASS_1_65301186DB244773_METHOD_1_08E163D56C0C8F00_OFFSET UNITYSDK_OFFSET(0xEE50090)
#define CLASS_1_65301186DB244773_METHOD_1_0C253EEDF0048FF9_OFFSET UNITYSDK_OFFSET(0xEE566D0)
#define CLASS_1_65301186DB244773_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xEE50210)
#define CLASS_1_65301186DB244773_METHOD_1_172F5C610464C3E0_OFFSET UNITYSDK_OFFSET(0xEE50AC0)
#define CLASS_1_65301186DB244773_METHOD_1_2E8A970FD532674C_OFFSET UNITYSDK_OFFSET(0xEE54480)
#define CLASS_1_65301186DB244773_METHOD_1_33641C7412F17F31_OFFSET UNITYSDK_OFFSET(0xEE54CA0)
#define CLASS_1_65301186DB244773_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0xEE4FFB0)
#define CLASS_1_65301186DB244773_METHOD_1_39F0DE2A1348DBFF_OFFSET UNITYSDK_OFFSET(0xEE507A0)
#define CLASS_1_65301186DB244773_METHOD_1_497DF36EC78CFCF5_OFFSET UNITYSDK_OFFSET(0xEE56530)
#define CLASS_1_65301186DB244773_METHOD_1_5121B8BB61593362_OFFSET UNITYSDK_OFFSET(0xEE501A0)
#define CLASS_1_65301186DB244773_METHOD_1_73DD48D58191807C_OFFSET UNITYSDK_OFFSET(0xEE55AB0)
#define CLASS_1_65301186DB244773_METHOD_1_7606C2533095A6C4_OFFSET UNITYSDK_OFFSET(0xEE55550)
#define CLASS_1_65301186DB244773_METHOD_1_842D94C029521938_OFFSET UNITYSDK_OFFSET(0xEE55F80)
#define CLASS_1_65301186DB244773_METHOD_1_86F41298CE10687F_OFFSET UNITYSDK_OFFSET(0xEE51120)
#define CLASS_1_65301186DB244773_METHOD_1_8A1FF97925A56F9E_OFFSET UNITYSDK_OFFSET(0xEE45940)
#define CLASS_1_65301186DB244773_METHOD_1_9B5FA4FDFB8FB615_1_OFFSET UNITYSDK_OFFSET(0xEE54AF0)
#define CLASS_1_65301186DB244773_METHOD_1_9B5FA4FDFB8FB615_OFFSET UNITYSDK_OFFSET(0xEE54940)
#define CLASS_1_65301186DB244773_METHOD_1_A07EDF1CE30760BE_OFFSET UNITYSDK_OFFSET(0xEE55CC0)
#define CLASS_1_65301186DB244773_METHOD_1_A4DC9D7EC1178F1C_OFFSET UNITYSDK_OFFSET(0xEE54E50)
#define CLASS_1_65301186DB244773_METHOD_1_A5F44B1D07161A29_OFFSET UNITYSDK_OFFSET(0xEE52B10)
#define CLASS_1_65301186DB244773_METHOD_1_ABC5A418EE72826B_OFFSET UNITYSDK_OFFSET(0xEE52E50)
#define CLASS_1_65301186DB244773_METHOD_1_AFF047288EEEE972_OFFSET UNITYSDK_OFFSET(0xEE546A0)
#define CLASS_1_65301186DB244773_METHOD_1_B1C4E57685B51C88_OFFSET UNITYSDK_OFFSET(0xEE55B20)
#define CLASS_1_65301186DB244773_METHOD_1_B1C57E43980403BA_OFFSET UNITYSDK_OFFSET(0xEE55990)
#define CLASS_1_65301186DB244773_METHOD_1_BA6B6E8336241FE1_OFFSET UNITYSDK_OFFSET(0xEE52CA0)
#define CLASS_1_65301186DB244773_METHOD_1_BE69B7FCD202A765_OFFSET UNITYSDK_OFFSET(0xEE50650)
#define CLASS_1_65301186DB244773_METHOD_1_C16AF4C6F817ED58_OFFSET UNITYSDK_OFFSET(0xEE509F0)
#define CLASS_1_65301186DB244773_METHOD_1_C48949AA4102AD38_OFFSET UNITYSDK_OFFSET(0xEE511B0)
#define CLASS_1_65301186DB244773_METHOD_1_C6C5D3288CC7B875_OFFSET UNITYSDK_OFFSET(0xEE50D50)
#define CLASS_1_65301186DB244773_METHOD_1_D063300DDDB128CF_OFFSET UNITYSDK_OFFSET(0xEE55E30)
#define CLASS_1_65301186DB244773_METHOD_1_DDC25D8E83FC2D25_OFFSET UNITYSDK_OFFSET(0xEE53690)
#define CLASS_1_65301186DB244773_METHOD_1_E04DF788C90B57E0_OFFSET UNITYSDK_OFFSET(0xEE50870)
#define CLASS_1_65301186DB244773_METHOD_1_E847617F76A419C1_OFFSET UNITYSDK_OFFSET(0xEE50F20)
#define CLASS_1_65301186DB244773_METHOD_1_E9CAFF93B85D0927_OFFSET UNITYSDK_OFFSET(0xEE503D0)
#define CLASS_1_65301186DB244773_METHOD_1_F121A67F4A44B8AD_OFFSET UNITYSDK_OFFSET(0xEE52150)
#define CLASS_1_65301186DB244773_METHOD_1_F18F5AC00E26519B_OFFSET UNITYSDK_OFFSET(0xEE50240)
#define CLASS_1_65301186DB244773_METHOD_1_F2420EDF3388F022_OFFSET UNITYSDK_OFFSET(0xEE547A0)
#define CLASS_1_65301186DB244773_METHOD_1_F49F9527352EA2C5_1_OFFSET UNITYSDK_OFFSET(0xEE554D0)
#define CLASS_1_65301186DB244773_METHOD_1_F49F9527352EA2C5_OFFSET UNITYSDK_OFFSET(0xEE55450)
#define CLASS_1_65301186DB244773__CCTOR_OFFSET UNITYSDK_OFFSET(0xEE56AC0)

inline static constexpr unsigned int Class_1_65301186DB244773_TypeDefinitionIndex = 54463;

class Class_1_65301186DB244773 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_15()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x5F330);
	}
	static ::System::String** StaticGet_Field_1_13()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x5F338);
	}
	static ::Class_1_827373C1CEDFE355** StaticGet_Field_1_36()
	{
		return (::Class_1_827373C1CEDFE355**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x5F340);
	}
	static ::System::String** StaticGet_Field_1_14()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x5F348);
	}
	static ::RPG::GameCore::GridFightStageTemplateConfig** StaticGet_Field_1_38()
	{
		return (::RPG::GameCore::GridFightStageTemplateConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x5F350);
	}
	static ::System::String** StaticGet_Field_1_37()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x5F358);
	}
	static ::Class_1_8EA2534C822D9706** StaticGet_Field_1_35()
	{
		return (::Class_1_8EA2534C822D9706**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x5F360);
	}
	static ::System::UInt32* StaticGet_Field_1_9()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x109C0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_21()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x109C4);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_26()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x109C8);
	}
	static ::System::UInt32* StaticGet_Field_1_32()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x109CC);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_24()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x109D0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_17()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x109D4);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_3()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x109D8);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_28()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x109DC);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_23()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x109E0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_12()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x109E4);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_4()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x109E8);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_6()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x109EC);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_20()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x109F0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_7()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x109F4);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_2()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x109F8);
	}
	static ::System::Boolean* StaticGet_Field_1_34()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x109FC);
	}
	static ::System::Boolean* StaticGet_Field_1_31()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x109FD);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_25()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x10A00);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_22()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x10A04);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_11()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x10A08);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_10()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x10A0C);
	}
	static ::System::UInt32* StaticGet_Field_1_33()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x10A10);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_30()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x10A14);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_5()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x10A18);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x10A1C);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_16()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x10A20);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_19()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x10A24);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_29()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x10A28);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_27()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x10A2C);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_18()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x10A30);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_8()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_65301186DB244773_TypeDefinitionIndex)->GetStaticField(0x10A34);
	}
	// static const ::System::String* Field_1_0; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773__CCTOR_OFFSET))();
	}

	static ::Class_1_8EA2534C822D9706* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_8EA2534C822D9706*(*)())((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_358A144584A5DBFC_OFFSET))();
	}

	static ::RPG::GameCore::GridFightStageTemplateConfig* Method_1_08E163D56C0C8F00()
	{
		return ((::RPG::GameCore::GridFightStageTemplateConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_08E163D56C0C8F00_OFFSET))();
	}

	static ::System::Void Method_1_5121B8BB61593362(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_5121B8BB61593362_OFFSET))(a1);
	}

	static ::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_128774387667156B_OFFSET))();
	}

	static ::RPG::GameCore::GridFightWaveInfo* Method_1_F18F5AC00E26519B(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightWaveInfo*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_F18F5AC00E26519B_OFFSET))(a1);
	}

	static ::RPG::GameCore::GridFightBattleTemplate* Method_1_E9CAFF93B85D0927(::System::String* a1)
	{
		return ((::RPG::GameCore::GridFightBattleTemplate*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_E9CAFF93B85D0927_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_BE69B7FCD202A765(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_BE69B7FCD202A765_OFFSET))(a1);
	}

	static ::System::Void Method_1_39F0DE2A1348DBFF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_39F0DE2A1348DBFF_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_E04DF788C90B57E0(::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814>* a1, ::Enum_3_F80BFD5B986D5503_1 a2, ::System::UInt32 a3)
	{
		return ((::System::UInt32(*)(::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814>*, ::Enum_3_F80BFD5B986D5503_1, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_E04DF788C90B57E0_OFFSET))(a1, a2, a3);
	}

	static ::Enum_3_F80BFD5B986D5503_1 Method_1_C16AF4C6F817ED58(::RPG::GameCore::GridFightDropCfgType a1, ::System::UInt32& a2)
	{
		return ((::Enum_3_F80BFD5B986D5503_1(*)(::RPG::GameCore::GridFightDropCfgType, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_C16AF4C6F817ED58_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_172F5C610464C3E0(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::BattleEventRow* a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_172F5C610464C3E0_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_E847617F76A419C1(::RPG::GameCore::BattleEventRow* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::BattleEventRow*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_E847617F76A419C1_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_86F41298CE10687F(::RPG::GameCore::BattleEventRow* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::BattleEventRow*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_86F41298CE10687F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C48949AA4102AD38(::RPG::GameCore::TeamFormationComponent* a1, ::RPG::GameCore::AliveStateMask a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TeamFormationComponent*, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_C48949AA4102AD38_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F121A67F4A44B8AD(::RPG::GameCore::BattleEventDataComponent* a1, ::RPG::GameCore::BattleEventRow* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::BattleEventDataComponent*, ::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_F121A67F4A44B8AD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_033CBC0A00EAC33B(::RPG::GameCore::BattleEventDataComponent* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_033CBC0A00EAC33B_OFFSET))(a1);
	}

	static ::System::Void Method_1_DDC25D8E83FC2D25(::RPG::GameCore::AvatarDataComponent* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarDataComponent*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_DDC25D8E83FC2D25_OFFSET))(a1);
	}

	static ::System::Void Method_1_025C99816BF8E01E(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_025C99816BF8E01E_OFFSET))(a1);
	}

	static ::System::Void Method_1_AFF047288EEEE972(::RPG::GameCore::AvatarRowData* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarRowData*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_AFF047288EEEE972_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2420EDF3388F022(::RPG::GameCore::ServantRowData* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ServantRowData*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_F2420EDF3388F022_OFFSET))(a1);
	}

	static ::System::Void Method_1_ABC5A418EE72826B(::RPG::GameCore::GridFightManager* a1, ::RPG::GameCore::BattleGridFightAvatarData* a2, ::RPG::GameCore::ICharacterRowData* a3, ::RPG::GameCore::GridFightSkillType a4, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightManager*, ::RPG::GameCore::BattleGridFightAvatarData*, ::RPG::GameCore::ICharacterRowData*, ::RPG::GameCore::GridFightSkillType, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_ABC5A418EE72826B_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_9B5FA4FDFB8FB615(::RPG::GameCore::GridFightCyreneModifyConfigRow* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a2, ::System::UInt32 a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightCyreneModifyConfigRow*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_9B5FA4FDFB8FB615_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_33641C7412F17F31(::RPG::GameCore::GridFightCyreneModifyConfigRow* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightCyreneModifyConfigRow*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_33641C7412F17F31_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_9B5FA4FDFB8FB615_1(::RPG::GameCore::GridFightCyreneModifyConfigRow* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a2, ::System::UInt32 a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightCyreneModifyConfigRow*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_9B5FA4FDFB8FB615_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_BA6B6E8336241FE1(::RPG::GameCore::GridFightRankSkillModifyConfigRow* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightRankSkillModifyConfigRow*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_BA6B6E8336241FE1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A4DC9D7EC1178F1C(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::Il2CppArray<::RPG::GameCore::ModifyCalcOpType>* a3, ::Il2CppArray<::RPG::GameCore::FixPoint>* a4, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a5, ::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a6, ::System::UInt32 a7, ::RPG::GameCore::FixPoint a8)
	{
		return ((::System::Void(*)(::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::RPG::GameCore::ModifyCalcOpType>*, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*, ::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_A4DC9D7EC1178F1C_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::Enum_3_01618AD0437C8486 Method_1_8A1FF97925A56F9E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Enum_3_01618AD0437C8486(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_8A1FF97925A56F9E_OFFSET))(a1);
	}

	static ::System::String* Method_1_7606C2533095A6C4(::System::String* a1, ::RPG::GameCore::BattleEventRow* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::String*(*)(::System::String*, ::RPG::GameCore::BattleEventRow*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_7606C2533095A6C4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_B1C57E43980403BA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_B1C57E43980403BA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_73DD48D58191807C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_73DD48D58191807C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F49F9527352EA2C5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_F49F9527352EA2C5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F49F9527352EA2C5_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_F49F9527352EA2C5_1_OFFSET))(a1);
	}

	static ::RPG::GameCore::GameEntity* Method_1_080BD971D4308AEF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_080BD971D4308AEF_OFFSET))(a1);
	}

	static ::RPG::GameCore::GameEntity* Method_1_B1C4E57685B51C88(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_B1C4E57685B51C88_OFFSET))(a1);
	}

	static ::RPG::GameCore::GameEntity* Method_1_C6C5D3288CC7B875(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_C6C5D3288CC7B875_OFFSET))(a1);
	}

	static ::RPG::GameCore::BattleGridFightAvatarData* Method_1_A5F44B1D07161A29(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GridFightManager* a2)
	{
		return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GridFightManager*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_A5F44B1D07161A29_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::BattleGridFightAvatarData* Method_1_A07EDF1CE30760BE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GridFightManager* a2)
	{
		return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GridFightManager*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_A07EDF1CE30760BE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D063300DDDB128CF(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_D063300DDDB128CF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2E8A970FD532674C(::RPG::GameCore::BattleGridFightEquipData* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::BattleGridFightEquipData*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_2E8A970FD532674C_OFFSET))(a1, a2);
	}

	static ::Class_2_1DB6C02CA182EEBA* Method_1_842D94C029521938(::RPG::GameCore::BattleGridFightEquipData* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2)
	{
		return ((::Class_2_1DB6C02CA182EEBA*(*)(::RPG::GameCore::BattleGridFightEquipData*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_842D94C029521938_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::ServantConfig* Method_1_497DF36EC78CFCF5(::RPG::GameCore::GridFightAvatarRow_AvatarCommonRowWrap* a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::ServantConfig*(*)(::RPG::GameCore::GridFightAvatarRow_AvatarCommonRowWrap*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_497DF36EC78CFCF5_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::GameEntity* Method_1_0C253EEDF0048FF9(::System::UInt32 a1, ::RPG::GameCore::GridFightManager* a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::System::UInt32, ::RPG::GameCore::GridFightManager*))((::PBYTE)hIl2Cpp + CLASS_1_65301186DB244773_METHOD_1_0C253EEDF0048FF9_OFFSET))(a1, a2);
	}
};
