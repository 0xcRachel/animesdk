#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_1_5EBE290801EA4DF2;
class Class_1_E105E8A7A7654142;
class Class_2_9D4DD2F4235F8658;
namespace RPG::GameCore { class TransformComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C6C3225495E5A2D1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD4DC2B0)
#define CLASS_2_C6C3225495E5A2D1_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xD4DD3B0)
#define CLASS_2_C6C3225495E5A2D1_METHOD_2_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0xD4DD2C0)
#define CLASS_2_C6C3225495E5A2D1_METHOD_2_A4FC9423DE081646_OFFSET UNITYSDK_OFFSET(0xD4DD0C0)
#define CLASS_2_C6C3225495E5A2D1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD4DD360)
#define CLASS_2_C6C3225495E5A2D1_METHOD_2_EC61075536D10822_OFFSET UNITYSDK_OFFSET(0xD4DD030)
#define CLASS_2_C6C3225495E5A2D1_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xD4DD3A0)
#define CLASS_2_C6C3225495E5A2D1_METHOD_2_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0xD4DC560)
#define CLASS_2_C6C3225495E5A2D1_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xD4DCF50)
#define CLASS_2_C6C3225495E5A2D1_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xD4DCFC0)
#define CLASS_2_C6C3225495E5A2D1_TICK_OFFSET UNITYSDK_OFFSET(0xD4DC8B0)
#define CLASS_2_C6C3225495E5A2D1__CCTOR_OFFSET UNITYSDK_OFFSET(0xD4DD420)
#define CLASS_2_C6C3225495E5A2D1__CTOR_OFFSET UNITYSDK_OFFSET(0xD4DD3C0)
#define CLASS_2_C6C3225495E5A2D1___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xD4DD440)

inline static constexpr unsigned int Class_2_C6C3225495E5A2D1_TypeDefinitionIndex = 48093;

class Class_2_C6C3225495E5A2D1 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Single* StaticGet_Field_2_9()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C6C3225495E5A2D1_TypeDefinitionIndex)->GetStaticField(0x11C30);
	}
	static ::System::Single* StaticGet_Field_2_8()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C6C3225495E5A2D1_TypeDefinitionIndex)->GetStaticField(0x11C34);
	}
	::System::Collections::Generic::List_1<::Class_1_5EBE290801EA4DF2*>* Field_2_4; // 0x18
	::Class_1_E105E8A7A7654142* Field_2_7; // 0x20
	::RPG::GameCore::TransformComponent* Field_2_0; // 0x28
	::Class_2_9D4DD2F4235F8658* Field_2_1; // 0x30
	::System::Collections::Generic::List_1<::Class_1_E105E8A7A7654142*>* Field_2_5; // 0x38
	::System::Boolean Field_2_6; // 0x40
	::System::Boolean Field_2_3; // 0x41
	::System::Boolean Field_2_2; // 0x42

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6C3225495E5A2D1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C6C3225495E5A2D1__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6C3225495E5A2D1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6C3225495E5A2D1_METHOD_2_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C6C3225495E5A2D1_TICK_OFFSET))(this, a1);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6C3225495E5A2D1_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6C3225495E5A2D1_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void Method_2_EC61075536D10822(::Class_1_5EBE290801EA4DF2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5EBE290801EA4DF2*))((::PBYTE)hIl2Cpp + CLASS_2_C6C3225495E5A2D1_METHOD_2_EC61075536D10822_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A4FC9423DE081646(::Class_1_5EBE290801EA4DF2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5EBE290801EA4DF2*))((::PBYTE)hIl2Cpp + CLASS_2_C6C3225495E5A2D1_METHOD_2_A4FC9423DE081646_OFFSET))(this, a1);
	}

	::System::Void Method_2_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6C3225495E5A2D1_METHOD_2_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6C3225495E5A2D1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6C3225495E5A2D1_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_1_E105E8A7A7654142* Method_2_24748FC20F375725()
	{
		return ((::Class_1_E105E8A7A7654142*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6C3225495E5A2D1_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C6C3225495E5A2D1___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
