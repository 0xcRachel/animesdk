#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_36FB247F31EFD2DE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_347;
class Class_1_004034A1FAAF468A;
namespace RPG::Client { class ElfCell; }
namespace RPG::Client { class ElfFarm; }
namespace RPG::Client { class ElfField; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class ElfRestaurantGameConfig; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_CREATELOCALENTITY_OFFSET UNITYSDK_OFFSET(0x9105880)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9104E40)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_FIREEFFECTASYNC_OFFSET UNITYSDK_OFFSET(0x9104ED0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_FIREEFFECT_OFFSET UNITYSDK_OFFSET(0x9105790)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_FOCUSFARM_OFFSET UNITYSDK_OFFSET(0x9105000)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GETCELL_OFFSET UNITYSDK_OFFSET(0x9105540)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GETFARM_OFFSET UNITYSDK_OFFSET(0x9105700)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GETFIELD_OFFSET UNITYSDK_OFFSET(0x91053A0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GETFOCUSFARM_OFFSET UNITYSDK_OFFSET(0x9105360)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9105940)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x9103720)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_ONPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x9104E80)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_REFRESHENTITIES_OFFSET UNITYSDK_OFFSET(0x91058F0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_RUNTIMEDISPOSE_OFFSET UNITYSDK_OFFSET(0x9104210)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_RUNTIMERESET_OFFSET UNITYSDK_OFFSET(0x9103AC0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9105950)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_UNFOCUSFARM_OFFSET UNITYSDK_OFFSET(0x9105220)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_UNINIT_OFFSET UNITYSDK_OFFSET(0x9103FF0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9106AA0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9106A40)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__INITFARMEMPLOYEE_OFFSET UNITYSDK_OFFSET(0x91048A0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__INITFARMS_OFFSET UNITYSDK_OFFSET(0x91045D0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__MEMORYPUZZLEBEGINDATAREPORT_OFFSET UNITYSDK_OFFSET(0x9106730)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__MEMORYPUZZLEENDDATAREPORT_OFFSET UNITYSDK_OFFSET(0x91068B0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONARTMODELLOAD_OFFSET UNITYSDK_OFFSET(0x91065F0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONARTMODELUNLOAD_OFFSET UNITYSDK_OFFSET(0x91066A0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONELFEMPLOYEELEVELUPFINISH_OFFSET UNITYSDK_OFFSET(0x9106350)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONELFFARMCELLUPDATE_OFFSET UNITYSDK_OFFSET(0x9106410)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONGROUPEVENT_OFFSET UNITYSDK_OFFSET(0x91065A0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x91063A0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__TRIGGERENTITYEVENT_OFFSET UNITYSDK_OFFSET(0x9106460)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__TRIGGERGROUPEVENT_OFFSET UNITYSDK_OFFSET(0x9106500)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UNINITFARMS_OFFSET UNITYSDK_OFFSET(0x9104CD0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UPDATEARTFARMS_OFFSET UNITYSDK_OFFSET(0x9104370)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UPDATEFARMCROPSBYPHASE_OFFSET UNITYSDK_OFFSET(0x9104920)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UPDATEFARMEMPLOYEES_OFFSET UNITYSDK_OFFSET(0x9105C70)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UPDATEFARMS_OFFSET UNITYSDK_OFFSET(0x9105A40)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFarmGameplayManager_TypeDefinitionIndex = 54519;

	class ElfFarmGameplayManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_ElfFarmBoardPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfFarmGameplayManager_TypeDefinitionIndex)->GetStaticField(0x3CB80);
		}
		static ::System::String** StaticGet_CropsEffectPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfFarmGameplayManager_TypeDefinitionIndex)->GetStaticField(0x3CB88);
		}
		static ::RPG::Client::ElfFarmGameplayManager** StaticGet_CurrentManager()
		{
			return (::RPG::Client::ElfFarmGameplayManager**)Il2CppClass::FromTypeDefinitionIndex(ElfFarmGameplayManager_TypeDefinitionIndex)->GetStaticField(0x3CB90);
		}
		static ::System::String** StaticGet_FCV_IsPlantShow()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfFarmGameplayManager_TypeDefinitionIndex)->GetStaticField(0x3CB98);
		}
		static ::System::String** StaticGet__Gamekey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfFarmGameplayManager_TypeDefinitionIndex)->GetStaticField(0x3CBA0);
		}
		::RPG::GameCore::GameEntity* _OwnerGroupEntity; // 0x10
		::RPG::Client::RuntimeGroupManager* _RuntimeGroupRef; // 0x18
		::RPG::Client::MonoEffectManager* _EffectManagerRef; // 0x20
		::RPG::Client::TwoKeyDictionary_3<::System::Int32, ::System::Int32, ::UnityEngine::Transform*>* _ArtFarmFieldRootMap; // 0x28
		::System::String* MatureCropsEffectPath; // 0x30
		::RPG::GameCore::EventManager* _EventManagerRef; // 0x38
		::Struct_2_36FB247F31EFD2DE _CropsEffectParamsRef; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _LoadedEmployeeList; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::ElfFarm*>* _OwnerFarmMap; // 0x58
		::RPG::GameCore::GameEntity* _OwnerEntity; // 0x60
		::RPG::GameCore::ElfRestaurantGameConfig* GameConfig; // 0x68
		::RPG::Client::ElfFarm* _CurFarm; // 0x70
		::Class_1_004034A1FAAF468A* BoardPrefab; // 0x78
		::System::Int32 _SerializeNumber; // 0x80
		::System::Boolean _IsInitialized_k__BackingField; // 0x84
		::System::Boolean _IsReportStarted; // 0x85
		::System::UInt32 _OwnerEntityID; // 0x88
		::System::Single _ContinueTime; // 0x8C
		::System::UInt32 _OwnerGroupEntityID; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Init(::RPG::GameCore::GameEntity* ownerEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_INIT_OFFSET))(this, ownerEntity);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_UNINIT_OFFSET))(this);
		}

		::System::Void RuntimeReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_RUNTIMERESET_OFFSET))(this);
		}

		::System::Void _UpdateArtFarms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UPDATEARTFARMS_OFFSET))(this);
		}

		::System::Void RuntimeDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_RUNTIMEDISPOSE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void OnProgressChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_ONPROGRESSCHANGED_OFFSET))(this);
		}

		::System::Void _UpdateFarmCropsByPhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UPDATEFARMCROPSBYPHASE_OFFSET))(this);
		}

		::System::Void FocusFarm(::System::Int32 farmID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_FOCUSFARM_OFFSET))(this, farmID);
		}

		::System::Void UnFocusFarm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_UNFOCUSFARM_OFFSET))(this);
		}

		::RPG::Client::ElfFarm* GetFocusFarm()
		{
			return ((::RPG::Client::ElfFarm*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GETFOCUSFARM_OFFSET))(this);
		}

		::RPG::Client::ElfField* GetField(::System::Int32 fieldID)
		{
			return ((::RPG::Client::ElfField*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GETFIELD_OFFSET))(this, fieldID);
		}

		::RPG::Client::ElfCell* GetCell(::System::Int32 fieldID, ::System::Int32 cellID)
		{
			return ((::RPG::Client::ElfCell*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GETCELL_OFFSET))(this, fieldID, cellID);
		}

		::RPG::Client::ElfFarm* GetFarm(::System::Int32 farmID)
		{
			return ((::RPG::Client::ElfFarm*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GETFARM_OFFSET))(this, farmID);
		}

		::RPG::Client::TriggerEffectParams* FireEffect(::System::String* EffectPath, ::UnityEngine::Vector3 position)
		{
			return ((::RPG::Client::TriggerEffectParams*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_FIREEFFECT_OFFSET))(this, EffectPath, position);
		}

		::RPG::Client::TriggerEffectParams* FireEffectAsync(::System::String* EffectPath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::RPG::Client::TriggerEffectParams*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_FIREEFFECTASYNC_OFFSET))(this, EffectPath, position, rotation);
		}

		::System::Void CreateLocalEntity(::System::UInt32 groupID, ::System::UInt32 configID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_CREATELOCALENTITY_OFFSET))(this, groupID, configID);
		}

		::System::Void RefreshEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_REFRESHENTITIES_OFFSET))(this);
		}

		::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GET_ISINITIALIZED_OFFSET))(this);
		}

		::System::Void set_IsInitialized(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_SET_ISINITIALIZED_OFFSET))(this, value);
		}

		::System::Void _InitFarms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__INITFARMS_OFFSET))(this);
		}

		::System::Void _UpdateFarms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UPDATEFARMS_OFFSET))(this);
		}

		::System::Void _UnInitFarms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UNINITFARMS_OFFSET))(this);
		}

		::System::Void _InitFarmEmployee()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__INITFARMEMPLOYEE_OFFSET))(this);
		}

		::System::Void _UpdateFarmEmployees()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UPDATEFARMEMPLOYEES_OFFSET))(this);
		}

		::System::Void _OnElfEmployeeLevelUpFinish(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONELFEMPLOYEELEVELUPFINISH_OFFSET))(this, param);
		}

		::System::Void _OnScreenSizeChanged(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONSCREENSIZECHANGED_OFFSET))(this, param);
		}

		::System::Void _OnElfFarmCellUpdate(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONELFFARMCELLUPDATE_OFFSET))(this, param);
		}

		::System::Void _TriggerEntityEvent(::System::UInt32 instanceID, ::System::String* sEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__TRIGGERENTITYEVENT_OFFSET))(this, instanceID, sEvent);
		}

		::System::Void _TriggerGroupEvent(::System::String* sEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__TRIGGERGROUPEVENT_OFFSET))(this, sEvent);
		}

		::System::Void _OnGroupEvent(::Class_0_16E4307DCC419505_347* pEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONGROUPEVENT_OFFSET))(this, pEvent);
		}

		::System::Void _OnArtModelLoad(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONARTMODELLOAD_OFFSET))(this, param);
		}

		::System::Void _OnArtModelUnload(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONARTMODELUNLOAD_OFFSET))(this, param);
		}

		::System::Void _MemoryPuzzleBeginDataReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__MEMORYPUZZLEBEGINDATAREPORT_OFFSET))(this);
		}

		::System::Void _MemoryPuzzleEndDataReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__MEMORYPUZZLEENDDATAREPORT_OFFSET))(this);
		}
	};
}
