#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
#include "unitysdk/RPG/GameCore/ColliderEnableReason.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_347;
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class StartFarmPhantomData; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventureCharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class MapRotationEntityEffectConfig; }
namespace RPG::GameCore { class NPCComponent; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_NPCMANAGER_ACTIVEPHANTOM_OFFSET UNITYSDK_OFFSET(0x9917FF0)
#define RPG_CLIENT_NPCMANAGER_CLEARWARNINGPOWERFULENEMYCD_OFFSET UNITYSDK_OFFSET(0x99192D0)
#define RPG_CLIENT_NPCMANAGER_CREATENPCMONSTER_OFFSET UNITYSDK_OFFSET(0x99143A0)
#define RPG_CLIENT_NPCMANAGER_CREATENPC_OFFSET UNITYSDK_OFFSET(0x9913B90)
#define RPG_CLIENT_NPCMANAGER_DEBUGACTIVEPHANTOM_OFFSET UNITYSDK_OFFSET(0x99184A0)
#define RPG_CLIENT_NPCMANAGER_DESTROYNPC_1_OFFSET UNITYSDK_OFFSET(0x9914B20)
#define RPG_CLIENT_NPCMANAGER_DESTROYNPC_OFFSET UNITYSDK_OFFSET(0x9914740)
#define RPG_CLIENT_NPCMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99139A0)
#define RPG_CLIENT_NPCMANAGER_DOACTIVEPHANTOM_OFFSET UNITYSDK_OFFSET(0x9918930)
#define RPG_CLIENT_NPCMANAGER_ENABLEALLMONSTERNPCAI_OFFSET UNITYSDK_OFFSET(0x9917440)
#define RPG_CLIENT_NPCMANAGER_GETALLMONSTERNPC_OFFSET UNITYSDK_OFFSET(0x9915390)
#define RPG_CLIENT_NPCMANAGER_GETALLNORMALNPC_OFFSET UNITYSDK_OFFSET(0x9915220)
#define RPG_CLIENT_NPCMANAGER_GETALLNPCS_OFFSET UNITYSDK_OFFSET(0x99151E0)
#define RPG_CLIENT_NPCMANAGER_GETENTITYBYNPCID_OFFSET UNITYSDK_OFFSET(0x9914D80)
#define RPG_CLIENT_NPCMANAGER_GETFARMELEMENTENTITYID_OFFSET UNITYSDK_OFFSET(0x9919090)
#define RPG_CLIENT_NPCMANAGER_GETFARMELEMENTENTITY_OFFSET UNITYSDK_OFFSET(0x9918D50)
#define RPG_CLIENT_NPCMANAGER_GETNPCBYNPCID_1_OFFSET UNITYSDK_OFFSET(0x9914FD0)
#define RPG_CLIENT_NPCMANAGER_GETNPCBYNPCID_OFFSET UNITYSDK_OFFSET(0x9914E30)
#define RPG_CLIENT_NPCMANAGER_GETNPCNEAR_OFFSET UNITYSDK_OFFSET(0x9919320)
#define RPG_CLIENT_NPCMANAGER_GET_ISWANINGCD_OFFSET UNITYSDK_OFFSET(0x99195F0)
#define RPG_CLIENT_NPCMANAGER_GET_PHANTOMENTITIES_OFFSET UNITYSDK_OFFSET(0x9917F40)
#define RPG_CLIENT_NPCMANAGER_HIDEALLMONSTERNPC_OFFSET UNITYSDK_OFFSET(0x9917180)
#define RPG_CLIENT_NPCMANAGER_HIDEALLNORMALNPCAI_OFFSET UNITYSDK_OFFSET(0x99172E0)
#define RPG_CLIENT_NPCMANAGER_HIDEALLNORMALNPC_OFFSET UNITYSDK_OFFSET(0x9917020)
#define RPG_CLIENT_NPCMANAGER_HIDEALLNPCONLYVISIBLE_OFFSET UNITYSDK_OFFSET(0x9915500)
#define RPG_CLIENT_NPCMANAGER_HIDEALLNPC_OFFSET UNITYSDK_OFFSET(0x99156E0)
#define RPG_CLIENT_NPCMANAGER_REFRESHPHANTOM_OFFSET UNITYSDK_OFFSET(0x99175A0)
#define RPG_CLIENT_NPCMANAGER_SETHIDENEWMONSTERBYVISIBLEREASON_OFFSET UNITYSDK_OFFSET(0x991A470)
#define RPG_CLIENT_NPCMANAGER_SETHIDENEWNPCBYVISIBLEREASON_OFFSET UNITYSDK_OFFSET(0x991A3C0)
#define RPG_CLIENT_NPCMANAGER_SET_PHANTOMENTITIES_OFFSET UNITYSDK_OFFSET(0x991ADE0)
#define RPG_CLIENT_NPCMANAGER_SHOWALLNPC_OFFSET UNITYSDK_OFFSET(0x9916480)
#define RPG_CLIENT_NPCMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x9919160)
#define RPG_CLIENT_NPCMANAGER_WARNINGPOWERFULENEMY_OFFSET UNITYSDK_OFFSET(0x99191C0)
#define RPG_CLIENT_NPCMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9913730)
#define RPG_CLIENT_NPCMANAGER__GETHIDENPCEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0x9916C10)
#define RPG_CLIENT_NPCMANAGER__HIDENPC_OFFSET UNITYSDK_OFFSET(0x9915E70)
#define RPG_CLIENT_NPCMANAGER__ONLEVELENTITYDISPOSED_OFFSET UNITYSDK_OFFSET(0x991ACD0)
#define RPG_CLIENT_NPCMANAGER__ONNPCMONSTERCREATE_OFFSET UNITYSDK_OFFSET(0x99169E0)
#define RPG_CLIENT_NPCMANAGER__POSTCREATENPCFORPERFORMANCEHIDE_OFFSET UNITYSDK_OFFSET(0x991A800)
#define RPG_CLIENT_NPCMANAGER__POSTCREATENPCFORVISIBLEREASONHIDE_OFFSET UNITYSDK_OFFSET(0x991A520)
#define RPG_CLIENT_NPCMANAGER__SETUPATLASFACEEMOTION_OFFSET UNITYSDK_OFFSET(0x9919F80)
#define RPG_CLIENT_NPCMANAGER__SETUPBONEEMOTIONNAME_OFFSET UNITYSDK_OFFSET(0x9919DF0)
#define RPG_CLIENT_NPCMANAGER__SETUPDEFAULTBLENDSHAPECONFIG_OFFSET UNITYSDK_OFFSET(0x9919C80)
#define RPG_CLIENT_NPCMANAGER__SETUPDEFAULTIDLESTATE_OFFSET UNITYSDK_OFFSET(0x9919600)
#define RPG_CLIENT_NPCMANAGER__SETUPGROUPEDANIMATORSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x9919B30)
#define RPG_CLIENT_NPCMANAGER__SETUPINITIALHIDDENNODELIST_OFFSET UNITYSDK_OFFSET(0x991A9F0)
#define RPG_CLIENT_NPCMANAGER__SHOWNPC_OFFSET UNITYSDK_OFFSET(0x9916850)
#define RPG_CLIENT_NPCMANAGER__TRIGGEREFFECTONHIDENPC_OFFSET UNITYSDK_OFFSET(0x9916000)
#define RPG_CLIENT_NPCMANAGER__TRIGGERHIDENPCEFFECT_OFFSET UNITYSDK_OFFSET(0x9916DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int NPCManager_TypeDefinitionIndex = 48053;

