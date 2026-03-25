#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ReceiveDynamicSkillTargetSelection; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D4047E33CEA853CF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x111869D0)
#define CLASS_3_D4047E33CEA853CF_METHOD_3_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0x11186DF0)
#define CLASS_3_D4047E33CEA853CF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11186A70)
#define CLASS_3_D4047E33CEA853CF_TICK_OFFSET UNITYSDK_OFFSET(0x11186E80)
#define CLASS_3_D4047E33CEA853CF__CTOR_OFFSET UNITYSDK_OFFSET(0x111868C0)
#define CLASS_3_D4047E33CEA853CF___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11187160)
#define CLASS_3_D4047E33CEA853CF___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x11187200)

inline static constexpr unsigned int Class_3_D4047E33CEA853CF_TypeDefinitionIndex = 44251;

class Class_3_D4047E33CEA853CF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ReceiveDynamicSkillTargetSelection*>
{
public:
	::Class_3_5775A4FEC79026BC* Field_3_1; // 0x28
	::RPG::GameCore::GameEntity* Field_3_3; // 0x30
	::Class_3_5775A4FEC79026BC* Field_3_0; // 0x38
	::Class_3_5775A4FEC79026BC* Field_3_2; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReceiveDynamicSkillTargetSelection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReceiveDynamicSkillTargetSelection*))((::PBYTE)hIl2Cpp + CLASS_3_D4047E33CEA853CF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D4047E33CEA853CF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D4047E33CEA853CF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D4047E33CEA853CF_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_3C56C1AF247AC1EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D4047E33CEA853CF_METHOD_3_3C56C1AF247AC1EC_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D4047E33CEA853CF___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D4047E33CEA853CF___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
