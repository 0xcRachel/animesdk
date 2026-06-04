#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class SceneLightVolume;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_2944920F3503A0F1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x154F3D70)
#define CLASS_3_2944920F3503A0F1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x154F3DA0)
#define CLASS_3_2944920F3503A0F1___C__GETACTIVESCENELIGHTVOLUME_B__52_0_OFFSET UNITYSDK_OFFSET(0x154F3DB0)
#define CLASS_3_2944920F3503A0F1___C__GETACTIVESCENELIGHTVOLUME_B__53_0_OFFSET UNITYSDK_OFFSET(0x154F3DF0)

inline static constexpr unsigned int Class_3_2944920F3503A0F1___c_TypeDefinitionIndex = 46524;

class Class_3_2944920F3503A0F1___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::SceneLightVolume*>** StaticGet___9__52_0()
	{
		return (::System::Comparison_1<::SceneLightVolume*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2944920F3503A0F1___c_TypeDefinitionIndex)->GetStaticField(0x3D9B0);
	}
	static ::Class_3_2944920F3503A0F1___c** StaticGet___9()
	{
		return (::Class_3_2944920F3503A0F1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2944920F3503A0F1___c_TypeDefinitionIndex)->GetStaticField(0x3D9B8);
	}
	static ::System::Comparison_1<::SceneLightVolume*>** StaticGet___9__53_0()
	{
		return (::System::Comparison_1<::SceneLightVolume*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2944920F3503A0F1___c_TypeDefinitionIndex)->GetStaticField(0x3D9C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2944920F3503A0F1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2944920F3503A0F1___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetActiveSceneLightVolume_b__52_0(::SceneLightVolume* a1, ::SceneLightVolume* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::SceneLightVolume*, ::SceneLightVolume*))((::PBYTE)hIl2Cpp + CLASS_3_2944920F3503A0F1___C__GETACTIVESCENELIGHTVOLUME_B__52_0_OFFSET))(this, a1, a2);
	}

	::System::Int32 _GetActiveSceneLightVolume_b__53_0(::SceneLightVolume* a1, ::SceneLightVolume* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::SceneLightVolume*, ::SceneLightVolume*))((::PBYTE)hIl2Cpp + CLASS_3_2944920F3503A0F1___C__GETACTIVESCENELIGHTVOLUME_B__53_0_OFFSET))(this, a1, a2);
	}
};
