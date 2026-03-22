#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_30467842FAA5266B;
class Class_1_B55037134F9E6688;
namespace RPG::GameCore { class DiceCombatTaskConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_2D69CEA77A9208C3_CLASS_3_C5ADD3911B6F3629_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16015110)
#define CLASS_1_2D69CEA77A9208C3_CLASS_3_C5ADD3911B6F3629_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16015150)
#define CLASS_1_2D69CEA77A9208C3_CLASS_3_C5ADD3911B6F3629_INVOKE_OFFSET UNITYSDK_OFFSET(0x160124E0)
#define CLASS_1_2D69CEA77A9208C3_CLASS_3_C5ADD3911B6F3629__CTOR_OFFSET UNITYSDK_OFFSET(0x160150F0)

inline static constexpr unsigned int Class_1_2D69CEA77A9208C3_Class_3_C5ADD3911B6F3629_TypeDefinitionIndex = 27750;

class Class_1_2D69CEA77A9208C3_Class_3_C5ADD3911B6F3629 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_2D69CEA77A9208C3_CLASS_3_C5ADD3911B6F3629__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_B55037134F9E6688* Invoke(::RPG::GameCore::DiceCombatTaskConfig* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::Class_1_B55037134F9E6688*(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_1_2D69CEA77A9208C3_CLASS_3_C5ADD3911B6F3629_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::DiceCombatTaskConfig* a1, ::Class_1_30467842FAA5266B* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig*, ::Class_1_30467842FAA5266B*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2D69CEA77A9208C3_CLASS_3_C5ADD3911B6F3629_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_B55037134F9E6688* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_1_B55037134F9E6688*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_2D69CEA77A9208C3_CLASS_3_C5ADD3911B6F3629_ENDINVOKE_OFFSET))(this, a1);
	}
};
