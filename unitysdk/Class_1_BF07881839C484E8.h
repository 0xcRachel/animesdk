#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_1_BF07881839C484E8_EXECUTE_OFFSET UNITYSDK_OFFSET(0x10C35850)
#define CLASS_1_BF07881839C484E8_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x10C34E90)
#define CLASS_1_BF07881839C484E8_METHOD_1_03752E2BF715F912_OFFSET UNITYSDK_OFFSET(0x10C350B0)
#define CLASS_1_BF07881839C484E8_METHOD_1_79737C480CC22DC7_OFFSET UNITYSDK_OFFSET(0x10C35DE0)
#define CLASS_1_BF07881839C484E8_METHOD_1_ABFDCAB2EBE17174_OFFSET UNITYSDK_OFFSET(0x10C358A0)
#define CLASS_1_BF07881839C484E8_METHOD_1_B61EB51D3CB6FABF_OFFSET UNITYSDK_OFFSET(0x10C35CF0)
#define CLASS_1_BF07881839C484E8_METHOD_1_CAD72CA6EDE4556D_OFFSET UNITYSDK_OFFSET(0x10C35F70)
#define CLASS_1_BF07881839C484E8_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x10C35B10)
#define CLASS_1_BF07881839C484E8__CTOR_OFFSET UNITYSDK_OFFSET(0x10C34BE0)

inline static constexpr unsigned int Class_1_BF07881839C484E8_TypeDefinitionIndex = 60761;

class Class_1_BF07881839C484E8 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_4; // 0x0
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_2; // 0x10
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x18
	::Class_1_24C2E7EF22229C6A* Field_1_0; // 0x20
	::Entitas::ICollector_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_3; // 0x28

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_BF07881839C484E8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF07881839C484E8_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF07881839C484E8_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF07881839C484E8_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_ABFDCAB2EBE17174()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF07881839C484E8_METHOD_1_ABFDCAB2EBE17174_OFFSET))(this);
	}

	::System::Void Method_1_03752E2BF715F912(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_BF07881839C484E8_METHOD_1_03752E2BF715F912_OFFSET))(this, a1);
	}

	::System::Void Method_1_B61EB51D3CB6FABF(::Class_2_9DD8A46984F1AFFD* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_BF07881839C484E8_METHOD_1_B61EB51D3CB6FABF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_79737C480CC22DC7(::Class_2_9DD8A46984F1AFFD* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_BF07881839C484E8_METHOD_1_79737C480CC22DC7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CAD72CA6EDE4556D(::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* a1, ::Class_2_9DD8A46984F1AFFD* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>*, ::Class_2_9DD8A46984F1AFFD*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_BF07881839C484E8_METHOD_1_CAD72CA6EDE4556D_OFFSET))(this, a1, a2, a3, a4);
	}
};
