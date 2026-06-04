#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_6CA018824F1536E0;
namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_A3B6E3101528C82F_METHOD_3_D0B0E8495E8A13B8_OFFSET UNITYSDK_OFFSET(0x14162A40)
#define CLASS_3_A3B6E3101528C82F_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0x14162F40)
#define CLASS_3_A3B6E3101528C82F_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x14162AD0)
#define CLASS_3_A3B6E3101528C82F_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x14162B60)
#define CLASS_3_A3B6E3101528C82F__CTOR_OFFSET UNITYSDK_OFFSET(0x14162F90)
#define CLASS_3_A3B6E3101528C82F___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x14162FA0)
#define CLASS_3_A3B6E3101528C82F___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x14163000)

inline static constexpr unsigned int Class_3_A3B6E3101528C82F_TypeDefinitionIndex = 61557;

class Class_3_A3B6E3101528C82F : public ::Class_2_E408E6D7F3D1822C
{
public:
	// static const ::System::Single Field_3_0; // 0x0
	::Class_1_6CA018824F1536E0* Field_3_1; // 0x28
	::UnityEngine::Vector2 Field_3_2; // 0x30
	::RPG::Client::LittleGame::Match3::OpponentRole Field_3_3; // 0x38
	::System::UInt32 Field_3_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3B6E3101528C82F__CTOR_OFFSET))(this);
	}

	static ::Class_3_A3B6E3101528C82F* Method_3_D0B0E8495E8A13B8(::RPG::Client::MatchThreeBoard* a1, ::Class_1_6CA018824F1536E0* a2)
	{
		return ((::Class_3_A3B6E3101528C82F*(*)(::RPG::Client::MatchThreeBoard*, ::Class_1_6CA018824F1536E0*))((::PBYTE)hIl2Cpp + CLASS_3_A3B6E3101528C82F_METHOD_3_D0B0E8495E8A13B8_OFFSET))(a1, a2);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3B6E3101528C82F_ONCLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3B6E3101528C82F_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3B6E3101528C82F_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3B6E3101528C82F___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3B6E3101528C82F___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
