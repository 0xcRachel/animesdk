#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7F2ABDAFDCEC0543;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_7F2ABDAFDCEC0543___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B64FC0)
#define CLASS_1_7F2ABDAFDCEC0543___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16B65000)
#define CLASS_1_7F2ABDAFDCEC0543___C__GET__FIXEDUPDATEACTION_B__28_0_OFFSET UNITYSDK_OFFSET(0x16B65010)
#define CLASS_1_7F2ABDAFDCEC0543___C__GET__LATEFIXEDUPDATEACTION_B__30_0_OFFSET UNITYSDK_OFFSET(0x16B65030)

inline static constexpr unsigned int Class_1_7F2ABDAFDCEC0543___c_TypeDefinitionIndex = 71462;

class Class_1_7F2ABDAFDCEC0543___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7F2ABDAFDCEC0543*>** StaticGet___9__28_0()
	{
		return (::System::Action_1<::Class_1_7F2ABDAFDCEC0543*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F2ABDAFDCEC0543___c_TypeDefinitionIndex)->GetStaticField(0x60BE0);
	}
	static ::Class_1_7F2ABDAFDCEC0543___c** StaticGet___9()
	{
		return (::Class_1_7F2ABDAFDCEC0543___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F2ABDAFDCEC0543___c_TypeDefinitionIndex)->GetStaticField(0x60BE8);
	}
	static ::System::Action_1<::Class_1_7F2ABDAFDCEC0543*>** StaticGet___9__30_0()
	{
		return (::System::Action_1<::Class_1_7F2ABDAFDCEC0543*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F2ABDAFDCEC0543___c_TypeDefinitionIndex)->GetStaticField(0x60BF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7F2ABDAFDCEC0543___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F2ABDAFDCEC0543___C__CTOR_OFFSET))(this);
	}

	::System::Void _get__FixedUpdateAction_b__28_0(::Class_1_7F2ABDAFDCEC0543* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7F2ABDAFDCEC0543*))((::PBYTE)hIl2Cpp + CLASS_1_7F2ABDAFDCEC0543___C__GET__FIXEDUPDATEACTION_B__28_0_OFFSET))(this, a1);
	}

	::System::Void _get__LateFixedUpdateAction_b__30_0(::Class_1_7F2ABDAFDCEC0543* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7F2ABDAFDCEC0543*))((::PBYTE)hIl2Cpp + CLASS_1_7F2ABDAFDCEC0543___C__GET__LATEFIXEDUPDATEACTION_B__30_0_OFFSET))(this, a1);
	}
};
