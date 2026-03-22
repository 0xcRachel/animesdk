#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class SceneLightVolume;
namespace System { template <typename T> class Comparison_1; }

#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE4B3540)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE4B3580)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY___C__GETACTIVESCENELIGHTVOLUME_B__28_0_OFFSET UNITYSDK_OFFSET(0xE4B3590)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY___C__GETACTIVESCENELIGHTVOLUME_B__28_1_OFFSET UNITYSDK_OFFSET(0xE4B35D0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroBlockDataTransProperty___c_TypeDefinitionIndex = 39301;

	class EnviroBlockDataTransProperty___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::SceneLightVolume*>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::SceneLightVolume*>**)Il2CppClass::FromTypeDefinitionIndex(EnviroBlockDataTransProperty___c_TypeDefinitionIndex)->GetStaticField(0x44280);
		}
		static ::System::Comparison_1<::SceneLightVolume*>** StaticGet___9__28_1()
		{
			return (::System::Comparison_1<::SceneLightVolume*>**)Il2CppClass::FromTypeDefinitionIndex(EnviroBlockDataTransProperty___c_TypeDefinitionIndex)->GetStaticField(0x44288);
		}
		static ::EnviromentSystem::EnviroBlockDataTransProperty___c** StaticGet___9()
		{
			return (::EnviromentSystem::EnviroBlockDataTransProperty___c**)Il2CppClass::FromTypeDefinitionIndex(EnviroBlockDataTransProperty___c_TypeDefinitionIndex)->GetStaticField(0x44290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetActiveSceneLightVolume_b__28_0(::SceneLightVolume* a, ::SceneLightVolume* b)
		{
			return ((::System::Int32(*)(::PVOID, ::SceneLightVolume*, ::SceneLightVolume*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY___C__GETACTIVESCENELIGHTVOLUME_B__28_0_OFFSET))(this, a, b);
		}

		::System::Int32 _GetActiveSceneLightVolume_b__28_1(::SceneLightVolume* a, ::SceneLightVolume* b)
		{
			return ((::System::Int32(*)(::PVOID, ::SceneLightVolume*, ::SceneLightVolume*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY___C__GETACTIVESCENELIGHTVOLUME_B__28_1_OFFSET))(this, a, b);
		}
	};
}
