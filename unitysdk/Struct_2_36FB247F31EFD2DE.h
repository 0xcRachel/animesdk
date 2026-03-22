#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class TriggerEffectParams; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_36FB247F31EFD2DE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x14584F0)
#define STRUCT_2_36FB247F31EFD2DE_EQUALS_OFFSET UNITYSDK_OFFSET(0x14584E0)
#define STRUCT_2_36FB247F31EFD2DE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1458430)
#define STRUCT_2_36FB247F31EFD2DE_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x14583A0)
#define STRUCT_2_36FB247F31EFD2DE_METHOD_2_7FC905D4198EB592_OFFSET UNITYSDK_OFFSET(0x1458340)
#define STRUCT_2_36FB247F31EFD2DE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1031FD80)
#define STRUCT_2_36FB247F31EFD2DE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1031FCC0)
#define STRUCT_2_36FB247F31EFD2DE_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x1458410)
#define STRUCT_2_36FB247F31EFD2DE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1458400)
#define STRUCT_2_36FB247F31EFD2DE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1458310)
#define STRUCT_2_36FB247F31EFD2DE__CTOR_OFFSET UNITYSDK_OFFSET(0x2BE10)

inline static constexpr unsigned int Struct_2_36FB247F31EFD2DE_TypeDefinitionIndex = 55633;

struct alignas(8) Struct_2_36FB247F31EFD2DE
{
	::System::UInt32 Field_2_0; // 0x10
	::RPG::Client::TriggerEffectParams* Field_2_1; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::TriggerEffectParams* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + STRUCT_2_36FB247F31EFD2DE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::RPG::Client::TriggerEffectParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + STRUCT_2_36FB247F31EFD2DE__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7FC905D4198EB592(::RPG::Client::TriggerEffectParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + STRUCT_2_36FB247F31EFD2DE_METHOD_2_7FC905D4198EB592_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_36FB247F31EFD2DE_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_36FB247F31EFD2DE_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* builder)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_36FB247F31EFD2DE_PRINTMEMBERS_OFFSET))(this, builder);
	}

	static ::System::Boolean op_Inequality(::Struct_2_36FB247F31EFD2DE left, ::Struct_2_36FB247F31EFD2DE right)
	{
		return ((::System::Boolean(*)(::Struct_2_36FB247F31EFD2DE, ::Struct_2_36FB247F31EFD2DE))((::PBYTE)hIl2Cpp + STRUCT_2_36FB247F31EFD2DE_OP_INEQUALITY_OFFSET))(left, right);
	}

	static ::System::Boolean op_Equality(::Struct_2_36FB247F31EFD2DE left, ::Struct_2_36FB247F31EFD2DE right)
	{
		return ((::System::Boolean(*)(::Struct_2_36FB247F31EFD2DE, ::Struct_2_36FB247F31EFD2DE))((::PBYTE)hIl2Cpp + STRUCT_2_36FB247F31EFD2DE_OP_EQUALITY_OFFSET))(left, right);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_36FB247F31EFD2DE_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* obj)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_36FB247F31EFD2DE_EQUALS_OFFSET))(this, obj);
	}

	::System::Boolean Equals_1(::Struct_2_36FB247F31EFD2DE other)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_36FB247F31EFD2DE))((::PBYTE)hIl2Cpp + STRUCT_2_36FB247F31EFD2DE_EQUALS_1_OFFSET))(this, other);
	}
};
