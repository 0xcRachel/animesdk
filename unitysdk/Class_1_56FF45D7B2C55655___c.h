#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace System { class Action; }

#define CLASS_1_56FF45D7B2C55655___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11059730)
#define CLASS_1_56FF45D7B2C55655___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11059760)
#define CLASS_1_56FF45D7B2C55655___C__ENABLEENVPROFILE_B__52_0_OFFSET UNITYSDK_OFFSET(0x11059810)
#define CLASS_1_56FF45D7B2C55655___C__LOADAREA_B__2_0_OFFSET UNITYSDK_OFFSET(0x11059770)
#define CLASS_1_56FF45D7B2C55655___C__LOADAREA_B__2_1_OFFSET UNITYSDK_OFFSET(0x110597C0)

inline static constexpr unsigned int Class_1_56FF45D7B2C55655___c_TypeDefinitionIndex = 58807;

class Class_1_56FF45D7B2C55655___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__2_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56FF45D7B2C55655___c_TypeDefinitionIndex)->GetStaticField(0x3DBB0);
	}
	static ::Class_1_56FF45D7B2C55655___c** StaticGet___9()
	{
		return (::Class_1_56FF45D7B2C55655___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56FF45D7B2C55655___c_TypeDefinitionIndex)->GetStaticField(0x3DBB8);
	}
	static ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate** StaticGet___9__52_0()
	{
		return (::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56FF45D7B2C55655___c_TypeDefinitionIndex)->GetStaticField(0x3DBC0);
	}
	static ::System::Action** StaticGet___9__2_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56FF45D7B2C55655___c_TypeDefinitionIndex)->GetStaticField(0x3DBC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_56FF45D7B2C55655___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56FF45D7B2C55655___C__CTOR_OFFSET))(this);
	}

	::System::Void _LoadArea_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56FF45D7B2C55655___C__LOADAREA_B__2_0_OFFSET))(this);
	}

	::System::Void _LoadArea_b__2_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56FF45D7B2C55655___C__LOADAREA_B__2_1_OFFSET))(this);
	}

	::System::Void _EnableEnvProfile_b__52_0(::System::Object* _)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_56FF45D7B2C55655___C__ENABLEENVPROFILE_B__52_0_OFFSET))(this, _);
	}
};
