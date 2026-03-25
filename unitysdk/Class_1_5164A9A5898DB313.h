#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5164A9A5898DB313_FileLoadMode.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolLoadMode.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolPathType.h"
#include "unitysdk/Struct_2_0B4DDB75CE25594A_4.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_16;
class Class_1_5164A9A5898DB313_Class_0_16E7307DCC43CB2C;
namespace RPG::GameCore { template <typename T> class ConfigDataPool_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedFile; }
namespace System::Threading::Tasks { class Task; }

#define CLASS_1_5164A9A5898DB313_METHOD_1_02DFF0ECD51976CD_OFFSET UNITYSDK_OFFSET(0x16C35BD0)
#define CLASS_1_5164A9A5898DB313_METHOD_1_03810E31EA4357A3_OFFSET UNITYSDK_OFFSET(0x16C35670)
#define CLASS_1_5164A9A5898DB313_METHOD_1_061E70D34758C076_OFFSET UNITYSDK_OFFSET(0x16C327C0)
#define CLASS_1_5164A9A5898DB313_METHOD_1_07B2511D163B1890_OFFSET UNITYSDK_OFFSET(0x16C359B0)
#define CLASS_1_5164A9A5898DB313_METHOD_1_1626A6A6FFD17FAB_OFFSET UNITYSDK_OFFSET(0x16C2F960)
#define CLASS_1_5164A9A5898DB313_METHOD_1_1685C733894D4570_OFFSET UNITYSDK_OFFSET(0x16C339C0)
#define CLASS_1_5164A9A5898DB313_METHOD_1_1902F14B0C116508_OFFSET UNITYSDK_OFFSET(0x16C33DB0)
#define CLASS_1_5164A9A5898DB313_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C334D0)
#define CLASS_1_5164A9A5898DB313_METHOD_1_369F47CCB61A607A_OFFSET UNITYSDK_OFFSET(0x16C351D0)
#define CLASS_1_5164A9A5898DB313_METHOD_1_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x16C366A0)
#define CLASS_1_5164A9A5898DB313_METHOD_1_4146150A7E7903E0_OFFSET UNITYSDK_OFFSET(0x16C32DF0)
#define CLASS_1_5164A9A5898DB313_METHOD_1_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x16C35D30)
#define CLASS_1_5164A9A5898DB313_METHOD_1_4A56A157D87EC2EC_OFFSET UNITYSDK_OFFSET(0x16C34000)
#define CLASS_1_5164A9A5898DB313_METHOD_1_5C8FF749254B97C8_OFFSET UNITYSDK_OFFSET(0x16C325D0)
#define CLASS_1_5164A9A5898DB313_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x16C36630)
#define CLASS_1_5164A9A5898DB313_METHOD_1_6F1B0A02FDC49991_OFFSET UNITYSDK_OFFSET(0x16C32E00)
#define CLASS_1_5164A9A5898DB313_METHOD_1_7601922DD1E5E6AC_OFFSET UNITYSDK_OFFSET(0x16C32A10)
#define CLASS_1_5164A9A5898DB313_METHOD_1_7829C51DA0CC822B_1_OFFSET UNITYSDK_OFFSET(0x16C36660)
#define CLASS_1_5164A9A5898DB313_METHOD_1_7829C51DA0CC822B_OFFSET UNITYSDK_OFFSET(0x16C36130)
#define CLASS_1_5164A9A5898DB313_METHOD_1_79A17BD7A9C10FE9_OFFSET UNITYSDK_OFFSET(0x16C33940)
#define CLASS_1_5164A9A5898DB313_METHOD_1_86EE1A054673B3CC_OFFSET UNITYSDK_OFFSET(0x16C31600)
#define CLASS_1_5164A9A5898DB313_METHOD_1_89F673BD0E3B2071_OFFSET UNITYSDK_OFFSET(0x16C34790)
#define CLASS_1_5164A9A5898DB313_METHOD_1_9034967BA7FAF50A_OFFSET UNITYSDK_OFFSET(0x16C32750)
#define CLASS_1_5164A9A5898DB313_METHOD_1_9314A81B9C984F80_OFFSET UNITYSDK_OFFSET(0x16C2FDD0)
#define CLASS_1_5164A9A5898DB313_METHOD_1_943C1F1136A32E72_OFFSET UNITYSDK_OFFSET(0x16C34D80)
#define CLASS_1_5164A9A5898DB313_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x16C32E10)
#define CLASS_1_5164A9A5898DB313_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x16C32BB0)
#define CLASS_1_5164A9A5898DB313_METHOD_1_AA041EC2967F998A_OFFSET UNITYSDK_OFFSET(0x16C2FCD0)
#define CLASS_1_5164A9A5898DB313_METHOD_1_AAB4FFA841D81EF2_OFFSET UNITYSDK_OFFSET(0x16C34910)
#define CLASS_1_5164A9A5898DB313_METHOD_1_ADC1048502BD82E0_OFFSET UNITYSDK_OFFSET(0x16C35350)
#define CLASS_1_5164A9A5898DB313_METHOD_1_B63F562E34B97BAE_OFFSET UNITYSDK_OFFSET(0x16C34E70)
#define CLASS_1_5164A9A5898DB313_METHOD_1_B892007B9247C983_OFFSET UNITYSDK_OFFSET(0x16C34B90)
#define CLASS_1_5164A9A5898DB313_METHOD_1_BC436138A4E5B296_OFFSET UNITYSDK_OFFSET(0x16C34A50)
#define CLASS_1_5164A9A5898DB313_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x16C33170)
#define CLASS_1_5164A9A5898DB313_METHOD_1_C1A38EA9414F5778_OFFSET UNITYSDK_OFFSET(0x16C343A0)
#define CLASS_1_5164A9A5898DB313_METHOD_1_D27C207431848052_1_OFFSET UNITYSDK_OFFSET(0x16C357B0)
#define CLASS_1_5164A9A5898DB313_METHOD_1_D27C207431848052_OFFSET UNITYSDK_OFFSET(0x16C32810)
#define CLASS_1_5164A9A5898DB313_METHOD_1_EB3A193B2B5A2130_OFFSET UNITYSDK_OFFSET(0x16C317A0)
#define CLASS_1_5164A9A5898DB313_METHOD_1_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x16C350E0)
#define CLASS_1_5164A9A5898DB313_METHOD_1_ECA65DF3A8BD7B74_OFFSET UNITYSDK_OFFSET(0x16C335B0)
#define CLASS_1_5164A9A5898DB313_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x16C32D90)
#define CLASS_1_5164A9A5898DB313__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C366D0)

