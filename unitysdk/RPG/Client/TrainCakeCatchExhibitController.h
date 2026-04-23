#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainCakeCatchExhibitController_CarPositionType.h"
#include "unitysdk/RPG/Client/TrainCakeCatchExhibitController_CatGroundType.h"
#include "unitysdk/RPG/Client/TrainCakeCatchExhibitController_CatTreeType.h"
#include "unitysdk/RPG/Client/TrainCakeCatchExhibitController_GroundSetType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_ECBCF86CDE61CBCA;
class Class_2_8A13E4280BFE59E5;
namespace RPG { class OutlinePostFXMonoPlugin; }
namespace RPG::Client { class TrainCakeCatchExhibitController_Cat; }
namespace RPG::Client { class TrainCakeCatchExhibitController_CatGround; }
namespace RPG::Client { class TrainCakeCatchExhibitController_CatTree; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelAreaManager; }
namespace RPG::GameCore { class NPCDataRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15169E30)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_GETCATGROUNDS_OFFSET UNITYSDK_OFFSET(0x1516AF80)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_GETCATTREE_OFFSET UNITYSDK_OFFSET(0x1516AFC0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_GETGROUNDANCHORPOS_OFFSET UNITYSDK_OFFSET(0x1516AB60)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_GETTREEANCHORPOS_OFFSET UNITYSDK_OFFSET(0x1516AD80)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_ONPROPCREATE_OFFSET UNITYSDK_OFFSET(0x1516A3E0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_ONSAVE_OFFSET UNITYSDK_OFFSET(0x1516AF30)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_SETCATGROUNDCAT_OFFSET UNITYSDK_OFFSET(0x1516A9C0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_SETCATGROUNDTYPE_OFFSET UNITYSDK_OFFSET(0x1516A890)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_SETCATTREECAT_OFFSET UNITYSDK_OFFSET(0x1516A750)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_SETCATTREETYPE_OFFSET UNITYSDK_OFFSET(0x1516A4E0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_SETSELECTEDCAT_OFFSET UNITYSDK_OFFSET(0x1516B000)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0x1516A0C0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_TRIGGERCATCHANGEEFFECT_OFFSET UNITYSDK_OFFSET(0x1516B280)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1516DA20)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__CREATECAT_OFFSET UNITYSDK_OFFSET(0x1516B970)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15168ED0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__DESPAWNCATOUTLINEROOT_OFFSET UNITYSDK_OFFSET(0x1516A010)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__DESPAWNTRANSCAT_OFFSET UNITYSDK_OFFSET(0x1516BCB0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__DESTROYCAT_OFFSET UNITYSDK_OFFSET(0x1516B9F0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__DISPOSECATGROUNDS_OFFSET UNITYSDK_OFFSET(0x15169F60)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__DISPOSECATTREE_OFFSET UNITYSDK_OFFSET(0x15169F00)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__FINDCAT_OFFSET UNITYSDK_OFFSET(0x1516B110)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__GETLEVELAREAMANAGER_OFFSET UNITYSDK_OFFSET(0x1516BAC0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__INITCATGROUNDS_OFFSET UNITYSDK_OFFSET(0x15169130)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__INITCATTREE_OFFSET UNITYSDK_OFFSET(0x151690B0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__INITCONSTVALUE_CATEFFECT_OFFSET UNITYSDK_OFFSET(0x1516CE90)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__INITCONSTVALUE_CATSIZE_OFFSET UNITYSDK_OFFSET(0x1516BF50)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__INITCONSTVALUE_CATTREEATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x1516CB50)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__INITCONSTVALUE_CATTREECHANGETYPEEVENT_OFFSET UNITYSDK_OFFSET(0x1516C580)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__INITCONSTVALUE_CATTREEGROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1516C7D0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__INITCONSTVALUE_GROUNDANCHOR_OFFSET UNITYSDK_OFFSET(0x1516C0E0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__INITCONSTVALUE_GROUNDSAVELERPTIME_OFFSET UNITYSDK_OFFSET(0x1516C460)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__INITCONSTVALUE_OFFSET UNITYSDK_OFFSET(0x15169030)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__INITCONSTVALUE_VOICECD_OFFSET UNITYSDK_OFFSET(0x1516D350)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__ONCURRENTREGIONENTER_OFFSET UNITYSDK_OFFSET(0x15169870)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__ONCURRENTREGIONLEAVE_OFFSET UNITYSDK_OFFSET(0x15169C30)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__REFRESHCATSONREGIONCHANGE_OFFSET UNITYSDK_OFFSET(0x15169AB0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__REGISTERREGIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x151696F0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__RESETVOICETIMER_OFFSET UNITYSDK_OFFSET(0x15169680)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__SPAWNCATOUTLINEROOT_OFFSET UNITYSDK_OFFSET(0x1516BD60)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__SPAWNTRANSCAT_OFFSET UNITYSDK_OFFSET(0x1516BB40)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__TICKVOICE_OFFSET UNITYSDK_OFFSET(0x1516A280)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__TRIGGERENTITYEVENT_OFFSET UNITYSDK_OFFSET(0x1516BA50)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__TRIGGERVOICERANDOM_OFFSET UNITYSDK_OFFSET(0x1516D6E0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__UNREGISTERREGIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x151699A0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainCakeCatchExhibitController_TypeDefinitionIndex = 55519;

	class TrainCakeCatchExhibitController : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__RegionID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(TrainCakeCatchExhibitController_TypeDefinitionIndex)->GetStaticField(0xE340);
		}
		// static const ::System::String* TRANS_CAT_PATH; // 0x0
		// static const ::System::String* CAT_OUTLINE_ROOT_PATH; // 0x0
		// static const ::System::String* _CONSTVALUE_CAT_HEIGHT; // 0x0
		// static const ::System::String* _CONSTVALUE_CAT_RADIUS; // 0x0
		// static const ::System::String* _CONSTVALUE_GROUND_AREA_NAME; // 0x0
		// static const ::System::String* _CONSTVALUE_GROUND_ANCHOR_NAMES; // 0x0
		// static const ::System::String* _CONSTVALUE_GROUND_SAVE_LERP_TIME; // 0x0
		// static const ::System::String* _CONSTVALUE_CATTREE_CHANGE_TYPE_EVENT_DEFAULT; // 0x0
		// static const ::System::String* _CONSTVALUE_CATTREE_CHANGE_TYPE_EVENT_GODGIFT; // 0x0
		// static const ::System::String* _CONSTVALUE_CATTREE_GROUP_INSTANCE_ID; // 0x0
		// static const ::System::String* _CONSTVALUE_CATTREE_ATTACH_POINTS; // 0x0
		// static const ::System::String* _CONSTVALUE_EFFECT_PATH_CAT_CHANGE; // 0x0
		// static const ::System::String* _CONSTVALUE_CAT_OUTLINE_COLOR; // 0x0
		// static const ::System::String* _CONSTVALUE_CAT_OUTLINE_BLUR_SIZE; // 0x0
		// static const ::System::String* _CONSTVALUE_CATTREE_MAOMAOGAO_VOICE_CD; // 0x0
		// static const ::System::String* _VoiceEventName; // 0x0
		::System::String* _EffectPathCatChange; // 0x10
		::System::String* _CatTreeChangeTypeEventGodGift; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::TrainCakeCatchExhibitController_CatTreeType, ::System::String*>* _CatTreeTypeToEntityEvent; // 0x20
		::RPG::Client::TrainCakeCatchExhibitController_Cat* _SelectedCat; // 0x28
		::Class_2_8A13E4280BFE59E5* _GameModule; // 0x30
		::Il2CppArray<::RPG::Client::TrainCakeCatchExhibitController_CatGround*>* _CatGrounds; // 0x38
		::RPG::Client::TrainCakeCatchExhibitController_CatTree* _CatTree; // 0x40
		::System::String* _GroundAreaName; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::TrainCakeCatchExhibitController_Cat*>* _TempVoiceCatList; // 0x50
		::Il2CppArray<::System::String*>* _GroundAnchorNames; // 0x58
		::System::Collections::Generic::Dictionary_2<::RPG::Client::TrainCakeCatchExhibitController_CatGroundType, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* _CatGroundPosTypeToOffset; // 0x60
		::Il2CppArray<::System::String*>* _CatTreeAttachPoints; // 0x68
		::System::String* _CatTreeChangeTypeEventDefault; // 0x70
		::RPG::OutlinePostFXMonoPlugin* _CatOutlineRoot; // 0x78
		::System::UInt32 _CatTreeGroupID; // 0x80
		::System::Single _GroundSaveLerpTime; // 0x84
		::System::Single _VoiceTimer; // 0x88
		::System::Single _CatRadius; // 0x8C
		::System::Single _CatOutlineBlurSize; // 0x90
		::System::Single _VoiceCDMax; // 0x94
		::System::Boolean _IsInRegion; // 0x98
		::System::UInt32 _CatTreeInstanceID; // 0x9C
		::System::Single _CatHeight; // 0xA0
		::System::Single _VoiceCDMin; // 0xA4
		::System::Single _VoiceNextCD; // 0xA8
		::UnityEngine::Color _CatOutlineColor; // 0xAC

		::System::Void _ctor(::Class_2_8A13E4280BFE59E5* gameModule)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_8A13E4280BFE59E5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__CTOR_OFFSET))(this, gameModule);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void _RegisterRegionCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__REGISTERREGIONCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterRegionCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__UNREGISTERREGIONCALLBACK_OFFSET))(this);
		}

		::System::Void _OnCurrentRegionEnter(::Class_1_ECBCF86CDE61CBCA* region)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ECBCF86CDE61CBCA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__ONCURRENTREGIONENTER_OFFSET))(this, region);
		}

		::System::Void _OnCurrentRegionLeave(::Class_1_ECBCF86CDE61CBCA* region)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ECBCF86CDE61CBCA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__ONCURRENTREGIONLEAVE_OFFSET))(this, region);
		}

		::System::Void _RefreshCatsOnRegionChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__REFRESHCATSONREGIONCHANGE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_TICK_OFFSET))(this, deltaTime);
		}

		::System::Void OnPropCreate(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_ONPROPCREATE_OFFSET))(this, entity);
		}

		::System::Void SetCatTreeType(::RPG::Client::TrainCakeCatchExhibitController_CatTreeType type)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainCakeCatchExhibitController_CatTreeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_SETCATTREETYPE_OFFSET))(this, type);
		}

		::System::Void SetCatTreeCat(::System::Collections::Generic::List_1<::System::UInt32>* npcIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_SETCATTREECAT_OFFSET))(this, npcIDs);
		}

		::System::Void SetCatGroundType(::System::Int32 index, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType groundType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_SETCATGROUNDTYPE_OFFSET))(this, index, groundType);
		}

		::System::Void SetCatGroundCat(::System::Int32 index, ::RPG::Client::TrainCakeCatchExhibitController_GroundSetType setType, ::System::Collections::Generic::List_1<::System::UInt32>* npcIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::TrainCakeCatchExhibitController_GroundSetType, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_SETCATGROUNDCAT_OFFSET))(this, index, setType, npcIDs);
		}

		::UnityEngine::Vector3 GetGroundAnchorPos(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_GETGROUNDANCHORPOS_OFFSET))(this, index);
		}

		::UnityEngine::Vector3 GetTreeAnchorPos(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_GETTREEANCHORPOS_OFFSET))(this, index);
		}

		::System::Void OnSave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_ONSAVE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::TrainCakeCatchExhibitController_CatGround*>* GetCatGrounds()
		{
			return ((::Il2CppArray<::RPG::Client::TrainCakeCatchExhibitController_CatGround*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_GETCATGROUNDS_OFFSET))(this);
		}

		::RPG::Client::TrainCakeCatchExhibitController_CatTree* GetCatTree()
		{
			return ((::RPG::Client::TrainCakeCatchExhibitController_CatTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_GETCATTREE_OFFSET))(this);
		}

		::System::Void SetSelectedCat(::RPG::Client::TrainCakeCatchExhibitController_CarPositionType positionType, ::System::Int32 index1, ::System::Int32 index2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainCakeCatchExhibitController_CarPositionType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_SETSELECTEDCAT_OFFSET))(this, positionType, index1, index2);
		}

		::System::Void TriggerCatChangeEffect(::RPG::Client::TrainCakeCatchExhibitController_CarPositionType positionType, ::System::Int32 index1, ::System::Int32 index2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainCakeCatchExhibitController_CarPositionType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_TRIGGERCATCHANGEEFFECT_OFFSET))(this, positionType, index1, index2);
		}

		::RPG::Client::TrainCakeCatchExhibitController_Cat* _FindCat(::RPG::Client::TrainCakeCatchExhibitController_CarPositionType positionType, ::System::Int32 index1, ::System::Int32 index2)
		{
			return ((::RPG::Client::TrainCakeCatchExhibitController_Cat*(*)(::PVOID, ::RPG::Client::TrainCakeCatchExhibitController_CarPositionType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__FINDCAT_OFFSET))(this, positionType, index1, index2);
		}

		::System::Void _InitCatGrounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__INITCATGROUNDS_OFFSET))(this);
		}

		::System::Void _InitCatTree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__INITCATTREE_OFFSET))(this);
		}

		::System::Void _DisposeCatGrounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__DISPOSECATGROUNDS_OFFSET))(this);
		}

		::System::Void _DisposeCatTree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__DISPOSECATTREE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* _CreateCat(::RPG::GameCore::NPCDataRow* npcRow, ::System::String* uniqueName, ::UnityEngine::Transform* parent)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::NPCDataRow*, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__CREATECAT_OFFSET))(this, npcRow, uniqueName, parent);
		}

		::System::Void _DestroyCat(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__DESTROYCAT_OFFSET))(this, entity);
		}

		::System::Void _TriggerEntityEvent(::RPG::GameCore::GameEntity* entity, ::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__TRIGGERENTITYEVENT_OFFSET))(this, entity, eventName);
		}

		::RPG::GameCore::LevelAreaManager* _GetLevelAreaManager()
		{
			return ((::RPG::GameCore::LevelAreaManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__GETLEVELAREAMANAGER_OFFSET))(this);
		}

		::UnityEngine::GameObject* _SpawnTransCat()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__SPAWNTRANSCAT_OFFSET))(this);
		}

		::System::Void _DespawnTransCat(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__DESPAWNTRANSCAT_OFFSET))(this, gameObject);
		}

		::System::Void _SpawnCatOutlineRoot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__SPAWNCATOUTLINEROOT_OFFSET))(this);
		}

		::System::Void _DespawnCatOutlineRoot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__DESPAWNCATOUTLINEROOT_OFFSET))(this);
		}

		::System::Void _InitConstValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__INITCONSTVALUE_OFFSET))(this);
		}

		::System::Void _InitConstValue_CatSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__INITCONSTVALUE_CATSIZE_OFFSET))(this);
		}

		::System::Void _InitConstValue_GroundAnchor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__INITCONSTVALUE_GROUNDANCHOR_OFFSET))(this);
		}

		::System::Void _InitConstValue_GroundSaveLerpTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__INITCONSTVALUE_GROUNDSAVELERPTIME_OFFSET))(this);
		}

		::System::Void _InitConstValue_CatTreeChangeTypeEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__INITCONSTVALUE_CATTREECHANGETYPEEVENT_OFFSET))(this);
		}

		::System::Void _InitConstValue_CatTreeGroupInstanceID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__INITCONSTVALUE_CATTREEGROUPINSTANCEID_OFFSET))(this);
		}

		::System::Void _InitConstValue_CatTreeAttachPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__INITCONSTVALUE_CATTREEATTACHPOINT_OFFSET))(this);
		}

		::System::Void _InitConstValue_CatEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__INITCONSTVALUE_CATEFFECT_OFFSET))(this);
		}

		::System::Void _InitConstValue_VoiceCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__INITCONSTVALUE_VOICECD_OFFSET))(this);
		}

		::System::Void _ResetVoiceTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__RESETVOICETIMER_OFFSET))(this);
		}

		::System::Void _TickVoice(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__TICKVOICE_OFFSET))(this, deltaTime);
		}

		::System::Void _TriggerVoiceRandom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER__TRIGGERVOICERANDOM_OFFSET))(this);
		}
	};
}
