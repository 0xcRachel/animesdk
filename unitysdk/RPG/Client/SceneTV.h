#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_B58C65FFAAC2F95C;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_SCENETV_AWAKE_OFFSET UNITYSDK_OFFSET(0x9F583D0)
#define RPG_CLIENT_SCENETV_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F58600)
#define RPG_CLIENT_SCENETV_ONARTNODELOADED_OFFSET UNITYSDK_OFFSET(0x9F58710)
#define RPG_CLIENT_SCENETV_ONARTNODEUNLOADED_OFFSET UNITYSDK_OFFSET(0x9F58760)
#define RPG_CLIENT_SCENETV_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9F58650)
#define RPG_CLIENT_SCENETV_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9F584E0)
#define RPG_CLIENT_SCENETV_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9F58420)
#define RPG_CLIENT_SCENETV_SETONWERENTITY_OFFSET UNITYSDK_OFFSET(0x9F582F0)
#define RPG_CLIENT_SCENETV_SETPROGRAMGROUPID_OFFSET UNITYSDK_OFFSET(0x9F58370)
#define RPG_CLIENT_SCENETV_START_OFFSET UNITYSDK_OFFSET(0x9F58560)
#define RPG_CLIENT_SCENETV_UPDATE_OFFSET UNITYSDK_OFFSET(0x9F586C0)
#define RPG_CLIENT_SCENETV__CTOR_OFFSET UNITYSDK_OFFSET(0x9F587E0)

namespace RPG::Client
{
	inline static constexpr unsigned int SceneTV_TypeDefinitionIndex = 54641;

	class SceneTV : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_2_B58C65FFAAC2F95C* Field_5_0; // 0x18
		::System::String* KeyPerProp; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV__CTOR_OFFSET))(this);
		}

		::System::Void SetOnwerEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_SETONWERENTITY_OFFSET))(this, a1);
		}

		::System::Void SetProgramGroupID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_SETPROGRAMGROUPID_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_ONDISABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_START_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_DISPOSE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_UPDATE_OFFSET))(this);
		}

		::System::Void OnArtNodeLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_ONARTNODELOADED_OFFSET))(this);
		}

		::System::Void OnArtNodeUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETV_ONARTNODEUNLOADED_OFFSET))(this);
		}
	};
}
