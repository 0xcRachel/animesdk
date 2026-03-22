#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/PriorityLinkableNodeList_1.h"
#include "unitysdk/Struct_2_BA11F281BD100FCC.h"

class Class_0_16E4307DCC419505_376;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_CECF9D40AA40103E_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x9455FC0)
#define CLASS_2_CECF9D40AA40103E_METHOD_2_E54F64E7B68AFBF4_OFFSET UNITYSDK_OFFSET(0x9456030)
#define CLASS_2_CECF9D40AA40103E_METHOD_2_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0x9455FE0)
#define CLASS_2_CECF9D40AA40103E_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x9455FD0)
#define CLASS_2_CECF9D40AA40103E__CTOR_OFFSET UNITYSDK_OFFSET(0x9456280)

inline static constexpr unsigned int Class_2_CECF9D40AA40103E_TypeDefinitionIndex = 44002;

class Class_2_CECF9D40AA40103E : public ::RPG::PriorityLinkableNodeList_1<::Class_0_16E4307DCC419505_376*>
{
public:
	::RPG::GameCore::GameEntity* _Owner_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CECF9D40AA40103E__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_Owner()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CECF9D40AA40103E_GET_OWNER_OFFSET))(this);
	}

	::System::Void set_Owner(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_CECF9D40AA40103E_SET_OWNER_OFFSET))(this, value);
	}

	::System::Void Method_2_ED65AE7582736594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CECF9D40AA40103E_METHOD_2_ED65AE7582736594_OFFSET))(this);
	}

	::System::Void Method_2_E54F64E7B68AFBF4(::Struct_2_BA11F281BD100FCC& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BA11F281BD100FCC&))((::PBYTE)hIl2Cpp + CLASS_2_CECF9D40AA40103E_METHOD_2_E54F64E7B68AFBF4_OFFSET))(this, a1);
	}
};
