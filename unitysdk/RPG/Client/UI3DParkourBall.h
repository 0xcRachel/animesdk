#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0B84ADD7815498A2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginCharaMaterialBlock; }
namespace RPG::Client { class ParkourBall; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UI3DPARKOURBALL_CREATE_OFFSET UNITYSDK_OFFSET(0xA1848C0)
#define RPG_CLIENT_UI3DPARKOURBALL_GET__ISSPRCIALCAR_OFFSET UNITYSDK_OFFSET(0xA1859C0)
#define RPG_CLIENT_UI3DPARKOURBALL_INIT_OFFSET UNITYSDK_OFFSET(0xA184970)
#define RPG_CLIENT_UI3DPARKOURBALL_LOADMODEL_OFFSET UNITYSDK_OFFSET(0xA184A50)
#define RPG_CLIENT_UI3DPARKOURBALL_RELEASEMODEL_OFFSET UNITYSDK_OFFSET(0xA184F50)
#define RPG_CLIENT_UI3DPARKOURBALL_REMOVE_OFFSET UNITYSDK_OFFSET(0xA185A40)
#define RPG_CLIENT_UI3DPARKOURBALL__CTOR_OFFSET UNITYSDK_OFFSET(0xA184880)
#define RPG_CLIENT_UI3DPARKOURBALL__DISPOSEENTITY_OFFSET UNITYSDK_OFFSET(0xA184B40)
#define RPG_CLIENT_UI3DPARKOURBALL__FIRECAREFFECT_OFFSET UNITYSDK_OFFSET(0xA185090)
#define RPG_CLIENT_UI3DPARKOURBALL__FIREEFFECT_OFFSET UNITYSDK_OFFSET(0xA185540)
#define RPG_CLIENT_UI3DPARKOURBALL__GETENTITY_OFFSET UNITYSDK_OFFSET(0xA184C50)
#define RPG_CLIENT_UI3DPARKOURBALL__ONMODELLOADED_OFFSET UNITYSDK_OFFSET(0xA184DA0)
#define RPG_CLIENT_UI3DPARKOURBALL__ONTICK_OFFSET UNITYSDK_OFFSET(0xA185830)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DParkourBall_TypeDefinitionIndex = 49084;

	class UI3DParkourBall : public ::System::Object
	{
	public:
		::RPG::Client::ParkourBall* _CurrentData; // 0x10
		::RPG::Client::MonoEffectPluginCharaMaterialBlock* _Diffuse_MaterialBlock; // 0x18
		::RPG::GameCore::GameEntity* _Entity; // 0x20
		::System::String* _EffectPath; // 0x28
		::UnityEngine::Transform* _Root; // 0x30
		::RPG::Client::MonoEffectPluginCharaMaterialBlock* _R_MaterialBlock; // 0x38
		::RPG::Client::MonoEffectPluginCharaMaterialBlock* _F_MaterialBlock; // 0x40
		::RPG::Client::MonoEffectPluginCharaMaterialBlock* _S_MaterialBlock; // 0x48
		::RPG::GameCore::CharacterModelComponent* _ModelCmpt; // 0x50
		::Struct_2_0B84ADD7815498A2 _Instance; // 0x58
		::RPG::Client::MonoEffectPluginCharaMaterialBlock* _Reflectio_MaterialBlock; // 0x68
		::System::UInt32 _SprcialCarID; // 0x70
		::System::Int32 _TimerID; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::UI3DParkourBall* Create(::UnityEngine::Transform* root)
		{
			return ((::RPG::Client::UI3DParkourBall*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL_CREATE_OFFSET))(root);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL_INIT_OFFSET))(this);
		}

		::System::Void LoadModel(::RPG::Client::ParkourBall* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourBall*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL_LOADMODEL_OFFSET))(this, data);
		}

		::System::Void ReleaseModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL_RELEASEMODEL_OFFSET))(this);
		}

		::System::Void _DisposeEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL__DISPOSEENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* _GetEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL__GETENTITY_OFFSET))(this);
		}

		::System::Void _OnModelLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL__ONMODELLOADED_OFFSET))(this);
		}

		::System::Void _FireCarEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL__FIRECAREFFECT_OFFSET))(this);
		}

		::System::Void _OnTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL__ONTICK_OFFSET))(this);
		}

		::RPG::Client::MonoEffect* _FireEffect()
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL__FIREEFFECT_OFFSET))(this);
		}

		::System::Void Remove(::System::String* key, ::System::Boolean fadeOut)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL_REMOVE_OFFSET))(this, key, fadeOut);
		}

		::System::Boolean get__IsSprcialCar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL_GET__ISSPRCIALCAR_OFFSET))(this);
		}
	};
}
