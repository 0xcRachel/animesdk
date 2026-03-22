#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FileIncludeOrExcludeReason.h"
#include "unitysdk/System/Object.h"

class Class_1_5425922A8B586808;
class Class_1_945ACFB1FEBC7A2C_2;
class Class_1_945ACFB1FEBC7A2C_3;
class Class_1_DAFF948AFE7BB466_Class_3_8661546F242498DE;
class Class_1_DAFF948AFE7BB466_Class_3_8661546F242498DE_1;
class Class_1_DAFF948AFE7BB466_Class_3_D490A575DB652D0B;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_DAFF948AFE7BB466_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x17B0E130)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_2481F325C948A529_OFFSET UNITYSDK_OFFSET(0x17B11530)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x17B0D7C0)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_36B0CC208063D29D_1_OFFSET UNITYSDK_OFFSET(0x17B0F650)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_36B0CC208063D29D_2_OFFSET UNITYSDK_OFFSET(0x17B0F660)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_36B0CC208063D29D_3_OFFSET UNITYSDK_OFFSET(0x17B0F670)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_36B0CC208063D29D_4_OFFSET UNITYSDK_OFFSET(0x17B0F680)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_36B0CC208063D29D_5_OFFSET UNITYSDK_OFFSET(0x17B0F690)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_36B0CC208063D29D_OFFSET UNITYSDK_OFFSET(0x17B0F640)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_3A47E34AF9A34BA2_OFFSET UNITYSDK_OFFSET(0x17B0E2E0)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_3A8F6A4E3FA252DB_OFFSET UNITYSDK_OFFSET(0x17B0EA10)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17B0E2A0)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0x17B0DB20)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_46991DD8563806F0_OFFSET UNITYSDK_OFFSET(0x17B0E510)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_4993EDAE54425105_1_OFFSET UNITYSDK_OFFSET(0x17B11620)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_4993EDAE54425105_2_OFFSET UNITYSDK_OFFSET(0x17B116D0)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x17B0DB10)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_57835F2501467DBA_OFFSET UNITYSDK_OFFSET(0x17B0EA40)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_5BD0F9E65BEB641C_OFFSET UNITYSDK_OFFSET(0x17B108A0)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x17B0D7B0)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_66F75809A0809C13_OFFSET UNITYSDK_OFFSET(0x17B0E700)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_71C55DC70C1BBE94_OFFSET UNITYSDK_OFFSET(0x17B10810)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x17B0DB30)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17B0D7A0)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_C30BAFC1B5B021F9_OFFSET UNITYSDK_OFFSET(0x17B0DB40)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_C801DF1C310101E9_OFFSET UNITYSDK_OFFSET(0x17B11630)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_D5F3DB743C14B940_OFFSET UNITYSDK_OFFSET(0x17B0F630)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_DE33694023D43785_OFFSET UNITYSDK_OFFSET(0x17B0F6A0)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_E7284112110C554E_OFFSET UNITYSDK_OFFSET(0x17B0EC00)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_EBF44BC910948FDA_1_OFFSET UNITYSDK_OFFSET(0x17B0E340)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_EBF44BC910948FDA_2_OFFSET UNITYSDK_OFFSET(0x17B0E450)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_EBF44BC910948FDA_3_OFFSET UNITYSDK_OFFSET(0x17B0E950)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x17B0E1E0)
#define CLASS_1_DAFF948AFE7BB466__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B116E0)
#define CLASS_1_DAFF948AFE7BB466__CTOR_OFFSET UNITYSDK_OFFSET(0x17B0D3F0)

inline static constexpr unsigned int Class_1_DAFF948AFE7BB466_TypeDefinitionIndex = 8940;

