#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SealPoolManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelAreaManager; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY_CREATEPROXY_OFFSET UNITYSDK_OFFSET(0x1701DEF0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1701E790)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x1701DF60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY_RESUME_OFFSET UNITYSDK_OFFSET(0x1701F4C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY_SETDISPLAYMARBLESEALIDS_OFFSET UNITYSDK_OFFSET(0x1701EC20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY_STOP_OFFSET UNITYSDK_OFFSET(0x1701F460)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY__ACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x1701E620)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1701DEE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY__DEACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x1701EAC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY__GETENTITY_OFFSET UNITYSDK_OFFSET(0x1701EFA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY__ONMODELLOADED_OFFSET UNITYSDK_OFFSET(0x1701F110)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleSealPoolProxy_TypeDefinitionIndex = 68932;

	class MarbleSealPoolProxy : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelAreaManager* _LevelAreaMgr; // 0x10
		::RPG::Client::SealPoolManager* _Mgr; // 0x18
		::Il2CppArray<::RPG::GameCore::GameEntity*>* _SealEntitys; // 0x20
		::UnityEngine::GameObject* _PoolAsset; // 0x28
		::System::UInt32 _GroupID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityMarble::MarbleSealPoolProxy* CreateProxy()
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealPoolProxy*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY_CREATEPROXY_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void SetDisplayMarbleSealIDs(::System::Collections::Generic::IList_1<::System::UInt32>* marbleSealIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY_SETDISPLAYMARBLESEALIDS_OFFSET))(this, marbleSealIDs);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY_STOP_OFFSET))(this);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY_RESUME_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* _GetEntity(::System::Int32 index)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY__GETENTITY_OFFSET))(this, index);
		}

		::System::Void _OnModelLoaded(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY__ONMODELLOADED_OFFSET))(this, entity);
		}

		::System::Void _ActiveCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY__ACTIVECAMERA_OFFSET))(this);
		}

		::System::Void _DeactiveCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALPOOLPROXY__DEACTIVECAMERA_OFFSET))(this);
		}
	};
}
