#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C6D9D1EB9605788A;
class Class_2_053DD8E4EC1165EB;
namespace RPG::GameCore { class DiceCombatInsertAbilityConfig; }
namespace RPG::GameCore { class DiceCombatModifierConfig; }
namespace RPG::GameCore { class DiceCombatSkillConfig; }
namespace System { class String; }

#define CLASS_1_6B3E5A43A1B45F83_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x15FF9DF0)
#define CLASS_1_6B3E5A43A1B45F83_METHOD_1_203B4F56870F86E4_OFFSET UNITYSDK_OFFSET(0x15FF9F00)
#define CLASS_1_6B3E5A43A1B45F83_METHOD_1_571EF0D173D444DE_OFFSET UNITYSDK_OFFSET(0x15FF9E60)
#define CLASS_1_6B3E5A43A1B45F83_METHOD_1_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0x15FF9D30)
#define CLASS_1_6B3E5A43A1B45F83_METHOD_1_CEE772DE95055C01_OFFSET UNITYSDK_OFFSET(0x15FF9D80)
#define CLASS_1_6B3E5A43A1B45F83_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x15FF9CE0)
#define CLASS_1_6B3E5A43A1B45F83__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF9C80)

inline static constexpr unsigned int Class_1_6B3E5A43A1B45F83_TypeDefinitionIndex = 27810;

class Class_1_6B3E5A43A1B45F83 : public ::System::Object
{
public:
	::Class_2_053DD8E4EC1165EB* Field_1_2; // 0x10
	::RPG::GameCore::DiceCombatSkillConfig* Field_1_0; // 0x18
	::Class_1_C6D9D1EB9605788A* Field_1_1; // 0x20

	::System::Void _ctor(::Class_2_053DD8E4EC1165EB* a1, ::RPG::GameCore::DiceCombatSkillConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_053DD8E4EC1165EB*, ::RPG::GameCore::DiceCombatSkillConfig*))((::PBYTE)hIl2Cpp + CLASS_1_6B3E5A43A1B45F83__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B3E5A43A1B45F83_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_1_B732DC7FA82BA621()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B3E5A43A1B45F83_METHOD_1_B732DC7FA82BA621_OFFSET))(this);
	}

	::System::Void Method_1_CEE772DE95055C01(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6B3E5A43A1B45F83_METHOD_1_CEE772DE95055C01_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B3E5A43A1B45F83_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::RPG::GameCore::DiceCombatModifierConfig* Method_1_571EF0D173D444DE(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::DiceCombatModifierConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6B3E5A43A1B45F83_METHOD_1_571EF0D173D444DE_OFFSET))(this, a1);
	}

	::RPG::GameCore::DiceCombatInsertAbilityConfig* Method_1_203B4F56870F86E4(::System::String* a1)
	{
		return ((::RPG::GameCore::DiceCombatInsertAbilityConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6B3E5A43A1B45F83_METHOD_1_203B4F56870F86E4_OFFSET))(this, a1);
	}
};
