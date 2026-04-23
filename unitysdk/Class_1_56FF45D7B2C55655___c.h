#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }

#define CLASS_1_56FF45D7B2C55655___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x135BE590)
#define CLASS_1_56FF45D7B2C55655___C__CTOR_OFFSET UNITYSDK_OFFSET(0x135BE5C0)
#define CLASS_1_56FF45D7B2C55655___C__ENABLEENVPROFILE_B__58_0_OFFSET UNITYSDK_OFFSET(0x135BE5D0)

inline static constexpr unsigned int Class_1_56FF45D7B2C55655___c_TypeDefinitionIndex = 67986;

class Class_1_56FF45D7B2C55655___c : public ::System::Object
{
public:
	static ::Class_1_56FF45D7B2C55655___c** StaticGet___9()
	{
		return (::Class_1_56FF45D7B2C55655___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56FF45D7B2C55655___c_TypeDefinitionIndex)->GetStaticField(0x681F0);
	}
	static ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate** StaticGet___9__58_0()
	{
		return (::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56FF45D7B2C55655___c_TypeDefinitionIndex)->GetStaticField(0x681F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_56FF45D7B2C55655___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56FF45D7B2C55655___C__CTOR_OFFSET))(this);
	}

	::System::Void _EnableEnvProfile_b__58_0(::System::Object* _)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_56FF45D7B2C55655___C__ENABLEENVPROFILE_B__58_0_OFFSET))(this, _);
	}
};
