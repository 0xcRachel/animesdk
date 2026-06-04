#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_18F108BF403786B6_Class_1_317CDD276CB8C912;
namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_18F108BF403786B6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C3D6F0)
#define CLASS_1_18F108BF403786B6_METHOD_1_3C111959D3BB5616_OFFSET UNITYSDK_OFFSET(0x13C3E520)
#define CLASS_1_18F108BF403786B6_METHOD_1_56FB8E42255FAC9B_OFFSET UNITYSDK_OFFSET(0x13C3E3C0)
#define CLASS_1_18F108BF403786B6_METHOD_1_76BE3743B42F1B89_OFFSET UNITYSDK_OFFSET(0x13C3DD10)
#define CLASS_1_18F108BF403786B6_METHOD_1_8EA3DD3D2884C0BF_OFFSET UNITYSDK_OFFSET(0x13C3E800)
#define CLASS_1_18F108BF403786B6_METHOD_1_930073A6194C4594_OFFSET UNITYSDK_OFFSET(0x13C3D740)
#define CLASS_1_18F108BF403786B6_METHOD_1_9AB045C54EC604F2_OFFSET UNITYSDK_OFFSET(0x13C3DD80)
#define CLASS_1_18F108BF403786B6_METHOD_1_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x13C3D860)
#define CLASS_1_18F108BF403786B6_METHOD_1_E50D6FA513150889_OFFSET UNITYSDK_OFFSET(0x13C3D8D0)
#define CLASS_1_18F108BF403786B6_METHOD_1_FEDE09C198114DBE_OFFSET UNITYSDK_OFFSET(0x13C3E880)
#define CLASS_1_18F108BF403786B6__CTOR_OFFSET UNITYSDK_OFFSET(0x13C3D6B0)

inline static constexpr unsigned int Class_1_18F108BF403786B6_TypeDefinitionIndex = 53116;

class Class_1_18F108BF403786B6 : public ::System::Object
{
public:
	::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_1_0; // 0x10
	::RPG::GameCore::AvatarDataComponent* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_18F108BF403786B6_Class_1_317CDD276CB8C912*>* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28

	::System::Void _ctor(::RPG::GameCore::AvatarDataComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarDataComponent*))((::PBYTE)hIl2Cpp + CLASS_1_18F108BF403786B6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18F108BF403786B6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_18F108BF403786B6_METHOD_1_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_1_76BE3743B42F1B89(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_18F108BF403786B6_METHOD_1_76BE3743B42F1B89_OFFSET))(this, a1);
	}

	::System::Void Method_1_3C111959D3BB5616(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_18F108BF403786B6_METHOD_1_3C111959D3BB5616_OFFSET))(this, a1);
	}

	::System::Void Method_1_9AB045C54EC604F2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_18F108BF403786B6_METHOD_1_9AB045C54EC604F2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8EA3DD3D2884C0BF(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_18F108BF403786B6_METHOD_1_8EA3DD3D2884C0BF_OFFSET))(this, a1);
	}

	::System::Void Method_1_E50D6FA513150889(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_18F108BF403786B6_METHOD_1_E50D6FA513150889_OFFSET))(this, a1);
	}

	::System::Void Method_1_56FB8E42255FAC9B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_18F108BF403786B6_METHOD_1_56FB8E42255FAC9B_OFFSET))(this, a1);
	}

	::System::Void Method_1_930073A6194C4594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18F108BF403786B6_METHOD_1_930073A6194C4594_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_FEDE09C198114DBE()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18F108BF403786B6_METHOD_1_FEDE09C198114DBE_OFFSET))(this);
	}
};
