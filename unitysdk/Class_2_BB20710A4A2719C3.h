#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoRandomOffsetScale; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_BB20710A4A2719C3_METHOD_2_3C029C534AE1FB6B_OFFSET UNITYSDK_OFFSET(0x8906950)
#define CLASS_2_BB20710A4A2719C3_METHOD_2_724025AF880C2293_OFFSET UNITYSDK_OFFSET(0x8906A50)
#define CLASS_2_BB20710A4A2719C3_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x8907090)
#define CLASS_2_BB20710A4A2719C3_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x89068B0)
#define CLASS_2_BB20710A4A2719C3_METHOD_2_FC2F61016C596B5E_OFFSET UNITYSDK_OFFSET(0x8906A00)
#define CLASS_2_BB20710A4A2719C3__CTOR_OFFSET UNITYSDK_OFFSET(0x8907080)

inline static constexpr unsigned int Class_2_BB20710A4A2719C3_TypeDefinitionIndex = 56053;

class Class_2_BB20710A4A2719C3 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Vector3 Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB20710A4A2719C3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_BB20710A4A2719C3_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C029C534AE1FB6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB20710A4A2719C3_METHOD_2_3C029C534AE1FB6B_OFFSET))(this);
	}

	::System::Void Method_2_724025AF880C2293()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB20710A4A2719C3_METHOD_2_724025AF880C2293_OFFSET))(this);
	}

	::RPG::Client::MonoRandomOffsetScale* Method_2_FC2F61016C596B5E()
	{
		return ((::RPG::Client::MonoRandomOffsetScale*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB20710A4A2719C3_METHOD_2_FC2F61016C596B5E_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_BB20710A4A2719C3_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
