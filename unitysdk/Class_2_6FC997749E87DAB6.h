#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_D3027B1CDFF61281.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFloorSavedValueChange; }
namespace System { class String; }

#define CLASS_2_6FC997749E87DAB6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x132DA7C0)
#define CLASS_2_6FC997749E87DAB6_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x132DABD0)
#define CLASS_2_6FC997749E87DAB6_METHOD_2_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x132DAA50)
#define CLASS_2_6FC997749E87DAB6_METHOD_2_FA383E53DEC53851_OFFSET UNITYSDK_OFFSET(0x132DAD50)
#define CLASS_2_6FC997749E87DAB6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x132DAA00)
#define CLASS_2_6FC997749E87DAB6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x132DA8D0)
#define CLASS_2_6FC997749E87DAB6_TICK_OFFSET UNITYSDK_OFFSET(0x132DA930)
#define CLASS_2_6FC997749E87DAB6__CTOR_OFFSET UNITYSDK_OFFSET(0x132DA5F0)

inline static constexpr unsigned int Class_2_6FC997749E87DAB6_TypeDefinitionIndex = 49965;

class Class_2_6FC997749E87DAB6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitFloorSavedValueChange* Field_2_0; // 0x18
	::Struct_2_D3027B1CDFF61281 Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x50
	::Class_1_5F51D4049EA87B7B* Field_2_3; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFloorSavedValueChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFloorSavedValueChange*))((::PBYTE)hIl2Cpp + CLASS_2_6FC997749E87DAB6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FC997749E87DAB6_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6FC997749E87DAB6_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FC997749E87DAB6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FC997749E87DAB6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_FA383E53DEC53851(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6FC997749E87DAB6_METHOD_2_FA383E53DEC53851_OFFSET))(this, a1);
	}

	::System::Void Method_2_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FC997749E87DAB6_METHOD_2_2CBE0B79DD36047E_OFFSET))(this);
	}

	::System::Void Method_2_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FC997749E87DAB6_METHOD_2_092CD57850778EFC_OFFSET))(this);
	}
};
