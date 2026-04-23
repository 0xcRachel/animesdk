#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EB67B065A0CE0512_SuperEventState.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/RestaurantEmployeeType.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/RPG/GameCore/RestaurantSuperEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_EB67B065A0CE0512_Class_1_3CB21D27F1200EF1;
class Class_2_43D1AA62A6D00FFF;
class Class_3_F4528A5C0F861AF2;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ElfNormalEventChanceConfig; }
namespace RPG::GameCore { class ElfSuperEventTypeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EB67B065A0CE0512_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF1216D0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0xF124A60)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_1FA3CEF14A2C4561_OFFSET UNITYSDK_OFFSET(0xF1246A0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_214A0CD55BF5F2ED_OFFSET UNITYSDK_OFFSET(0xF121A60)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0xF122760)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_345C78EBB404731F_OFFSET UNITYSDK_OFFSET(0xF123D20)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_364E91940C737CC9_OFFSET UNITYSDK_OFFSET(0xF123E00)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xF121C50)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_43E290A0B26B39F6_OFFSET UNITYSDK_OFFSET(0xF124EF0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0xF121CA0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_5350C221A3CF1C37_OFFSET UNITYSDK_OFFSET(0xF122240)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_60B5931C93B2E56E_OFFSET UNITYSDK_OFFSET(0xF124DF0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_65451AC55F7E5B9C_OFFSET UNITYSDK_OFFSET(0xF1238C0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_660474B0F8C5FECE_OFFSET UNITYSDK_OFFSET(0xF122BD0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_6CB5060D47BF8A1B_OFFSET UNITYSDK_OFFSET(0xF124F70)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_8C7BAED46B9C7D65_OFFSET UNITYSDK_OFFSET(0xF124C90)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_8E0F13CE9596D9FD_OFFSET UNITYSDK_OFFSET(0xF123CC0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_94F0450E73AB7B0B_OFFSET UNITYSDK_OFFSET(0xF124880)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xF121530)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xF124EA0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xF124BE0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0xF123160)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_AC72D0112BCC7BF7_OFFSET UNITYSDK_OFFSET(0xF121D50)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xF123840)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0xF122820)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_B64E6D35718AD10A_OFFSET UNITYSDK_OFFSET(0xF121890)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0xF122E30)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_DF36652FF6AEAAC1_OFFSET UNITYSDK_OFFSET(0xF125040)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_E74FF508BE0BE487_OFFSET UNITYSDK_OFFSET(0xF124FE0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_EFCF38D9AC798B7C_OFFSET UNITYSDK_OFFSET(0xF122410)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0xF121DB0)
#define CLASS_1_EB67B065A0CE0512_METHOD_1_FCAE20CD32D19671_OFFSET UNITYSDK_OFFSET(0xF124D50)
#define CLASS_1_EB67B065A0CE0512__CTOR_OFFSET UNITYSDK_OFFSET(0xF121410)

inline static constexpr unsigned int Class_1_EB67B065A0CE0512_TypeDefinitionIndex = 70961;

class Class_1_EB67B065A0CE0512 : public ::System::Object
{
public:
	::Class_2_43D1AA62A6D00FFF* Field_1_22; // 0x10
	::RPG::GameCore::ElfSuperEventTypeConfig* Field_1_1; // 0x18
	::Class_1_EB67B065A0CE0512_Class_1_3CB21D27F1200EF1* Field_1_12; // 0x20
	::Class_1_EB67B065A0CE0512_Class_1_3CB21D27F1200EF1* Field_1_15; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_1_2; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_29; // 0x38
	::Class_1_EB67B065A0CE0512_Class_1_3CB21D27F1200EF1* Field_1_14; // 0x40
	::Class_1_EB67B065A0CE0512_Class_1_3CB21D27F1200EF1* Field_1_17; // 0x48
	::Class_1_EB67B065A0CE0512_Class_1_3CB21D27F1200EF1* Field_1_16; // 0x50
	::Class_1_EB67B065A0CE0512_Class_1_3CB21D27F1200EF1* Field_1_18; // 0x58
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_1_19; // 0x60
	::Class_3_F4528A5C0F861AF2* Field_1_23; // 0x68
	::System::Collections::Generic::List_1<::RPG::GameCore::RestaurantNormalEventType>* Field_1_25; // 0x70
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RestaurantNormalEventType, ::Class_1_EB67B065A0CE0512_Class_1_3CB21D27F1200EF1*>* Field_1_28; // 0x78
	::Class_1_EB67B065A0CE0512_Class_1_3CB21D27F1200EF1* Field_1_13; // 0x80
	::Class_1_EB67B065A0CE0512_Class_1_3CB21D27F1200EF1* Field_1_11; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_26; // 0x90
	::System::Single Field_1_9; // 0x98
	::RPG::GameCore::RestaurantSuperEventType Field_1_7; // 0x9C
	::Class_1_EB67B065A0CE0512_SuperEventState Field_1_8; // 0xA0
	::System::Int32 Field_1_3; // 0xA4
	::System::Int32 Field_1_27; // 0xA8
	::System::Single Field_1_21; // 0xAC
	::System::Int32 Field_1_6; // 0xB0
	::System::Single Field_1_0; // 0xB4
	::System::Int32 Field_1_5; // 0xB8
	::System::Int32 Field_1_24; // 0xBC
	::System::Int32 Field_1_20; // 0xC0
	::System::Int32 Field_1_4; // 0xC4
	::System::Single Field_1_10; // 0xC8

