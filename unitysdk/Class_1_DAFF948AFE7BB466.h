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

#define CLASS_1_DAFF948AFE7BB466_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1833FC40)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_1F2DCFA419821DD3_OFFSET UNITYSDK_OFFSET(0x18340540)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_2481F325C948A529_OFFSET UNITYSDK_OFFSET(0x18341D60)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x1833F760)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_36B0CC208063D29D_1_OFFSET UNITYSDK_OFFSET(0x18340F80)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_36B0CC208063D29D_2_OFFSET UNITYSDK_OFFSET(0x18340F90)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_36B0CC208063D29D_3_OFFSET UNITYSDK_OFFSET(0x18340FA0)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_36B0CC208063D29D_4_OFFSET UNITYSDK_OFFSET(0x18340FB0)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_36B0CC208063D29D_5_OFFSET UNITYSDK_OFFSET(0x18340FC0)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_36B0CC208063D29D_OFFSET UNITYSDK_OFFSET(0x18340F70)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_3A47E34AF9A34BA2_OFFSET UNITYSDK_OFFSET(0x1833FDF0)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1833FDB0)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0x1833FAD0)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_46991DD8563806F0_OFFSET UNITYSDK_OFFSET(0x18340030)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_4993EDAE54425105_1_OFFSET UNITYSDK_OFFSET(0x18341E50)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_4993EDAE54425105_2_OFFSET UNITYSDK_OFFSET(0x18341EF0)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x1833FAC0)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_5BD0F9E65BEB641C_OFFSET UNITYSDK_OFFSET(0x18330710)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x18330310)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_66F75809A0809C13_OFFSET UNITYSDK_OFFSET(0x18340220)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_71C55DC70C1BBE94_OFFSET UNITYSDK_OFFSET(0x18341CD0)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1833FAE0)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1833F750)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_A9E2A5027BE6E303_OFFSET UNITYSDK_OFFSET(0x183405A0)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_C30BAFC1B5B021F9_OFFSET UNITYSDK_OFFSET(0x1833FAF0)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_C801DF1C310101E9_OFFSET UNITYSDK_OFFSET(0x18341E60)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_D5F3DB743C14B940_OFFSET UNITYSDK_OFFSET(0x18340F60)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_DE33694023D43785_OFFSET UNITYSDK_OFFSET(0x18340FD0)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_E7284112110C554E_OFFSET UNITYSDK_OFFSET(0x18340730)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_EBF44BC910948FDA_1_OFFSET UNITYSDK_OFFSET(0x1833FE50)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_EBF44BC910948FDA_2_OFFSET UNITYSDK_OFFSET(0x1833FF60)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_EBF44BC910948FDA_3_OFFSET UNITYSDK_OFFSET(0x18340470)
#define CLASS_1_DAFF948AFE7BB466_METHOD_1_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x1833FCF0)
#define CLASS_1_DAFF948AFE7BB466__CCTOR_OFFSET UNITYSDK_OFFSET(0x18341F00)
#define CLASS_1_DAFF948AFE7BB466__CTOR_OFFSET UNITYSDK_OFFSET(0x1832FE30)

inline static constexpr unsigned int Class_1_DAFF948AFE7BB466_TypeDefinitionIndex = 9508;

class Class_1_DAFF948AFE7BB466 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DAFF948AFE7BB466_TypeDefinitionIndex)->GetStaticField(0xB3A0);
	}
	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_3*>* Field_1_23; // 0x10
	::Class_1_DAFF948AFE7BB466_Class_3_D490A575DB652D0B* Field_1_18; // 0x18
	::Class_1_DAFF948AFE7BB466_Class_3_8661546F242498DE* Field_1_17; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_1_6; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_1_14; // 0x30
	::Class_1_DAFF948AFE7BB466_Class_3_D490A575DB652D0B* Field_1_20; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* Field_1_2; // 0x40
	::System::Collections::Generic::List_1<::System::String*>* Field_1_10; // 0x48
	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_2*>* Field_1_22; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_5425922A8B586808*>* Field_1_5; // 0x58
	::Class_1_DAFF948AFE7BB466_Class_3_8661546F242498DE* Field_1_16; // 0x60
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_8; // 0x68
	::System::Collections::Generic::List_1<::System::String*>* Field_1_11; // 0x70
	::System::Collections::Generic::List_1<::System::Text::RegularExpressions::Regex*>* Field_1_15; // 0x78
	::System::Collections::Generic::List_1<::System::String*>* Field_1_9; // 0x80
	::Class_1_DAFF948AFE7BB466_Class_3_D490A575DB652D0B* Field_1_19; // 0x88
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x90
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_12; // 0x98
	::System::Collections::Generic::List_1<::System::String*>* Field_1_7; // 0xA0
	::Class_1_DAFF948AFE7BB466_Class_3_8661546F242498DE_1* Field_1_21; // 0xA8
	::System::Collections::Generic::List_1<::Class_1_5425922A8B586808*>* Field_1_4; // 0xB0
	::System::Collections::Generic::List_1<::System::String*>* Field_1_13; // 0xB8
	::System::String* Field_1_24; // 0xC0
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

	::System::Boolean Method_1_1F2DCFA419821DD3(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_1F2DCFA419821DD3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A9E2A5027BE6E303(::System::String* a1, ::RPG::Client::FileIncludeOrExcludeReason& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::FileIncludeOrExcludeReason&))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_METHOD_1_A9E2A5027BE6E303_OFFSET))(this, a1, a2);
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
