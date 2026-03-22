#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_54D2C462A0667B39_EXECUTE_OFFSET UNITYSDK_OFFSET(0x86401B0)
#define CLASS_1_54D2C462A0667B39_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x863FB60)
#define CLASS_1_54D2C462A0667B39_METHOD_1_0C3ED5BCB794104D_OFFSET UNITYSDK_OFFSET(0x863FD80)
#define CLASS_1_54D2C462A0667B39_METHOD_1_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x8640200)
#define CLASS_1_54D2C462A0667B39_METHOD_1_8181F821B792EE80_OFFSET UNITYSDK_OFFSET(0x8640600)
#define CLASS_1_54D2C462A0667B39_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x8640510)
#define CLASS_1_54D2C462A0667B39__CTOR_OFFSET UNITYSDK_OFFSET(0x863F8D0)

inline static constexpr unsigned int Class_1_54D2C462A0667B39_TypeDefinitionIndex = 60797;

class Class_1_54D2C462A0667B39 : public ::System::Object
{
public:
	::Class_1_24C2E7EF22229C6A* Field_1_0; // 0x10
	::Entitas::ICollector_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_3; // 0x18
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_2; // 0x20
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x28

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_54D2C462A0667B39__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54D2C462A0667B39_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54D2C462A0667B39_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54D2C462A0667B39_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_0C3ED5BCB794104D(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_54D2C462A0667B39_METHOD_1_0C3ED5BCB794104D_OFFSET))(this, a1);
	}

	::System::Void Method_1_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54D2C462A0667B39_METHOD_1_102A1038C38883F3_OFFSET))(this);
	}

	::System::Void Method_1_8181F821B792EE80(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_54D2C462A0667B39_METHOD_1_8181F821B792EE80_OFFSET))(this, a1, a2);
	}
};
