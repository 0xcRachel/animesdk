#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_0347AE3FB0036865.h"
#include "unitysdk/Struct_2_1C9F798620806180.h"

class Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A;
class Class_2_35DC892F466147D4;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class SetSkillTargetFormationByPos; }
namespace RPG::GameCore { class TargetFormationPosConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_188534F009ABDD1B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x89FE690)
#define CLASS_2_188534F009ABDD1B_METHOD_2_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x8A00010)
#define CLASS_2_188534F009ABDD1B_METHOD_2_2D01737268D36D3D_OFFSET UNITYSDK_OFFSET(0x8A00900)
#define CLASS_2_188534F009ABDD1B_METHOD_2_684096009AF9FA5C_OFFSET UNITYSDK_OFFSET(0x8A00C10)
#define CLASS_2_188534F009ABDD1B_METHOD_2_7854AA0B7A17DA18_OFFSET UNITYSDK_OFFSET(0x8A00D80)
#define CLASS_2_188534F009ABDD1B_METHOD_2_9C71264C758F571B_OFFSET UNITYSDK_OFFSET(0x8A001A0)
#define CLASS_2_188534F009ABDD1B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x89FE930)
#define CLASS_2_188534F009ABDD1B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8A01460)
#define CLASS_2_188534F009ABDD1B_TICK_OFFSET UNITYSDK_OFFSET(0x89FE8D0)
#define CLASS_2_188534F009ABDD1B__CTOR_OFFSET UNITYSDK_OFFSET(0x89FE5B0)

inline static constexpr unsigned int Class_2_188534F009ABDD1B_TypeDefinitionIndex = 44297;

class Class_2_188534F009ABDD1B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::LinkedListNode_1<::Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A*>* Field_2_10; // 0x18
	::Struct_2_1C9F798620806180 Field_2_9; // 0x20
	::RPG::PoolList_1<::Struct_2_0347AE3FB0036865>* Field_2_6; // 0x48
	::System::Collections::Generic::LinkedList_1<::RPG::GameCore::TargetFormationPosConfig*>* Field_2_3; // 0x50
	::RPG::GameCore::SetSkillTargetFormationByPos* Field_2_1; // 0x58
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* Field_2_11; // 0x60
	::RPG::GameCore::GameEntity* Field_2_7; // 0x68
	::RPG::GameCore::TaskContext* Field_2_2; // 0x70
	::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::TargetFormationPosConfig*>* Field_2_4; // 0x78
	::System::Collections::Generic::LinkedList_1<::Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A*>* Field_2_5; // 0x80
	::Class_2_35DC892F466147D4* Field_2_8; // 0x88
	::System::Boolean Field_2_0; // 0x90

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSkillTargetFormationByPos* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSkillTargetFormationByPos*))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_7854AA0B7A17DA18(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_METHOD_2_7854AA0B7A17DA18_OFFSET))(this, a1);
	}

	::System::Void Method_2_9C71264C758F571B(::RPG::GameCore::GameEntityList*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*&))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_METHOD_2_9C71264C758F571B_OFFSET))(this, a1);
	}

	::System::Void Method_2_2D01737268D36D3D(::RPG::GameCore::GameEntityList* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_METHOD_2_2D01737268D36D3D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_684096009AF9FA5C(::RPG::GameCore::GameEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_METHOD_2_684096009AF9FA5C_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_METHOD_2_0D372435D9CAE4BC_OFFSET))(this);
	}
};
