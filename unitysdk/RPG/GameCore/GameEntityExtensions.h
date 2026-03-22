#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/EntityLoadState.h"
#include "unitysdk/RPG/GameCore/EntityTeamRelationTypeMask.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class GameComponentBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class GameObject; }

#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_APPEAR_OFFSET UNITYSDK_OFFSET(0xA421900)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_BINDSOURCE_OFFSET UNITYSDK_OFFSET(0xA41FF80)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_CLEARVERTICALHITINFO_OFFSET UNITYSDK_OFFSET(0xA420A90)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_CUSTOMCOMPARETO_OFFSET UNITYSDK_OFFSET(0xA423180)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_EQUALRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA422470)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETACTUALENTITYTYPE_OFFSET UNITYSDK_OFFSET(0xA4226E0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETBATTLEAVATARCAMERAOFFSETHEIGHT_OFFSET UNITYSDK_OFFSET(0xA421060)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETBATTLEMONSTERCAMERAOFFSETHEIGHT_OFFSET UNITYSDK_OFFSET(0xA4211B0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETBODYSIZE_OFFSET UNITYSDK_OFFSET(0xA421300)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETCHARACTERANIMATORGO_OFFSET UNITYSDK_OFFSET(0xA4201C0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETCHARACTERSOMATO_OFFSET UNITYSDK_OFFSET(0xA423060)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETCOLLIDERBOUNDS_OFFSET UNITYSDK_OFFSET(0xA421410)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETCOLLIDERHEIGHT_OFFSET UNITYSDK_OFFSET(0xA421550)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETCOLLIDERWIDTH_OFFSET UNITYSDK_OFFSET(0xA4216E0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETENEMYTEAMTYPE_OFFSET UNITYSDK_OFFSET(0xA4225A0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETENEMYTEAM_OFFSET UNITYSDK_OFFSET(0xA41FEE0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETENTITYVIEWSORTPRIORITY_OFFSET UNITYSDK_OFFSET(0xA423430)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETENTITYWILLUNSTAGE_OFFSET UNITYSDK_OFFSET(0xA4234B0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETMOCKANIMATOR_OFFSET UNITYSDK_OFFSET(0xA41FDE0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETMODELART_OFFSET UNITYSDK_OFFSET(0xA4203D0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETMODELLOADSTATE_OFFSET UNITYSDK_OFFSET(0xA41F860)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETNPCBODYSIZE_OFFSET UNITYSDK_OFFSET(0xA4213A0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETROTATION_OFFSET UNITYSDK_OFFSET(0xA422E00)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETTARGETTEAMRELATION_OFFSET UNITYSDK_OFFSET(0xA423530)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETWORLDPOS_OFFSET UNITYSDK_OFFSET(0xA422D00)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASACTIONTURN_1_OFFSET UNITYSDK_OFFSET(0xA422350)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASACTIONTURN_OFFSET UNITYSDK_OFFSET(0xA422300)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASBEGUNDYINGPROCESS_1_OFFSET UNITYSDK_OFFSET(0xA422250)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASBEGUNDYINGPROCESS_OFFSET UNITYSDK_OFFSET(0xA422200)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASMODELART_OFFSET UNITYSDK_OFFSET(0xA4202A0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISALIVELIMBOORENTERDYING_OFFSET UNITYSDK_OFFSET(0xA421DE0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISALIVEORLIMBO_1_OFFSET UNITYSDK_OFFSET(0xA421D30)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISALIVEORLIMBO_OFFSET UNITYSDK_OFFSET(0xA421CE0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISALLOWADDMODIFIER_OFFSET UNITYSDK_OFFSET(0xA421F60)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISAPPEAR_OFFSET UNITYSDK_OFFSET(0xA421870)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISARTMODEL_OFFSET UNITYSDK_OFFSET(0xA4204F0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISENEMYOF_OFFSET UNITYSDK_OFFSET(0xA422F80)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISENTITYNEEDCHECKFORWAVEEND_OFFSET UNITYSDK_OFFSET(0xA422A70)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISINTEAMFORMATION_OFFSET UNITYSDK_OFFSET(0xA422870)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISINVALID_OFFSET UNITYSDK_OFFSET(0xA422400)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISLIMBOORDEAD_1_OFFSET UNITYSDK_OFFSET(0xA422150)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISLIMBOORDEAD_OFFSET UNITYSDK_OFFSET(0xA422100)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMATCHEDBYALIVESTATEMASK_OFFSET UNITYSDK_OFFSET(0xA41F420)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMATCHEDBYENTITYTYPEMASK_OFFSET UNITYSDK_OFFSET(0xA41F510)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMATCHED_OFFSET UNITYSDK_OFFSET(0xA41F4C0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMATCH_1_OFFSET UNITYSDK_OFFSET(0xA420160)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMATCH_OFFSET UNITYSDK_OFFSET(0xA420110)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xA41FCE0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMODELARTLOADING_OFFSET UNITYSDK_OFFSET(0xA41FAE0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMODELLOADING_OFFSET UNITYSDK_OFFSET(0xA41F960)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xA41FBE0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISOFFTEAMFORMATION_OFFSET UNITYSDK_OFFSET(0xA422A00)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISPARTENTITY_OFFSET UNITYSDK_OFFSET(0xA4224D0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISPUPPETCHARACTER_OFFSET UNITYSDK_OFFSET(0xA4228E0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISRELATEDTOPLAYER_OFFSET UNITYSDK_OFFSET(0xA422C70)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISSERVANT_OFFSET UNITYSDK_OFFSET(0xA422760)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISSTATICNPC_OFFSET UNITYSDK_OFFSET(0xA420C30)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISTARGETINHOSTILECAMP_OFFSET UNITYSDK_OFFSET(0xA422600)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISTEAMCHARACTER_OFFSET UNITYSDK_OFFSET(0xA4227E0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISVALIDCHARACTERINCLUDEZOMBIE_OFFSET UNITYSDK_OFFSET(0xA422BA0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_MAPRESPATH_OFFSET UNITYSDK_OFFSET(0xA421BA0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_REGISTERAPPEAREDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA421A70)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_SETLOCATION_OFFSET UNITYSDK_OFFSET(0xA420580)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xA4206B0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_SETROTATION_OFFSET UNITYSDK_OFFSET(0xA4208C0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_SETUNITYGOTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA420B50)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_TOGROUND_OFFSET UNITYSDK_OFFSET(0xA420CB0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_TOMASK_OFFSET UNITYSDK_OFFSET(0xA41FF30)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_TRYMODELINITFORNEWCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA41F5C0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS_UNREGISTERAPPEAREDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA421AF0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4235D0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS__COMPAREENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA423250)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS__COMPAREENTITYVIEWSORTPRIORITY_OFFSET UNITYSDK_OFFSET(0xA4232D0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS__CUSTOMCOMPARETO_G___GETCOMPAREVALUE_75_0_OFFSET UNITYSDK_OFFSET(0xA423230)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS__ISENTERLISTENREDBREAK_OFFSET UNITYSDK_OFFSET(0xA422980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntityExtensions_TypeDefinitionIndex = 45535;

	class GameEntityExtensions : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet_IsInTeamFormationWithoutPuppetDelg()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(GameEntityExtensions_TypeDefinitionIndex)->GetStaticField(0x25120);
		}
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet_IsOffTeamFormationDelg()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(GameEntityExtensions_TypeDefinitionIndex)->GetStaticField(0x25128);
		}
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet_IsEntityNeedCheckForWaveEndDelg()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(GameEntityExtensions_TypeDefinitionIndex)->GetStaticField(0x25130);
		}
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet_IsEnterListenRedBreakDel()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(GameEntityExtensions_TypeDefinitionIndex)->GetStaticField(0x25138);
		}
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet_IsValidCharacterIncludeZombieDelg()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(GameEntityExtensions_TypeDefinitionIndex)->GetStaticField(0x25140);
		}
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet_IsInTeamFormationDelg()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(GameEntityExtensions_TypeDefinitionIndex)->GetStaticField(0x25148);
		}
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet_IsTeamCharacterDelg()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(GameEntityExtensions_TypeDefinitionIndex)->GetStaticField(0x25150);
		}
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet_IsExcludePuppetCharacterDelg()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(GameEntityExtensions_TypeDefinitionIndex)->GetStaticField(0x25158);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsMatchedByAliveStateMask(::RPG::GameCore::GameEntity* entity, ::RPG::GameCore::AliveStateMask mask)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMATCHEDBYALIVESTATEMASK_OFFSET))(entity, mask);
		}

		static ::System::Boolean IsMatched(::RPG::GameCore::EntityType state, ::RPG::GameCore::EntityTypeMask mask)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityType, ::RPG::GameCore::EntityTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMATCHED_OFFSET))(state, mask);
		}

		static ::System::Boolean IsMatchedByEntityTypeMask(::RPG::GameCore::GameEntity* entity, ::RPG::GameCore::EntityTypeMask mask)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::EntityTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMATCHEDBYENTITYTYPEMASK_OFFSET))(entity, mask);
		}

		static ::System::Void TryModelInitForNewComponent(::RPG::GameCore::GameEntity* entity, ::RPG::GameCore::GameComponentBase* compt)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameComponentBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_TRYMODELINITFORNEWCOMPONENT_OFFSET))(entity, compt);
		}

		static ::RPG::GameCore::EntityLoadState GetModelLoadState(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::GameCore::EntityLoadState(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETMODELLOADSTATE_OFFSET))(entity);
		}

		static ::System::Boolean IsModelLoading(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMODELLOADING_OFFSET))(entity);
		}

		static ::System::Boolean IsModelArtLoading(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMODELARTLOADING_OFFSET))(entity);
		}

		static ::System::Boolean IsModelRootLoaded(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMODELROOTLOADED_OFFSET))(entity);
		}

		static ::System::Boolean IsModelArtLoaded(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMODELARTLOADED_OFFSET))(entity);
		}

		static ::RPG::Client::MockAnimator* GetMockAnimator(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::Client::MockAnimator*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETMOCKANIMATOR_OFFSET))(entity);
		}

		static ::RPG::GameCore::TeamType GetEnemyTeam(::RPG::GameCore::TeamType team)
		{
			return ((::RPG::GameCore::TeamType(*)(::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETENEMYTEAM_OFFSET))(team);
		}

		static ::RPG::GameCore::TeamTypeMask ToMask(::RPG::GameCore::TeamType team)
		{
			return ((::RPG::GameCore::TeamTypeMask(*)(::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_TOMASK_OFFSET))(team);
		}

		static ::RPG::GameCore::TeamTypeMask BindSource(::RPG::GameCore::TeamTypeMask teamMask, ::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::GameCore::TeamTypeMask(*)(::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_BINDSOURCE_OFFSET))(teamMask, entity);
		}

		static ::System::Boolean IsMatch(::RPG::GameCore::TeamType team, ::RPG::GameCore::TeamTypeMask mask)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TeamType, ::RPG::GameCore::TeamTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMATCH_OFFSET))(team, mask);
		}

		static ::System::Boolean IsMatch_1(::RPG::GameCore::GameEntity* entity, ::RPG::GameCore::TeamTypeMask mask)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISMATCH_1_OFFSET))(entity, mask);
		}

		static ::UnityEngine::GameObject* GetCharacterAnimatorGO(::RPG::GameCore::GameEntity* entity)
		{
			return ((::UnityEngine::GameObject*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETCHARACTERANIMATORGO_OFFSET))(entity);
		}

		static ::System::Boolean HasModelArt(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASMODELART_OFFSET))(entity);
		}

		static ::UnityEngine::GameObject* GetModelArt(::RPG::GameCore::GameEntity* entity)
		{
			return ((::UnityEngine::GameObject*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETMODELART_OFFSET))(entity);
		}

		static ::System::Boolean IsArtModel(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISARTMODEL_OFFSET))(entity);
		}

		static ::System::Void SetLocation(::RPG::GameCore::GameEntity* entity, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_SETLOCATION_OFFSET))(entity, position, rotation);
		}

		static ::System::Void ClearVerticalHitInfo(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_CLEARVERTICALHITINFO_OFFSET))(entity);
		}

		static ::System::Void SetUnityGOTransform(::RPG::GameCore::GameEntity* entity, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_SETUNITYGOTRANSFORM_OFFSET))(entity, position, rotation);
		}

		static ::System::Void SetPosition(::RPG::GameCore::GameEntity* entity, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_SETPOSITION_OFFSET))(entity, position);
		}

		static ::System::Void SetRotation(::RPG::GameCore::GameEntity* entity, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_SETROTATION_OFFSET))(entity, rotation);
		}

		static ::System::Boolean IsStaticNPC(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISSTATICNPC_OFFSET))(entity);
		}

		static ::System::Void ToGround(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_TOGROUND_OFFSET))(entity);
		}

		static ::System::Single GetBattleAvatarCameraOffsetHeight(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETBATTLEAVATARCAMERAOFFSETHEIGHT_OFFSET))(entity);
		}

		static ::System::Single GetBattleMonsterCameraOffsetHeight(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETBATTLEMONSTERCAMERAOFFSETHEIGHT_OFFSET))(entity);
		}

		static ::RPG::GameCore::BodySize GetBodySize(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::GameCore::BodySize(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETBODYSIZE_OFFSET))(entity);
		}

		static ::RPG::GameCore::NPCBodySize GetNPCBodySize(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::GameCore::NPCBodySize(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETNPCBODYSIZE_OFFSET))(entity);
		}

		static ::UnityEngine::Bounds GetColliderBounds(::RPG::GameCore::GameEntity* entity, ::System::Boolean& hasCollider)
		{
			return ((::UnityEngine::Bounds(*)(::RPG::GameCore::GameEntity*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETCOLLIDERBOUNDS_OFFSET))(entity, hasCollider);
		}

		static ::System::Single GetColliderHeight(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETCOLLIDERHEIGHT_OFFSET))(entity);
		}

		static ::System::Single GetColliderWidth(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETCOLLIDERWIDTH_OFFSET))(entity);
		}

		static ::System::Boolean IsAppear(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISAPPEAR_OFFSET))(entity);
		}

		static ::System::Void Appear(::RPG::GameCore::GameEntity* entity, ::RPG::Client::MapNpcDef* npcDef)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_APPEAR_OFFSET))(entity, npcDef);
		}

		static ::System::Void RegisterAppearedCallback(::RPG::GameCore::GameEntity* entity, ::System::Action* action)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_REGISTERAPPEAREDCALLBACK_OFFSET))(entity, action);
		}

		static ::System::Void UnregisterAppearedCallback(::RPG::GameCore::GameEntity* entity, ::System::Action* action)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_UNREGISTERAPPEAREDCALLBACK_OFFSET))(entity, action);
		}

		static ::System::String* MapResPath(::RPG::GameCore::GameEntity* entity, ::System::String* originPath)
		{
			return ((::System::String*(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_MAPRESPATH_OFFSET))(entity, originPath);
		}

		static ::System::Boolean IsAliveOrLimbo(::RPG::GameCore::AliveState state)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISALIVEORLIMBO_OFFSET))(state);
		}

		static ::System::Boolean IsAliveOrLimbo_1(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISALIVEORLIMBO_1_OFFSET))(entity);
		}

		static ::System::Boolean IsAliveLimboOrEnterDying(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISALIVELIMBOORENTERDYING_OFFSET))(entity);
		}

		static ::System::Boolean IsAllowAddModifier(::RPG::GameCore::GameEntity* entity, ::RPG::GameCore::GameEntity* casterEntity, ::RPG::GameCore::TurnBasedModifierConfig* modifierConfig)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISALLOWADDMODIFIER_OFFSET))(entity, casterEntity, modifierConfig);
		}

		static ::System::Boolean IsLimboOrDead(::RPG::GameCore::AliveState state)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISLIMBOORDEAD_OFFSET))(state);
		}

		static ::System::Boolean IsLimboOrDead_1(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISLIMBOORDEAD_1_OFFSET))(entity);
		}

		static ::System::Boolean HasBegunDyingProcess(::RPG::GameCore::AliveState state)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASBEGUNDYINGPROCESS_OFFSET))(state);
		}

		static ::System::Boolean HasBegunDyingProcess_1(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASBEGUNDYINGPROCESS_1_OFFSET))(entity);
		}

		static ::System::Boolean HasActionTurn(::RPG::GameCore::AliveState state)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASACTIONTURN_OFFSET))(state);
		}

		static ::System::Boolean HasActionTurn_1(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_HASACTIONTURN_1_OFFSET))(entity);
		}

		static ::System::Boolean IsInvalid(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISINVALID_OFFSET))(entity);
		}

		static ::System::Boolean EqualRuntimeID(::RPG::GameCore::GameEntity* entity, ::System::UInt32 runtimeID)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_EQUALRUNTIMEID_OFFSET))(entity, runtimeID);
		}

		static ::System::Boolean IsPartEntity(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISPARTENTITY_OFFSET))(entity);
		}

		static ::RPG::GameCore::TeamType GetEnemyTeamType(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::GameCore::TeamType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETENEMYTEAMTYPE_OFFSET))(entity);
		}

		static ::System::Boolean IsTargetInHostileCamp(::RPG::GameCore::GameEntity* entity, ::RPG::GameCore::GameEntity* target)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISTARGETINHOSTILECAMP_OFFSET))(entity, target);
		}

		static ::RPG::GameCore::EntityType GetActualEntityType(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::GameCore::EntityType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETACTUALENTITYTYPE_OFFSET))(entity);
		}

		static ::System::Boolean IsServant(::RPG::GameCore::GameEntity* entity, ::System::Boolean includeSnapshot)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISSERVANT_OFFSET))(entity, includeSnapshot);
		}

		static ::System::Boolean IsTeamCharacter(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISTEAMCHARACTER_OFFSET))(entity);
		}

		static ::System::Boolean IsInTeamFormation(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISINTEAMFORMATION_OFFSET))(entity);
		}

		static ::System::Boolean IsPuppetCharacter(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISPUPPETCHARACTER_OFFSET))(entity);
		}

		static ::System::Boolean _IsEnterListenRedBreak(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS__ISENTERLISTENREDBREAK_OFFSET))(entity);
		}

		static ::System::Boolean IsOffTeamFormation(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISOFFTEAMFORMATION_OFFSET))(entity);
		}

		static ::System::Boolean IsEntityNeedCheckForWaveEnd(::RPG::GameCore::GameEntity* pTarget)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISENTITYNEEDCHECKFORWAVEEND_OFFSET))(pTarget);
		}

		static ::System::Boolean IsValidCharacterIncludeZombie(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISVALIDCHARACTERINCLUDEZOMBIE_OFFSET))(entity);
		}

		static ::System::Boolean IsRelatedToPlayer(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISRELATEDTOPLAYER_OFFSET))(entity);
		}

		static ::RPG::MVector3 GetWorldPos(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::MVector3(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETWORLDPOS_OFFSET))(entity);
		}

		static ::UnityEngine::Quaternion GetRotation(::RPG::GameCore::GameEntity* entity)
		{
			return ((::UnityEngine::Quaternion(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETROTATION_OFFSET))(entity);
		}

		static ::System::Boolean IsEnemyOf(::RPG::GameCore::GameEntity* targetEntity, ::RPG::GameCore::GameEntity* attacker)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_ISENEMYOF_OFFSET))(targetEntity, attacker);
		}

		static ::RPG::GameCore::CharacterSomatoType GetCharacterSomato(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::GameCore::CharacterSomatoType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETCHARACTERSOMATO_OFFSET))(entity);
		}

		static ::System::Int32 CustomCompareTo(::RPG::GameCore::CharacterSomatoType a, ::RPG::GameCore::CharacterSomatoType b)
		{
			return ((::System::Int32(*)(::RPG::GameCore::CharacterSomatoType, ::RPG::GameCore::CharacterSomatoType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_CUSTOMCOMPARETO_OFFSET))(a, b);
		}

		static ::System::Int32 _CompareEntityRuntimeID(::RPG::GameCore::GameEntity* lhs, ::RPG::GameCore::GameEntity* rhs)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS__COMPAREENTITYRUNTIMEID_OFFSET))(lhs, rhs);
		}

		static ::System::Int32 _CompareEntityViewSortPriority(::RPG::GameCore::GameEntity* lhs, ::RPG::GameCore::GameEntity* rhs)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS__COMPAREENTITYVIEWSORTPRIORITY_OFFSET))(lhs, rhs);
		}

		static ::System::UInt32 GetEntityViewSortPriority(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETENTITYVIEWSORTPRIORITY_OFFSET))(entity);
		}

		static ::System::Boolean GetEntityWillUnstage(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETENTITYWILLUNSTAGE_OFFSET))(entity);
		}

		static ::RPG::GameCore::EntityTeamRelationTypeMask GetTargetTeamRelation(::RPG::GameCore::GameEntity* entity, ::RPG::GameCore::GameEntity* targetEntity)
		{
			return ((::RPG::GameCore::EntityTeamRelationTypeMask(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS_GETTARGETTEAMRELATION_OFFSET))(entity, targetEntity);
		}

		static ::System::Int32 _CustomCompareTo_g___GetCompareValue_75_0(::RPG::GameCore::CharacterSomatoType e)
		{
			return ((::System::Int32(*)(::RPG::GameCore::CharacterSomatoType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS__CUSTOMCOMPARETO_G___GETCOMPAREVALUE_75_0_OFFSET))(e);
		}
	};
}
