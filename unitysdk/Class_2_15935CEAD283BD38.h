#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class Effect_LineRenderer; }
namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define CLASS_2_15935CEAD283BD38_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA486EE0)
#define CLASS_2_15935CEAD283BD38_METHOD_2_3C8BDD2EEEA1F983_OFFSET UNITYSDK_OFFSET(0xA486C40)
#define CLASS_2_15935CEAD283BD38_METHOD_2_81B170638DE261C2_OFFSET UNITYSDK_OFFSET(0xA485DF0)
#define CLASS_2_15935CEAD283BD38_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0xA486F60)
#define CLASS_2_15935CEAD283BD38_METHOD_2_AA8DDAA31CE407E8_OFFSET UNITYSDK_OFFSET(0xA486490)
#define CLASS_2_15935CEAD283BD38_METHOD_2_FD84629BA6096517_OFFSET UNITYSDK_OFFSET(0xA486500)
#define CLASS_2_15935CEAD283BD38__CTOR_OFFSET UNITYSDK_OFFSET(0xA486F50)
#define CLASS_2_15935CEAD283BD38___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA486FD0)

inline static constexpr unsigned int Class_2_15935CEAD283BD38_TypeDefinitionIndex = 37344;

class Class_2_15935CEAD283BD38 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15935CEAD283BD38__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_81B170638DE261C2(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_15935CEAD283BD38_METHOD_2_81B170638DE261C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD84629BA6096517(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_15935CEAD283BD38_METHOD_2_FD84629BA6096517_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_2_3C8BDD2EEEA1F983(::System::String* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_15935CEAD283BD38_METHOD_2_3C8BDD2EEEA1F983_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15935CEAD283BD38_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::Effect_LineRenderer* Method_2_AA8DDAA31CE407E8()
	{
		return ((::RPG::Client::Effect_LineRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15935CEAD283BD38_METHOD_2_AA8DDAA31CE407E8_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_15935CEAD283BD38_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15935CEAD283BD38___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
