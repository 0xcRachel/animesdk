#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_D9D2DA2BB37A3C3D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x116CF730)
#define CLASS_2_D9D2DA2BB37A3C3D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x116CF770)
#define CLASS_2_D9D2DA2BB37A3C3D___C___BUILDENTITIES_B__34_0_OFFSET UNITYSDK_OFFSET(0x116CF7F0)
#define CLASS_2_D9D2DA2BB37A3C3D___C___INITENV_B__19_0_OFFSET UNITYSDK_OFFSET(0x116CF790)
#define CLASS_2_D9D2DA2BB37A3C3D___C___ONENTITYASYNCLOADCOMPLETE_B__18_0_OFFSET UNITYSDK_OFFSET(0x116CF780)

inline static constexpr unsigned int Class_2_D9D2DA2BB37A3C3D___c_TypeDefinitionIndex = 48910;

class Class_2_D9D2DA2BB37A3C3D___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__18_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D9D2DA2BB37A3C3D___c_TypeDefinitionIndex)->GetStaticField(0x37590);
	}
	static ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate** StaticGet___9__19_0()
	{
		return (::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D9D2DA2BB37A3C3D___c_TypeDefinitionIndex)->GetStaticField(0x37598);
	}
	static ::System::Comparison_1<::RPG::GameCore::LittleGameEntityConfig*>** StaticGet___9__34_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::LittleGameEntityConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D9D2DA2BB37A3C3D___c_TypeDefinitionIndex)->GetStaticField(0x375A0);
	}
	static ::Class_2_D9D2DA2BB37A3C3D___c** StaticGet___9()
	{
		return (::Class_2_D9D2DA2BB37A3C3D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D9D2DA2BB37A3C3D___c_TypeDefinitionIndex)->GetStaticField(0x375A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnEntityAsyncLoadComplete_b__18_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___C___ONENTITYASYNCLOADCOMPLETE_B__18_0_OFFSET))(this);
	}

	::System::Void __InitEnv_b__19_0(::System::Object* _)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___C___INITENV_B__19_0_OFFSET))(this, _);
	}

	::System::Int32 __BuildEntities_b__34_0(::RPG::GameCore::LittleGameEntityConfig* lhs, ::RPG::GameCore::LittleGameEntityConfig* rhs)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___C___BUILDENTITIES_B__34_0_OFFSET))(this, lhs, rhs);
	}
};
