#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BD800F5B29A08E1F_Struct_2_028675BFBEB6582A.h"
#include "unitysdk/Class_1_BD800F5B29A08E1F_Struct_2_BBD456EBC9087BC2_3.h"
#include "unitysdk/System/Object.h"

class Class_1_95BA09BAE479F559;
class Class_1_C6E39342395B51C9;
class Class_3_A88DFCAE3B12E69C;
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BD800F5B29A08E1F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12E59A80)
#define CLASS_1_BD800F5B29A08E1F_GET_AIACTIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x12E5AF70)
#define CLASS_1_BD800F5B29A08E1F_GET_AISEQUENCESKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x12E5AFE0)
#define CLASS_1_BD800F5B29A08E1F_GET_AISKILLTARGETENTITYLIST_OFFSET UNITYSDK_OFFSET(0x12E5B000)
#define CLASS_1_BD800F5B29A08E1F_GET_GLOBALVARS_OFFSET UNITYSDK_OFFSET(0x12E5B020)
#define CLASS_1_BD800F5B29A08E1F_GET_LASTSEQUENCESKILLIDX_OFFSET UNITYSDK_OFFSET(0x12E5AFC0)
#define CLASS_1_BD800F5B29A08E1F_GET_ONLYULTRAFLAG_OFFSET UNITYSDK_OFFSET(0x12E5B040)
#define CLASS_1_BD800F5B29A08E1F_GET_VARIABLEANIMCONFIGREFKEY_OFFSET UNITYSDK_OFFSET(0x12E5AFB0)
#define CLASS_1_BD800F5B29A08E1F_GET_VARIABLEFORBIDCLEARSKILLUSERECORDREFKEY_OFFSET UNITYSDK_OFFSET(0x12E5AF90)
#define CLASS_1_BD800F5B29A08E1F_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x12E5A8E0)
#define CLASS_1_BD800F5B29A08E1F_METHOD_1_53518067AE683C10_1_OFFSET UNITYSDK_OFFSET(0x12E5A650)
#define CLASS_1_BD800F5B29A08E1F_METHOD_1_53518067AE683C10_OFFSET UNITYSDK_OFFSET(0x12E5A500)
#define CLASS_1_BD800F5B29A08E1F_METHOD_1_60DC879ACE99CF48_OFFSET UNITYSDK_OFFSET(0x12E5A990)
#define CLASS_1_BD800F5B29A08E1F_METHOD_1_63EACAC7DD0B4D25_OFFSET UNITYSDK_OFFSET(0x12E5A7D0)
#define CLASS_1_BD800F5B29A08E1F_METHOD_1_71BCD439D3428D6E_OFFSET UNITYSDK_OFFSET(0x12E5A090)
#define CLASS_1_BD800F5B29A08E1F_METHOD_1_8B524CBC98A592C2_OFFSET UNITYSDK_OFFSET(0x12E5AB40)
#define CLASS_1_BD800F5B29A08E1F_METHOD_1_8CBB93C3A2339306_OFFSET UNITYSDK_OFFSET(0x12E5A380)
#define CLASS_1_BD800F5B29A08E1F_METHOD_1_92F2E2192631AEF5_OFFSET UNITYSDK_OFFSET(0x12E5A440)
#define CLASS_1_BD800F5B29A08E1F_METHOD_1_9592CC34AD487472_OFFSET UNITYSDK_OFFSET(0x12E5AA40)
#define CLASS_1_BD800F5B29A08E1F_METHOD_1_95F5200B1985BEE8_OFFSET UNITYSDK_OFFSET(0x12E59C20)
#define CLASS_1_BD800F5B29A08E1F_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x12E5AF50)
#define CLASS_1_BD800F5B29A08E1F_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x12E5B060)
#define CLASS_1_BD800F5B29A08E1F_METHOD_1_BE3C5287965483DC_OFFSET UNITYSDK_OFFSET(0x12E59F20)
#define CLASS_1_BD800F5B29A08E1F_METHOD_1_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0x12E5A5D0)
#define CLASS_1_BD800F5B29A08E1F_METHOD_1_CAD8BA116B4F34A9_OFFSET UNITYSDK_OFFSET(0x12E5A210)
#define CLASS_1_BD800F5B29A08E1F_METHOD_1_CC5CE2E05C46A526_OFFSET UNITYSDK_OFFSET(0x12E5AAD0)
#define CLASS_1_BD800F5B29A08E1F_METHOD_1_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0x12E5A720)
#define CLASS_1_BD800F5B29A08E1F_METHOD_1_FB4009E986BD890A_OFFSET UNITYSDK_OFFSET(0x12E59DB0)
#define CLASS_1_BD800F5B29A08E1F_SET_AIACTIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x12E5AF60)
#define CLASS_1_BD800F5B29A08E1F_SET_AISEQUENCESKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x12E5AFF0)
#define CLASS_1_BD800F5B29A08E1F_SET_AISKILLTARGETENTITYLIST_OFFSET UNITYSDK_OFFSET(0x12E5B010)
#define CLASS_1_BD800F5B29A08E1F_SET_GLOBALVARS_OFFSET UNITYSDK_OFFSET(0x12E5B030)
#define CLASS_1_BD800F5B29A08E1F_SET_LASTSEQUENCESKILLIDX_OFFSET UNITYSDK_OFFSET(0x12E5AFD0)
#define CLASS_1_BD800F5B29A08E1F_SET_ONLYULTRAFLAG_OFFSET UNITYSDK_OFFSET(0x12E5B050)
#define CLASS_1_BD800F5B29A08E1F_SET_VARIABLEANIMCONFIGREFKEY_OFFSET UNITYSDK_OFFSET(0x12E5AFA0)
#define CLASS_1_BD800F5B29A08E1F_SET_VARIABLEFORBIDCLEARSKILLUSERECORDREFKEY_OFFSET UNITYSDK_OFFSET(0x12E5AF80)
#define CLASS_1_BD800F5B29A08E1F__CTOR_OFFSET UNITYSDK_OFFSET(0x12E59730)