	::System::Void _ctor(::Class_3_F4528A5C0F861AF2* a1, ::Class_2_43D1AA62A6D00FFF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F4528A5C0F861AF2*, ::Class_2_43D1AA62A6D00FFF*))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_B64E6D35718AD10A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_B64E6D35718AD10A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::String* Method_1_214A0CD55BF5F2ED(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_214A0CD55BF5F2ED_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::String* Method_1_5350C221A3CF1C37()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_5350C221A3CF1C37_OFFSET))(this);
	}

	::System::Void Method_1_EFCF38D9AC798B7C(::RPG::GameCore::RestaurantSuperEventType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantSuperEventType))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_EFCF38D9AC798B7C_OFFSET))(this, a1);
	}

	::System::Void Method_1_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void Method_1_B1EA412ACAE87C15()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_B1EA412ACAE87C15_OFFSET))(this);
	}

	::System::Void Method_1_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::System::Void Method_1_660474B0F8C5FECE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_660474B0F8C5FECE_OFFSET))(this);
	}

	::System::Void Method_1_BD2F8ECECEAD4800()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_BD2F8ECECEAD4800_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::RPG::GameCore::RestaurantEmployeeType Method_1_8E0F13CE9596D9FD(::RPG::GameCore::RestaurantSuperEventType a1)
	{
		return ((::RPG::GameCore::RestaurantEmployeeType(*)(::PVOID, ::RPG::GameCore::RestaurantSuperEventType))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_8E0F13CE9596D9FD_OFFSET))(this, a1);
	}

	::RPG::GameCore::LittleGameEntityType Method_1_345C78EBB404731F(::RPG::GameCore::RestaurantSuperEventType a1)
	{
		return ((::RPG::GameCore::LittleGameEntityType(*)(::PVOID, ::RPG::GameCore::RestaurantSuperEventType))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_345C78EBB404731F_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_65451AC55F7E5B9C(::System::Int32& a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_65451AC55F7E5B9C_OFFSET))(this, a1);
	}

	::System::Void Method_1_364E91940C737CC9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_364E91940C737CC9_OFFSET))(this);
	}

	::Class_1_EB67B065A0CE0512_Class_1_3CB21D27F1200EF1* Method_1_1FA3CEF14A2C4561(::RPG::GameCore::ElfNormalEventChanceConfig* a1, ::System::Single a2)
	{
		return ((::Class_1_EB67B065A0CE0512_Class_1_3CB21D27F1200EF1*(*)(::PVOID, ::RPG::GameCore::ElfNormalEventChanceConfig*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_1FA3CEF14A2C4561_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_94F0450E73AB7B0B(::RPG::GameCore::RestaurantNormalEventType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RestaurantNormalEventType))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_94F0450E73AB7B0B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_0DF420E95D6252BE_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_1_8C7BAED46B9C7D65(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_8C7BAED46B9C7D65_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_60B5931C93B2E56E(::System::UInt32 a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_60B5931C93B2E56E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FCAE20CD32D19671(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_FCAE20CD32D19671_OFFSET))(this, a1);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single Method_1_43E290A0B26B39F6(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_43E290A0B26B39F6_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_AC72D0112BCC7BF7(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_AC72D0112BCC7BF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6CB5060D47BF8A1B(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_6CB5060D47BF8A1B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E74FF508BE0BE487(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_E74FF508BE0BE487_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_DF36652FF6AEAAC1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EB67B065A0CE0512_METHOD_1_DF36652FF6AEAAC1_OFFSET))(this, a1);
	}
};
