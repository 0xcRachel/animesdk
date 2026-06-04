#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"
#include "unitysdk/RPG/GameCore/TaskState.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class SO_Sequence; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B4C4D9BD149CFAE9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15019C20)
#define CLASS_3_B4C4D9BD149CFAE9_METHOD_3_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x1501A950)
#define CLASS_3_B4C4D9BD149CFAE9_METHOD_3_48A85C2067A778AB_OFFSET UNITYSDK_OFFSET(0x1501B010)
#define CLASS_3_B4C4D9BD149CFAE9_METHOD_3_508D4DD02D3DB74E_1_OFFSET UNITYSDK_OFFSET(0x1501ADD0)
#define CLASS_3_B4C4D9BD149CFAE9_METHOD_3_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x1501A820)
#define CLASS_3_B4C4D9BD149CFAE9_METHOD_3_5AEF0DB62DAB6D4C_OFFSET UNITYSDK_OFFSET(0x15019FA0)
#define CLASS_3_B4C4D9BD149CFAE9_METHOD_3_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x15019D70)
#define CLASS_3_B4C4D9BD149CFAE9_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1501B060)
#define CLASS_3_B4C4D9BD149CFAE9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15019DF0)
#define CLASS_3_B4C4D9BD149CFAE9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1501AA90)
#define CLASS_3_B4C4D9BD149CFAE9_TICK_OFFSET UNITYSDK_OFFSET(0x1501AF00)
#define CLASS_3_B4C4D9BD149CFAE9__CTOR_OFFSET UNITYSDK_OFFSET(0x15019860)
#define CLASS_3_B4C4D9BD149CFAE9___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1501B070)
#define CLASS_3_B4C4D9BD149CFAE9___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x1501B080)

inline static constexpr unsigned int Class_3_B4C4D9BD149CFAE9_TypeDefinitionIndex = 48738;

class Class_3_B4C4D9BD149CFAE9 : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_Sequence*>
{
public:
	::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* Field_3_0; // 0x40
	::System::Int32 Field_3_1; // 0x48
	::System::Boolean Field_3_2; // 0x4C
	::System::Boolean Field_3_3; // 0x4D
	::System::Boolean Field_3_4; // 0x4E

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_Sequence* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_Sequence*))((::PBYTE)hIl2Cpp + CLASS_3_B4C4D9BD149CFAE9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4C4D9BD149CFAE9_DISPOSE_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* Method_3_AECF8BEC293ED42A()
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4C4D9BD149CFAE9_METHOD_3_AECF8BEC293ED42A_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4C4D9BD149CFAE9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4C4D9BD149CFAE9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B4C4D9BD149CFAE9_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskState Method_3_5AEF0DB62DAB6D4C(::System::Single a1)
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B4C4D9BD149CFAE9_METHOD_3_5AEF0DB62DAB6D4C_OFFSET))(this, a1);
	}

	::System::Void Method_3_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4C4D9BD149CFAE9_METHOD_3_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_3_508D4DD02D3DB74E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4C4D9BD149CFAE9_METHOD_3_508D4DD02D3DB74E_1_OFFSET))(this);
	}

	::System::Void Method_3_48A85C2067A778AB(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_B4C4D9BD149CFAE9_METHOD_3_48A85C2067A778AB_OFFSET))(this, a1);
	}

	::System::Void Method_3_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4C4D9BD149CFAE9_METHOD_3_0D372435D9CAE4BC_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4C4D9BD149CFAE9_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4C4D9BD149CFAE9___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B4C4D9BD149CFAE9___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
