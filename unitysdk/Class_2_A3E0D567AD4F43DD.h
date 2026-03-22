#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TakenMazePuzzleChallenge; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_A3E0D567AD4F43DD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10432280)
#define CLASS_2_A3E0D567AD4F43DD_METHOD_2_39845204DD04FC33_1_OFFSET UNITYSDK_OFFSET(0x104328F0)
#define CLASS_2_A3E0D567AD4F43DD_METHOD_2_39845204DD04FC33_OFFSET UNITYSDK_OFFSET(0x104327B0)
#define CLASS_2_A3E0D567AD4F43DD_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x10432830)
#define CLASS_2_A3E0D567AD4F43DD_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x10432970)
#define CLASS_2_A3E0D567AD4F43DD_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x104329C0)
#define CLASS_2_A3E0D567AD4F43DD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10432390)
#define CLASS_2_A3E0D567AD4F43DD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10432700)
#define CLASS_2_A3E0D567AD4F43DD_TICK_OFFSET UNITYSDK_OFFSET(0x10432750)
#define CLASS_2_A3E0D567AD4F43DD__CTOR_OFFSET UNITYSDK_OFFSET(0x10432190)

inline static constexpr unsigned int Class_2_A3E0D567AD4F43DD_TypeDefinitionIndex = 42135;

class Class_2_A3E0D567AD4F43DD : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_BCCE950C2E8DF1F0* Field_2_3; // 0x18
	::Class_3_BCCE950C2E8DF1F0* Field_2_6; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::Class_3_BCCE950C2E8DF1F0* Field_2_4; // 0x30
	::RPG::GameCore::TakenMazePuzzleChallenge* Field_2_0; // 0x38
	::Class_3_BCCE950C2E8DF1F0* Field_2_2; // 0x40
	::RPG::GameCore::PropComponent* Field_2_7; // 0x48
	::Class_3_BCCE950C2E8DF1F0* Field_2_5; // 0x50
	::System::UInt32 Field_2_8; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TakenMazePuzzleChallenge* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TakenMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + CLASS_2_A3E0D567AD4F43DD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3E0D567AD4F43DD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3E0D567AD4F43DD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3E0D567AD4F43DD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A3E0D567AD4F43DD_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_39845204DD04FC33(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A3E0D567AD4F43DD_METHOD_2_39845204DD04FC33_OFFSET))(this, a1);
	}

	::System::Void Method_2_39845204DD04FC33_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A3E0D567AD4F43DD_METHOD_2_39845204DD04FC33_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3E0D567AD4F43DD_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A3E0D567AD4F43DD_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A3E0D567AD4F43DD_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}
};
