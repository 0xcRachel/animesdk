#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EAF7984A8FAD6BE4;
namespace System { template <typename T> class Action_1; }

#define CLASS_4_1A2D0FECB1336F23___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10FDE2D0)
#define CLASS_4_1A2D0FECB1336F23___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10FDE300)
#define CLASS_4_1A2D0FECB1336F23___C__POSTINIT_B__7_0_OFFSET UNITYSDK_OFFSET(0x10FDE310)
#define CLASS_4_1A2D0FECB1336F23___C__POSTINIT_B__7_1_OFFSET UNITYSDK_OFFSET(0x10FDE320)

inline static constexpr unsigned int Class_4_1A2D0FECB1336F23___c_TypeDefinitionIndex = 39071;

class Class_4_1A2D0FECB1336F23___c : public ::System::Object
{
public:
	static ::Class_4_1A2D0FECB1336F23___c** StaticGet___9()
	{
		return (::Class_4_1A2D0FECB1336F23___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_1A2D0FECB1336F23___c_TypeDefinitionIndex)->GetStaticField(0x392D0);
	}
	static ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>** StaticGet___9__7_0()
	{
		return (::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_1A2D0FECB1336F23___c_TypeDefinitionIndex)->GetStaticField(0x392D8);
	}
	static ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>** StaticGet___9__7_1()
	{
		return (::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_1A2D0FECB1336F23___c_TypeDefinitionIndex)->GetStaticField(0x392E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_1A2D0FECB1336F23___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1A2D0FECB1336F23___C__CTOR_OFFSET))(this);
	}

	::System::Void _PostInit_b__7_0(::Class_1_EAF7984A8FAD6BE4* node)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_4_1A2D0FECB1336F23___C__POSTINIT_B__7_0_OFFSET))(this, node);
	}

	::System::Void _PostInit_b__7_1(::Class_1_EAF7984A8FAD6BE4* node)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_4_1A2D0FECB1336F23___C__POSTINIT_B__7_1_OFFSET))(this, node);
	}
};
