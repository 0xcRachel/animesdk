#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FiveDimCustomScreenTransferReason.h"
#include "unitysdk/RPG/Client/FiveDimManager_DOFContext.h"
#include "unitysdk/RPG/GameCore/FiveDimVCameraBlendHint.h"
#include "unitysdk/Struct_2_8EA636D1EE0F0A0F.h"
#include "unitysdk/Struct_2_9195B4006FDD1545.h"
#include "unitysdk/Struct_2_B7F6733609A5D9EA.h"
#include "unitysdk/Struct_2_B82597A91E4CD455.h"
#include "unitysdk/Struct_2_F01DF3CDCF3FD7AC.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_24C2E7EF22229C6A;
class Class_1_3F6460165989C3EF;
class Class_1_5A73DBEF56638408;
class Class_1_6E62B17C9BB9D6AE;
class Class_3_1A92845FAFA5EC77;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class FiveDimManager_AsyncCreateContext; }
namespace RPG::Client { class FiveDimManager_CameraContext; }
namespace RPG::Client { class FiveDimManager_PendingDestroyContext; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }
namespace RPG::GameCore { class FiveDimCameraDOFConfig; }
namespace RPG::GameCore { class FiveDimVCameraBlendConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityRef; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FIVEDIMMANAGER_APPLYCAMERABLENDOUTCONFIG_OFFSET UNITYSDK_OFFSET(0x927F020)
#define RPG_CLIENT_FIVEDIMMANAGER_APPLYCAMERADOFCONFIG_OFFSET UNITYSDK_OFFSET(0x927F130)
#define RPG_CLIENT_FIVEDIMMANAGER_APPLYLEAVEFROM_1_OFFSET UNITYSDK_OFFSET(0x9280040)
#define RPG_CLIENT_FIVEDIMMANAGER_APPLYLEAVEFROM_OFFSET UNITYSDK_OFFSET(0x927FE90)
#define RPG_CLIENT_FIVEDIMMANAGER_APPLYTELEPORTTO_OFFSET UNITYSDK_OFFSET(0x927FD20)
#define RPG_CLIENT_FIVEDIMMANAGER_CANCELCREATEFIVEDIMENTITYASYNC_OFFSET UNITYSDK_OFFSET(0x9277C20)
#define RPG_CLIENT_FIVEDIMMANAGER_CLEARISOLATEDINSTANCE_OFFSET UNITYSDK_OFFSET(0x927A6E0)
#define RPG_CLIENT_FIVEDIMMANAGER_CLEARLEAVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x927FCC0)
#define RPG_CLIENT_FIVEDIMMANAGER_CLEARTELEPORTINSTANCE_OFFSET UNITYSDK_OFFSET(0x927FC60)
#define RPG_CLIENT_FIVEDIMMANAGER_CLOSECUSTOMSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0x9280500)
#define RPG_CLIENT_FIVEDIMMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x927D9F0)
#define RPG_CLIENT_FIVEDIMMANAGER_ENDOFLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x927F9A0)
#define RPG_CLIENT_FIVEDIMMANAGER_FINISHCREATEFIVEDIMENTITYIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x92665D0)
#define RPG_CLIENT_FIVEDIMMANAGER_FINISHPENDINGDESTROYFIVEDIMCONTEXTIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x927D4B0)
#define RPG_CLIENT_FIVEDIMMANAGER_GETCAMERAACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x927EFC0)
#define RPG_CLIENT_FIVEDIMMANAGER_GETLEVELGRAPHCONFIG_OFFSET UNITYSDK_OFFSET(0x9282B10)
#define RPG_CLIENT_FIVEDIMMANAGER_GETTELEPORTFIVEDIMINFO_OFFSET UNITYSDK_OFFSET(0x9280140)
#define RPG_CLIENT_FIVEDIMMANAGER_GET_FIVEDIMAUDIOMANAGER_OFFSET UNITYSDK_OFFSET(0x9282CE0)
#define RPG_CLIENT_FIVEDIMMANAGER_GET_ISOLATEDGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9282CB0)
#define RPG_CLIENT_FIVEDIMMANAGER_GET_ISTELEPORTINGORLEAVING_OFFSET UNITYSDK_OFFSET(0x927E260)
#define RPG_CLIENT_FIVEDIMMANAGER_HASCAMERALIVE_OFFSET UNITYSDK_OFFSET(0x926F0B0)
#define RPG_CLIENT_FIVEDIMMANAGER_HASISOLATEDINSTANCE_OFFSET UNITYSDK_OFFSET(0x9278130)
#define RPG_CLIENT_FIVEDIMMANAGER_HIDEALLFIVEDIM_OFFSET UNITYSDK_OFFSET(0x9282A10)
#define RPG_CLIENT_FIVEDIMMANAGER_INITONFINALSTEP_OFFSET UNITYSDK_OFFSET(0x927DD30)
#define RPG_CLIENT_FIVEDIMMANAGER_ISCUSTOMSCREENTRANSFERFULLOPENED_OFFSET UNITYSDK_OFFSET(0x92807C0)
#define RPG_CLIENT_FIVEDIMMANAGER_ISCUSTOMSCREENTRANSFEROPENED_OFFSET UNITYSDK_OFFSET(0x9280770)
#define RPG_CLIENT_FIVEDIMMANAGER_ISISOLATEDINSTANCE_OFFSET UNITYSDK_OFFSET(0x9278180)
#define RPG_CLIENT_FIVEDIMMANAGER_LEAVECURRENTGAME_1_OFFSET UNITYSDK_OFFSET(0x927E680)
#define RPG_CLIENT_FIVEDIMMANAGER_LEAVECURRENTGAME_2_OFFSET UNITYSDK_OFFSET(0x9279930)
#define RPG_CLIENT_FIVEDIMMANAGER_LEAVECURRENTGAME_OFFSET UNITYSDK_OFFSET(0x9279B40)
#define RPG_CLIENT_FIVEDIMMANAGER_OPENCUSTOMSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0x92803C0)
#define RPG_CLIENT_FIVEDIMMANAGER_REGISTERGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x92735C0)
#define RPG_CLIENT_FIVEDIMMANAGER_REMOVEPENDINGUNLOADINSTANCECONTAINER_OFFSET UNITYSDK_OFFSET(0x9280B70)
#define RPG_CLIENT_FIVEDIMMANAGER_REQUESTCREATEFIVEDIMENTITYASYNC_OFFSET UNITYSDK_OFFSET(0x9266950)
#define RPG_CLIENT_FIVEDIMMANAGER_REQUESTDESTROYFIVEDIMCONTEXT_OFFSET UNITYSDK_OFFSET(0x9277D60)
#define RPG_CLIENT_FIVEDIMMANAGER_REQUESTUNLOADINSTANCECONTAINER_OFFSET UNITYSDK_OFFSET(0x9280C80)
#define RPG_CLIENT_FIVEDIMMANAGER_SETACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x927EBF0)
#define RPG_CLIENT_FIVEDIMMANAGER_SETCAMERAFOCUS_OFFSET UNITYSDK_OFFSET(0x927AEE0)
#define RPG_CLIENT_FIVEDIMMANAGER_SETISOLATEDINSTANCE_OFFSET UNITYSDK_OFFSET(0x927A650)
#define RPG_CLIENT_FIVEDIMMANAGER_SETNEEDCHENLINGFRAMECAPTURE_OFFSET UNITYSDK_OFFSET(0x9280870)
#define RPG_CLIENT_FIVEDIMMANAGER_SET_FIVEDIMAUDIOMANAGER_OFFSET UNITYSDK_OFFSET(0x9282CF0)
#define RPG_CLIENT_FIVEDIMMANAGER_SET_ISOLATEDGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9282CD0)
#define RPG_CLIENT_FIVEDIMMANAGER_SYNCCUSTOMSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0x9280640)
#define RPG_CLIENT_FIVEDIMMANAGER_SYNCTRANSFORMBEFOREFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x927F4F0)
#define RPG_CLIENT_FIVEDIMMANAGER_TASKFORCESETFIVEDIMLOADMODE_OFFSET UNITYSDK_OFFSET(0x92826B0)
#define RPG_CLIENT_FIVEDIMMANAGER_TELEPORTTO_1_OFFSET UNITYSDK_OFFSET(0x927E390)
#define RPG_CLIENT_FIVEDIMMANAGER_TELEPORTTO_OFFSET UNITYSDK_OFFSET(0x92795D0)
#define RPG_CLIENT_FIVEDIMMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x927F550)
#define RPG_CLIENT_FIVEDIMMANAGER_TRIGGERFIVEDIMPRELOAD_OFFSET UNITYSDK_OFFSET(0x9282880)
#define RPG_CLIENT_FIVEDIMMANAGER_TRYREQUESTLEAVEGAMEWHENINSTANCEDESTROY_OFFSET UNITYSDK_OFFSET(0x92747B0)
#define RPG_CLIENT_FIVEDIMMANAGER_UNREGISTERGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9274740)
#define RPG_CLIENT_FIVEDIMMANAGER__ACTIVATELITTLEGAMECAMERAMODULE_OFFSET UNITYSDK_OFFSET(0x9281150)
#define RPG_CLIENT_FIVEDIMMANAGER__APPLYCAMERABLENDCONFIG_OFFSET UNITYSDK_OFFSET(0x9281500)
#define RPG_CLIENT_FIVEDIMMANAGER__APPLYDOF_OFFSET UNITYSDK_OFFSET(0x9281AA0)
#define RPG_CLIENT_FIVEDIMMANAGER__APPLYINITIALGAME_OFFSET UNITYSDK_OFFSET(0x927DDD0)
#define RPG_CLIENT_FIVEDIMMANAGER__APPLYISOLATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x927F200)
#define RPG_CLIENT_FIVEDIMMANAGER__APPLYMONOCAMERA_OFFSET UNITYSDK_OFFSET(0x9281330)
#define RPG_CLIENT_FIVEDIMMANAGER__APPLYVCAMERABLENDHINT_OFFSET UNITYSDK_OFFSET(0x92817B0)
#define RPG_CLIENT_FIVEDIMMANAGER__CALCFIVEDIMINSTANCEISINCAMERAFRUSTUM_OFFSET UNITYSDK_OFFSET(0x9282460)
#define RPG_CLIENT_FIVEDIMMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9282E00)
#define RPG_CLIENT_FIVEDIMMANAGER__CLEARCREATECONTEXT_OFFSET UNITYSDK_OFFSET(0x927D2A0)
#define RPG_CLIENT_FIVEDIMMANAGER__CLEARDESTROYCONTEXT_OFFSET UNITYSDK_OFFSET(0x927D990)
#define RPG_CLIENT_FIVEDIMMANAGER__CLEARLEVELGRAPHCONFIGS_OFFSET UNITYSDK_OFFSET(0x927DCD0)
#define RPG_CLIENT_FIVEDIMMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9282D00)
#define RPG_CLIENT_FIVEDIMMANAGER__DEACTIVATELITTLEGAMECAMERAMODULE_OFFSET UNITYSDK_OFFSET(0x9280F10)
#define RPG_CLIENT_FIVEDIMMANAGER__GETDOFFOCUSLENGTH_OFFSET UNITYSDK_OFFSET(0x9281D50)
#define RPG_CLIENT_FIVEDIMMANAGER__GETPLAYER3DTRANSFORM_OFFSET UNITYSDK_OFFSET(0x927E4C0)
#define RPG_CLIENT_FIVEDIMMANAGER__ISINITIALGAMELOADFINISH_OFFSET UNITYSDK_OFFSET(0x9280900)
#define RPG_CLIENT_FIVEDIMMANAGER__ONFIVEDIMINSTANCECHANGED_OFFSET UNITYSDK_OFFSET(0x92808B0)
#define RPG_CLIENT_FIVEDIMMANAGER__PROCESSSINGLECREATECONTEXT_OFFSET UNITYSDK_OFFSET(0x927CE50)
#define RPG_CLIENT_FIVEDIMMANAGER__PROCESSSINGLEDESTROYCONTEXTFINISH_OFFSET UNITYSDK_OFFSET(0x927D8D0)
#define RPG_CLIENT_FIVEDIMMANAGER__PROCESSSINGLEDESTROYCONTEXT_OFFSET UNITYSDK_OFFSET(0x927D620)
#define RPG_CLIENT_FIVEDIMMANAGER__RESETDOF_OFFSET UNITYSDK_OFFSET(0x927DC00)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKCHENLINGFRAMECAPTURE_OFFSET UNITYSDK_OFFSET(0x927FBB0)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKDOF_OFFSET UNITYSDK_OFFSET(0x927F8D0)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKFRAMESLICECREATEENTITIES_OFFSET UNITYSDK_OFFSET(0x927CF50)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKFRAMESLICEDESTROYENTITIES_OFFSET UNITYSDK_OFFSET(0x927D710)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKLEAVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x927F780)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKPENDINGUNLOADINSTANCECONTAINERS_OFFSET UNITYSDK_OFFSET(0x9280D80)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKTELEPORTINSTANCE_OFFSET UNITYSDK_OFFSET(0x927F630)
#define RPG_CLIENT_FIVEDIMMANAGER__TRYREFRESHGROUPLOADSTATE_OFFSET UNITYSDK_OFFSET(0x927F870)
#define RPG_CLIENT_FIVEDIMMANAGER__TRYUNLOADINSTANCECONTAINER_OFFSET UNITYSDK_OFFSET(0x927FF00)
#define RPG_CLIENT_FIVEDIMMANAGER__UPDATEACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x927EDB0)
#define RPG_CLIENT_FIVEDIMMANAGER__UPDATEDOFCONTEXT_OFFSET UNITYSDK_OFFSET(0x9281890)
#define RPG_CLIENT_FIVEDIMMANAGER__UPDATEFIVEDIMINSTANCERENDER_OFFSET UNITYSDK_OFFSET(0x927FA00)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimManager_TypeDefinitionIndex = 47941;

