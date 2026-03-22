#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BD800F5B29A08E1F_Struct_2_028675BFBEB6582A.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_2.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_339BE3A80C8E64FF;
class Class_1_73D621BDD90E61A7;
class Class_1_BD800F5B29A08E1F;
class Class_2_9D395C7782DBE5D8_Class_1_2EAC2DB4DA0A99A1;
namespace RPG::GameCore { class ComplexSkillAIAxis; }
namespace RPG::GameCore { class ComplexSkillAIConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9D395C7782DBE5D8_METHOD_2_00605CD46BC5ED28_OFFSET UNITYSDK_OFFSET(0xD885D50)
#define CLASS_2_9D395C7782DBE5D8_METHOD_2_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0xD885D10)
#define CLASS_2_9D395C7782DBE5D8_METHOD_2_16DC12B9AA0610D8_OFFSET UNITYSDK_OFFSET(0xD885560)
#define CLASS_2_9D395C7782DBE5D8_METHOD_2_17BE402CC104A3E3_OFFSET UNITYSDK_OFFSET(0xD884AF0)
#define CLASS_2_9D395C7782DBE5D8_METHOD_2_2209C9748A72E5BB_OFFSET UNITYSDK_OFFSET(0xD884320)
#define CLASS_2_9D395C7782DBE5D8_METHOD_2_279440535C853CAD_OFFSET UNITYSDK_OFFSET(0xD8852B0)
#define CLASS_2_9D395C7782DBE5D8_METHOD_2_47680E2642F37A1B_OFFSET UNITYSDK_OFFSET(0xD885090)
#define CLASS_2_9D395C7782DBE5D8_METHOD_2_4B1627D78D57FD39_OFFSET UNITYSDK_OFFSET(0xD885D90)
#define CLASS_2_9D395C7782DBE5D8_METHOD_2_55357EED91DD300A_OFFSET UNITYSDK_OFFSET(0xD8854E0)
#define CLASS_2_9D395C7782DBE5D8_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xD885CD0)
#define CLASS_2_9D395C7782DBE5D8_METHOD_2_594B16EC13924620_OFFSET UNITYSDK_OFFSET(0xD885400)
#define CLASS_2_9D395C7782DBE5D8_METHOD_2_5F36FBA0CEB01BDA_OFFSET UNITYSDK_OFFSET(0xD884A00)
#define CLASS_2_9D395C7782DBE5D8_METHOD_2_6E86C88227CAEC87_OFFSET UNITYSDK_OFFSET(0xD884820)
#define CLASS_2_9D395C7782DBE5D8_METHOD_2_74D8BE069C631D52_OFFSET UNITYSDK_OFFSET(0xD885BA0)
#define CLASS_2_9D395C7782DBE5D8_METHOD_2_8AF5C5D2EEFF54B5_OFFSET UNITYSDK_OFFSET(0xD883640)
#define CLASS_2_9D395C7782DBE5D8_METHOD_2_8D184BB701D4E177_OFFSET UNITYSDK_OFFSET(0xD8846C0)
#define CLASS_2_9D395C7782DBE5D8_METHOD_2_A60073851274E67A_OFFSET UNITYSDK_OFFSET(0xD885C80)
#define CLASS_2_9D395C7782DBE5D8_METHOD_2_CB7312DC9E225D46_OFFSET UNITYSDK_OFFSET(0xD885210)
#define CLASS_2_9D395C7782DBE5D8_METHOD_2_DC02F8DDF293C069_OFFSET UNITYSDK_OFFSET(0xD883030)
#define CLASS_2_9D395C7782DBE5D8_METHOD_2_FEA73477BA929C29_OFFSET UNITYSDK_OFFSET(0xD8836C0)
#define CLASS_2_9D395C7782DBE5D8__CTOR_OFFSET UNITYSDK_OFFSET(0xD882F90)

inline static constexpr unsigned int Class_2_9D395C7782DBE5D8_TypeDefinitionIndex = 42410;

class Class_2_9D395C7782DBE5D8 : public ::Class_1_F9FBCC956DFCF137_2
{
public:
	::RPG::GameCore::ComplexSkillAIAxis* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_9D395C7782DBE5D8_Class_1_2EAC2DB4DA0A99A1*>* Field_2_0; // 0x20
	::Class_1_73D621BDD90E61A7* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::ComplexSkillAIAxis* a1, ::Class_1_BD800F5B29A08E1F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ComplexSkillAIAxis*, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_9D395C7782DBE5D8__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_DC02F8DDF293C069()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D395C7782DBE5D8_METHOD_2_DC02F8DDF293C069_OFFSET))(this);
	}

	static ::System::Int32 Method_2_CB7312DC9E225D46(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9D395C7782DBE5D8_METHOD_2_CB7312DC9E225D46_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_2_594B16EC13924620(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_9D395C7782DBE5D8_METHOD_2_594B16EC13924620_OFFSET))(a1);
	}

	::System::Boolean Method_2_2209C9748A72E5BB(::Class_1_BD800F5B29A08E1F* a1, ::Class_1_73D621BDD90E61A7* a2, ::RPG::GameCore::SkillData* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BD800F5B29A08E1F*, ::Class_1_73D621BDD90E61A7*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_9D395C7782DBE5D8_METHOD_2_2209C9748A72E5BB_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_8AF5C5D2EEFF54B5(::Class_1_BD800F5B29A08E1F* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_9D395C7782DBE5D8_METHOD_2_8AF5C5D2EEFF54B5_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntityList* Method_2_8D184BB701D4E177(::System::Int32 a1, ::Class_1_BD800F5B29A08E1F* a2)
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::System::Int32, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_9D395C7782DBE5D8_METHOD_2_8D184BB701D4E177_OFFSET))(this, a1, a2);
	}

	::Class_2_9D395C7782DBE5D8_Class_1_2EAC2DB4DA0A99A1* Method_2_6E86C88227CAEC87(::System::Int32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::Class_1_BD800F5B29A08E1F* a3)
	{
		return ((::Class_2_9D395C7782DBE5D8_Class_1_2EAC2DB4DA0A99A1*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_9D395C7782DBE5D8_METHOD_2_6E86C88227CAEC87_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_47680E2642F37A1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D395C7782DBE5D8_METHOD_2_47680E2642F37A1B_OFFSET))(this);
	}

	static ::RPG::GameCore::ComplexSkillAIConfig* Method_2_74D8BE069C631D52(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::ComplexSkillAIConfig*(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9D395C7782DBE5D8_METHOD_2_74D8BE069C631D52_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_2_279440535C853CAD(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9D395C7782DBE5D8_METHOD_2_279440535C853CAD_OFFSET))(a1);
	}

	static ::RPG::GameCore::ComplexSkillAIConfig* Method_2_A60073851274E67A(::RPG::GameCore::SkillConfig* a1)
	{
		return ((::RPG::GameCore::ComplexSkillAIConfig*(*)(::RPG::GameCore::SkillConfig*))((::PBYTE)hIl2Cpp + CLASS_2_9D395C7782DBE5D8_METHOD_2_A60073851274E67A_OFFSET))(a1);
	}

	static ::Class_1_BD800F5B29A08E1F_Struct_2_028675BFBEB6582A Method_2_17BE402CC104A3E3(::Class_1_BD800F5B29A08E1F* a1, ::System::Int32 a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a5, ::Class_2_9D395C7782DBE5D8_Class_1_2EAC2DB4DA0A99A1* a6, ::Class_1_73D621BDD90E61A7* a7)
	{
		return ((::Class_1_BD800F5B29A08E1F_Struct_2_028675BFBEB6582A(*)(::Class_1_BD800F5B29A08E1F*, ::System::Int32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::Class_2_9D395C7782DBE5D8_Class_1_2EAC2DB4DA0A99A1*, ::Class_1_73D621BDD90E61A7*))((::PBYTE)hIl2Cpp + CLASS_2_9D395C7782DBE5D8_METHOD_2_17BE402CC104A3E3_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_FEA73477BA929C29(::Class_1_BD800F5B29A08E1F* a1, ::Class_1_73D621BDD90E61A7* a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD800F5B29A08E1F*, ::Class_1_73D621BDD90E61A7*, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_2_9D395C7782DBE5D8_METHOD_2_FEA73477BA929C29_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5F36FBA0CEB01BDA(::Class_1_BD800F5B29A08E1F* a1, ::RPG::GameCore::GameEntityList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD800F5B29A08E1F*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_2_9D395C7782DBE5D8_METHOD_2_5F36FBA0CEB01BDA_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::Boolean, ::RPG::GameCore::FixPoint> Method_2_16DC12B9AA0610D8(::Class_1_BD800F5B29A08E1F* a1, ::Class_1_73D621BDD90E61A7* a2, ::RPG::GameCore::SkillData* a3)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::RPG::GameCore::FixPoint>(*)(::PVOID, ::Class_1_BD800F5B29A08E1F*, ::Class_1_73D621BDD90E61A7*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_9D395C7782DBE5D8_METHOD_2_16DC12B9AA0610D8_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_339BE3A80C8E64FF* Method_2_55357EED91DD300A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_339BE3A80C8E64FF*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9D395C7782DBE5D8_METHOD_2_55357EED91DD300A_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9D395C7782DBE5D8_METHOD_2_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_2_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9D395C7782DBE5D8_METHOD_2_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	static ::System::Void Method_2_00605CD46BC5ED28(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9D395C7782DBE5D8_METHOD_2_00605CD46BC5ED28_OFFSET))(a1);
	}

	::RPG::GameCore::FixPoint Method_2_4B1627D78D57FD39()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D395C7782DBE5D8_METHOD_2_4B1627D78D57FD39_OFFSET))(this);
	}
};
