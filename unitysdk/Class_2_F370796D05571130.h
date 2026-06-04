#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_22F2DBF11C448BFC;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueGambleBaseFunc; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_F370796D05571130_DISPOSE_OFFSET UNITYSDK_OFFSET(0x180346D0)
#define CLASS_2_F370796D05571130_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x18035410)
#define CLASS_2_F370796D05571130_METHOD_2_1290EA767C459179_2_OFFSET UNITYSDK_OFFSET(0x18035610)
#define CLASS_2_F370796D05571130_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x180358E0)
#define CLASS_2_F370796D05571130_METHOD_2_41CF9B9431532A25_OFFSET UNITYSDK_OFFSET(0x180359C0)
#define CLASS_2_F370796D05571130_METHOD_2_635445A7258F7A25_OFFSET UNITYSDK_OFFSET(0x18034F70)
#define CLASS_2_F370796D05571130_METHOD_2_6373C74E6D145B38_OFFSET UNITYSDK_OFFSET(0x18034FC0)
#define CLASS_2_F370796D05571130_METHOD_2_73F40332079A5ABE_OFFSET UNITYSDK_OFFSET(0x180356F0)
#define CLASS_2_F370796D05571130_METHOD_2_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x18034D10)
#define CLASS_2_F370796D05571130_METHOD_2_BDED79D5C4FAAACD_OFFSET UNITYSDK_OFFSET(0x18034C00)
#define CLASS_2_F370796D05571130_METHOD_2_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0x180354F0)
#define CLASS_2_F370796D05571130_METHOD_2_DAD02C956288FC00_OFFSET UNITYSDK_OFFSET(0x18035200)
#define CLASS_2_F370796D05571130_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18034810)
#define CLASS_2_F370796D05571130_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18034680)
#define CLASS_2_F370796D05571130_TICK_OFFSET UNITYSDK_OFFSET(0x18034430)
#define CLASS_2_F370796D05571130__CTOR_OFFSET UNITYSDK_OFFSET(0x18034270)

inline static constexpr unsigned int Class_2_F370796D05571130_TypeDefinitionIndex = 54644;

class Class_2_F370796D05571130 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::LuaUIController* Field_2_0; // 0x18
	::RPG::GameCore::PropComponent* Field_2_1; // 0x20
	::Class_3_22F2DBF11C448BFC* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x38
	::Class_3_07C3C4D2990C49EE* Field_2_5; // 0x40
	::Class_3_07C3C4D2990C49EE* Field_2_6; // 0x48
	::RPG::GameCore::TaskContext* Field_2_7; // 0x50
	::RPG::Client::RogueGambleBaseFunc* Field_2_8; // 0x58
	::System::Boolean Field_2_9; // 0x60
	::System::UInt32 Field_2_10; // 0x64

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_22F2DBF11C448BFC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_22F2DBF11C448BFC*))((::PBYTE)hIl2Cpp + CLASS_2_F370796D05571130__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F370796D05571130_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F370796D05571130_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F370796D05571130_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F370796D05571130_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_BDED79D5C4FAAACD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F370796D05571130_METHOD_2_BDED79D5C4FAAACD_OFFSET))(this, a1);
	}

	::System::Void Method_2_635445A7258F7A25(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F370796D05571130_METHOD_2_635445A7258F7A25_OFFSET))(this, a1);
	}

	::System::Void Method_2_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F370796D05571130_METHOD_2_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_2_6373C74E6D145B38(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F370796D05571130_METHOD_2_6373C74E6D145B38_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F370796D05571130_METHOD_2_CEE2550285AA5985_OFFSET))(this, a1);
	}

	::System::Void Method_2_73F40332079A5ABE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F370796D05571130_METHOD_2_73F40332079A5ABE_OFFSET))(this, a1);
	}

	::System::Void Method_2_DAD02C956288FC00(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F370796D05571130_METHOD_2_DAD02C956288FC00_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F370796D05571130_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F370796D05571130_METHOD_2_1290EA767C459179_1_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F370796D05571130_METHOD_2_1290EA767C459179_2_OFFSET))(this);
	}

	::System::Void Method_2_41CF9B9431532A25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F370796D05571130_METHOD_2_41CF9B9431532A25_OFFSET))(this);
	}
};
