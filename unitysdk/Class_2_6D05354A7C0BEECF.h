#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PressureSwitchBaseSystem_1.h"

class Class_1_867B6CE75953535A_1;
class Class_2_0C58AD91B0F4D809;
class Class_3_44EDAE37250FA2DB;

#define CLASS_2_6D05354A7C0BEECF__CREATETRIGGER_OFFSET UNITYSDK_OFFSET(0x111CC320)
#define CLASS_2_6D05354A7C0BEECF__CTOR_OFFSET UNITYSDK_OFFSET(0x111CBE60)
#define CLASS_2_6D05354A7C0BEECF__GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x111CC760)
#define CLASS_2_6D05354A7C0BEECF__ONTRIGGEROUT_OFFSET UNITYSDK_OFFSET(0x111CC830)
#define CLASS_2_6D05354A7C0BEECF__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x111CC1C0)
#define CLASS_2_6D05354A7C0BEECF___IFIXBASEPROXY__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x111CC960)

inline static constexpr unsigned int Class_2_6D05354A7C0BEECF_TypeDefinitionIndex = 60532;

class Class_2_6D05354A7C0BEECF : public ::RPG::Client::LittleGame::FiveDim::PressureSwitchBaseSystem_1<::Class_2_0C58AD91B0F4D809*>
{
public:
	::Class_1_867B6CE75953535A_1* Field_2_0; // 0x40
	::Class_3_44EDAE37250FA2DB* Field_2_1; // 0x48

	::System::Void _ctor(::Class_1_867B6CE75953535A_1* a1, ::Class_3_44EDAE37250FA2DB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A_1*, ::Class_3_44EDAE37250FA2DB*))((::PBYTE)hIl2Cpp + CLASS_2_6D05354A7C0BEECF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D05354A7C0BEECF__TEARDOWN_OFFSET))(this);
	}

	::System::Void _CreateTrigger(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_6D05354A7C0BEECF__CREATETRIGGER_OFFSET))(this, a1);
	}

	::Class_2_0C58AD91B0F4D809* _GetEntityByRuntimeID(::System::Int32 a1)
	{
		return ((::Class_2_0C58AD91B0F4D809*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6D05354A7C0BEECF__GETENTITYBYRUNTIMEID_OFFSET))(this, a1);
	}

	::System::Void _OnTriggerOut(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_6D05354A7C0BEECF__ONTRIGGEROUT_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D05354A7C0BEECF___IFIXBASEPROXY__TEARDOWN_OFFSET))(this);
	}
};
