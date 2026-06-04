#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client { class MonoEffectPluginWaterColor; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_16B7505A2C5090DB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16407B10)
#define CLASS_2_16B7505A2C5090DB_METHOD_2_146E6E50FAF07D8F_1_OFFSET UNITYSDK_OFFSET(0x16408020)
#define CLASS_2_16B7505A2C5090DB_METHOD_2_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0x16407D90)
#define CLASS_2_16B7505A2C5090DB_METHOD_2_1BD66C4BC74C6A16_OFFSET UNITYSDK_OFFSET(0x16407A30)
#define CLASS_2_16B7505A2C5090DB_METHOD_2_2091F34306E68C88_OFFSET UNITYSDK_OFFSET(0x16407BE0)
#define CLASS_2_16B7505A2C5090DB_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16407B60)
#define CLASS_2_16B7505A2C5090DB_METHOD_2_5FAD56E9E208220A_OFFSET UNITYSDK_OFFSET(0x16407FD0)
#define CLASS_2_16B7505A2C5090DB_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0x164081D0)
#define CLASS_2_16B7505A2C5090DB__CTOR_OFFSET UNITYSDK_OFFSET(0x164081C0)
#define CLASS_2_16B7505A2C5090DB___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16408230)

inline static constexpr unsigned int Class_2_16B7505A2C5090DB_TypeDefinitionIndex = 65360;

class Class_2_16B7505A2C5090DB : public ::RPG::Client::BehaviorBase
{
public:
	::RPG::Client::MonoEffectPluginWaterColor* Field_2_0; // 0x18
	::Il2CppArray<::UnityEngine::Color>* Field_2_1; // 0x20
	::UnityEngine::Color Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16B7505A2C5090DB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1BD66C4BC74C6A16(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_16B7505A2C5090DB_METHOD_2_1BD66C4BC74C6A16_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16B7505A2C5090DB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16B7505A2C5090DB_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_2091F34306E68C88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16B7505A2C5090DB_METHOD_2_2091F34306E68C88_OFFSET))(this);
	}

	::System::Void Method_2_5FAD56E9E208220A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16B7505A2C5090DB_METHOD_2_5FAD56E9E208220A_OFFSET))(this);
	}

	::System::Void Method_2_146E6E50FAF07D8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16B7505A2C5090DB_METHOD_2_146E6E50FAF07D8F_OFFSET))(this);
	}

	::System::Void Method_2_146E6E50FAF07D8F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16B7505A2C5090DB_METHOD_2_146E6E50FAF07D8F_1_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_16B7505A2C5090DB_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16B7505A2C5090DB___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