inline static constexpr unsigned int Class_1_BD800F5B29A08E1F_TypeDefinitionIndex = 50116;

class Class_1_BD800F5B29A08E1F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_BD800F5B29A08E1F_Struct_2_028675BFBEB6582A>*>* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _AISkillTargetEntityList_k__BackingField; // 0x18
	::Class_1_95BA09BAE479F559* _GlobalVars_k__BackingField; // 0x20
	::System::String* _VariableForbidClearSkillUseRecordRefKey_k__BackingField; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* _AISequenceSkillIDList_k__BackingField; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AIVariable*>* Field_1_12; // 0x38
	::RPG::GameCore::GameEntity* Field_1_9; // 0x40
	::System::Collections::Generic::List_1<::Class_1_BD800F5B29A08E1F_Struct_2_BBD456EBC9087BC2_3>* Field_1_11; // 0x48
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_10; // 0x50
	::System::String* _VariableAnimConfigRefKey_k__BackingField; // 0x58
	::System::Boolean _OnlyUltraFlag_k__BackingField; // 0x60
	::System::Int32 _AIActionTurnCount_k__BackingField; // 0x64
	::System::Int32 _LastSequenceSkillIdx_k__BackingField; // 0x68

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_95F5200B1985BEE8(::Il2CppArray<::RPG::GameCore::AIVariable*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_METHOD_1_95F5200B1985BEE8_OFFSET))(this, a1);
	}

	::System::Void Method_1_FB4009E986BD890A(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_METHOD_1_FB4009E986BD890A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BE3C5287965483DC(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_METHOD_1_BE3C5287965483DC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_71BCD439D3428D6E(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_METHOD_1_71BCD439D3428D6E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CAD8BA116B4F34A9(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_METHOD_1_CAD8BA116B4F34A9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8CBB93C3A2339306(::System::String* a1, ::Class_3_A88DFCAE3B12E69C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_3_A88DFCAE3B12E69C*))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_METHOD_1_8CBB93C3A2339306_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AIVariable* Method_1_92F2E2192631AEF5(::System::String* a1)
	{
		return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_METHOD_1_92F2E2192631AEF5_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_53518067AE683C10(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_METHOD_1_53518067AE683C10_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_53518067AE683C10_1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_METHOD_1_53518067AE683C10_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D7B7C909A67BD350()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_METHOD_1_D7B7C909A67BD350_OFFSET))(this);
	}

	::System::Void Method_1_63EACAC7DD0B4D25(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_METHOD_1_63EACAC7DD0B4D25_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_60DC879ACE99CF48(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_METHOD_1_60DC879ACE99CF48_OFFSET))(this, a1);
	}

	::System::Void Method_1_9592CC34AD487472(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_METHOD_1_9592CC34AD487472_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CC5CE2E05C46A526(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_METHOD_1_CC5CE2E05C46A526_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8B524CBC98A592C2(::System::Int32& a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_METHOD_1_8B524CBC98A592C2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_C50A2293958CA940(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_METHOD_1_C50A2293958CA940_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void set_AIActionTurnCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_SET_AIACTIONTURNCOUNT_OFFSET))(this, value);
	}

	::System::Int32 get_AIActionTurnCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_GET_AIACTIONTURNCOUNT_OFFSET))(this);
	}

	::System::Void set_VariableForbidClearSkillUseRecordRefKey(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_SET_VARIABLEFORBIDCLEARSKILLUSERECORDREFKEY_OFFSET))(this, value);
	}

	::System::String* get_VariableForbidClearSkillUseRecordRefKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_GET_VARIABLEFORBIDCLEARSKILLUSERECORDREFKEY_OFFSET))(this);
	}

	::System::Void set_VariableAnimConfigRefKey(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_SET_VARIABLEANIMCONFIGREFKEY_OFFSET))(this, value);
	}

	::System::String* get_VariableAnimConfigRefKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_GET_VARIABLEANIMCONFIGREFKEY_OFFSET))(this);
	}

	::System::Int32 get_LastSequenceSkillIdx()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_GET_LASTSEQUENCESKILLIDX_OFFSET))(this);
	}

	::System::Void set_LastSequenceSkillIdx(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_SET_LASTSEQUENCESKILLIDX_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_AISequenceSkillIDList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_GET_AISEQUENCESKILLIDLIST_OFFSET))(this);
	}

	::System::Void set_AISequenceSkillIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_SET_AISEQUENCESKILLIDLIST_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_AISkillTargetEntityList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_GET_AISKILLTARGETENTITYLIST_OFFSET))(this);
	}

	::System::Void set_AISkillTargetEntityList(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_SET_AISKILLTARGETENTITYLIST_OFFSET))(this, value);
	}

	::Class_1_95BA09BAE479F559* get_GlobalVars()
	{
		return ((::Class_1_95BA09BAE479F559*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_GET_GLOBALVARS_OFFSET))(this);
	}

	::System::Void set_GlobalVars(::Class_1_95BA09BAE479F559* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BA09BAE479F559*))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_SET_GLOBALVARS_OFFSET))(this, value);
	}

	::System::Boolean get_OnlyUltraFlag()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_GET_ONLYULTRAFLAG_OFFSET))(this);
	}

	::System::Void set_OnlyUltraFlag(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_SET_ONLYULTRAFLAG_OFFSET))(this, value);
	}

	::Class_1_C6E39342395B51C9* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_C6E39342395B51C9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD800F5B29A08E1F_METHOD_1_B64C60973842FE45_OFFSET))(this);
	}
};