	class FiveDimManager : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FiveDimVCameraBlendConfig** StaticGet_s_CutBlendConfig()
		{
			return (::RPG::GameCore::FiveDimVCameraBlendConfig**)Il2CppClass::FromTypeDefinitionIndex(FiveDimManager_TypeDefinitionIndex)->GetStaticField(0x42970);
		}
		// static const ::System::Int32 s_MaxProcessEntityCount = 0x14; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::FiveDimManager_PendingDestroyContext*>* _PendingDestroyContextPool; // 0x10
		::RPG::PoolDictionary_2<::System::String*, ::RPG::GameCore::LevelGraphConfig*>* _LevelGraphConfigs; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::FiveDimGameInstance*>* _PendingUnloadGameInstances; // 0x20
		::RPG::Client::FiveDimManager_CameraContext* _LastCameraContext; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::FiveDimManager_AsyncCreateContext*>* _CreateContext; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::FiveDimGameInstance*>* _AllGameInstances; // 0x38
		::Class_1_6E62B17C9BB9D6AE* _TeleportInstance; // 0x40
		::Class_1_3F6460165989C3EF* _LeaveInstance; // 0x48
		::System::Collections::Generic::Dictionary_2<::RPG::Client::FiveDimGameInstance*, ::RPG::Client::FiveDimManager_CameraContext*>* _ActiveCameras; // 0x50
		::Class_1_5A73DBEF56638408* _FiveDimAudioManager_k__BackingField; // 0x58
		::RPG::Client::FiveDimGameInstance* _CameraFocusInstance; // 0x60
		::System::Int32 _LastSyncTransformFrameCount; // 0x68
		::System::Boolean _NeedChenLingFrameCapture; // 0x6C
		::System::Boolean _ShouldRefreshGroupLoadState; // 0x6D
		::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> _IsolatedGameInstance_k__BackingField; // 0x70
		::RPG::Client::FiveDimManager_DOFContext _DOFContext; // 0x7C
		::RPG::Client::FiveDimCustomScreenTransferReason _CustomScreenTransferReason; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__CCTOR_OFFSET))();
		}

		::System::Void RequestCreateFiveDimEntityAsync(::RPG::Client::FiveDimGameInstance* instance, ::Class_3_1A92845FAFA5EC77* services, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::Class_3_1A92845FAFA5EC77*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_REQUESTCREATEFIVEDIMENTITYASYNC_OFFSET))(this, instance, services, onFinish);
		}

		::System::Void CancelCreateFiveDimEntityAsync(::RPG::Client::FiveDimGameInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_CANCELCREATEFIVEDIMENTITYASYNC_OFFSET))(this, instance);
		}

		::System::Void FinishCreateFiveDimEntityImmediately(::RPG::Client::FiveDimGameInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_FINISHCREATEFIVEDIMENTITYIMMEDIATELY_OFFSET))(this, instance);
		}

		::System::Void _TickFrameSliceCreateEntities(::System::Int32 processCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKFRAMESLICECREATEENTITIES_OFFSET))(this, processCount);
		}

		::System::Void _ProcessSingleCreateContext(::RPG::Client::FiveDimManager_AsyncCreateContext* createContext, ::System::Int32& remainProcessCount)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimManager_AsyncCreateContext*, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__PROCESSSINGLECREATECONTEXT_OFFSET))(this, createContext, remainProcessCount);
		}

		::System::Void _ClearCreateContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__CLEARCREATECONTEXT_OFFSET))(this);
		}

		::System::Void RequestDestroyFiveDimContext(::Class_3_1A92845FAFA5EC77* services, ::Class_1_24C2E7EF22229C6A* contexts, ::RPG::GameCore::GameEntity* instanceEntity)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_1A92845FAFA5EC77*, ::Class_1_24C2E7EF22229C6A*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_REQUESTDESTROYFIVEDIMCONTEXT_OFFSET))(this, services, contexts, instanceEntity);
		}

		::System::Void FinishPendingDestroyFiveDimContextImmediate(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_FINISHPENDINGDESTROYFIVEDIMCONTEXTIMMEDIATE_OFFSET))(this, groupID, instanceID);
		}

		::System::Void _TickFrameSliceDestroyEntities(::System::Int32 processEntityCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKFRAMESLICEDESTROYENTITIES_OFFSET))(this, processEntityCount);
		}

		::System::Void _ProcessSingleDestroyContext(::RPG::Client::FiveDimManager_PendingDestroyContext* context, ::System::Int32& remainProcessEntityCount)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimManager_PendingDestroyContext*, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__PROCESSSINGLEDESTROYCONTEXT_OFFSET))(this, context, remainProcessEntityCount);
		}

		::System::Void _ProcessSingleDestroyContextFinish(::RPG::Client::FiveDimManager_PendingDestroyContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimManager_PendingDestroyContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__PROCESSSINGLEDESTROYCONTEXTFINISH_OFFSET))(this, context);
		}

		::System::Void _ClearDestroyContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__CLEARDESTROYCONTEXT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void InitOnFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_INITONFINALSTEP_OFFSET))(this);
		}

		::System::Void TeleportTo(::Struct_2_F01DF3CDCF3FD7AC targetInfo, ::Struct_2_B82597A91E4CD455 options)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_F01DF3CDCF3FD7AC, ::Struct_2_B82597A91E4CD455))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_TELEPORTTO_OFFSET))(this, targetInfo, options);
		}

		::System::Void TeleportTo_1(::System::UInt32 groupID, ::System::UInt32 containerID, ::System::UInt32 entityID, ::System::Boolean noCameraBlend, ::System::Boolean isPipeEntry)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_TELEPORTTO_1_OFFSET))(this, groupID, containerID, entityID, noCameraBlend, isPipeEntry);
		}

		::System::Void LeaveCurrentGame(::Struct_2_B7F6733609A5D9EA options)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_B7F6733609A5D9EA))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_LEAVECURRENTGAME_OFFSET))(this, options);
		}

		::System::Void LeaveCurrentGame_1(::RPG::GameCore::LevelEntityRef* targetInfo, ::Struct_2_B7F6733609A5D9EA options)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityRef*, ::Struct_2_B7F6733609A5D9EA))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_LEAVECURRENTGAME_1_OFFSET))(this, targetInfo, options);
		}

		::System::Void LeaveCurrentGame_2(::Struct_2_8EA636D1EE0F0A0F targetInfo, ::Struct_2_B7F6733609A5D9EA options)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_8EA636D1EE0F0A0F, ::Struct_2_B7F6733609A5D9EA))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_LEAVECURRENTGAME_2_OFFSET))(this, targetInfo, options);
		}

		::System::Void TryRequestLeaveGameWhenInstanceDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_TRYREQUESTLEAVEGAMEWHENINSTANCEDESTROY_OFFSET))(this);
		}

		::System::Void RegisterGameInstance(::RPG::Client::FiveDimGameInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_REGISTERGAMEINSTANCE_OFFSET))(this, instance);
		}

		::System::Void UnRegisterGameInstance(::RPG::Client::FiveDimGameInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_UNREGISTERGAMEINSTANCE_OFFSET))(this, instance);
		}

		::System::Void SetActiveCamera(::RPG::Client::FiveDimGameInstance* instance, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* camera, ::RPG::GameCore::FiveDimVCameraBlendConfig* inBlend)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::RPG::GameCore::FiveDimVCameraBlendConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SETACTIVECAMERA_OFFSET))(this, instance, camera, inBlend);
		}

		::System::Void SetCameraFocus(::RPG::Client::FiveDimGameInstance* instance, ::System::Boolean focus)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SETCAMERAFOCUS_OFFSET))(this, instance, focus);
		}

		::RPG::Client::FiveDimGameInstance* GetCameraActiveInstance()
		{
			return ((::RPG::Client::FiveDimGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GETCAMERAACTIVEINSTANCE_OFFSET))(this);
		}

		::System::Void ApplyCameraBlendOutConfig(::RPG::Client::FiveDimGameInstance* instance, ::RPG::GameCore::FiveDimVCameraBlendConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::RPG::GameCore::FiveDimVCameraBlendConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_APPLYCAMERABLENDOUTCONFIG_OFFSET))(this, instance, config);
		}

		::System::Boolean HasCameraLive(::RPG::Client::FiveDimGameInstance* instance)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_HASCAMERALIVE_OFFSET))(this, instance);
		}

		::System::Void ApplyCameraDOFConfig(::RPG::Client::FiveDimGameInstance* instance, ::RPG::GameCore::FiveDimCameraDOFConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::RPG::GameCore::FiveDimCameraDOFConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_APPLYCAMERADOFCONFIG_OFFSET))(this, instance, config);
		}

		::System::Void SetIsolatedInstance(::RPG::Client::FiveDimGameInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SETISOLATEDINSTANCE_OFFSET))(this, instance);
		}

		::System::Void ClearIsolatedInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_CLEARISOLATEDINSTANCE_OFFSET))(this);
		}

		::System::Boolean HasIsolatedInstance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_HASISOLATEDINSTANCE_OFFSET))(this);
		}

		::System::Boolean IsIsolatedInstance(::RPG::Client::FiveDimGameInstance* instance)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ISISOLATEDINSTANCE_OFFSET))(this, instance);
		}

		::System::Void SyncTransformBeforeFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SYNCTRANSFORMBEFOREFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void EndOfLateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ENDOFLATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void ClearTeleportInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_CLEARTELEPORTINSTANCE_OFFSET))(this);
		}

		::System::Void ClearLeaveInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_CLEARLEAVEINSTANCE_OFFSET))(this);
		}

		::System::Void ApplyTeleportTo(::RPG::Client::FiveDimGameInstance* instance, ::Struct_2_9195B4006FDD1545 playerPlacingParams, ::System::Boolean noCameraBlend)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::Struct_2_9195B4006FDD1545, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_APPLYTELEPORTTO_OFFSET))(this, instance, playerPlacingParams, noCameraBlend);
		}

		::System::Void ApplyLeaveFrom(::RPG::Client::FiveDimGameInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_APPLYLEAVEFROM_OFFSET))(this, instance);
		}

		::System::Void ApplyLeaveFrom_1(::RPG::Client::FiveDimGameInstance* instance, ::Struct_2_FC595D1A561D8C6F player3DInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::Struct_2_FC595D1A561D8C6F))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_APPLYLEAVEFROM_1_OFFSET))(this, instance, player3DInfo);
		}

		::System::Boolean GetTeleportFiveDimInfo(::System::UInt32& groupID, ::System::UInt32& instanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GETTELEPORTFIVEDIMINFO_OFFSET))(this, groupID, instanceID);
		}

		::System::Void OpenCustomScreenTransfer(::RPG::Client::FiveDimCustomScreenTransferReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimCustomScreenTransferReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_OPENCUSTOMSCREENTRANSFER_OFFSET))(this, reason);
		}

		::System::Void CloseCustomScreenTransfer(::RPG::Client::FiveDimCustomScreenTransferReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimCustomScreenTransferReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_CLOSECUSTOMSCREENTRANSFER_OFFSET))(this, reason);
		}

		::System::Void SyncCustomScreenTransfer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SYNCCUSTOMSCREENTRANSFER_OFFSET))(this);
		}

		::System::Boolean IsCustomScreenTransferOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ISCUSTOMSCREENTRANSFEROPENED_OFFSET))(this);
		}

		::System::Boolean IsCustomScreenTransferFullOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ISCUSTOMSCREENTRANSFERFULLOPENED_OFFSET))(this);
		}

		::System::Void SetNeedChenLingFrameCapture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SETNEEDCHENLINGFRAMECAPTURE_OFFSET))(this);
		}

		::System::Void _OnFiveDimInstanceChanged(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__ONFIVEDIMINSTANCECHANGED_OFFSET))(this, param);
		}

		::System::Void _TryRefreshGroupLoadState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TRYREFRESHGROUPLOADSTATE_OFFSET))(this);
		}

		::System::Void _ApplyInitialGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__APPLYINITIALGAME_OFFSET))(this);
		}

		::System::Boolean _IsInitialGameLoadFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__ISINITIALGAMELOADFINISH_OFFSET))(this);
		}

		::System::Void _TickTeleportInstance(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKTELEPORTINSTANCE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _TickLeaveInstance(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKLEAVEINSTANCE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _TryUnloadInstanceContainer(::RPG::Client::FiveDimGameInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TRYUNLOADINSTANCECONTAINER_OFFSET))(this, instance);
		}

		::System::Void RemovePendingUnloadInstanceContainer(::System::UInt32 groupID, ::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_REMOVEPENDINGUNLOADINSTANCECONTAINER_OFFSET))(this, groupID, entityID);
		}

		::System::Void RequestUnloadInstanceContainer(::RPG::Client::FiveDimGameInstance* instance, ::System::Boolean immediate)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_REQUESTUNLOADINSTANCECONTAINER_OFFSET))(this, instance, immediate);
		}

		::System::Void _TickPendingUnloadInstanceContainers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKPENDINGUNLOADINSTANCECONTAINERS_OFFSET))(this);
		}

		::System::Void _ApplyIsolateInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__APPLYISOLATEINSTANCE_OFFSET))(this);
		}

		::System::Void _UpdateActiveCamera(::RPG::Client::FiveDimGameInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__UPDATEACTIVECAMERA_OFFSET))(this, instance);
		}

		::System::Void _ActivateLittleGameCameraModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__ACTIVATELITTLEGAMECAMERAMODULE_OFFSET))(this);
		}

		::System::Void _DeactivateLittleGameCameraModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__DEACTIVATELITTLEGAMECAMERAMODULE_OFFSET))(this);
		}

		::System::Void _ApplyCameraBlendConfig(::RPG::GameCore::FiveDimVCameraBlendConfig* blendConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimVCameraBlendConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__APPLYCAMERABLENDCONFIG_OFFSET))(this, blendConfig);
		}

		::System::Void _ApplyVCameraBlendHint(::RPG::GameCore::FiveDimVCameraBlendHint blendHint)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimVCameraBlendHint))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__APPLYVCAMERABLENDHINT_OFFSET))(this, blendHint);
		}

		::System::Void _ApplyMonoCamera(::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__APPLYMONOCAMERA_OFFSET))(this, camera);
		}

		::System::Void _TickDOF(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKDOF_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _UpdateDOFContext(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__UPDATEDOFCONTEXT_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Boolean _GetDOFFocusLength(::System::Single& distance)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__GETDOFFOCUSLENGTH_OFFSET))(this, distance);
		}

		::System::Void _ApplyDOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__APPLYDOF_OFFSET))(this);
		}

		::System::Void _ResetDOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__RESETDOF_OFFSET))(this);
		}

		::System::Boolean _GetPlayer3DTransform(::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__GETPLAYER3DTRANSFORM_OFFSET))(this, position, rotation);
		}

		::System::Void _TickChenLingFrameCapture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKCHENLINGFRAMECAPTURE_OFFSET))(this);
		}

		::System::Void _UpdateFiveDimInstanceRender()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__UPDATEFIVEDIMINSTANCERENDER_OFFSET))(this);
		}

		::System::Boolean _CalcFiveDimInstanceIsInCameraFrustum(::RPG::Client::FiveDimGameInstance* instance)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__CALCFIVEDIMINSTANCEISINCAMERAFRUSTUM_OFFSET))(this, instance);
		}

		::System::Void TaskForceSetFiveDimLoadMode(::System::UInt32 groupID, ::System::UInt32 entityID, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_TASKFORCESETFIVEDIMLOADMODE_OFFSET))(this, groupID, entityID, enable);
		}

		::System::Void TriggerFiveDimPreload(::System::UInt32 groupID, ::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_TRIGGERFIVEDIMPRELOAD_OFFSET))(this, groupID, entityID);
		}

		::System::Void HideAllFiveDim(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_HIDEALLFIVEDIM_OFFSET))(this, enable);
		}

		::RPG::GameCore::LevelGraphConfig* GetLevelGraphConfig(::System::String* path)
		{
			return ((::RPG::GameCore::LevelGraphConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GETLEVELGRAPHCONFIG_OFFSET))(this, path);
		}

		::System::Void _ClearLevelGraphConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__CLEARLEVELGRAPHCONFIGS_OFFSET))(this);
		}

		::System::Boolean get_IsTeleportingOrLeaving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GET_ISTELEPORTINGORLEAVING_OFFSET))(this);
		}

		::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> get_IsolatedGameInstance()
		{
			return ((::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GET_ISOLATEDGAMEINSTANCE_OFFSET))(this);
		}

		::System::Void set_IsolatedGameInstance(::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SET_ISOLATEDGAMEINSTANCE_OFFSET))(this, value);
		}

		::Class_1_5A73DBEF56638408* get_FiveDimAudioManager()
		{
			return ((::Class_1_5A73DBEF56638408*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GET_FIVEDIMAUDIOMANAGER_OFFSET))(this);
		}

		::System::Void set_FiveDimAudioManager(::Class_1_5A73DBEF56638408* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A73DBEF56638408*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SET_FIVEDIMAUDIOMANAGER_OFFSET))(this, value);
		}
	};
}