class Class_1_DAFF948AFE7BB466 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DAFF948AFE7BB466_TypeDefinitionIndex)->GetStaticField(0x6480);
	}
	::System::Collections::Generic::List_1<::System::String*>* Field_1_10; // 0x10
	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_3*>* Field_1_23; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_1_11; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x30
	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_2*>* Field_1_22; // 0x38
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_8; // 0x40
	::System::Collections::Generic::List_1<::System::String*>* Field_1_6; // 0x48
	::Class_1_DAFF948AFE7BB466_Class_3_8661546F242498DE* Field_1_17; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* Field_1_14; // 0x58
	::System::Collections::Generic::List_1<::System::String*>* Field_1_13; // 0x60
	::System::Collections::Generic::List_1<::System::String*>* Field_1_9; // 0x68
	::System::String* Field_1_24; // 0x70
	::Class_1_DAFF948AFE7BB466_Class_3_D490A575DB652D0B* Field_1_18; // 0x78
	::Class_1_DAFF948AFE7BB466_Class_3_D490A575DB652D0B* Field_1_19; // 0x80
	::System::Collections::Generic::List_1<::Class_1_5425922A8B586808*>* Field_1_4; // 0x88
	::Class_1_DAFF948AFE7BB466_Class_3_8661546F242498DE_1* Field_1_21; // 0x90
	::System::Collections::Generic::List_1<::System::String*>* Field_1_7; // 0x98
	::System::Collections::Generic::List_1<::System::Text::RegularExpressions::Regex*>* Field_1_15; // 0xA0
	::Class_1_DAFF948AFE7BB466_Class_3_8661546F242498DE* Field_1_16; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_5425922A8B586808*>* Field_1_5; // 0xB0
	::Class_1_DAFF948AFE7BB466_Class_3_D490A575DB652D0B* Field_1_20; // 0xB8
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_12; // 0xC0
	::System::Boolean Field_1_3; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466__CCTOR_OFFSET))();
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_5425922A8B586808*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5425922A8B586808*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_43535ED8A0DF5FF8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_43535ED8A0DF5FF8_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_1_C30BAFC1B5B021F9(::System::String* a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_C30BAFC1B5B021F9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_EBF44BC910948FDA_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_3A47E34AF9A34BA2(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_3A47E34AF9A34BA2_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBF44BC910948FDA_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_EBF44BC910948FDA_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBF44BC910948FDA_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_EBF44BC910948FDA_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_46991DD8563806F0(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_46991DD8563806F0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_66F75809A0809C13(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_66F75809A0809C13_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EBF44BC910948FDA_3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_EBF44BC910948FDA_3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3A8F6A4E3FA252DB(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_3A8F6A4E3FA252DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_57835F2501467DBA(::System::String* a1, ::RPG::Client::FileIncludeOrExcludeReason& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::FileIncludeOrExcludeReason&))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_57835F2501467DBA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_E7284112110C554E(::System::String* a1, ::RPG::Client::FileIncludeOrExcludeReason& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::FileIncludeOrExcludeReason&))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_E7284112110C554E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D5F3DB743C14B940(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_D5F3DB743C14B940_OFFSET))(this, a1);
	}

	::System::Void Method_1_36B0CC208063D29D(::Class_1_DAFF948AFE7BB466_Class_3_8661546F242498DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DAFF948AFE7BB466_Class_3_8661546F242498DE*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_36B0CC208063D29D_OFFSET))(this, a1);
	}

	::System::Void Method_1_36B0CC208063D29D_1(::Class_1_DAFF948AFE7BB466_Class_3_8661546F242498DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DAFF948AFE7BB466_Class_3_8661546F242498DE*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_36B0CC208063D29D_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_36B0CC208063D29D_2(::Class_1_DAFF948AFE7BB466_Class_3_D490A575DB652D0B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DAFF948AFE7BB466_Class_3_D490A575DB652D0B*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_36B0CC208063D29D_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_36B0CC208063D29D_3(::Class_1_DAFF948AFE7BB466_Class_3_D490A575DB652D0B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DAFF948AFE7BB466_Class_3_D490A575DB652D0B*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_36B0CC208063D29D_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_36B0CC208063D29D_4(::Class_1_DAFF948AFE7BB466_Class_3_D490A575DB652D0B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DAFF948AFE7BB466_Class_3_D490A575DB652D0B*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_36B0CC208063D29D_4_OFFSET))(this, a1);
	}

	::System::Void Method_1_36B0CC208063D29D_5(::Class_1_DAFF948AFE7BB466_Class_3_8661546F242498DE_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DAFF948AFE7BB466_Class_3_8661546F242498DE_1*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_36B0CC208063D29D_5_OFFSET))(this, a1);
	}

	::System::Void Method_1_DE33694023D43785(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_DE33694023D43785_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_71C55DC70C1BBE94(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_71C55DC70C1BBE94_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5BD0F9E65BEB641C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_5BD0F9E65BEB641C_OFFSET))(this, a1);
	}

	::System::Void Method_1_2481F325C948A529(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_2481F325C948A529_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_2*>* Method_1_4993EDAE54425105_1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_4993EDAE54425105_1_OFFSET))(this);
	}

	::System::Void Method_1_C801DF1C310101E9(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_C801DF1C310101E9_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_3*>* Method_1_4993EDAE54425105_2()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_4993EDAE54425105_2_OFFSET))(this);
	}
};
