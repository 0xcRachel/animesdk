#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_151B93D9C4BBDCA4;
class Class_1_1A2343058CCF3B5D;
class Class_1_75C90E178B164D38;
class Class_2_3547B9D7F2C7CCA9;

#define RPG_CLIENT_LITTLEGAMEMANAGER_CHECKIFCONTAINERCANBELOADED_OFFSET UNITYSDK_OFFSET(0x16538B10)
#define RPG_CLIENT_LITTLEGAMEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16538D00)
#define RPG_CLIENT_LITTLEGAMEMANAGER_GETCURRENTINSTANCE_OFFSET UNITYSDK_OFFSET(0x165393C0)
#define RPG_CLIENT_LITTLEGAMEMANAGER_GET_ASSETLOADER_OFFSET UNITYSDK_OFFSET(0x165394B0)
#define RPG_CLIENT_LITTLEGAMEMANAGER_HASCURRENTGAME_OFFSET UNITYSDK_OFFSET(0x16539370)
#define RPG_CLIENT_LITTLEGAMEMANAGER_ISCONTAINERLOADED_OFFSET UNITYSDK_OFFSET(0x16538A30)
#define RPG_CLIENT_LITTLEGAMEMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16539120)
#define RPG_CLIENT_LITTLEGAMEMANAGER_LOADCONTAINER_OFFSET UNITYSDK_OFFSET(0x165388F0)
#define RPG_CLIENT_LITTLEGAMEMANAGER_LOADONSTEP2_OFFSET UNITYSDK_OFFSET(0x16538EA0)
#define RPG_CLIENT_LITTLEGAMEMANAGER_SET_ASSETLOADER_OFFSET UNITYSDK_OFFSET(0x165394C0)
#define RPG_CLIENT_LITTLEGAMEMANAGER_STOPCURRENTGAME_OFFSET UNITYSDK_OFFSET(0x16539320)
#define RPG_CLIENT_LITTLEGAMEMANAGER_STOPGAME_OFFSET UNITYSDK_OFFSET(0x165392A0)
#define RPG_CLIENT_LITTLEGAMEMANAGER_UNLOADCONTAINER_OFFSET UNITYSDK_OFFSET(0x16538990)
#define RPG_CLIENT_LITTLEGAMEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16538EF0)
#define RPG_CLIENT_LITTLEGAMEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x16538CD0)
#define RPG_CLIENT_LITTLEGAMEMANAGER__DISPOSELEVELINSTANCES_OFFSET UNITYSDK_OFFSET(0x16538C30)
#define RPG_CLIENT_LITTLEGAMEMANAGER__DISPOSESINGLEINSTANCE_OFFSET UNITYSDK_OFFSET(0x16538E30)
#define RPG_CLIENT_LITTLEGAMEMANAGER__INITLEVELINSTANCES_OFFSET UNITYSDK_OFFSET(0x16538B80)
#define RPG_CLIENT_LITTLEGAMEMANAGER__LATEUPDATESINGLEINSTANCE_OFFSET UNITYSDK_OFFSET(0x165391F0)
#define RPG_CLIENT_LITTLEGAMEMANAGER__PENDGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x16539460)
#define RPG_CLIENT_LITTLEGAMEMANAGER__TRYSTARTPENDINGINSTANCE_OFFSET UNITYSDK_OFFSET(0x16539400)
#define RPG_CLIENT_LITTLEGAMEMANAGER__UPDATESINGLEINSTANCE_OFFSET UNITYSDK_OFFSET(0x16538F50)

namespace RPG::Client
{
	inline static constexpr unsigned int LittleGameManager_TypeDefinitionIndex = 55850;

	class LittleGameManager : public ::System::Object
	{
	public:
		::Class_1_1A2343058CCF3B5D* _LevelInstanceManager; // 0x10
		::Class_1_151B93D9C4BBDCA4* _PendingInstance; // 0x18
		::Class_1_151B93D9C4BBDCA4* _CurrentInstance; // 0x20
		::Class_2_3547B9D7F2C7CCA9* _AssetLoader_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void LoadContainer(::System::UInt32 groupID, ::System::UInt32 containerID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_LOADCONTAINER_OFFSET))(this, groupID, containerID);
		}

		::System::Void UnloadContainer(::System::UInt32 groupID, ::System::UInt32 containerID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_UNLOADCONTAINER_OFFSET))(this, groupID, containerID);
		}

		::System::Boolean IsContainerLoaded(::System::UInt32 groupID, ::System::UInt32 containerID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_ISCONTAINERLOADED_OFFSET))(this, groupID, containerID);
		}

		::System::Boolean CheckIfContainerCanBeLoaded(::System::UInt32 groupID, ::System::UInt32 containerID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_CHECKIFCONTAINERCANBELOADED_OFFSET))(this, groupID, containerID);
		}

		::System::Void _InitLevelInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__INITLEVELINSTANCES_OFFSET))(this);
		}

		::System::Void _DisposeLevelInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__DISPOSELEVELINSTANCES_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void LoadOnStep2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_LOADONSTEP2_OFFSET))(this);
		}

		::System::Void Update(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_UPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void StopGame(::Class_1_151B93D9C4BBDCA4* gameInstance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_151B93D9C4BBDCA4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_STOPGAME_OFFSET))(this, gameInstance);
		}

		::System::Void StopCurrentGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_STOPCURRENTGAME_OFFSET))(this);
		}

		::System::Boolean HasCurrentGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_HASCURRENTGAME_OFFSET))(this);
		}

		::Class_1_151B93D9C4BBDCA4* GetCurrentInstance()
		{
			return ((::Class_1_151B93D9C4BBDCA4*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_GETCURRENTINSTANCE_OFFSET))(this);
		}

		::System::Void _UpdateSingleInstance(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__UPDATESINGLEINSTANCE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _LateUpdateSingleInstance(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__LATEUPDATESINGLEINSTANCE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _DisposeSingleInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__DISPOSESINGLEINSTANCE_OFFSET))(this);
		}

		::System::Void _PendGameInstance(::Class_1_151B93D9C4BBDCA4* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_151B93D9C4BBDCA4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__PENDGAMEINSTANCE_OFFSET))(this, instance);
		}

		::System::Void _TryStartPendingInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__TRYSTARTPENDINGINSTANCE_OFFSET))(this);
		}

		::Class_2_3547B9D7F2C7CCA9* get_AssetLoader()
		{
			return ((::Class_2_3547B9D7F2C7CCA9*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_GET_ASSETLOADER_OFFSET))(this);
		}

		::System::Void set_AssetLoader(::Class_2_3547B9D7F2C7CCA9* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_3547B9D7F2C7CCA9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_SET_ASSETLOADER_OFFSET))(this, value);
		}
	};
}
