#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class HeliobusSNSQuickPost; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_CCD9932409DC8C95_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BE6BE0)
#define CLASS_2_CCD9932409DC8C95_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x10BE7450)
#define CLASS_2_CCD9932409DC8C95_METHOD_2_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0x10BE7530)
#define CLASS_2_CCD9932409DC8C95_METHOD_2_B556EADFE34BD60F_OFFSET UNITYSDK_OFFSET(0x10BE75D0)
#define CLASS_2_CCD9932409DC8C95_METHOD_2_BFB7535D462E0EB4_OFFSET UNITYSDK_OFFSET(0x10BE7210)
#define CLASS_2_CCD9932409DC8C95_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10BE6CE0)
#define CLASS_2_CCD9932409DC8C95_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10BE77F0)
#define CLASS_2_CCD9932409DC8C95_TICK_OFFSET UNITYSDK_OFFSET(0x10BE7840)
#define CLASS_2_CCD9932409DC8C95__CTOR_OFFSET UNITYSDK_OFFSET(0x10BE6AF0)

inline static constexpr unsigned int Class_2_CCD9932409DC8C95_TypeDefinitionIndex = 41780;

class Class_2_CCD9932409DC8C95 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	::Class_3_BCCE950C2E8DF1F0* Field_2_2; // 0x18
	::RPG::GameCore::HeliobusSNSQuickPost* Field_2_0; // 0x20
	::RPG::GameCore::LevelGraphComponent* Field_2_4; // 0x28
	::Class_3_BCCE950C2E8DF1F0* Field_2_3; // 0x30
	::RPG::GameCore::TaskContext* Field_2_1; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HeliobusSNSQuickPost* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HeliobusSNSQuickPost*))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95_METHOD_2_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Boolean Method_2_B556EADFE34BD60F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95_METHOD_2_B556EADFE34BD60F_OFFSET))(this);
	}

	::System::Void Method_2_BFB7535D462E0EB4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95_METHOD_2_BFB7535D462E0EB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95_METHOD_2_1290EA767C459179_OFFSET))(this);
	}
};
