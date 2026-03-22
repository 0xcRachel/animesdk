#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoLoopedRotaion; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_9276F349915B6D21_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0xFE74C90)
#define CLASS_2_9276F349915B6D21_METHOD_2_735CCB7293D530B6_OFFSET UNITYSDK_OFFSET(0xFE748D0)
#define CLASS_2_9276F349915B6D21_METHOD_2_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0xFE74C40)
#define CLASS_2_9276F349915B6D21_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0xFE75830)
#define CLASS_2_9276F349915B6D21_METHOD_2_D5FD030C20131461_OFFSET UNITYSDK_OFFSET(0xFE74BF0)
#define CLASS_2_9276F349915B6D21__CTOR_OFFSET UNITYSDK_OFFSET(0xFE75820)

inline static constexpr unsigned int Class_2_9276F349915B6D21_TypeDefinitionIndex = 56051;

class Class_2_9276F349915B6D21 : public ::RPG::Client::BehaviorBase
{
public:
	::RPG::Client::MonoLoopedRotaion* Field_2_5; // 0x18
	::UnityEngine::GameObject* Field_2_0; // 0x20
	::System::Single Field_2_1; // 0x28
	::System::Single Field_2_2; // 0x2C
	::System::Single Field_2_3; // 0x30
	::UnityEngine::Vector3 Field_2_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9276F349915B6D21__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_735CCB7293D530B6(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_9276F349915B6D21_METHOD_2_735CCB7293D530B6_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9276F349915B6D21_METHOD_2_8B848E52913DFCE9_OFFSET))(this);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9276F349915B6D21_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::RPG::Client::MonoLoopedRotaion* Method_2_D5FD030C20131461()
	{
		return ((::RPG::Client::MonoLoopedRotaion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9276F349915B6D21_METHOD_2_D5FD030C20131461_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_9276F349915B6D21_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
