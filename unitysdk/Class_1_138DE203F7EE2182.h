#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ItemRow; }
namespace RPG::GameCore { class RelicSetConfigRow; }
namespace System { class String; }

#define CLASS_1_138DE203F7EE2182_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x9E939E0)
#define CLASS_1_138DE203F7EE2182_METHOD_1_CBBB30978BA34B92_OFFSET UNITYSDK_OFFSET(0x9E93A20)
#define CLASS_1_138DE203F7EE2182_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x9E93A00)
#define CLASS_1_138DE203F7EE2182__CTOR_OFFSET UNITYSDK_OFFSET(0x9E93B10)

inline static constexpr unsigned int Class_1_138DE203F7EE2182_TypeDefinitionIndex = 59425;

class Class_1_138DE203F7EE2182 : public ::System::Object
{
public:
	::RPG::GameCore::RelicSetConfigRow* Field_1_0; // 0x10
	::RPG::GameCore::ItemRow* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::RelicSetConfigRow* a1, ::RPG::GameCore::ItemRow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RelicSetConfigRow*, ::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + CLASS_1_138DE203F7EE2182__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_138DE203F7EE2182_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_138DE203F7EE2182_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	static ::Class_1_138DE203F7EE2182* Method_1_CBBB30978BA34B92(::System::UInt32 a1)
	{
		return ((::Class_1_138DE203F7EE2182*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_138DE203F7EE2182_METHOD_1_CBBB30978BA34B92_OFFSET))(a1);
	}
};
