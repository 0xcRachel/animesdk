#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_24456C99ED22E970_Class_1_4C3415F922B5C2E8;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OpenTimeRewindRecreateWorldPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_24456C99ED22E970_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE5B9BA0)
#define CLASS_2_24456C99ED22E970_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xE5BA410)
#define CLASS_2_24456C99ED22E970_METHOD_2_3ABD0165571B5EF8_OFFSET UNITYSDK_OFFSET(0xE5BB010)
#define CLASS_2_24456C99ED22E970_METHOD_2_870AF3CD1D0A67B1_1_OFFSET UNITYSDK_OFFSET(0xE5BA920)
#define CLASS_2_24456C99ED22E970_METHOD_2_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0xE5BAF50)
#define CLASS_2_24456C99ED22E970_METHOD_2_E644604C8CC8D8E1_1_OFFSET UNITYSDK_OFFSET(0xE5BAD90)
#define CLASS_2_24456C99ED22E970_METHOD_2_E644604C8CC8D8E1_OFFSET UNITYSDK_OFFSET(0xE5BA760)
#define CLASS_2_24456C99ED22E970_METHOD_2_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0xE5BB0F0)
#define CLASS_2_24456C99ED22E970_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xE5BAFB0)
#define CLASS_2_24456C99ED22E970_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE5B9F90)
#define CLASS_2_24456C99ED22E970_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE5B9DB0)
#define CLASS_2_24456C99ED22E970_TICK_OFFSET UNITYSDK_OFFSET(0xE5BA510)
#define CLASS_2_24456C99ED22E970__CTOR_OFFSET UNITYSDK_OFFSET(0xE5B98F0)

inline static constexpr unsigned int Class_2_24456C99ED22E970_TypeDefinitionIndex = 49205;

class Class_2_24456C99ED22E970 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Il2CppArray<::System::Boolean>* Field_2_12; // 0x18
	::Il2CppArray<::Class_3_E21F6DE9B7FA4D05*>* Field_2_13; // 0x20
	::RPG::GameCore::OpenTimeRewindRecreateWorldPage* Field_2_4; // 0x28
	::RPG::GameCore::GameEntity* Field_2_2; // 0x30
	::Class_2_24456C99ED22E970_Class_1_4C3415F922B5C2E8* Field_2_9; // 0x38
	::Class_3_E21F6DE9B7FA4D05* Field_2_8; // 0x40
	::Class_3_E21F6DE9B7FA4D05* Field_2_7; // 0x48
	::Class_2_24456C99ED22E970_Class_1_4C3415F922B5C2E8* Field_2_10; // 0x50
	::RPG::GameCore::TaskContext* Field_2_3; // 0x58
	::System::Single Field_2_6; // 0x60
	::System::Single Field_2_5; // 0x64
	::System::Int32 Field_2_1; // 0x68
	::System::Int32 Field_2_0; // 0x6C
	::System::Single Field_2_11; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenTimeRewindRecreateWorldPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenTimeRewindRecreateWorldPage*))((::PBYTE)hIl2Cpp + CLASS_2_24456C99ED22E970__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24456C99ED22E970_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24456C99ED22E970_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24456C99ED22E970_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_24456C99ED22E970_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_E644604C8CC8D8E1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_24456C99ED22E970_METHOD_2_E644604C8CC8D8E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E644604C8CC8D8E1_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_24456C99ED22E970_METHOD_2_E644604C8CC8D8E1_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_870AF3CD1D0A67B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24456C99ED22E970_METHOD_2_870AF3CD1D0A67B1_OFFSET))(this);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24456C99ED22E970_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24456C99ED22E970_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24456C99ED22E970_METHOD_2_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Void Method_2_870AF3CD1D0A67B1_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24456C99ED22E970_METHOD_2_870AF3CD1D0A67B1_1_OFFSET))(this);
	}

	::System::Single Method_2_3ABD0165571B5EF8()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24456C99ED22E970_METHOD_2_3ABD0165571B5EF8_OFFSET))(this);
	}
};
