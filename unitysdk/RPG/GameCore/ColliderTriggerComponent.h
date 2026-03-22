#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvSetTriggerSkipFakeAvatarType.h"
#include "unitysdk/RPG/GameCore/CollierTriggerComponentEnableReason.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class Class_0_16E4307DCC419505_420;
class Class_0_16E4307DCC419505_424;
class Class_1_59305B446B42427E;
class Class_1_5F51D4049EA87B7B;
class Class_1_B9DA9FA7666C65CE;
class Class_2_115E8993398549DB;
class Class_2_9DD8A46984F1AFFD;
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class MonoEntityTriggerCollision; }
namespace RPG::Client { class MonoGeometryTrigger; }
namespace RPG::Client { class MonoTriggerRegion; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class LevelNPCNearbyAnimConfig; }
namespace RPG::GameCore { class LevelNPCNearbyEventConfig; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace RPG::GameCore { class NPCMonsterHintSoundConfig; }
namespace RPG::GameCore { class NPCSoundConfig; }
namespace RPG::GameCore { class PropConfig; }
namespace RPG::GameCore { class PropSoundConfig; }
namespace RPG::GameCore { class ShowHintEffect; }
namespace RPG::GameCore { class UnitHintTriggerConfig; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_CAPTURECOLLIDERFROMORIGINPREFAB_OFFSET UNITYSDK_OFFSET(0xA3A3DE0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_COLLIDERTRIGGERCOUNT_OFFSET UNITYSDK_OFFSET(0xA3A8A30)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_CONTAINSBLOCKDIALOGUETRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A8760)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_CREATESIMPLESPHEREREGIONINFO_OFFSET UNITYSDK_OFFSET(0xA3AA120)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_CREATETRIGGERNODE_OFFSET UNITYSDK_OFFSET(0xA3A3BC0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_DESTROYCUSTOMTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A79C0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3A3160)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLEALLTRIGGER_OFFSET UNITYSDK_OFFSET(0xA39DAA0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLEBUTTONS_OFFSET UNITYSDK_OFFSET(0xA3A2FB0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLECUSTOMTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A8350)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLEINTERACTIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A8030)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLENAMEDTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A2E10)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLEOPTIONSTRIGGEROPTIONS_OFFSET UNITYSDK_OFFSET(0xA3A8A80)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLETRIGGER_1_OFFSET UNITYSDK_OFFSET(0xA3A7CD0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLETRIGGER_OFFSET UNITYSDK_OFFSET(0xA365680)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLE_OFFSET UNITYSDK_OFFSET(0xA3AAA30)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_FINDORSETUPCOLLIDER_OFFSET UNITYSDK_OFFSET(0xA3A43A0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_FORCETICKGEOMETRYREGION_OFFSET UNITYSDK_OFFSET(0xA3A9800)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_GETTRIGGERBYTYPE_OFFSET UNITYSDK_OFFSET(0xA3A3A70)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A39B0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_HASHOYOTAG_OFFSET UNITYSDK_OFFSET(0xA3AA9C0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_HASMISSIONINTERACTIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A7ED0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA3A3270)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ISCONTAINENTITY_OFFSET UNITYSDK_OFFSET(0xA3A88B0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ISENABLE_OFFSET UNITYSDK_OFFSET(0xA3AAC80)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xA3A3350)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xA3A3860)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xA3A32B0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xA3A31E0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONWILLBEDESTROY_OFFSET UNITYSDK_OFFSET(0xA3A3110)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_OPTIMIZECOLLIDERLAYERWHENLOCALPLAYERONLYTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A72C0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERCOLLIDERREGIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A7470)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERDISTRICTLEVELTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A5460)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERDISTRICTTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A52F0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERFIVEDIMTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A6F10)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERGEOMETRYREGIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A7730)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERLOOKATTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A60C0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERMONOCURVEOPTIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A70A0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNAMEDTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A20A0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNEARBYANIMTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A6230)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNEARBYEVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A6410)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNPCCUSTOMTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A4760)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNPCMONSTERHINTSOUNDTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A48A0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNPCMONSTERINTERACTIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A7150)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNPCSOUNDTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A4510)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPCUSTOMTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A6B40)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPHINTTRIGGER_1_OFFSET UNITYSDK_OFFSET(0xA3A4BD0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPHINTTRIGGER_2_OFFSET UNITYSDK_OFFSET(0xA3A4DB0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPHINTTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A4A10)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPINTERACTIONTRIGGERBYMISSION_OFFSET UNITYSDK_OFFSET(0xA3A6710)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPINTERACTIONTRIGGERDEFAULT_OFFSET UNITYSDK_OFFSET(0xA3A6870)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPINTERACTIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A69C0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPOPTIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A65F0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPSOUNDTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A50A0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERSUMMONUNITCUSTOMTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A6A60)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTALKTRIGGERBYNPCMONSTER_OFFSET UNITYSDK_OFFSET(0xA3A57E0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTALKTRIGGERBYNPC_OFFSET UNITYSDK_OFFSET(0xA3A5E20)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTALKTRIGGERBYPROP_OFFSET UNITYSDK_OFFSET(0xA3A54D0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTRIGGERLOGIC_OFFSET UNITYSDK_OFFSET(0xA3A98A0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A2260)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERUNITHINTTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A4F40)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_SETSKIPFAKEAVATARFLAG_OFFSET UNITYSDK_OFFSET(0xA3A7B20)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_SETUPTRIGGERCOLLIDER_OFFSET UNITYSDK_OFFSET(0xA3A4010)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xA3A9700)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_UNREGISTERNAMEDTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A2700)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_UNREGISTERTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A28B0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__BUILDDEFAULTTRIGGERINFOMAPPING_OFFSET UNITYSDK_OFFSET(0xA3A1AD0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3AAF10)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__CONVERTCOLLIDERTOTRIGGERINFO_OFFSET UNITYSDK_OFFSET(0xA3A9EC0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA3AACD0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__DEFINEDEFAULTSPHERETRIGGERINFO_OFFSET UNITYSDK_OFFSET(0xA3A9E30)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__DESTROYTRIGGERLOGICWHENDISPOSE_OFFSET UNITYSDK_OFFSET(0xA3A9AB0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__INITDEFAULTCUSTOMTRIGGERINFO_OFFSET UNITYSDK_OFFSET(0xA3AA3A0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__INITDEFAULTINTERACTIONTRIGGERINFO_OFFSET UNITYSDK_OFFSET(0xA3AA1A0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__INITNAMEDTRIGGERINFOMAPPING_OFFSET UNITYSDK_OFFSET(0xA3A2050)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__INITROOTNODE_OFFSET UNITYSDK_OFFSET(0xA3A9BA0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__ONTRIGGERENABLECHANGE_OFFSET UNITYSDK_OFFSET(0xA3AA910)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__ONTRIGGERLOGICFINISH_OFFSET UNITYSDK_OFFSET(0xA3A9A20)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__OVERRIDEINSTANCETRIGGERINFOMAPPING_OFFSET UNITYSDK_OFFSET(0xA3A1E30)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__POSTPROCESSTICKABLETRIGGERAFTERREGISTER_OFFSET UNITYSDK_OFFSET(0xA3A78B0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__POSTPROCESSTICKABLETRIGGERAFTERUNREGISTER_OFFSET UNITYSDK_OFFSET(0xA3A7A20)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__REGISTERPROPPERSPECTIVEWALLTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A3660)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__SETUPCOLLIDERANDREGION_OFFSET UNITYSDK_OFFSET(0xA3AA6B0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__SETUPGEOMETRYREGION_OFFSET UNITYSDK_OFFSET(0xA3A7610)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__TICKTRIGGERLOGIC_OFFSET UNITYSDK_OFFSET(0xA3A9530)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__TRYREGISTERDYNAMICATTACHTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A24A0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__TRYUNREGISTERDYNAMICATTACHTRIGGER_OFFSET UNITYSDK_OFFSET(0xA3A2760)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UNINITROOTNODE_OFFSET UNITYSDK_OFFSET(0xA3A9DA0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UNREGISTERALLTRIGGERS_OFFSET UNITYSDK_OFFSET(0xA3AA5A0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UPDATEATTACHEDTRIGGERS_OFFSET UNITYSDK_OFFSET(0xA3A9310)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UPDATEGEOMETRYREGIONS_OFFSET UNITYSDK_OFFSET(0xA3A8C10)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UPDATETRIGGERLOGIC_OFFSET UNITYSDK_OFFSET(0xA3A94B0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UPDATETRIGGERS_OFFSET UNITYSDK_OFFSET(0xA3A8CC0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA3AAF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ColliderTriggerComponent_TypeDefinitionIndex = 45269;

	class ColliderTriggerComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__TickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(ColliderTriggerComponent_TypeDefinitionIndex)->GetStaticField(0x41CD0);
		}
		static ::UnityEngine::GameObject** StaticGet__UnregisterCacheNode()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(ColliderTriggerComponent_TypeDefinitionIndex)->GetStaticField(0x41CD8);
		}
		::RPG::GameCore::LevelTriggerInfo* _DefaultCustomTriggerInfo; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MonoGeometryTrigger*>* _GeometryRegions; // 0x20
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::Class_1_5F51D4049EA87B7B*, ::Class_1_59305B446B42427E*>>* _ExcutingTask; // 0x28
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_424*>* _TickTriggerList; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_420*>* _ColliderTriggerMap; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelTriggerInfo*>* _TriggerInfoMapping; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _TriggerAttachInfoMapping; // 0x48
		::UnityEngine::Transform* _Root; // 0x50
		::RPG::GameCore::LevelTriggerInfo* _DefaultInteractionTriggerInfo; // 0x58
		::System::Collections::Generic::Dictionary_2<::Class_1_59305B446B42427E*, ::UnityEngine::Transform*>* _NeedSyncAfterAttachTriggers; // 0x60
		::UnityEngine::GameObject* _RootModel; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::MonoEntityTriggerCollision*>* _TriggerCollisions; // 0x70
		::System::Boolean _HasExecutingTask; // 0x78
		::System::UInt64 _EnableBitset; // 0x80
		::System::Int32 _GeometryRegionCount; // 0x88
		::System::Int32 _TickTriggerCount; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__CCTOR_OFFSET))();
		}

		::System::Void _BuildDefaultTriggerInfoMapping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__BUILDDEFAULTTRIGGERINFOMAPPING_OFFSET))(this);
		}

		::System::Void _OverrideInstanceTriggerInfoMapping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__OVERRIDEINSTANCETRIGGERINFOMAPPING_OFFSET))(this);
		}

		::System::Void _InitNamedTriggerInfoMapping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__INITNAMEDTRIGGERINFOMAPPING_OFFSET))(this);
		}

		::System::Boolean RegisterNamedTrigger(::System::String* triggerName, ::Class_1_59305B446B42427E* trigger)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_59305B446B42427E*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNAMEDTRIGGER_OFFSET))(this, triggerName, trigger);
		}

		::System::Void UnRegisterNamedTrigger(::System::String* triggerName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_UNREGISTERNAMEDTRIGGER_OFFSET))(this, triggerName);
		}

		::System::Void EnableNamedTrigger(::System::String* triggerName, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLENAMEDTRIGGER_OFFSET))(this, triggerName, enable);
		}

		::System::Void EnableButtons(::System::String* triggerName, ::System::Collections::Generic::List_1<::System::String*>* buttonNames, ::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLEBUTTONS_OFFSET))(this, triggerName, buttonNames, isEnable);
		}

		::System::Void _TryRegisterDynamicAttachTrigger(::System::String* triggerName, ::Class_1_59305B446B42427E* trigger)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_59305B446B42427E*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__TRYREGISTERDYNAMICATTACHTRIGGER_OFFSET))(this, triggerName, trigger);
		}

		::System::Void _TryUnregisterDynamicAttachTrigger(::System::String* triggerName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__TRYUNREGISTERDYNAMICATTACHTRIGGER_OFFSET))(this, triggerName);
		}

		::System::Void OnWillBeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONWILLBEDESTROY_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void InitComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_INITCOMPONENT_OFFSET))(this);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_420* GetTrigger(::System::String* triggerPath)
		{
			return ((::Class_0_16E4307DCC419505_420*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_GETTRIGGER_OFFSET))(this, triggerPath);
		}

		::Class_0_16E4307DCC419505_420* GetTriggerByType(::System::Type* t)
		{
			return ((::Class_0_16E4307DCC419505_420*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_GETTRIGGERBYTYPE_OFFSET))(this, t);
		}

		::UnityEngine::Transform* CreateTriggerNode(::System::String* nodeName)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_CREATETRIGGERNODE_OFFSET))(this, nodeName);
		}

		::System::Boolean CaptureColliderFromOriginPrefab(::System::String* originPath, ::Class_1_B9DA9FA7666C65CE* registerInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_B9DA9FA7666C65CE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_CAPTURECOLLIDERFROMORIGINPREFAB_OFFSET))(this, originPath, registerInfo);
		}

		::UnityEngine::Collider* SetupTriggerCollider(::RPG::GameCore::LevelTriggerInfo* triggerInfo, ::UnityEngine::Transform* node)
		{
			return ((::UnityEngine::Collider*(*)(::PVOID, ::RPG::GameCore::LevelTriggerInfo*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_SETUPTRIGGERCOLLIDER_OFFSET))(this, triggerInfo, node);
		}

		::UnityEngine::Collider* FindOrSetupCollider(::System::Single range, ::System::String* name)
		{
			return ((::UnityEngine::Collider*(*)(::PVOID, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_FINDORSETUPCOLLIDER_OFFSET))(this, range, name);
		}

		::System::Boolean RegisterNpcSoundTrigger(::RPG::GameCore::NPCSoundConfig* soundConfig, ::RPG::Client::MapNpcDef* npcDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::NPCSoundConfig*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNPCSOUNDTRIGGER_OFFSET))(this, soundConfig, npcDef);
		}

		::System::Boolean RegisterNpcCustomTrigger(::System::String* triggerID, ::System::Single range, ::Class_2_115E8993398549DB* trigger)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::Class_2_115E8993398549DB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNPCCUSTOMTRIGGER_OFFSET))(this, triggerID, range, trigger);
		}

		::System::Boolean RegisterNPCMonsterHintSoundTrigger(::RPG::GameCore::NPCMonsterHintSoundConfig* soundConfig, ::RPG::Client::MapNpcDef* monsterDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::NPCMonsterHintSoundConfig*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNPCMONSTERHINTSOUNDTRIGGER_OFFSET))(this, soundConfig, monsterDef);
		}

		::System::Boolean RegisterPropHintTrigger(::RPG::GameCore::PropConfig* propConfig, ::RPG::Client::MapPropDef* propDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropConfig*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPHINTTRIGGER_OFFSET))(this, propConfig, propDef);
		}

		::System::Boolean RegisterPropHintTrigger_1(::RPG::GameCore::ShowHintEffect* showHintEffect, ::RPG::Client::MapPropDef* propDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ShowHintEffect*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPHINTTRIGGER_1_OFFSET))(this, showHintEffect, propDef);
		}

		::System::Boolean RegisterPropHintTrigger_2(::RPG::GameCore::ShowHintEffect* showHintEffect)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ShowHintEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPHINTTRIGGER_2_OFFSET))(this, showHintEffect);
		}

		::System::Boolean RegisterUnitHintTrigger(::RPG::GameCore::UnitHintTriggerConfig* triggerConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::UnitHintTriggerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERUNITHINTTRIGGER_OFFSET))(this, triggerConfig);
		}

		::System::Boolean RegisterPropSoundTrigger(::RPG::GameCore::PropSoundConfig* soundConfig, ::RPG::Client::MapPropDef* propDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropSoundConfig*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPSOUNDTRIGGER_OFFSET))(this, soundConfig, propDef);
		}

		::System::Boolean RegisterDistrictTrigger(::RPG::Client::MapDistrictDef* districtDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDistrictDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERDISTRICTTRIGGER_OFFSET))(this, districtDef);
		}

		::System::Boolean RegisterDistrictLevelTrigger(::Class_1_B9DA9FA7666C65CE* registerInfo, ::Class_0_16E4307DCC419505_420* trigger)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_B9DA9FA7666C65CE*, ::Class_0_16E4307DCC419505_420*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERDISTRICTLEVELTRIGGER_OFFSET))(this, registerInfo, trigger);
		}

		::System::Boolean RegisterTalkTriggerByProp(::RPG::Client::MapPropDef* propDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTALKTRIGGERBYPROP_OFFSET))(this, propDef);
		}

		::System::Boolean RegisterTalkTriggerByNpcMonster(::RPG::Client::MapNpcDef* npcDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTALKTRIGGERBYNPCMONSTER_OFFSET))(this, npcDef);
		}

		::System::Boolean RegisterTalkTriggerByNpc(::RPG::Client::MapNpcDef* npcDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTALKTRIGGERBYNPC_OFFSET))(this, npcDef);
		}

		::System::Boolean RegisterLookAtTrigger(::System::Single range)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERLOOKATTRIGGER_OFFSET))(this, range);
		}

		::System::Boolean RegisterNearbyAnimTrigger(::RPG::GameCore::LevelNPCNearbyAnimConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelNPCNearbyAnimConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNEARBYANIMTRIGGER_OFFSET))(this, config);
		}

		::System::Boolean RegisterNearbyEventTrigger(::RPG::GameCore::LevelNPCNearbyEventConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelNPCNearbyEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNEARBYEVENTTRIGGER_OFFSET))(this, config);
		}

		::System::Boolean RegisterPropOptionTrigger(::RPG::Client::MapPropDef* propDef, ::Class_0_16E4307DCC419505_420* trigger)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*, ::Class_0_16E4307DCC419505_420*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPOPTIONTRIGGER_OFFSET))(this, propDef, trigger);
		}

		::System::Boolean RegisterPropInteractionTriggerByMission(::RPG::Client::MapPropDef* propDef, ::Class_0_16E4307DCC419505_420* trigger, ::Il2CppArray<::RPG::GameCore::EntityType>* overrideTargetType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*, ::Class_0_16E4307DCC419505_420*, ::Il2CppArray<::RPG::GameCore::EntityType>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPINTERACTIONTRIGGERBYMISSION_OFFSET))(this, propDef, trigger, overrideTargetType);
		}

		::System::Boolean RegisterPropInteractionTriggerDefault(::RPG::Client::MapPropDef* propDef, ::Class_0_16E4307DCC419505_420* trigger, ::Il2CppArray<::RPG::GameCore::EntityType>* overrideTargetType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*, ::Class_0_16E4307DCC419505_420*, ::Il2CppArray<::RPG::GameCore::EntityType>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPINTERACTIONTRIGGERDEFAULT_OFFSET))(this, propDef, trigger, overrideTargetType);
		}

		::System::Boolean RegisterPropInteractionTrigger(::RPG::Client::MapPropDef* propDef, ::Class_0_16E4307DCC419505_420* trigger, ::System::Boolean setupByMission, ::Il2CppArray<::RPG::GameCore::EntityType>* overrideTargetType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*, ::Class_0_16E4307DCC419505_420*, ::System::Boolean, ::Il2CppArray<::RPG::GameCore::EntityType>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPINTERACTIONTRIGGER_OFFSET))(this, propDef, trigger, setupByMission, overrideTargetType);
		}

		::System::Boolean RegisterSummonUnitCustomTrigger(::System::String* name, ::System::Single range, ::Class_0_16E4307DCC419505_420* trigger)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::Class_0_16E4307DCC419505_420*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERSUMMONUNITCUSTOMTRIGGER_OFFSET))(this, name, range, trigger);
		}

		::System::Boolean RegisterPropCustomTrigger(::System::String* name, ::RPG::Client::MapPropDef* propDef, ::Class_0_16E4307DCC419505_420* trigger)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::MapPropDef*, ::Class_0_16E4307DCC419505_420*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPCUSTOMTRIGGER_OFFSET))(this, name, propDef, trigger);
		}

		::System::Boolean RegisterFiveDimTrigger(::System::String* name, ::Class_1_B9DA9FA7666C65CE* registerInfo, ::Class_0_16E4307DCC419505_420* trigger, ::Class_2_9DD8A46984F1AFFD* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_B9DA9FA7666C65CE*, ::Class_0_16E4307DCC419505_420*, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERFIVEDIMTRIGGER_OFFSET))(this, name, registerInfo, trigger, entity);
		}

		::System::Void _RegisterPropPerspectiveWallTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__REGISTERPROPPERSPECTIVEWALLTRIGGER_OFFSET))(this);
		}

		::System::Boolean RegisterMonoCurveOptionTrigger(::Class_0_16E4307DCC419505_420* trigger)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_420*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERMONOCURVEOPTIONTRIGGER_OFFSET))(this, trigger);
		}

		::System::Boolean RegisterNpcMonsterInteractionTrigger(::System::Single triggerRadius, ::RPG::MVector3 triggerOffset, ::Class_0_16E4307DCC419505_420* trigger)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::RPG::MVector3, ::Class_0_16E4307DCC419505_420*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNPCMONSTERINTERACTIONTRIGGER_OFFSET))(this, triggerRadius, triggerOffset, trigger);
		}

		::System::Void OptimizeColliderLayerWhenLocalPlayerOnlyTrigger(::Class_0_16E4307DCC419505_420* trigger, ::UnityEngine::Collider* pTriggerCollider)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_420*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_OPTIMIZECOLLIDERLAYERWHENLOCALPLAYERONLYTRIGGER_OFFSET))(this, trigger, pTriggerCollider);
		}

		::System::Boolean RegisterColliderRegionTrigger(::System::String* triggerName, ::Class_1_B9DA9FA7666C65CE* registerInfo, ::Class_0_16E4307DCC419505_420* trigger, ::System::Boolean useOptimizeColliderLayer)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_B9DA9FA7666C65CE*, ::Class_0_16E4307DCC419505_420*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERCOLLIDERREGIONTRIGGER_OFFSET))(this, triggerName, registerInfo, trigger, useOptimizeColliderLayer);
		}

		::System::Void _SetupGeometryRegion(::System::String* triggerName, ::Class_1_B9DA9FA7666C65CE* registerInfo, ::RPG::Client::MonoGeometryTrigger*& geometryRegion)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_B9DA9FA7666C65CE*, ::RPG::Client::MonoGeometryTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__SETUPGEOMETRYREGION_OFFSET))(this, triggerName, registerInfo, geometryRegion);
		}

		::System::Boolean RegisterGeometryRegionTrigger(::System::String* triggerName, ::Class_1_B9DA9FA7666C65CE* regionInfo, ::Class_0_16E4307DCC419505_420* trigger)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_B9DA9FA7666C65CE*, ::Class_0_16E4307DCC419505_420*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERGEOMETRYREGIONTRIGGER_OFFSET))(this, triggerName, regionInfo, trigger);
		}

		::System::Void _PostProcessTickableTriggerAfterRegister(::Class_0_16E4307DCC419505_424* tickable)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_424*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__POSTPROCESSTICKABLETRIGGERAFTERREGISTER_OFFSET))(this, tickable);
		}

		::System::Boolean RegisterTrigger(::System::String* triggerName, ::Class_1_B9DA9FA7666C65CE* registerInfo, ::Class_0_16E4307DCC419505_420* trigger, ::System::Boolean useOptimizeColliderLayer)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_B9DA9FA7666C65CE*, ::Class_0_16E4307DCC419505_420*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTRIGGER_OFFSET))(this, triggerName, registerInfo, trigger, useOptimizeColliderLayer);
		}

		::System::Void DestroyCustomTrigger(::System::String* name, ::System::Boolean doOnExitTrigger)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_DESTROYCUSTOMTRIGGER_OFFSET))(this, name, doOnExitTrigger);
		}

		::System::Void _PostProcessTickableTriggerAfterUnregister(::Class_0_16E4307DCC419505_424* tickable)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_424*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__POSTPROCESSTICKABLETRIGGERAFTERUNREGISTER_OFFSET))(this, tickable);
		}

		::System::Void UnRegisterTrigger(::System::String* triggerName, ::System::Boolean doExit)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_UNREGISTERTRIGGER_OFFSET))(this, triggerName, doExit);
		}

		::System::Void SetSkipFakeAvatarFlag(::System::Boolean skip, ::RPG::GameCore::AdvSetTriggerSkipFakeAvatarType triggerType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::AdvSetTriggerSkipFakeAvatarType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_SETSKIPFAKEAVATARFLAG_OFFSET))(this, skip, triggerType);
		}

		::System::Void EnableTrigger(::System::Boolean enable, ::Class_1_59305B446B42427E* trigger)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_59305B446B42427E*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLETRIGGER_OFFSET))(this, enable, trigger);
		}

		::System::Void EnableTrigger_1(::System::Boolean enable, ::System::Type* triggerType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLETRIGGER_1_OFFSET))(this, enable, triggerType);
		}

		::System::Void EnableAllTrigger(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLEALLTRIGGER_OFFSET))(this, enable);
		}

		::System::Boolean HasMissionInteractionTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_HASMISSIONINTERACTIONTRIGGER_OFFSET))(this);
		}

		::System::Void EnableInteractionTrigger(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLEINTERACTIONTRIGGER_OFFSET))(this, enable);
		}

		::System::Void EnableCustomTrigger(::System::Boolean enable, ::System::Boolean ignoreName, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLECUSTOMTRIGGER_OFFSET))(this, enable, ignoreName, name);
		}

		::System::Boolean ContainsBlockDialogueTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_CONTAINSBLOCKDIALOGUETRIGGER_OFFSET))(this);
		}

		::System::Boolean IsContainEntity(::System::Int32 characterTypeMask)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ISCONTAINENTITY_OFFSET))(this, characterTypeMask);
		}

		::System::Int32 ColliderTriggerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_COLLIDERTRIGGERCOUNT_OFFSET))(this);
		}

		::System::Void EnableOptionsTriggerOptions(::System::Int32 index, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLEOPTIONSTRIGGEROPTIONS_OFFSET))(this, index, enable);
		}

		::System::Void _UpdateGeometryRegions(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UPDATEGEOMETRYREGIONS_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _UpdateTriggers(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UPDATETRIGGERS_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _UpdateAttachedTriggers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UPDATEATTACHEDTRIGGERS_OFFSET))(this);
		}

		::System::Void _UpdateTriggerLogic(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UPDATETRIGGERLOGIC_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void ForceTickGeometryRegion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_FORCETICKGEOMETRYREGION_OFFSET))(this);
		}

		::System::Void RegisterTriggerLogic(::Class_1_5F51D4049EA87B7B* task, ::Class_1_59305B446B42427E* trigger)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*, ::Class_1_59305B446B42427E*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTRIGGERLOGIC_OFFSET))(this, task, trigger);
		}

		::System::Void _TickTriggerLogic(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__TICKTRIGGERLOGIC_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _OnTriggerLogicFinish(::Class_1_5F51D4049EA87B7B* task, ::Class_1_59305B446B42427E* trigger)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*, ::Class_1_59305B446B42427E*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__ONTRIGGERLOGICFINISH_OFFSET))(this, task, trigger);
		}

		::System::Void _DestroyTriggerLogicWhenDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__DESTROYTRIGGERLOGICWHENDISPOSE_OFFSET))(this);
		}

		::System::Void _InitRootNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__INITROOTNODE_OFFSET))(this);
		}

		::System::Void _UninitRootNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UNINITROOTNODE_OFFSET))(this);
		}

		::RPG::GameCore::LevelTriggerInfo* _DefineDefaultSphereTriggerInfo(::System::Single radius)
		{
			return ((::RPG::GameCore::LevelTriggerInfo*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__DEFINEDEFAULTSPHERETRIGGERINFO_OFFSET))(this, radius);
		}

		::RPG::GameCore::LevelTriggerInfo* _ConvertColliderToTriggerInfo(::UnityEngine::Collider* collider)
		{
			return ((::RPG::GameCore::LevelTriggerInfo*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__CONVERTCOLLIDERTOTRIGGERINFO_OFFSET))(this, collider);
		}

		::RPG::GameCore::LevelTriggerInfo* CreateSimpleSphereRegionInfo(::System::Single radius)
		{
			return ((::RPG::GameCore::LevelTriggerInfo*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_CREATESIMPLESPHEREREGIONINFO_OFFSET))(this, radius);
		}

		::System::Void _InitDefaultInteractionTriggerInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__INITDEFAULTINTERACTIONTRIGGERINFO_OFFSET))(this);
		}

		::System::Void _InitDefaultCustomTriggerInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__INITDEFAULTCUSTOMTRIGGERINFO_OFFSET))(this);
		}

		::System::Void _UnregisterAllTriggers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UNREGISTERALLTRIGGERS_OFFSET))(this);
		}

		::System::Void _SetupColliderAndRegion(::System::String* triggerName, ::Class_1_B9DA9FA7666C65CE* registerInfo, ::UnityEngine::Collider*& col, ::RPG::Client::MonoTriggerRegion*& region)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_B9DA9FA7666C65CE*, ::UnityEngine::Collider*&, ::RPG::Client::MonoTriggerRegion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__SETUPCOLLIDERANDREGION_OFFSET))(this, triggerName, registerInfo, col, region);
		}

		::System::Void _OnTriggerEnableChange(::Class_0_16E4307DCC419505_424* trigger, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_424*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__ONTRIGGERENABLECHANGE_OFFSET))(this, trigger, enable);
		}

		::System::Boolean HasHoyoTag(::System::String* tag)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_HASHOYOTAG_OFFSET))(this, tag);
		}

		::System::Void Enable(::System::Boolean enable, ::RPG::GameCore::CollierTriggerComponentEnableReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::CollierTriggerComponentEnableReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLE_OFFSET))(this, enable, reason);
		}

		::System::Boolean IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ISENABLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
