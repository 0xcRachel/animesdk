#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_4_2519D80EDC986A74;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_E9B4A16C3CC1D841_2_METHOD_3_34928CCE7A86FADF_OFFSET UNITYSDK_OFFSET(0xA6E3260)
#define CLASS_3_E9B4A16C3CC1D841_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA6E2FB0)
#define CLASS_3_E9B4A16C3CC1D841_2__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA6E3140)
#define CLASS_3_E9B4A16C3CC1D841_2__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA6E31D0)
#define CLASS_3_E9B4A16C3CC1D841_2___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA6E3410)
#define CLASS_3_E9B4A16C3CC1D841_2___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA6E3420)

inline static constexpr unsigned int Class_3_E9B4A16C3CC1D841_2_TypeDefinitionIndex = 42271;

class Class_3_E9B4A16C3CC1D841_2 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_4_2519D80EDC986A74*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_2519D80EDC986A74* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_2519D80EDC986A74*))((::PBYTE)hIl2Cpp + CLASS_3_E9B4A16C3CC1D841_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9B4A16C3CC1D841_2__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9B4A16C3CC1D841_2__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_34928CCE7A86FADF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_E9B4A16C3CC1D841_2_METHOD_3_34928CCE7A86FADF_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9B4A16C3CC1D841_2___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9B4A16C3CC1D841_2___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
