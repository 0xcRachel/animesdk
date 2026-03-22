#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_357;
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_8C1634BC9533433B_CLASS_3_02B2979C95E11EA6_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x89C7880)
#define CLASS_1_8C1634BC9533433B_CLASS_3_02B2979C95E11EA6_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x89C78C0)
#define CLASS_1_8C1634BC9533433B_CLASS_3_02B2979C95E11EA6_INVOKE_OFFSET UNITYSDK_OFFSET(0x89C6B80)
#define CLASS_1_8C1634BC9533433B_CLASS_3_02B2979C95E11EA6__CTOR_OFFSET UNITYSDK_OFFSET(0x89C7860)

inline static constexpr unsigned int Class_1_8C1634BC9533433B_Class_3_02B2979C95E11EA6_TypeDefinitionIndex = 42364;

class Class_1_8C1634BC9533433B_Class_3_02B2979C95E11EA6 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_8C1634BC9533433B_CLASS_3_02B2979C95E11EA6__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_357* Invoke(::RPG::GameCore::AIDecisionUnitConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::Class_0_16E4307DCC419505_357*(*)(::PVOID, ::RPG::GameCore::AIDecisionUnitConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_8C1634BC9533433B_CLASS_3_02B2979C95E11EA6_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::AIDecisionUnitConfig* a1, ::RPG::GameCore::TaskContext* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::AIDecisionUnitConfig*, ::RPG::GameCore::TaskContext*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8C1634BC9533433B_CLASS_3_02B2979C95E11EA6_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_0_16E4307DCC419505_357* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_0_16E4307DCC419505_357*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_8C1634BC9533433B_CLASS_3_02B2979C95E11EA6_ENDINVOKE_OFFSET))(this, a1);
	}
};
