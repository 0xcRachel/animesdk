#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByWeaknessMatch; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6208E9A7910343DC_COMPARE_OFFSET UNITYSDK_OFFSET(0x10DED650)
#define CLASS_2_6208E9A7910343DC_METHOD_2_8F361DCD8AD5FC61_OFFSET UNITYSDK_OFFSET(0x10DED270)
#define CLASS_2_6208E9A7910343DC_METHOD_2_D0A3AC3D851E8C42_OFFSET UNITYSDK_OFFSET(0x10DED700)
#define CLASS_2_6208E9A7910343DC_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x10DED0A0)
#define CLASS_2_6208E9A7910343DC__CTOR_OFFSET UNITYSDK_OFFSET(0x10DED080)

inline static constexpr unsigned int Class_2_6208E9A7910343DC_TypeDefinitionIndex = 46759;

class Class_2_6208E9A7910343DC : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortByWeaknessMatch*>
{
public:
	::RPG::GameCore::AttackDamageType Field_2_1; // 0x18
	::RPG::GameCore::AttackDamageType Field_2_0; // 0x1C

	::System::Void _ctor(::RPG::GameCore::TargetSortByWeaknessMatch* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByWeaknessMatch*))((::PBYTE)hIl2Cpp + CLASS_2_6208E9A7910343DC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_6208E9A7910343DC_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8F361DCD8AD5FC61(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_6208E9A7910343DC_METHOD_2_8F361DCD8AD5FC61_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6208E9A7910343DC_COMPARE_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_D0A3AC3D851E8C42(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6208E9A7910343DC_METHOD_2_D0A3AC3D851E8C42_OFFSET))(this, a1);
	}
};
