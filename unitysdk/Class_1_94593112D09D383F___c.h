#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_94593112D09D383F;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_94593112D09D383F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD88AA00)
#define CLASS_1_94593112D09D383F___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD88AA30)
#define CLASS_1_94593112D09D383F___C__GET__FIXEDUPDATEACTION_B__14_0_OFFSET UNITYSDK_OFFSET(0xD88AA40)
#define CLASS_1_94593112D09D383F___C__GET__LATEFIXEDUPDATEACTION_B__16_0_OFFSET UNITYSDK_OFFSET(0xD88AA60)

inline static constexpr unsigned int Class_1_94593112D09D383F___c_TypeDefinitionIndex = 60823;

class Class_1_94593112D09D383F___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_94593112D09D383F*>** StaticGet___9__16_0()
	{
		return (::System::Action_1<::Class_1_94593112D09D383F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94593112D09D383F___c_TypeDefinitionIndex)->GetStaticField(0x43670);
	}
	static ::Class_1_94593112D09D383F___c** StaticGet___9()
	{
		return (::Class_1_94593112D09D383F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94593112D09D383F___c_TypeDefinitionIndex)->GetStaticField(0x43678);
	}
	static ::System::Action_1<::Class_1_94593112D09D383F*>** StaticGet___9__14_0()
	{
		return (::System::Action_1<::Class_1_94593112D09D383F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94593112D09D383F___c_TypeDefinitionIndex)->GetStaticField(0x43680);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94593112D09D383F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94593112D09D383F___C__CTOR_OFFSET))(this);
	}

	::System::Void _get__FixedUpdateAction_b__14_0(::Class_1_94593112D09D383F* self)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_94593112D09D383F*))((::PBYTE)hIl2Cpp + CLASS_1_94593112D09D383F___C__GET__FIXEDUPDATEACTION_B__14_0_OFFSET))(this, self);
	}

	::System::Void _get__LateFixedUpdateAction_b__16_0(::Class_1_94593112D09D383F* self)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_94593112D09D383F*))((::PBYTE)hIl2Cpp + CLASS_1_94593112D09D383F___C__GET__LATEFIXEDUPDATEACTION_B__16_0_OFFSET))(this, self);
	}
};
