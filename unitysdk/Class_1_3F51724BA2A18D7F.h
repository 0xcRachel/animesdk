#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NoteInputResult.h"
#include "unitysdk/System/Object.h"

class Class_1_04316EB8ECDF7B06;
class Class_1_422F2D395BEF4FA5;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NoteGroupConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3F51724BA2A18D7F_GET_AUTOBUBBLE_OFFSET UNITYSDK_OFFSET(0x16660010)
#define CLASS_1_3F51724BA2A18D7F_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x166600D0)
#define CLASS_1_3F51724BA2A18D7F_GET_FAILINPUT_OFFSET UNITYSDK_OFFSET(0x166601B0)
#define CLASS_1_3F51724BA2A18D7F_GET_IGNORELOOP_OFFSET UNITYSDK_OFFSET(0x16660150)
#define CLASS_1_3F51724BA2A18D7F_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1665FFD0)
#define CLASS_1_3F51724BA2A18D7F_GET_INPUTNOTECOUNT_OFFSET UNITYSDK_OFFSET(0x16660050)
#define CLASS_1_3F51724BA2A18D7F_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1665FFF0)
#define CLASS_1_3F51724BA2A18D7F_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x16660130)
#define CLASS_1_3F51724BA2A18D7F_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x16660110)
#define CLASS_1_3F51724BA2A18D7F_GET_OWNERMODE_OFFSET UNITYSDK_OFFSET(0x16660030)
#define CLASS_1_3F51724BA2A18D7F_GET_PERFECTINPUT_OFFSET UNITYSDK_OFFSET(0x16660190)
#define CLASS_1_3F51724BA2A18D7F_GET_REALENDTIME_OFFSET UNITYSDK_OFFSET(0x16660090)
#define CLASS_1_3F51724BA2A18D7F_GET_REALSTARTTIME_OFFSET UNITYSDK_OFFSET(0x16660070)
#define CLASS_1_3F51724BA2A18D7F_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x166600B0)
#define CLASS_1_3F51724BA2A18D7F_GET_SUCCESSINPUT_OFFSET UNITYSDK_OFFSET(0x16660170)
#define CLASS_1_3F51724BA2A18D7F_GET_TUTORIALSCORE_OFFSET UNITYSDK_OFFSET(0x166600F0)
#define CLASS_1_3F51724BA2A18D7F_METHOD_1_05253A2C50FAEC90_OFFSET UNITYSDK_OFFSET(0x1665FD50)
#define CLASS_1_3F51724BA2A18D7F_METHOD_1_0A7E56A59F184B0A_OFFSET UNITYSDK_OFFSET(0x1665FC80)
#define CLASS_1_3F51724BA2A18D7F_METHOD_1_1397E3708A9DBEBA_OFFSET UNITYSDK_OFFSET(0x1665F260)
#define CLASS_1_3F51724BA2A18D7F_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1665FF70)
#define CLASS_1_3F51724BA2A18D7F_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1665FF20)
#define CLASS_1_3F51724BA2A18D7F_METHOD_1_4E140453C4B32F06_OFFSET UNITYSDK_OFFSET(0x1665F820)
#define CLASS_1_3F51724BA2A18D7F_METHOD_1_7EACFD3740004695_OFFSET UNITYSDK_OFFSET(0x1665FC10)
#define CLASS_1_3F51724BA2A18D7F_METHOD_1_A9E21AEFB7D4CB48_OFFSET UNITYSDK_OFFSET(0x1665F770)
#define CLASS_1_3F51724BA2A18D7F_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1665F8D0)
#define CLASS_1_3F51724BA2A18D7F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1665F880)
#define CLASS_1_3F51724BA2A18D7F_METHOD_1_FAF01E6C61157965_OFFSET UNITYSDK_OFFSET(0x1665F920)
#define CLASS_1_3F51724BA2A18D7F_METHOD_1_FCB7990FCD402039_OFFSET UNITYSDK_OFFSET(0x1665FA90)
#define CLASS_1_3F51724BA2A18D7F_SET_AUTOBUBBLE_OFFSET UNITYSDK_OFFSET(0x16660020)
#define CLASS_1_3F51724BA2A18D7F_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x166600E0)
#define CLASS_1_3F51724BA2A18D7F_SET_FAILINPUT_OFFSET UNITYSDK_OFFSET(0x166601C0)
#define CLASS_1_3F51724BA2A18D7F_SET_IGNORELOOP_OFFSET UNITYSDK_OFFSET(0x16660160)
#define CLASS_1_3F51724BA2A18D7F_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1665FFE0)
#define CLASS_1_3F51724BA2A18D7F_SET_INPUTNOTECOUNT_OFFSET UNITYSDK_OFFSET(0x16660060)
#define CLASS_1_3F51724BA2A18D7F_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x16660000)
#define CLASS_1_3F51724BA2A18D7F_SET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x16660140)
#define CLASS_1_3F51724BA2A18D7F_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x16660120)
#define CLASS_1_3F51724BA2A18D7F_SET_OWNERMODE_OFFSET UNITYSDK_OFFSET(0x16660040)
#define CLASS_1_3F51724BA2A18D7F_SET_PERFECTINPUT_OFFSET UNITYSDK_OFFSET(0x166601A0)
#define CLASS_1_3F51724BA2A18D7F_SET_REALENDTIME_OFFSET UNITYSDK_OFFSET(0x166600A0)
#define CLASS_1_3F51724BA2A18D7F_SET_REALSTARTTIME_OFFSET UNITYSDK_OFFSET(0x16660080)
#define CLASS_1_3F51724BA2A18D7F_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x166600C0)
#define CLASS_1_3F51724BA2A18D7F_SET_SUCCESSINPUT_OFFSET UNITYSDK_OFFSET(0x16660180)
#define CLASS_1_3F51724BA2A18D7F_SET_TUTORIALSCORE_OFFSET UNITYSDK_OFFSET(0x16660100)
#define CLASS_1_3F51724BA2A18D7F__CCTOR_OFFSET UNITYSDK_OFFSET(0x166601D0)
#define CLASS_1_3F51724BA2A18D7F__CTOR_OFFSET UNITYSDK_OFFSET(0x1665E8E0)

