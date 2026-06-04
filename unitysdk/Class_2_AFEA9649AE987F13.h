#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace RPG::Client { class Effect_WorldWireFrame; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_AFEA9649AE987F13_METHOD_2_20E8013D4AB67E17_OFFSET UNITYSDK_OFFSET(0x132E3C60)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_2E772D39299981DF_OFFSET UNITYSDK_OFFSET(0x132E1530)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x132E43A0)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0x132E2A20)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_49359CA8B919527C_OFFSET UNITYSDK_OFFSET(0x132E24D0)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_4BAE91CE930BB524_OFFSET UNITYSDK_OFFSET(0x132E2C70)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_78037B64B814568E_OFFSET UNITYSDK_OFFSET(0x132E3110)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0x132E3AA0)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_AFF29A1C453C49C4_OFFSET UNITYSDK_OFFSET(0x132E2540)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0x132E4780)
#define CLASS_2_AFEA9649AE987F13__CTOR_OFFSET UNITYSDK_OFFSET(0x132E4720)

inline static constexpr unsigned int Class_2_AFEA9649AE987F13_TypeDefinitionIndex = 65794;

class Class_2_AFEA9649AE987F13 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Vector3Int Field_2_0; // 0x18
	::UnityEngine::Color Field_2_1; // 0x24
	::UnityEngine::Vector3 Field_2_2; // 0x34
	::UnityEngine::Vector3 Field_2_3; // 0x40
	::System::Single Field_2_4; // 0x4C
	::System::Single Field_2_5; // 0x50
	::UnityEngine::Vector3 Field_2_6; // 0x54
	::System::Single Field_2_7; // 0x60
	::System::Single Field_2_8; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2E772D39299981DF(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13_METHOD_2_2E772D39299981DF_OFFSET))(this, a1);
	}

	::System::Void Method_2_4BAE91CE930BB524()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13_METHOD_2_4BAE91CE930BB524_OFFSET))(this);
	}

	::System::Void Method_2_78037B64B814568E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13_METHOD_2_78037B64B814568E_OFFSET))(this);
	}

	::System::Void Method_2_AFF29A1C453C49C4(::UnityEngine::LineRenderer* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LineRenderer*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13_METHOD_2_AFF29A1C453C49C4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_47EDBC4CA1AB8BEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13_METHOD_2_47EDBC4CA1AB8BEE_OFFSET))(this);
	}

	::System::Void Method_2_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13_METHOD_2_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void Method_2_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13_METHOD_2_960032BA2E22793D_OFFSET))(this);
	}

	::System::Void Method_2_20E8013D4AB67E17()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13_METHOD_2_20E8013D4AB67E17_OFFSET))(this);
	}

	::RPG::Client::Effect_WorldWireFrame* Method_2_49359CA8B919527C()
	{
		return ((::RPG::Client::Effect_WorldWireFrame*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13_METHOD_2_49359CA8B919527C_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}
};
