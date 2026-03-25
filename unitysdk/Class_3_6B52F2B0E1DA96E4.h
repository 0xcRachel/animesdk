#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class ChessTriggerAbility; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6B52F2B0E1DA96E4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8906870)
#define CLASS_3_6B52F2B0E1DA96E4_METHOD_3_63892B72A32C0403_OFFSET UNITYSDK_OFFSET(0x89064B0)
#define CLASS_3_6B52F2B0E1DA96E4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8905EC0)
#define CLASS_3_6B52F2B0E1DA96E4__CTOR_OFFSET UNITYSDK_OFFSET(0x8905E00)
#define CLASS_3_6B52F2B0E1DA96E4___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x89068E0)

inline static constexpr unsigned int Class_3_6B52F2B0E1DA96E4_TypeDefinitionIndex = 45206;

class Class_3_6B52F2B0E1DA96E4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChessTriggerAbility*>
{
public:
	::Class_1_5F51D4049EA87B7B* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChessTriggerAbility* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChessTriggerAbility*))((::PBYTE)hIl2Cpp + CLASS_3_6B52F2B0E1DA96E4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B52F2B0E1DA96E4_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntityList* Method_3_63892B72A32C0403()
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B52F2B0E1DA96E4_METHOD_3_63892B72A32C0403_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B52F2B0E1DA96E4_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B52F2B0E1DA96E4___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
