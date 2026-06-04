#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43B4CC10B76BE828_ColumeType.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_401;
class Class_1_43B4CC10B76BE828_Class_1_A0EFD53562DEA7DA;
namespace RPG::GameCore { class CSVRow; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class RtBattleMode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_43B4CC10B76BE828_METHOD_1_2FD16EEAD9984A60_OFFSET UNITYSDK_OFFSET(0x1503D040)
#define CLASS_1_43B4CC10B76BE828_METHOD_1_32FC7498ADE8479B_OFFSET UNITYSDK_OFFSET(0x1503AFC0)
#define CLASS_1_43B4CC10B76BE828_METHOD_1_4348D348D50A2B81_OFFSET UNITYSDK_OFFSET(0x15038950)
#define CLASS_1_43B4CC10B76BE828_METHOD_1_4AE5AB1A79A88687_OFFSET UNITYSDK_OFFSET(0x15038F80)
#define CLASS_1_43B4CC10B76BE828_METHOD_1_5D9646F4A7309CF6_OFFSET UNITYSDK_OFFSET(0x1503C0B0)
#define CLASS_1_43B4CC10B76BE828_METHOD_1_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0x150389C0)
#define CLASS_1_43B4CC10B76BE828_METHOD_1_7411494DA7276605_OFFSET UNITYSDK_OFFSET(0x15038AC0)
#define CLASS_1_43B4CC10B76BE828_METHOD_1_791E2E44FCCE0018_OFFSET UNITYSDK_OFFSET(0x1503BD90)
#define CLASS_1_43B4CC10B76BE828_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x1503D3A0)
#define CLASS_1_43B4CC10B76BE828_METHOD_1_7F5AA14837C837AE_OFFSET UNITYSDK_OFFSET(0x1503C540)
#define CLASS_1_43B4CC10B76BE828_METHOD_1_869BE7A0EEB79DEB_OFFSET UNITYSDK_OFFSET(0x1503B030)
#define CLASS_1_43B4CC10B76BE828_METHOD_1_A885B318D962AAD2_1_OFFSET UNITYSDK_OFFSET(0x1503B460)
#define CLASS_1_43B4CC10B76BE828_METHOD_1_A885B318D962AAD2_OFFSET UNITYSDK_OFFSET(0x1503B1D0)
#define CLASS_1_43B4CC10B76BE828_METHOD_1_AD890FF2759AE6DF_OFFSET UNITYSDK_OFFSET(0x1503CB60)
#define CLASS_1_43B4CC10B76BE828_METHOD_1_D009A011D7E59617_OFFSET UNITYSDK_OFFSET(0x1503B6F0)
#define CLASS_1_43B4CC10B76BE828_METHOD_1_D0D2894DFBF32E4A_OFFSET UNITYSDK_OFFSET(0x150370E0)
#define CLASS_1_43B4CC10B76BE828_METHOD_1_DA1F8C661E2D2953_OFFSET UNITYSDK_OFFSET(0x1503CD60)
#define CLASS_1_43B4CC10B76BE828_METHOD_1_DC62087FC8595E21_OFFSET UNITYSDK_OFFSET(0x1503C260)
#define CLASS_1_43B4CC10B76BE828_METHOD_1_FA383E53DEC53851_OFFSET UNITYSDK_OFFSET(0x15038810)
#define CLASS_1_43B4CC10B76BE828_METHOD_1_FCAE7D0A63C8DDC3_OFFSET UNITYSDK_OFFSET(0x1503C6F0)
#define CLASS_1_43B4CC10B76BE828_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x15037D20)
#define CLASS_1_43B4CC10B76BE828_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x15038380)
#define CLASS_1_43B4CC10B76BE828__CCTOR_OFFSET UNITYSDK_OFFSET(0x15036E10)
#define CLASS_1_43B4CC10B76BE828__CTOR_OFFSET UNITYSDK_OFFSET(0x1503D3B0)

inline static constexpr unsigned int Class_1_43B4CC10B76BE828_TypeDefinitionIndex = 50702;

class Class_1_43B4CC10B76BE828 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43B4CC10B76BE828_TypeDefinitionIndex)->GetStaticField(0x56EB0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43B4CC10B76BE828_TypeDefinitionIndex)->GetStaticField(0x56EB8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43B4CC10B76BE828_TypeDefinitionIndex)->GetStaticField(0x56EC0);
	}
	static ::Il2CppArray<::RPG::GameCore::RtAbilityProperty>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::RPG::GameCore::RtAbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43B4CC10B76BE828_TypeDefinitionIndex)->GetStaticField(0x56EC8);
	}
	static ::Il2CppArray<::RPG::GameCore::RtAbilityProperty>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::RPG::GameCore::RtAbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43B4CC10B76BE828_TypeDefinitionIndex)->GetStaticField(0x56ED0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_5()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43B4CC10B76BE828_TypeDefinitionIndex)->GetStaticField(0x56ED8);
	}
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
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
	::System::String* Field_1_45; // 0x10
	::System::Collections::Generic::SortedList_2<::System::Int32, ::System::String*>* Field_1_46; // 0x18
	::RPG::GameCore::RtBattleMode* Field_1_47; // 0x20
	::System::Collections::Generic::List_1<::Class_1_43B4CC10B76BE828_Class_1_A0EFD53562DEA7DA*>* Field_1_48; // 0x28
	::RPG::GameCore::GameWorld* Field_1_49; // 0x30
	::System::Boolean Field_1_50; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_ONPLUGINUNINIT_OFFSET))(this);
	}

	static ::System::String* Method_1_4348D348D50A2B81()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_METHOD_1_4348D348D50A2B81_OFFSET))();
	}

	::System::Void Method_1_FA383E53DEC53851(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_METHOD_1_FA383E53DEC53851_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7411494DA7276605(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_METHOD_1_7411494DA7276605_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_D0D2894DFBF32E4A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_METHOD_1_D0D2894DFBF32E4A_OFFSET))();
	}

	::System::Void Method_1_4AE5AB1A79A88687(::RPG::GameCore::CSVRow* a1, ::Class_1_43B4CC10B76BE828_Class_1_A0EFD53562DEA7DA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_43B4CC10B76BE828_Class_1_A0EFD53562DEA7DA*))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_METHOD_1_4AE5AB1A79A88687_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_869BE7A0EEB79DEB(::Class_1_43B4CC10B76BE828_ColumeType a1, ::RPG::GameCore::RtAbilityProperty a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_43B4CC10B76BE828_ColumeType, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_METHOD_1_869BE7A0EEB79DEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_32FC7498ADE8479B(::RPG::GameCore::CSVRow* a1, ::Class_1_43B4CC10B76BE828_Class_1_A0EFD53562DEA7DA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_43B4CC10B76BE828_Class_1_A0EFD53562DEA7DA*))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_METHOD_1_32FC7498ADE8479B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A885B318D962AAD2(::RPG::GameCore::CSVRow* a1, ::Class_1_43B4CC10B76BE828_Class_1_A0EFD53562DEA7DA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_43B4CC10B76BE828_Class_1_A0EFD53562DEA7DA*))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_METHOD_1_A885B318D962AAD2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A885B318D962AAD2_1(::RPG::GameCore::CSVRow* a1, ::Class_1_43B4CC10B76BE828_Class_1_A0EFD53562DEA7DA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_43B4CC10B76BE828_Class_1_A0EFD53562DEA7DA*))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_METHOD_1_A885B318D962AAD2_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D009A011D7E59617(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_METHOD_1_D009A011D7E59617_OFFSET))(this, a1);
	}

	::System::Void Method_1_791E2E44FCCE0018(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_METHOD_1_791E2E44FCCE0018_OFFSET))(this, a1);
	}

	::System::Void Method_1_5D9646F4A7309CF6(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_METHOD_1_5D9646F4A7309CF6_OFFSET))(this, a1);
	}

	::System::Void Method_1_DC62087FC8595E21(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_METHOD_1_DC62087FC8595E21_OFFSET))(this, a1);
	}

	::System::Void Method_1_7F5AA14837C837AE(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_METHOD_1_7F5AA14837C837AE_OFFSET))(this, a1);
	}

	::System::Void Method_1_FCAE7D0A63C8DDC3(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_METHOD_1_FCAE7D0A63C8DDC3_OFFSET))(this, a1);
	}

	::System::Void Method_1_AD890FF2759AE6DF(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_METHOD_1_AD890FF2759AE6DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_DA1F8C661E2D2953(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_METHOD_1_DA1F8C661E2D2953_OFFSET))(this, a1);
	}

	::System::Void Method_1_2FD16EEAD9984A60(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_METHOD_1_2FD16EEAD9984A60_OFFSET))(this, a1);
	}

	::System::String* Method_1_6929C20FCC70C1A3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_METHOD_1_6929C20FCC70C1A3_OFFSET))(this);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_43B4CC10B76BE828_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}
};
