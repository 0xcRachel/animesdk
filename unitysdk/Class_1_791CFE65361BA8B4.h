#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LongPressEvent; }
namespace System { class Action; }
namespace System { class Type; }
namespace UnityEngine { class Transform; }

#define CLASS_1_791CFE65361BA8B4_METHOD_1_2327D2C6A5741E2E_OFFSET UNITYSDK_OFFSET(0x872CB20)
#define CLASS_1_791CFE65361BA8B4_METHOD_1_333F9AA1BB071187_OFFSET UNITYSDK_OFFSET(0x872C550)
#define CLASS_1_791CFE65361BA8B4_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x872C950)
#define CLASS_1_791CFE65361BA8B4_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x872C8C0)
#define CLASS_1_791CFE65361BA8B4_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET UNITYSDK_OFFSET(0x872CAC0)
#define CLASS_1_791CFE65361BA8B4__CTOR_OFFSET UNITYSDK_OFFSET(0x872C850)

inline static constexpr unsigned int Class_1_791CFE65361BA8B4_TypeDefinitionIndex = 54147;

class Class_1_791CFE65361BA8B4 : public ::System::Object
{
public:
	::System::Type* Field_1_3; // 0x10
	::System::Type* Field_1_2; // 0x18
	::System::Action* Field_1_1; // 0x20
	::RPG::Client::LongPressEvent* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_791CFE65361BA8B4__CTOR_OFFSET))(this);
	}

	static ::Class_1_791CFE65361BA8B4* Method_1_333F9AA1BB071187(::UnityEngine::Transform* a1, ::System::Action* a2)
	{
		return ((::Class_1_791CFE65361BA8B4*(*)(::UnityEngine::Transform*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_791CFE65361BA8B4_METHOD_1_333F9AA1BB071187_OFFSET))(a1, a2);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_791CFE65361BA8B4_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_791CFE65361BA8B4_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean UnityEngine_EventSystems_IExecuteEventBlocker_IsEventBlock(::System::Type* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_791CFE65361BA8B4_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_1_2327D2C6A5741E2E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_791CFE65361BA8B4_METHOD_1_2327D2C6A5741E2E_OFFSET))(this);
	}
};
