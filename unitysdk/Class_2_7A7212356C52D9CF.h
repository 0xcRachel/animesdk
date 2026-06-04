#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/ScreenTransferMode.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_A692F0EBC85284D5;

#define CLASS_2_7A7212356C52D9CF_METHOD_2_1EDB4BF06AFA3E32_OFFSET UNITYSDK_OFFSET(0x132BBB80)
#define CLASS_2_7A7212356C52D9CF_METHOD_2_56B9301C681BC2C4_OFFSET UNITYSDK_OFFSET(0x132BBC60)
#define CLASS_2_7A7212356C52D9CF_METHOD_2_79129E229F8D1FC3_OFFSET UNITYSDK_OFFSET(0x132BBD70)
#define CLASS_2_7A7212356C52D9CF_METHOD_2_B0C5045750951960_OFFSET UNITYSDK_OFFSET(0x132BB750)
#define CLASS_2_7A7212356C52D9CF_METHOD_2_C3508D64998D3AA6_OFFSET UNITYSDK_OFFSET(0x132BB510)
#define CLASS_2_7A7212356C52D9CF_METHOD_2_FC52587E8E801C1C_OFFSET UNITYSDK_OFFSET(0x132BB700)
#define CLASS_2_7A7212356C52D9CF__CTOR_OFFSET UNITYSDK_OFFSET(0x132BB4C0)
#define CLASS_2_7A7212356C52D9CF__ONTICK_OFFSET UNITYSDK_OFFSET(0x132BB930)
#define CLASS_2_7A7212356C52D9CF__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x132BB7D0)
#define CLASS_2_7A7212356C52D9CF___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x132BBF20)
#define CLASS_2_7A7212356C52D9CF___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x132BBEC0)

inline static constexpr unsigned int Class_2_7A7212356C52D9CF_TypeDefinitionIndex = 68263;

class Class_2_7A7212356C52D9CF : public ::RPG::Client::UIController
{
public:
	::System::Single Field_2_0; // 0x180
	::RPG::GameCore::ScreenTransferMode Field_2_1; // 0x184
	::System::Boolean Field_2_2; // 0x188
	::System::Single Field_2_3; // 0x18C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7212356C52D9CF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C3508D64998D3AA6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7A7212356C52D9CF_METHOD_2_C3508D64998D3AA6_OFFSET))(this, a1);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7212356C52D9CF__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7A7212356C52D9CF__ONTICK_OFFSET))(this, a1);
	}

	::UnityEngine::Color Method_2_B0C5045750951960()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7212356C52D9CF_METHOD_2_B0C5045750951960_OFFSET))(this);
	}

	::UnityEngine::Color Method_2_1EDB4BF06AFA3E32()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7212356C52D9CF_METHOD_2_1EDB4BF06AFA3E32_OFFSET))(this);
	}

	::UnityEngine::Color Method_2_56B9301C681BC2C4(::System::Single a1)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7A7212356C52D9CF_METHOD_2_56B9301C681BC2C4_OFFSET))(this, a1);
	}

	::System::Single Method_2_79129E229F8D1FC3(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7A7212356C52D9CF_METHOD_2_79129E229F8D1FC3_OFFSET))(this, a1, a2);
	}

	::Class_2_A692F0EBC85284D5* Method_2_FC52587E8E801C1C()
	{
		return ((::Class_2_A692F0EBC85284D5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7212356C52D9CF_METHOD_2_FC52587E8E801C1C_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7212356C52D9CF___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7A7212356C52D9CF___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}
};
