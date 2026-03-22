#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_0AD6129525BF5F86;
class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class ChessFireProjectile; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AE0C7202A575B18C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFDB3600)
#define CLASS_2_AE0C7202A575B18C_METHOD_2_5ED655A622B0DBD9_OFFSET UNITYSDK_OFFSET(0xFDB3BD0)
#define CLASS_2_AE0C7202A575B18C_METHOD_2_BCEDF88FD731AB55_OFFSET UNITYSDK_OFFSET(0xFDB3B70)
#define CLASS_2_AE0C7202A575B18C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFDB3690)
#define CLASS_2_AE0C7202A575B18C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xFDB3A70)
#define CLASS_2_AE0C7202A575B18C_TICK_OFFSET UNITYSDK_OFFSET(0xFDB3AC0)
#define CLASS_2_AE0C7202A575B18C__CTOR_OFFSET UNITYSDK_OFFSET(0xFDB34B0)

inline static constexpr unsigned int Class_2_AE0C7202A575B18C_TypeDefinitionIndex = 44141;

class Class_2_AE0C7202A575B18C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::Class_1_0AD6129525BF5F86* Field_2_3; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_4; // 0x28
	::Class_3_BCCE950C2E8DF1F0* Field_2_2; // 0x30
	::RPG::GameCore::ChessFireProjectile* Field_2_0; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChessFireProjectile* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChessFireProjectile*))((::PBYTE)hIl2Cpp + CLASS_2_AE0C7202A575B18C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE0C7202A575B18C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE0C7202A575B18C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE0C7202A575B18C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AE0C7202A575B18C_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BCEDF88FD731AB55(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_AE0C7202A575B18C_METHOD_2_BCEDF88FD731AB55_OFFSET))(this, a1);
	}

	::System::Void Method_2_5ED655A622B0DBD9(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_AE0C7202A575B18C_METHOD_2_5ED655A622B0DBD9_OFFSET))(this, a1);
	}
};
