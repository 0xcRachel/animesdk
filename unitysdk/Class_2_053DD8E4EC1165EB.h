#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_30467842FAA5266B.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_DAC119B051861C6D;
class Class_2_D5AD64F6FB3109AB;
class Class_4_0FE2F2FA8B5CD496;

#define CLASS_2_053DD8E4EC1165EB_METHOD_2_69607B7E4783C654_OFFSET UNITYSDK_OFFSET(0x15F17AA0)
#define CLASS_2_053DD8E4EC1165EB_METHOD_2_A1B5B0D511DA86EF_OFFSET UNITYSDK_OFFSET(0x15F17CA0)
#define CLASS_2_053DD8E4EC1165EB_METHOD_2_B44C4174ABC0F9C7_OFFSET UNITYSDK_OFFSET(0x15EF9240)
#define CLASS_2_053DD8E4EC1165EB_METHOD_2_DA6A1548F4C34DC3_OFFSET UNITYSDK_OFFSET(0x15F17B00)
#define CLASS_2_053DD8E4EC1165EB__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F17BE0)
#define CLASS_2_053DD8E4EC1165EB__CTOR_OFFSET UNITYSDK_OFFSET(0x15F179F0)

inline static constexpr unsigned int Class_2_053DD8E4EC1165EB_TypeDefinitionIndex = 27654;

class Class_2_053DD8E4EC1165EB : public ::Class_1_30467842FAA5266B
{
public:
	static ::RPG::GameCore::StringHash* StaticGet_Field_2_0()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_2_053DD8E4EC1165EB_TypeDefinitionIndex)->GetStaticField(0xA570);
	}
	::Class_4_0FE2F2FA8B5CD496* Field_2_1; // 0x30
	::Class_1_DAC119B051861C6D* Field_2_2; // 0x38

	::System::Void _ctor(::Class_4_0FE2F2FA8B5CD496* a1, ::Class_2_D5AD64F6FB3109AB* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_0FE2F2FA8B5CD496*, ::Class_2_D5AD64F6FB3109AB*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_2_053DD8E4EC1165EB__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_053DD8E4EC1165EB__CCTOR_OFFSET))();
	}

	::Class_2_D5AD64F6FB3109AB* Method_2_B44C4174ABC0F9C7(::RPG::GameCore::DiceCombatTarget a1)
	{
		return ((::Class_2_D5AD64F6FB3109AB*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + CLASS_2_053DD8E4EC1165EB_METHOD_2_B44C4174ABC0F9C7_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_69607B7E4783C654()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_053DD8E4EC1165EB_METHOD_2_69607B7E4783C654_OFFSET))(this);
	}

	::System::Boolean Method_2_DA6A1548F4C34DC3(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_2_053DD8E4EC1165EB_METHOD_2_DA6A1548F4C34DC3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A1B5B0D511DA86EF(::RPG::GameCore::StringHash P0, ::RPG::GameCore::FixPoint& P1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_2_053DD8E4EC1165EB_METHOD_2_A1B5B0D511DA86EF_OFFSET))(this, P0, P1);
	}
};
