#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_AA043FFCFD4F06E8_Class_1_4C3415F922B5C2E8;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OpenTimeRewindRecreateWorldPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_AA043FFCFD4F06E8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B69020)
#define CLASS_2_AA043FFCFD4F06E8_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x8B69890)
#define CLASS_2_AA043FFCFD4F06E8_METHOD_2_3ABD0165571B5EF8_OFFSET UNITYSDK_OFFSET(0x8B6A490)
#define CLASS_2_AA043FFCFD4F06E8_METHOD_2_870AF3CD1D0A67B1_1_OFFSET UNITYSDK_OFFSET(0x8B69DA0)
#define CLASS_2_AA043FFCFD4F06E8_METHOD_2_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0x8B6A3D0)
#define CLASS_2_AA043FFCFD4F06E8_METHOD_2_E644604C8CC8D8E1_1_OFFSET UNITYSDK_OFFSET(0x8B6A210)
#define CLASS_2_AA043FFCFD4F06E8_METHOD_2_E644604C8CC8D8E1_OFFSET UNITYSDK_OFFSET(0x8B69BE0)
#define CLASS_2_AA043FFCFD4F06E8_METHOD_2_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x8B6A570)
#define CLASS_2_AA043FFCFD4F06E8_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x8B6A430)
#define CLASS_2_AA043FFCFD4F06E8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8B69410)
#define CLASS_2_AA043FFCFD4F06E8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8B69230)
#define CLASS_2_AA043FFCFD4F06E8_TICK_OFFSET UNITYSDK_OFFSET(0x8B69990)
#define CLASS_2_AA043FFCFD4F06E8__CTOR_OFFSET UNITYSDK_OFFSET(0x8B68D70)

inline static constexpr unsigned int Class_2_AA043FFCFD4F06E8_TypeDefinitionIndex = 43210;

class Class_2_AA043FFCFD4F06E8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_3; // 0x18
	::Class_2_AA043FFCFD4F06E8_Class_1_4C3415F922B5C2E8* Field_2_9; // 0x20
	::Class_3_5775A4FEC79026BC* Field_2_7; // 0x28
	::RPG::GameCore::GameEntity* Field_2_2; // 0x30
	::Il2CppArray<::Class_3_5775A4FEC79026BC*>* Field_2_13; // 0x38
	::Il2CppArray<::System::Boolean>* Field_2_12; // 0x40
	::RPG::GameCore::OpenTimeRewindRecreateWorldPage* Field_2_4; // 0x48
	::Class_2_AA043FFCFD4F06E8_Class_1_4C3415F922B5C2E8* Field_2_10; // 0x50
	::Class_3_5775A4FEC79026BC* Field_2_8; // 0x58
	::System::Single Field_2_6; // 0x60
	::System::Int32 Field_2_1; // 0x64
	::System::Single Field_2_11; // 0x68
	::System::Single Field_2_5; // 0x6C
	::System::Int32 Field_2_0; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenTimeRewindRecreateWorldPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenTimeRewindRecreateWorldPage*))((::PBYTE)hIl2Cpp + CLASS_2_AA043FFCFD4F06E8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA043FFCFD4F06E8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA043FFCFD4F06E8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA043FFCFD4F06E8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AA043FFCFD4F06E8_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_E644604C8CC8D8E1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AA043FFCFD4F06E8_METHOD_2_E644604C8CC8D8E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E644604C8CC8D8E1_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AA043FFCFD4F06E8_METHOD_2_E644604C8CC8D8E1_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_870AF3CD1D0A67B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA043FFCFD4F06E8_METHOD_2_870AF3CD1D0A67B1_OFFSET))(this);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA043FFCFD4F06E8_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA043FFCFD4F06E8_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA043FFCFD4F06E8_METHOD_2_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Void Method_2_870AF3CD1D0A67B1_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA043FFCFD4F06E8_METHOD_2_870AF3CD1D0A67B1_1_OFFSET))(this);
	}

	::System::Single Method_2_3ABD0165571B5EF8()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA043FFCFD4F06E8_METHOD_2_3ABD0165571B5EF8_OFFSET))(this);
	}
};