inline static constexpr unsigned int Class_1_5164A9A5898DB313_TypeDefinitionIndex = 22518;

class Class_1_5164A9A5898DB313 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_10()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5164A9A5898DB313_TypeDefinitionIndex)->GetStaticField(0x3EBD0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5164A9A5898DB313_TypeDefinitionIndex)->GetStaticField(0x3EBD8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_1_15()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5164A9A5898DB313_TypeDefinitionIndex)->GetStaticField(0x3EBE0);
	}
	static ::System::String** StaticGet_Field_1_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5164A9A5898DB313_TypeDefinitionIndex)->GetStaticField(0x3EBE8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_5164A9A5898DB313_Class_0_16E7307DCC43CB2C*>** StaticGet_Field_1_16()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_5164A9A5898DB313_Class_0_16E7307DCC43CB2C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5164A9A5898DB313_TypeDefinitionIndex)->GetStaticField(0x3EBF0);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_1_8()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5164A9A5898DB313_TypeDefinitionIndex)->GetStaticField(0x3EBF8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_16*>** StaticGet_Field_1_11()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_16*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5164A9A5898DB313_TypeDefinitionIndex)->GetStaticField(0x3EC00);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5164A9A5898DB313_TypeDefinitionIndex)->GetStaticField(0x3EC08);
	}
	static ::Struct_2_0B4DDB75CE25594A_4* StaticGet_Field_1_0()
	{
		return (::Struct_2_0B4DDB75CE25594A_4*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5164A9A5898DB313_TypeDefinitionIndex)->GetStaticField(0x3EC10);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_1_12()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5164A9A5898DB313_TypeDefinitionIndex)->GetStaticField(0x3EC20);
	}
	static ::System::Object** StaticGet_Field_1_13()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5164A9A5898DB313_TypeDefinitionIndex)->GetStaticField(0x3EC28);
	}
	static ::System::Object** StaticGet_Field_1_2()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5164A9A5898DB313_TypeDefinitionIndex)->GetStaticField(0x3EC30);
	}
	static ::System::String** StaticGet_Field_1_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5164A9A5898DB313_TypeDefinitionIndex)->GetStaticField(0x3EC38);
	}
	static ::System::Object** StaticGet_Field_1_7()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5164A9A5898DB313_TypeDefinitionIndex)->GetStaticField(0x3EC40);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::IO::MemoryMappedFiles::MemoryMappedFile*>** StaticGet_Field_1_14()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::IO::MemoryMappedFiles::MemoryMappedFile*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5164A9A5898DB313_TypeDefinitionIndex)->GetStaticField(0x3EC48);
	}
	static ::System::Object** StaticGet_Field_1_17()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5164A9A5898DB313_TypeDefinitionIndex)->GetStaticField(0x3EC50);
	}
	static ::System::Boolean* StaticGet_Field_1_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5164A9A5898DB313_TypeDefinitionIndex)->GetStaticField(0x10530);
	}
	// static const ::System::String* Field_1_9; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313__CCTOR_OFFSET))();
	}

	static ::System::Int64 Method_1_1626A6A6FFD17FAB()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_1626A6A6FFD17FAB_OFFSET))();
	}

	static ::System::Int32 Method_1_AA041EC2967F998A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_AA041EC2967F998A_OFFSET))();
	}

	static ::System::String* Method_1_9314A81B9C984F80()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_9314A81B9C984F80_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_5C8FF749254B97C8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_5C8FF749254B97C8_OFFSET))();
	}

	static ::System::String* Method_1_EB3A193B2B5A2130(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_EB3A193B2B5A2130_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_86EE1A054673B3CC(::System::Int64 a1)
	{
		return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_86EE1A054673B3CC_OFFSET))(a1);
	}

	static ::System::String* Method_1_061E70D34758C076(::Class_1_5164A9A5898DB313_FileLoadMode a1)
	{
		return ((::System::String*(*)(::Class_1_5164A9A5898DB313_FileLoadMode))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_061E70D34758C076_OFFSET))(a1);
	}

	static ::System::String* Method_1_9034967BA7FAF50A(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_9034967BA7FAF50A_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_D27C207431848052(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_D27C207431848052_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Method_1_7601922DD1E5E6AC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_7601922DD1E5E6AC_OFFSET))();
	}

	static ::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_97D83E4CB3B11935_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::RPG::GameCore::ConfigDataPoolLoadMode Method_1_4146150A7E7903E0()
	{
		return ((::RPG::GameCore::ConfigDataPoolLoadMode(*)())((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_4146150A7E7903E0_OFFSET))();
	}

	static ::System::String* Method_1_6F1B0A02FDC49991(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_6F1B0A02FDC49991_OFFSET))(a1);
	}

	static ::System::Void Method_1_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_96A53A17AC5D0E93_OFFSET))();
	}

	static ::System::Void Method_1_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_BF5E2DCAE0BF038A_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::String* Method_1_ECA65DF3A8BD7B74(::System::UInt64 a1, ::RPG::GameCore::ConfigDataPoolLoadMode a2)
	{
		return ((::System::String*(*)(::System::UInt64, ::RPG::GameCore::ConfigDataPoolLoadMode))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_ECA65DF3A8BD7B74_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_79A17BD7A9C10FE9(::System::String* a1, ::RPG::GameCore::ConfigDataPoolPathType a2, ::RPG::GameCore::ConfigDataPoolLoadMode a3)
	{
		return ((::System::String*(*)(::System::String*, ::RPG::GameCore::ConfigDataPoolPathType, ::RPG::GameCore::ConfigDataPoolLoadMode))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_79A17BD7A9C10FE9_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_1685C733894D4570(::System::String* a1, ::RPG::GameCore::ConfigDataPoolLoadMode a2)
	{
		return ((::System::String*(*)(::System::String*, ::RPG::GameCore::ConfigDataPoolLoadMode))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_1685C733894D4570_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_1902F14B0C116508(::System::String* a1, ::RPG::GameCore::ConfigDataPoolPathType a2, ::RPG::GameCore::ConfigDataPoolLoadMode a3)
	{
		return ((::System::String*(*)(::System::String*, ::RPG::GameCore::ConfigDataPoolPathType, ::RPG::GameCore::ConfigDataPoolLoadMode))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_1902F14B0C116508_OFFSET))(a1, a2, a3);
	}

	static ::System::IO::MemoryMappedFiles::MemoryMappedFile* Method_1_4A56A157D87EC2EC(::System::String* a1, ::System::Int64 a2)
	{
		return ((::System::IO::MemoryMappedFiles::MemoryMappedFile*(*)(::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_4A56A157D87EC2EC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C1A38EA9414F5778(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_C1A38EA9414F5778_OFFSET))(a1);
	}

	static ::Class_1_5164A9A5898DB313_Class_0_16E7307DCC43CB2C* Method_1_89F673BD0E3B2071(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Class_1_5164A9A5898DB313_FileLoadMode a4)
	{
		return ((::Class_1_5164A9A5898DB313_Class_0_16E7307DCC43CB2C*(*)(::System::String*, ::System::UInt32, ::System::UInt32, ::Class_1_5164A9A5898DB313_FileLoadMode))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_89F673BD0E3B2071_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_AAB4FFA841D81EF2(::Class_1_5164A9A5898DB313_Class_0_16E7307DCC43CB2C* a1)
	{
		return ((::System::Void(*)(::Class_1_5164A9A5898DB313_Class_0_16E7307DCC43CB2C*))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_AAB4FFA841D81EF2_OFFSET))(a1);
	}

	static ::System::Void Method_1_BC436138A4E5B296(::System::String* a1, ::Class_1_5164A9A5898DB313_Class_0_16E7307DCC43CB2C* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_5164A9A5898DB313_Class_0_16E7307DCC43CB2C*))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_BC436138A4E5B296_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B892007B9247C983(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_B892007B9247C983_OFFSET))(a1);
	}

	static ::System::Void Method_1_943C1F1136A32E72(::System::String* a1, ::Class_0_16E4307DCC419505_16* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_0_16E4307DCC419505_16*))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_943C1F1136A32E72_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B63F562E34B97BAE(::System::String* a1, ::Class_0_16E4307DCC419505_16* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_0_16E4307DCC419505_16*))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_B63F562E34B97BAE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_EBF44BC910948FDA_OFFSET))(a1);
	}

	static ::System::Void Method_1_369F47CCB61A607A(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_369F47CCB61A607A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_ADC1048502BD82E0(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_ADC1048502BD82E0_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_D27C207431848052_1(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_D27C207431848052_1_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_16* Method_1_07B2511D163B1890(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_16*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_07B2511D163B1890_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_02DFF0ECD51976CD(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_02DFF0ECD51976CD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_03810E31EA4357A3(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_03810E31EA4357A3_OFFSET))(a1);
	}

	static ::System::Void Method_1_41AA181104E03F2C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_41AA181104E03F2C_OFFSET))();
	}

	static ::System::Void Method_1_7829C51DA0CC822B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_7829C51DA0CC822B_OFFSET))();
	}

	static ::System::Void Method_1_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_60E1F7F58CCF739F_OFFSET))();
	}

	static ::System::Void Method_1_7829C51DA0CC822B_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_7829C51DA0CC822B_1_OFFSET))();
	}

	static ::System::Void Method_1_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_METHOD_1_3CF43707BF2E9BBA_OFFSET))();
	}
};