	class NPCManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapNpcDef*>* _PhantomEntities; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* _NPCDictionary; // 0x18
		::RPG::GameCore::GameWorld* _OwnerWorldRef; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _NotHideNpcs; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _HideNpcs; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::CharacterVisibleReason>* _HideNewNPCVisibleReason; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* _EffectUniqueName; // 0x40
		::RPG::GameCore::HoyoTag* _HideWithoutHoyoTag; // 0x48
		::System::Collections::Generic::List_1<::RPG::GameCore::CharacterVisibleReason>* _HideNewMonsterVisibleReason; // 0x50
		::RPG::GameCore::ColliderEnableReason _HideAllColliderReason; // 0x58
		::System::Int32 _HideAllNPCAIBitset; // 0x5C
		::System::Boolean _HideNPCTriggerEffect; // 0x60
		::System::Boolean _UnloadArt; // 0x61
		::RPG::GameCore::CharacterVisibleReason _HideAllNPCReason; // 0x62
		::System::Single _MonsterWarningCD; // 0x64
		::System::Boolean _HideAllCollider; // 0x68
		::System::Boolean _IsHideAllNPC; // 0x69

		::System::Void _ctor(::RPG::GameCore::GameWorld* pOwnerWorld)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__CTOR_OFFSET))(this, pOwnerWorld);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CreateNPC(::RPG::Client::MapNpcDef* npcDef, ::System::Action_1<::RPG::GameCore::GameEntity*>* onLoadFinish)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::Client::MapNpcDef*, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_CREATENPC_OFFSET))(this, npcDef, onLoadFinish);
		}

		::RPG::GameCore::GameEntity* CreateNPCMonster(::RPG::Client::MapNpcDef* npcDef, ::System::Action_1<::RPG::GameCore::GameEntity*>* onLoadFinish)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::Client::MapNpcDef*, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_CREATENPCMONSTER_OFFSET))(this, npcDef, onLoadFinish);
		}

		::System::Void DestroyNPC(::System::UInt32 npcID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_DESTROYNPC_OFFSET))(this, npcID);
		}

		::System::Void DestroyNPC_1(::RPG::GameCore::GameEntity* npcEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_DESTROYNPC_1_OFFSET))(this, npcEntity);
		}

		::RPG::GameCore::GameEntity* GetEntityByNpcID(::System::UInt32 npcID)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_GETENTITYBYNPCID_OFFSET))(this, npcID);
		}

		::RPG::GameCore::GameEntity* GetNpcByNpcID(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_GETNPCBYNPCID_OFFSET))(this, ID);
		}

		::RPG::GameCore::GameEntity* GetNpcByNpcID_1(::System::UInt32 ID, ::System::UInt32 groupID)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_GETNPCBYNPCID_1_OFFSET))(this, ID, groupID);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* GetAllNpcs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_GETALLNPCS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GetAllNormalNpc()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_GETALLNORMALNPC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GetAllMonsterNpc()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_GETALLMONSTERNPC_OFFSET))(this);
		}

		::System::Void HideAllNpcOnlyVisible(::System::Boolean hide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_HIDEALLNPCONLYVISIBLE_OFFSET))(this, hide);
		}

		::System::Void HideAllNpc(::RPG::GameCore::CharacterVisibleReason visibleReason, ::System::Int32 enableAIBitset, ::RPG::GameCore::EntityTypeMask entityTypeMask, ::RPG::GameCore::HoyoTag* withoutTag, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::UInt32>*>* notHideNpcs, ::System::Boolean hideAllCollider, ::RPG::GameCore::ColliderEnableReason reason, ::System::Boolean hideNPCTriggerEffect, ::System::Boolean unloadArt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterVisibleReason, ::System::Int32, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::HoyoTag*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::UInt32>*>*, ::System::Boolean, ::RPG::GameCore::ColliderEnableReason, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_HIDEALLNPC_OFFSET))(this, visibleReason, enableAIBitset, entityTypeMask, withoutTag, notHideNpcs, hideAllCollider, reason, hideNPCTriggerEffect, unloadArt);
		}

		::System::Void ShowAllNpc(::RPG::GameCore::CharacterVisibleReason visibleReason, ::System::Int32 enableAIBitset, ::System::Boolean showAllCollider, ::RPG::GameCore::ColliderEnableReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterVisibleReason, ::System::Int32, ::System::Boolean, ::RPG::GameCore::ColliderEnableReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_SHOWALLNPC_OFFSET))(this, visibleReason, enableAIBitset, showAllCollider, reason);
		}

		::System::Void _OnNpcMonsterCreate(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__ONNPCMONSTERCREATE_OFFSET))(this, arg);
		}

		::System::Void _ShowNpc(::RPG::GameCore::GameEntity* pEntity, ::RPG::GameCore::CharacterVisibleReason visibleReason, ::System::Int32 enableAIBitset, ::System::Boolean showAllCollider, ::RPG::GameCore::ColliderEnableReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::CharacterVisibleReason, ::System::Int32, ::System::Boolean, ::RPG::GameCore::ColliderEnableReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__SHOWNPC_OFFSET))(this, pEntity, visibleReason, enableAIBitset, showAllCollider, reason);
		}

		::System::Void _HideNpc(::RPG::GameCore::GameEntity* pEntity, ::RPG::GameCore::CharacterVisibleReason visibleReason, ::System::Int32 enableAIBitset, ::System::Boolean hideAllCollider, ::RPG::GameCore::ColliderEnableReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::CharacterVisibleReason, ::System::Int32, ::System::Boolean, ::RPG::GameCore::ColliderEnableReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__HIDENPC_OFFSET))(this, pEntity, visibleReason, enableAIBitset, hideAllCollider, reason);
		}

		::System::Void _TriggerEffectOnHideNpc(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__TRIGGEREFFECTONHIDENPC_OFFSET))(this, pEntity);
		}

		::RPG::GameCore::MapRotationEntityEffectConfig* _GetHideNPCEffectConfig(::RPG::Client::MapNpcDef* npcDef)
		{
			return ((::RPG::GameCore::MapRotationEntityEffectConfig*(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__GETHIDENPCEFFECTCONFIG_OFFSET))(this, npcDef);
		}

		::System::Void _TriggerHideNPCEffect(::System::String* sEffectPath, ::UnityEngine::Vector3 vInitPosition, ::UnityEngine::Quaternion vInitRotation, ::System::String* sUniqueName, ::UnityEngine::Transform* pAttachTransform, ::RPG::GameCore::GameEntity* entity, ::System::Boolean async)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::String*, ::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__TRIGGERHIDENPCEFFECT_OFFSET))(this, sEffectPath, vInitPosition, vInitRotation, sUniqueName, pAttachTransform, entity, async);
		}

		::System::Void HideAllNormalNpc(::System::Boolean hide, ::RPG::GameCore::CharacterVisibleReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::CharacterVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_HIDEALLNORMALNPC_OFFSET))(this, hide, reason);
		}

		::System::Void HideAllMonsterNpc(::System::Boolean hide, ::RPG::GameCore::CharacterVisibleReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::CharacterVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_HIDEALLMONSTERNPC_OFFSET))(this, hide, reason);
		}

		::System::Void HideAllNormalNpcAI(::System::Int32 index, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_HIDEALLNORMALNPCAI_OFFSET))(this, index, enable);
		}

		::System::Void EnableAllMonsterNpcAI(::System::Int32 index, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_ENABLEALLMONSTERNPCAI_OFFSET))(this, index, enable);
		}

		::System::Boolean RefreshPhantom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_REFRESHPHANTOM_OFFSET))(this);
		}

		::System::Void ActivePhantom(::RPG::Client::StartFarmPhantomData* data, ::System::UInt32& serverEntityID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StartFarmPhantomData*, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_ACTIVEPHANTOM_OFFSET))(this, data, serverEntityID);
		}

		::System::UInt32 DebugActivePhantom(::System::UInt32 customWorldLevel, ::System::UInt32 farmElementID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_DEBUGACTIVEPHANTOM_OFFSET))(this, customWorldLevel, farmElementID);
		}

		::System::Void DoActivePhantom(::System::UInt32 serverEntityID, ::System::UInt32 customWorldLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_DOACTIVEPHANTOM_OFFSET))(this, serverEntityID, customWorldLevel);
		}

		::RPG::GameCore::GameEntity* GetFarmElementEntity(::System::UInt32 farmElementID)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_GETFARMELEMENTENTITY_OFFSET))(this, farmElementID);
		}

		::System::UInt32 GetFarmElementEntityID(::System::UInt32 farmElementID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_GETFARMELEMENTENTITYID_OFFSET))(this, farmElementID);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void WarningPowerfulEnemy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_WARNINGPOWERFULENEMY_OFFSET))(this);
		}

		::System::Void ClearWarningPowerfulEnemyCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_CLEARWARNINGPOWERFULENEMYCD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GetNPCNear(::UnityEngine::Vector3 pos, ::System::Single radius)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_GETNPCNEAR_OFFSET))(this, pos, radius);
		}

		::System::Boolean get_IsWaningCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_GET_ISWANINGCD_OFFSET))(this);
		}

		::System::Void _SetupDefaultIdleState(::RPG::GameCore::NPCComponent* npcCmpt, ::RPG::GameCore::AdventureCharacterController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCComponent*, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__SETUPDEFAULTIDLESTATE_OFFSET))(this, npcCmpt, controller);
		}

		::System::Void _SetupGroupedAnimatorSpeedRatio(::RPG::GameCore::NPCComponent* npcCmpt, ::RPG::GameCore::AdventureCharacterController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCComponent*, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__SETUPGROUPEDANIMATORSPEEDRATIO_OFFSET))(this, npcCmpt, controller);
		}

		::System::Void _SetupDefaultBlendShapeConfig(::RPG::GameCore::NPCComponent* npcCmpt, ::RPG::GameCore::AdventureCharacterController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCComponent*, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__SETUPDEFAULTBLENDSHAPECONFIG_OFFSET))(this, npcCmpt, controller);
		}

		::System::Void _SetupBoneEmotionName(::RPG::GameCore::NPCComponent* npcCmpt, ::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCComponent*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__SETUPBONEEMOTIONNAME_OFFSET))(this, npcCmpt, pEntity);
		}

		::System::Void _SetupAtlasFaceEmotion(::RPG::GameCore::NPCComponent* npcCmpt, ::RPG::GameCore::AdventureCharacterDataComponent* dataCmpt, ::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCComponent*, ::RPG::GameCore::AdventureCharacterDataComponent*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__SETUPATLASFACEEMOTION_OFFSET))(this, npcCmpt, dataCmpt, pEntity);
		}

		::System::Void SetHideNewNPCByVisibleReason(::System::Boolean hide, ::RPG::GameCore::CharacterVisibleReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::CharacterVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_SETHIDENEWNPCBYVISIBLEREASON_OFFSET))(this, hide, reason);
		}

		::System::Void SetHideNewMonsterByVisibleReason(::System::Boolean hide, ::RPG::GameCore::CharacterVisibleReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::CharacterVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_SETHIDENEWMONSTERBYVISIBLEREASON_OFFSET))(this, hide, reason);
		}

		::System::Void _PostCreateNPCForVisibleReasonHide(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__POSTCREATENPCFORVISIBLEREASONHIDE_OFFSET))(this, entity);
		}

		::System::Void _PostCreateNPCForPerformanceHide(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__POSTCREATENPCFORPERFORMANCEHIDE_OFFSET))(this, entity);
		}

		::System::Void _SetupInitialHiddenNodeList(::RPG::GameCore::GameEntity* entity, ::RPG::Client::MapNpcDef* npcDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__SETUPINITIALHIDDENNODELIST_OFFSET))(this, entity, npcDef);
		}

		::System::Void _OnLevelEntityDisposed(::Class_0_16E4307DCC419505_347* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__ONLEVELENTITYDISPOSED_OFFSET))(this, evt);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapNpcDef*>* get_PhantomEntities()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapNpcDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_GET_PHANTOMENTITIES_OFFSET))(this);
		}

		::System::Void set_PhantomEntities(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapNpcDef*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapNpcDef*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_SET_PHANTOMENTITIES_OFFSET))(this, value);
		}
	};
}