inline static constexpr unsigned int Class_1_3F51724BA2A18D7F_TypeDefinitionIndex = 56253;

class Class_1_3F51724BA2A18D7F : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3F51724BA2A18D7F_TypeDefinitionIndex)->GetStaticField(0x36630);
	}
	::RPG::GameCore::GameEntity* Field_1_1; // 0x10
	::System::String* Field_1_2; // 0x18
	::Class_1_422F2D395BEF4FA5* _OwnerMode_k__BackingField; // 0x20
	::Il2CppArray<::System::String*>* Field_1_4; // 0x28
	::Il2CppArray<::System::String*>* Field_1_5; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x38
	::System::Collections::Generic::List_1<::Class_1_04316EB8ECDF7B06*>* Field_1_7; // 0x40
	::System::Int32 _FailInput_k__BackingField; // 0x48
	::System::Int32 Field_1_9; // 0x4C
	::System::Single _RealStartTime_k__BackingField; // 0x50
	::System::Int32 _Index_k__BackingField; // 0x54
	::System::Int32 _PerfectInput_k__BackingField; // 0x58
	::System::Single _RealEndTime_k__BackingField; // 0x5C
	::System::Single _EndTime_k__BackingField; // 0x60
	::System::Single Field_1_15; // 0x64
	::System::Int32 Field_1_16; // 0x68
	::System::Boolean _IsEmpty_k__BackingField; // 0x6C
	::System::Boolean _IgnoreLoop_k__BackingField; // 0x6D
	::System::Int32 _SuccessInput_k__BackingField; // 0x70
	::System::Single Field_1_20; // 0x74
	::System::Single _StartTime_k__BackingField; // 0x78
	::System::UInt32 _InputNoteCount_k__BackingField; // 0x7C
	::System::Boolean _AutoBubble_k__BackingField; // 0x80
	::System::Boolean _TutorialScore_k__BackingField; // 0x81
	::System::Boolean _IsActive_k__BackingField; // 0x82
	::System::Boolean _IsFinish_k__BackingField; // 0x83

	::System::Void _ctor(::Class_1_422F2D395BEF4FA5* a1, ::System::Int32 a2, ::RPG::GameCore::NoteGroupConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_422F2D395BEF4FA5*, ::System::Int32, ::RPG::GameCore::NoteGroupConfig*))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F__CCTOR_OFFSET))();
	}

	::System::Void Method_1_1397E3708A9DBEBA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_METHOD_1_1397E3708A9DBEBA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A9E21AEFB7D4CB48(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_METHOD_1_A9E21AEFB7D4CB48_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4E140453C4B32F06(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_METHOD_1_4E140453C4B32F06_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::Class_1_04316EB8ECDF7B06* Method_1_FAF01E6C61157965(::System::Single a1)
	{
		return ((::Class_1_04316EB8ECDF7B06*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_METHOD_1_FAF01E6C61157965_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FCB7990FCD402039(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_METHOD_1_FCB7990FCD402039_OFFSET))(this, a1);
	}

	::System::Void Method_1_7EACFD3740004695(::RPG::Client::NoteInputResult a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_METHOD_1_7EACFD3740004695_OFFSET))(this, a1);
	}

	::System::Void Method_1_0A7E56A59F184B0A(::RPG::Client::NoteInputResult a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_METHOD_1_0A7E56A59F184B0A_OFFSET))(this, a1);
	}

	::System::Void Method_1_05253A2C50FAEC90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_METHOD_1_05253A2C50FAEC90_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_INDEX_OFFSET))(this, a1);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_ISACTIVE_OFFSET))(this, a1);
	}

	::System::Boolean get_AutoBubble()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_AUTOBUBBLE_OFFSET))(this);
	}

	::System::Void set_AutoBubble(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_AUTOBUBBLE_OFFSET))(this, a1);
	}

	::Class_1_422F2D395BEF4FA5* get_OwnerMode()
	{
		return ((::Class_1_422F2D395BEF4FA5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_OWNERMODE_OFFSET))(this);
	}

	::System::Void set_OwnerMode(::Class_1_422F2D395BEF4FA5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_422F2D395BEF4FA5*))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_OWNERMODE_OFFSET))(this, a1);
	}

	::System::UInt32 get_InputNoteCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_INPUTNOTECOUNT_OFFSET))(this);
	}

	::System::Void set_InputNoteCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_INPUTNOTECOUNT_OFFSET))(this, a1);
	}

	::System::Single get_RealStartTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_REALSTARTTIME_OFFSET))(this);
	}

	::System::Void set_RealStartTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_REALSTARTTIME_OFFSET))(this, a1);
	}

	::System::Single get_RealEndTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_REALENDTIME_OFFSET))(this);
	}

	::System::Void set_RealEndTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_REALENDTIME_OFFSET))(this, a1);
	}

	::System::Single get_StartTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_STARTTIME_OFFSET))(this);
	}

	::System::Void set_StartTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_STARTTIME_OFFSET))(this, a1);
	}

	::System::Single get_EndTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_ENDTIME_OFFSET))(this);
	}

	::System::Void set_EndTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_ENDTIME_OFFSET))(this, a1);
	}

	::System::Boolean get_TutorialScore()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_TUTORIALSCORE_OFFSET))(this);
	}

	::System::Void set_TutorialScore(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_TUTORIALSCORE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsFinish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_ISFINISH_OFFSET))(this);
	}

	::System::Void set_IsFinish(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_ISFINISH_OFFSET))(this, a1);
	}

	::System::Boolean get_IsEmpty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_ISEMPTY_OFFSET))(this);
	}

	::System::Void set_IsEmpty(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_ISEMPTY_OFFSET))(this, a1);
	}

	::System::Boolean get_IgnoreLoop()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_IGNORELOOP_OFFSET))(this);
	}

	::System::Void set_IgnoreLoop(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_IGNORELOOP_OFFSET))(this, a1);
	}

	::System::Int32 get_SuccessInput()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_SUCCESSINPUT_OFFSET))(this);
	}

	::System::Void set_SuccessInput(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_SUCCESSINPUT_OFFSET))(this, a1);
	}

	::System::Int32 get_PerfectInput()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_PERFECTINPUT_OFFSET))(this);
	}

	::System::Void set_PerfectInput(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_PERFECTINPUT_OFFSET))(this, a1);
	}

	::System::Int32 get_FailInput()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_FAILINPUT_OFFSET))(this);
	}

	::System::Void set_FailInput(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_FAILINPUT_OFFSET))(this, a1);
	}
};
