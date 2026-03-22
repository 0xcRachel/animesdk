#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class MissionItemConfigList; }
namespace RPG::GameCore { class SelectMissionItem; }
namespace RPG::GameCore { class SelectMissionItemConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_358F28036E0E101C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA6C9210)
#define CLASS_2_358F28036E0E101C_METHOD_2_09A7FCE6953F2B3E_OFFSET UNITYSDK_OFFSET(0xA6CA090)
#define CLASS_2_358F28036E0E101C_METHOD_2_0A0A8830B02C5A4B_OFFSET UNITYSDK_OFFSET(0xA6C9540)
#define CLASS_2_358F28036E0E101C_METHOD_2_14245B339C99E5FA_OFFSET UNITYSDK_OFFSET(0xA6C99A0)
#define CLASS_2_358F28036E0E101C_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xA6C9FC0)
#define CLASS_2_358F28036E0E101C_METHOD_2_697F9204BE674FFE_OFFSET UNITYSDK_OFFSET(0xA6C9F40)
#define CLASS_2_358F28036E0E101C_METHOD_2_7744894CEC41BF06_1_OFFSET UNITYSDK_OFFSET(0xA6CA680)
#define CLASS_2_358F28036E0E101C_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xA6CA440)
#define CLASS_2_358F28036E0E101C_METHOD_2_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0xA6CA730)
#define CLASS_2_358F28036E0E101C_METHOD_2_AE415B014D1F5508_OFFSET UNITYSDK_OFFSET(0xA6C9D50)
#define CLASS_2_358F28036E0E101C_METHOD_2_B386444429A36A77_OFFSET UNITYSDK_OFFSET(0xA6CA4F0)
#define CLASS_2_358F28036E0E101C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA6C93A0)
#define CLASS_2_358F28036E0E101C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA6C9720)
#define CLASS_2_358F28036E0E101C_TICK_OFFSET UNITYSDK_OFFSET(0xA6C9860)
#define CLASS_2_358F28036E0E101C__CTOR_OFFSET UNITYSDK_OFFSET(0xA6C90B0)

inline static constexpr unsigned int Class_2_358F28036E0E101C_TypeDefinitionIndex = 42031;

class Class_2_358F28036E0E101C : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_7; // 0x0
	::Class_3_BCCE950C2E8DF1F0* Field_2_4; // 0x18
	::Class_3_BCCE950C2E8DF1F0* Field_2_6; // 0x20
	::RPG::GameCore::MissionItemConfigList* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_1; // 0x30
	::Class_3_BCCE950C2E8DF1F0* Field_2_5; // 0x38
	::Class_3_BCCE950C2E8DF1F0* Field_2_3; // 0x40
	::RPG::GameCore::SelectMissionItem* Field_2_0; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SelectMissionItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SelectMissionItem*))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_14245B339C99E5FA(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_METHOD_2_14245B339C99E5FA_OFFSET))(this, a1);
	}

	::System::Void Method_2_09A7FCE6953F2B3E(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_METHOD_2_09A7FCE6953F2B3E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_697F9204BE674FFE(::RPG::GameCore::SelectMissionItemConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SelectMissionItemConfig*))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_METHOD_2_697F9204BE674FFE_OFFSET))(this, a1);
	}

	::System::Void Method_2_B386444429A36A77(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_METHOD_2_B386444429A36A77_OFFSET))(this, a1);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_METHOD_2_7744894CEC41BF06_1_OFFSET))(this);
	}

	::System::Void Method_2_0A0A8830B02C5A4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_METHOD_2_0A0A8830B02C5A4B_OFFSET))(this);
	}

	::System::Boolean Method_2_AE415B014D1F5508(::RPG::GameCore::MissionItemConfigList* a1, ::RPG::GameCore::SelectMissionItemConfig* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MissionItemConfigList*, ::RPG::GameCore::SelectMissionItemConfig*))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_METHOD_2_AE415B014D1F5508_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_358F28036E0E101C_METHOD_2_9B2E710EB9D49BA6_OFFSET))(this);
	}
};
