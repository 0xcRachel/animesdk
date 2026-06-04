#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define CLASS_1_CCE502355C885F78_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD873110)
#define CLASS_1_CCE502355C885F78_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0xD873170)
#define CLASS_1_CCE502355C885F78_METHOD_1_2C8484BE9A26CCD5_OFFSET UNITYSDK_OFFSET(0xD873050)
#define CLASS_1_CCE502355C885F78_METHOD_1_BA4B705DA571C85D_OFFSET UNITYSDK_OFFSET(0xD872DC0)
#define CLASS_1_CCE502355C885F78_METHOD_1_F80D9C315EB56AA0_OFFSET UNITYSDK_OFFSET(0xD872FE0)
#define CLASS_1_CCE502355C885F78__CTOR_OFFSET UNITYSDK_OFFSET(0xD872C80)

inline static constexpr unsigned int Class_1_CCE502355C885F78_TypeDefinitionIndex = 70332;

class Class_1_CCE502355C885F78 : public ::System::Object
{
public:
	::RPG::Client::ActivityIdleLive::IdleLiveNode* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x24
	::System::Int32 Field_1_4; // 0x28

	::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_CCE502355C885F78__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA4B705DA571C85D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CCE502355C885F78_METHOD_1_BA4B705DA571C85D_OFFSET))(this, a1);
	}

	::System::Void Method_1_F80D9C315EB56AA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCE502355C885F78_METHOD_1_F80D9C315EB56AA0_OFFSET))(this);
	}

	::System::Void Method_1_2C8484BE9A26CCD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCE502355C885F78_METHOD_1_2C8484BE9A26CCD5_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCE502355C885F78_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CCE502355C885F78_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}
};
