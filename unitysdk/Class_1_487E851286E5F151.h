#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferActionState.h"
#include "unitysdk/System/Object.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class ScrTrfActPerformance; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFrame; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_487E851286E5F151_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2B8FC0)
#define CLASS_1_487E851286E5F151_METHOD_1_132480CA5B9157C1_OFFSET UNITYSDK_OFFSET(0xB2B9DC0)
#define CLASS_1_487E851286E5F151_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xB2B9CA0)
#define CLASS_1_487E851286E5F151_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xB2B94F0)
#define CLASS_1_487E851286E5F151_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB2B9100)
#define CLASS_1_487E851286E5F151_METHOD_1_44950E14D07C51F9_OFFSET UNITYSDK_OFFSET(0xB2B94B0)
#define CLASS_1_487E851286E5F151_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0xB2B9890)
#define CLASS_1_487E851286E5F151_METHOD_1_60451B2DE9D371C9_OFFSET UNITYSDK_OFFSET(0xB2B9200)
#define CLASS_1_487E851286E5F151_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0xB2B9640)
#define CLASS_1_487E851286E5F151_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB2B9180)
#define CLASS_1_487E851286E5F151_METHOD_1_DF9BC33850128E67_OFFSET UNITYSDK_OFFSET(0xB2B9D60)
#define CLASS_1_487E851286E5F151_METHOD_1_F6A580AAC30D7764_OFFSET UNITYSDK_OFFSET(0xB2B9E80)
#define CLASS_1_487E851286E5F151_TICK_OFFSET UNITYSDK_OFFSET(0xB2B92D0)
#define CLASS_1_487E851286E5F151__CTOR_OFFSET UNITYSDK_OFFSET(0xB2B8F50)

inline static constexpr unsigned int Class_1_487E851286E5F151_TypeDefinitionIndex = 42297;

class Class_1_487E851286E5F151 : public ::System::Object
{
public:
	::RPG::GameCore::ScrTrfActPerformance* Field_1_1; // 0x10
	::RPG::GameCore::WaitFrame* Field_1_2; // 0x18
	::RPG::Client::Stage* Field_1_6; // 0x20
	::Class_3_BCCE950C2E8DF1F0* Field_1_4; // 0x28
	::RPG::GameCore::TaskContext* Field_1_0; // 0x30
	::Class_3_BCCE950C2E8DF1F0* Field_1_5; // 0x38
	::RPG::GameCore::ScreenTransferActionState Field_1_3; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ScrTrfActPerformance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ScrTrfActPerformance*))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::ScreenTransferActionState Method_1_44950E14D07C51F9()
	{
		return ((::RPG::GameCore::ScreenTransferActionState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_METHOD_1_44950E14D07C51F9_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Boolean Method_1_DF9BC33850128E67(::RPG::GameCore::TaskConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_METHOD_1_DF9BC33850128E67_OFFSET))(this, a1);
	}

	::System::Void Method_1_132480CA5B9157C1(::RPG::GameCore::TaskConfig* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskConfig*, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_METHOD_1_132480CA5B9157C1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F6A580AAC30D7764(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_METHOD_1_F6A580AAC30D7764_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_1_60451B2DE9D371C9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_METHOD_1_60451B2DE9D371C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
