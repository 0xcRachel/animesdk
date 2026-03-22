#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2BF31F3092BDFD9E;
class Class_3_BCCE950C2E8DF1F0;
namespace RPG::Client { class WolfBroGunProjectile; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C01301AC5C449AC9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8936890)
#define CLASS_1_C01301AC5C449AC9_METHOD_1_21263C5F0D51EC2B_OFFSET UNITYSDK_OFFSET(0x89369F0)
#define CLASS_1_C01301AC5C449AC9_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x8936F10)
#define CLASS_1_C01301AC5C449AC9_METHOD_1_384F5675BDC0003D_OFFSET UNITYSDK_OFFSET(0x8936EA0)
#define CLASS_1_C01301AC5C449AC9_METHOD_1_654459AA35B9C202_OFFSET UNITYSDK_OFFSET(0x8936C30)
#define CLASS_1_C01301AC5C449AC9_METHOD_1_6C78BE0F58E59620_OFFSET UNITYSDK_OFFSET(0x8936830)
#define CLASS_1_C01301AC5C449AC9__CTOR_OFFSET UNITYSDK_OFFSET(0x8936F20)

inline static constexpr unsigned int Class_1_C01301AC5C449AC9_TypeDefinitionIndex = 54603;

class Class_1_C01301AC5C449AC9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::WolfBroGunProjectile*>* Field_1_2; // 0x10
	::Class_1_2BF31F3092BDFD9E* Field_1_0; // 0x18
	::UnityEngine::Transform* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C01301AC5C449AC9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6C78BE0F58E59620(::Class_1_2BF31F3092BDFD9E* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2BF31F3092BDFD9E*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_C01301AC5C449AC9_METHOD_1_6C78BE0F58E59620_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C01301AC5C449AC9_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_21263C5F0D51EC2B(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C01301AC5C449AC9_METHOD_1_21263C5F0D51EC2B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_654459AA35B9C202(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::Client::WolfBroGunProjectile* a3, ::Class_3_BCCE950C2E8DF1F0* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::WolfBroGunProjectile*, ::Class_3_BCCE950C2E8DF1F0*))((::PBYTE)hIl2Cpp + CLASS_1_C01301AC5C449AC9_METHOD_1_654459AA35B9C202_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::WolfBroGunProjectile* Method_1_384F5675BDC0003D(::RPG::Client::WolfBroGunProjectile* a1)
	{
		return ((::RPG::Client::WolfBroGunProjectile*(*)(::PVOID, ::RPG::Client::WolfBroGunProjectile*))((::PBYTE)hIl2Cpp + CLASS_1_C01301AC5C449AC9_METHOD_1_384F5675BDC0003D_OFFSET))(this, a1);
	}

	::Class_1_2BF31F3092BDFD9E* Method_1_24748FC20F375725()
	{
		return ((::Class_1_2BF31F3092BDFD9E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C01301AC5C449AC9_METHOD_1_24748FC20F375725_OFFSET))(this);
	}
};
