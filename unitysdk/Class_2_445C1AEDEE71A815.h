#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/PriorityLinkableNodeList_1.h"
#include "unitysdk/Struct_2_BA11F281BD100FCC.h"

class Class_0_16E4307DCC419505_375;

#define CLASS_2_445C1AEDEE71A815_EXECUTE_OFFSET UNITYSDK_OFFSET(0x10FB69E0)
#define CLASS_2_445C1AEDEE71A815_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x10FB6940)
#define CLASS_2_445C1AEDEE71A815_GET_PREV_OFFSET UNITYSDK_OFFSET(0x10FB6920)
#define CLASS_2_445C1AEDEE71A815_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x10FB6960)
#define CLASS_2_445C1AEDEE71A815_METHOD_2_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x10FB6980)
#define CLASS_2_445C1AEDEE71A815_SET_NEXT_OFFSET UNITYSDK_OFFSET(0x10FB6950)
#define CLASS_2_445C1AEDEE71A815_SET_PREV_OFFSET UNITYSDK_OFFSET(0x10FB6930)
#define CLASS_2_445C1AEDEE71A815_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x10FB6970)
#define CLASS_2_445C1AEDEE71A815__CTOR_OFFSET UNITYSDK_OFFSET(0x10FB6C00)

inline static constexpr unsigned int Class_2_445C1AEDEE71A815_TypeDefinitionIndex = 44000;

class Class_2_445C1AEDEE71A815 : public ::RPG::PriorityLinkableNodeList_1<::Class_0_16E4307DCC419505_375*>
{
public:
	::Class_0_16E4307DCC419505_375* _Prev_k__BackingField; // 0x28
	::Class_0_16E4307DCC419505_375* _Next_k__BackingField; // 0x30
	::System::Int32 _Priority_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_445C1AEDEE71A815__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_375* get_Prev()
	{
		return ((::Class_0_16E4307DCC419505_375*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_445C1AEDEE71A815_GET_PREV_OFFSET))(this);
	}

	::System::Void set_Prev(::Class_0_16E4307DCC419505_375* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_445C1AEDEE71A815_SET_PREV_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_375* get_Next()
	{
		return ((::Class_0_16E4307DCC419505_375*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_445C1AEDEE71A815_GET_NEXT_OFFSET))(this);
	}

	::System::Void set_Next(::Class_0_16E4307DCC419505_375* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_445C1AEDEE71A815_SET_NEXT_OFFSET))(this, value);
	}

	::System::Int32 get_Priority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_445C1AEDEE71A815_GET_PRIORITY_OFFSET))(this);
	}

	::System::Void set_Priority(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_445C1AEDEE71A815_SET_PRIORITY_OFFSET))(this, value);
	}

	::System::Void Method_2_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_445C1AEDEE71A815_METHOD_2_8B848E52913DFCE9_OFFSET))(this);
	}

	::System::Void Execute(::Struct_2_BA11F281BD100FCC& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BA11F281BD100FCC&))((::PBYTE)hIl2Cpp + CLASS_2_445C1AEDEE71A815_EXECUTE_OFFSET))(this, a1);
	}
};
