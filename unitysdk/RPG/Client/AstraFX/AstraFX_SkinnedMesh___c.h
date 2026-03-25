#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AstraFX/AstraFX_SkinnedMesh_SkinnedMeshBinder.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::AstraFX { class AstraFX_SkinnedMesh_PassSettingByMesh; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x90F15D0)
#define RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x90F1610)
#define RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH___C__RESETSIMULATIONSTATE_B__5_0_OFFSET UNITYSDK_OFFSET(0x90F1620)
#define RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH___C__RESETSIMULATIONSTATE_B__5_1_OFFSET UNITYSDK_OFFSET(0x90F1740)

namespace RPG::Client::AstraFX
{
	inline static constexpr unsigned int AstraFX_SkinnedMesh___c_TypeDefinitionIndex = 60409;

	class AstraFX_SkinnedMesh___c : public ::System::Object
	{
	public:
		static ::RPG::Client::AstraFX::AstraFX_SkinnedMesh___c** StaticGet___9()
		{
			return (::RPG::Client::AstraFX::AstraFX_SkinnedMesh___c**)Il2CppClass::FromTypeDefinitionIndex(AstraFX_SkinnedMesh___c_TypeDefinitionIndex)->GetStaticField(0x43940);
		}
		static ::System::Func_2<::RPG::Client::AstraFX::AstraFX_SkinnedMesh_PassSettingByMesh*, ::System::Boolean>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::RPG::Client::AstraFX::AstraFX_SkinnedMesh_PassSettingByMesh*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AstraFX_SkinnedMesh___c_TypeDefinitionIndex)->GetStaticField(0x43948);
		}
		static ::System::Func_2<::RPG::Client::AstraFX::AstraFX_SkinnedMesh_SkinnedMeshBinder, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::AstraFX::AstraFX_SkinnedMesh_SkinnedMeshBinder, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AstraFX_SkinnedMesh___c_TypeDefinitionIndex)->GetStaticField(0x43950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _ResetSimulationState_b__5_0(::RPG::Client::AstraFX::AstraFX_SkinnedMesh_SkinnedMeshBinder binder)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AstraFX::AstraFX_SkinnedMesh_SkinnedMeshBinder))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH___C__RESETSIMULATIONSTATE_B__5_0_OFFSET))(this, binder);
		}

		::System::Boolean _ResetSimulationState_b__5_1(::RPG::Client::AstraFX::AstraFX_SkinnedMesh_PassSettingByMesh* passSettings)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AstraFX::AstraFX_SkinnedMesh_PassSettingByMesh*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH___C__RESETSIMULATIONSTATE_B__5_1_OFFSET))(this, passSettings);
		}
	};
}
