#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_787;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_2B7BD8F617A0307D_CLASS_1_3A90A2289AD141A9___C__ALLBUTTONS_B__27_0_OFFSET UNITYSDK_OFFSET(0x8682BF0)
#define CLASS_2_2B7BD8F617A0307D_CLASS_1_3A90A2289AD141A9___C__BUTTONS_B__25_0_OFFSET UNITYSDK_OFFSET(0x8682BE0)
#define CLASS_2_2B7BD8F617A0307D_CLASS_1_3A90A2289AD141A9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8682BA0)
#define CLASS_2_2B7BD8F617A0307D_CLASS_1_3A90A2289AD141A9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8682BD0)
#define CLASS_2_2B7BD8F617A0307D_CLASS_1_3A90A2289AD141A9___C__GETALLACTIVEBUTTONS_B__43_0_OFFSET UNITYSDK_OFFSET(0x8682C00)

inline static constexpr unsigned int Class_2_2B7BD8F617A0307D_Class_1_3A90A2289AD141A9___c_TypeDefinitionIndex = 57281;

class Class_2_2B7BD8F617A0307D_Class_1_3A90A2289AD141A9___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_0_16E4307DCC419505_787*, ::System::Boolean>** StaticGet___9__27_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_787*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B7BD8F617A0307D_Class_1_3A90A2289AD141A9___c_TypeDefinitionIndex)->GetStaticField(0x46EB0);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_787*, ::System::Boolean>** StaticGet___9__25_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_787*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B7BD8F617A0307D_Class_1_3A90A2289AD141A9___c_TypeDefinitionIndex)->GetStaticField(0x46EB8);
	}
	static ::Class_2_2B7BD8F617A0307D_Class_1_3A90A2289AD141A9___c** StaticGet___9()
	{
		return (::Class_2_2B7BD8F617A0307D_Class_1_3A90A2289AD141A9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B7BD8F617A0307D_Class_1_3A90A2289AD141A9___c_TypeDefinitionIndex)->GetStaticField(0x46EC0);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_787*, ::System::Boolean>** StaticGet___9__43_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_787*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B7BD8F617A0307D_Class_1_3A90A2289AD141A9___c_TypeDefinitionIndex)->GetStaticField(0x46EC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2B7BD8F617A0307D_CLASS_1_3A90A2289AD141A9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7BD8F617A0307D_CLASS_1_3A90A2289AD141A9___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _Buttons_b__25_0(::Class_0_16E4307DCC419505_787* btn)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_787*))((::PBYTE)hIl2Cpp + CLASS_2_2B7BD8F617A0307D_CLASS_1_3A90A2289AD141A9___C__BUTTONS_B__25_0_OFFSET))(this, btn);
	}

	::System::Boolean _AllButtons_b__27_0(::Class_0_16E4307DCC419505_787* btn)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_787*))((::PBYTE)hIl2Cpp + CLASS_2_2B7BD8F617A0307D_CLASS_1_3A90A2289AD141A9___C__ALLBUTTONS_B__27_0_OFFSET))(this, btn);
	}

	::System::Boolean _GetAllActiveButtons_b__43_0(::Class_0_16E4307DCC419505_787* btn)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_787*))((::PBYTE)hIl2Cpp + CLASS_2_2B7BD8F617A0307D_CLASS_1_3A90A2289AD141A9___C__GETALLACTIVEBUTTONS_B__43_0_OFFSET))(this, btn);
	}
};
