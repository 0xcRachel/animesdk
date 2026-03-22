#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_0AD6129525BF5F86;
class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class FireMultiProjectiles; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_02BC09F8EF281CC4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10303F00)
#define CLASS_2_02BC09F8EF281CC4_METHOD_2_1FC86D2BFE10815E_OFFSET UNITYSDK_OFFSET(0x10304300)
#define CLASS_2_02BC09F8EF281CC4_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x10304100)
#define CLASS_2_02BC09F8EF281CC4_METHOD_2_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x10303990)
#define CLASS_2_02BC09F8EF281CC4_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x10303C70)
#define CLASS_2_02BC09F8EF281CC4_METHOD_2_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0x103034C0)
#define CLASS_2_02BC09F8EF281CC4_METHOD_2_AFD66A83AEF40D90_OFFSET UNITYSDK_OFFSET(0x103043F0)
#define CLASS_2_02BC09F8EF281CC4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10303F60)
#define CLASS_2_02BC09F8EF281CC4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10304260)
#define CLASS_2_02BC09F8EF281CC4_TICK_OFFSET UNITYSDK_OFFSET(0x10304180)
#define CLASS_2_02BC09F8EF281CC4__CTOR_OFFSET UNITYSDK_OFFSET(0x103031C0)

inline static constexpr unsigned int Class_2_02BC09F8EF281CC4_TypeDefinitionIndex = 43012;

class Class_2_02BC09F8EF281CC4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::System::Single>* Field_2_10; // 0x18
	::RPG::GameCore::GameEntity* Field_2_8; // 0x20
	::RPG::GameCore::GameEntity* Field_2_7; // 0x28
	::RPG::GameCore::TaskContext* Field_2_1; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::ProjectileData*>* Field_2_11; // 0x38
	::RPG::GameCore::FireMultiProjectiles* Field_2_0; // 0x40
	::Il2CppArray<::Class_1_0AD6129525BF5F86*>* Field_2_2; // 0x48
	::System::Collections::Generic::List_1<::Class_3_BCCE950C2E8DF1F0*>* Field_2_9; // 0x50
	::System::Int32 Field_2_5; // 0x58
	::System::Int32 Field_2_3; // 0x5C
	::System::Int32 Field_2_6; // 0x60
	::System::Single Field_2_4; // 0x64

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FireMultiProjectiles* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FireMultiProjectiles*))((::PBYTE)hIl2Cpp + CLASS_2_02BC09F8EF281CC4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4A41C63BFE58D26F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02BC09F8EF281CC4_METHOD_2_4A41C63BFE58D26F_OFFSET))(this);
	}

	::System::Void Method_2_4857357D5C1BFCE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02BC09F8EF281CC4_METHOD_2_4857357D5C1BFCE8_OFFSET))(this);
	}

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02BC09F8EF281CC4_METHOD_2_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02BC09F8EF281CC4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02BC09F8EF281CC4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_02BC09F8EF281CC4_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02BC09F8EF281CC4_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean Method_2_1FC86D2BFE10815E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02BC09F8EF281CC4_METHOD_2_1FC86D2BFE10815E_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02BC09F8EF281CC4_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_AFD66A83AEF40D90(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_02BC09F8EF281CC4_METHOD_2_AFD66A83AEF40D90_OFFSET))(this, a1);
	}
};
