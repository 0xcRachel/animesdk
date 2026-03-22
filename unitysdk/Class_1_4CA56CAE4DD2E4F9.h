#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferActionState.h"
#include "unitysdk/System/Object.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class ScrTrfActPerformanceGroup; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFrame; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4CA56CAE4DD2E4F9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x89F37A0)
#define CLASS_1_4CA56CAE4DD2E4F9_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x89F3CE0)
#define CLASS_1_4CA56CAE4DD2E4F9_METHOD_1_132480CA5B9157C1_OFFSET UNITYSDK_OFFSET(0x89F44C0)
#define CLASS_1_4CA56CAE4DD2E4F9_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x89F43A0)
#define CLASS_1_4CA56CAE4DD2E4F9_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x89F38E0)
#define CLASS_1_4CA56CAE4DD2E4F9_METHOD_1_44950E14D07C51F9_OFFSET UNITYSDK_OFFSET(0x89F3CA0)
#define CLASS_1_4CA56CAE4DD2E4F9_METHOD_1_6345BF557E4E4E6A_OFFSET UNITYSDK_OFFSET(0x89F39E0)
#define CLASS_1_4CA56CAE4DD2E4F9_METHOD_1_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x89F4030)
#define CLASS_1_4CA56CAE4DD2E4F9_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x89F3DE0)
#define CLASS_1_4CA56CAE4DD2E4F9_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x89F3960)
#define CLASS_1_4CA56CAE4DD2E4F9_METHOD_1_DF9BC33850128E67_OFFSET UNITYSDK_OFFSET(0x89F4460)
#define CLASS_1_4CA56CAE4DD2E4F9_METHOD_1_F6A580AAC30D7764_OFFSET UNITYSDK_OFFSET(0x89F4580)
#define CLASS_1_4CA56CAE4DD2E4F9_TICK_OFFSET UNITYSDK_OFFSET(0x89F3AC0)
#define CLASS_1_4CA56CAE4DD2E4F9__CTOR_OFFSET UNITYSDK_OFFSET(0x89F3730)

inline static constexpr unsigned int Class_1_4CA56CAE4DD2E4F9_TypeDefinitionIndex = 42296;

class Class_1_4CA56CAE4DD2E4F9 : public ::System::Object
{
public:
	::RPG::GameCore::ScrTrfActPerformanceGroup* Field_1_1; // 0x10
	::RPG::GameCore::WaitFrame* Field_1_2; // 0x18
	::Class_3_BCCE950C2E8DF1F0* Field_1_4; // 0x20
	::Class_3_BCCE950C2E8DF1F0* Field_1_5; // 0x28
	::RPG::GameCore::TaskContext* Field_1_0; // 0x30
	::RPG::GameCore::ScreenTransferActionState Field_1_3; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ScrTrfActPerformanceGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ScrTrfActPerformanceGroup*))((::PBYTE)hIl2Cpp + CLASS_1_4CA56CAE4DD2E4F9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CA56CAE4DD2E4F9_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CA56CAE4DD2E4F9_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4CA56CAE4DD2E4F9_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::ScreenTransferActionState Method_1_44950E14D07C51F9()
	{
		return ((::RPG::GameCore::ScreenTransferActionState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CA56CAE4DD2E4F9_METHOD_1_44950E14D07C51F9_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CA56CAE4DD2E4F9_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CA56CAE4DD2E4F9_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Boolean Method_1_DF9BC33850128E67(::RPG::GameCore::TaskConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4CA56CAE4DD2E4F9_METHOD_1_DF9BC33850128E67_OFFSET))(this, a1);
	}

	::System::Void Method_1_132480CA5B9157C1(::RPG::GameCore::TaskConfig* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskConfig*, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_4CA56CAE4DD2E4F9_METHOD_1_132480CA5B9157C1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F6A580AAC30D7764(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_4CA56CAE4DD2E4F9_METHOD_1_F6A580AAC30D7764_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CA56CAE4DD2E4F9_METHOD_1_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_1_6345BF557E4E4E6A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CA56CAE4DD2E4F9_METHOD_1_6345BF557E4E4E6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CA56CAE4DD2E4F9_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CA56CAE4DD2E4F9_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
