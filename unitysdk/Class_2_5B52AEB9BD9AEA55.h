#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_B7F2227F5894FFC0;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerWalkingEffect; }

#define CLASS_2_5B52AEB9BD9AEA55_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1749D0)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_096C7F7C8EC87129_OFFSET UNITYSDK_OFFSET(0xA1755E0)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_3E90A56C35C519D8_OFFSET UNITYSDK_OFFSET(0xA1759F0)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0xA175590)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0xA175510)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_9295F9F3714B3092_OFFSET UNITYSDK_OFFSET(0xA1756E0)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0xA174B00)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_9F59C088ACADFAC2_OFFSET UNITYSDK_OFFSET(0xA174A20)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_E727F9956B5BD78B_OFFSET UNITYSDK_OFFSET(0xA1754C0)
#define CLASS_2_5B52AEB9BD9AEA55_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA174890)
#define CLASS_2_5B52AEB9BD9AEA55_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA174920)
#define CLASS_2_5B52AEB9BD9AEA55_TICK_OFFSET UNITYSDK_OFFSET(0xA174970)
#define CLASS_2_5B52AEB9BD9AEA55__CTOR_OFFSET UNITYSDK_OFFSET(0xA174880)

inline static constexpr unsigned int Class_2_5B52AEB9BD9AEA55_TypeDefinitionIndex = 44353;

class Class_2_5B52AEB9BD9AEA55 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_2_B7F2227F5894FFC0* Field_2_0; // 0x18
	::RPG::GameCore::TriggerWalkingEffect* Field_2_3; // 0x20
	::RPG::GameCore::TaskContext* Field_2_4; // 0x28
	::UnityEngine::Vector3 Field_2_1; // 0x30
	::UnityEngine::Quaternion Field_2_2; // 0x3C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerWalkingEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerWalkingEffect*))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_9F59C088ACADFAC2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_9F59C088ACADFAC2_OFFSET))(this);
	}

	::System::Void Method_2_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_960032BA2E22793D_OFFSET))(this);
	}

	::System::Void Method_2_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_626C719A884DEF9A_OFFSET))(this, a1);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_2_096C7F7C8EC87129()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_096C7F7C8EC87129_OFFSET))(this);
	}

	::System::Void Method_2_E727F9956B5BD78B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_E727F9956B5BD78B_OFFSET))(this);
	}

	::System::Void Method_2_9295F9F3714B3092(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_9295F9F3714B3092_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E90A56C35C519D8(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_3E90A56C35C519D8_OFFSET))(this, a1, a2);
	}
};
