#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BitFlag_1.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemData_StreamingItemDataFlag.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemEnableReason.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemVisibleReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_494BD190B553B399;
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class StagePrefabInfo; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_ALIASMARK_OFFSET UNITYSDK_OFFSET(0x9A1B6C0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_BITGETHELPER_OFFSET UNITYSDK_OFFSET(0x9A1AFE0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_BITSETHELPER_OFFSET UNITYSDK_OFFSET(0x9A1B030)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_DEBUG_RECORD_STACK_OFFSET UNITYSDK_OFFSET(0x9A1C070)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETASSETPATH_OFFSET UNITYSDK_OFFSET(0x9A1BB00)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETCULLINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x9A1B790)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9A1B700)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETLOADINGPRIORITY_OFFSET UNITYSDK_OFFSET(0x9A1B800)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETPERSISTENTASSETPATH_OFFSET UNITYSDK_OFFSET(0x9A1BB50)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETPRELOADLOD_OFFSET UNITYSDK_OFFSET(0x9A1BC20)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETVISIBLEVALUE_OFFSET UNITYSDK_OFFSET(0x9A1BD90)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_CAMERACULL_OFFSET UNITYSDK_OFFSET(0x9A1B1C0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_CULLINGLOD_OFFSET UNITYSDK_OFFSET(0x9A1BEE0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_CULLINGSTATUS_OFFSET UNITYSDK_OFFSET(0x9A1BEC0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0x9A1BE50)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_FIRSTLOD_OFFSET UNITYSDK_OFFSET(0x9A1BF60)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_FORCELOD_OFFSET UNITYSDK_OFFSET(0x9A1BFC0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_ISDISTEFFECTBYSCALE_OFFSET UNITYSDK_OFFSET(0x9A1BFE0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_ISFASTFADING_OFFSET UNITYSDK_OFFSET(0x9A1B2E0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_ISFILTERBYVOLUME_OFFSET UNITYSDK_OFFSET(0x9A1B400)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_ISUSEAUTOLODTEMPLATE_OFFSET UNITYSDK_OFFSET(0x9A1C050)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_LASTLOD_OFFSET UNITYSDK_OFFSET(0x9A1BF00)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_NOTLOADFORPVS_OFFSET UNITYSDK_OFFSET(0x9A1B520)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_OBJECTINDEX_OFFSET UNITYSDK_OFFSET(0x9A1B7D0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_OBJSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x9A1BEA0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_PARENTITEM_OFFSET UNITYSDK_OFFSET(0x9A1B7E0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_STAGEPREFABINFO_OFFSET UNITYSDK_OFFSET(0x9A1BA70)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_STREAMINGLOCK_OFFSET UNITYSDK_OFFSET(0x9A1B0A0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_ONTRANSFORMCHANGE_OFFSET UNITYSDK_OFFSET(0x9A1B750)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SETENABLEREASON_OFFSET UNITYSDK_OFFSET(0x9A1BDE0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SETFLAGDEFAULT_OFFSET UNITYSDK_OFFSET(0x9A1ADC0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SETVISIBLEREASON_OFFSET UNITYSDK_OFFSET(0x9A1BD20)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_CAMERACULL_OFFSET UNITYSDK_OFFSET(0x9A1B240)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_CULLINGLOD_OFFSET UNITYSDK_OFFSET(0x9A1BEF0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_CULLINGSTATUS_OFFSET UNITYSDK_OFFSET(0x9A1BED0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_FORCELOD_OFFSET UNITYSDK_OFFSET(0x9A1BFD0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_ISFASTFADING_OFFSET UNITYSDK_OFFSET(0x9A1B360)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_ISFILTERBYVOLUME_OFFSET UNITYSDK_OFFSET(0x9A1B480)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_ISUSEAUTOLODTEMPLATE_OFFSET UNITYSDK_OFFSET(0x9A1C060)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_NOTLOADFORPVS_OFFSET UNITYSDK_OFFSET(0x9A1B5A0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_OBJSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x9A1BEB0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_PARENTITEM_OFFSET UNITYSDK_OFFSET(0x9A1B7F0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_STAGEPREFABINFO_OFFSET UNITYSDK_OFFSET(0x9A1BA80)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_STREAMINGLOCK_OFFSET UNITYSDK_OFFSET(0x9A1B120)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A1C0C0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9A1B640)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9A1C0D0)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int StreamingItemData_TypeDefinitionIndex = 58862;

	class StreamingItemData : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__ObjectCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StreamingItemData_TypeDefinitionIndex)->GetStaticField(0xF380);
		}
		static ::System::Int32* StaticGet_NextForceLod()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StreamingItemData_TypeDefinitionIndex)->GetStaticField(0xF384);
		}
		// static const ::System::String* EMPTY_GO_ASSET_PATH; // 0x0
		// static const ::System::Int32 InvalidForceLod = 0xFFFFFF9C; // 0x0
		::UnityEngine::Transform* BeforeLockParent; // 0x10
		::RPG::Client::OpenWorld::StreamingLayerDetail* LayerDetail; // 0x18
		::RPG::Client::OpenWorld::StreamingItemData* _ParentItem_k__BackingField; // 0x20
		::RPG::GameCore::BlockNodeConfig* BlockConfig; // 0x28
		::Class_1_494BD190B553B399* LodTemplateCfg; // 0x30
		::RPG::GameCore::StagePrefabInfo* _StagePrefabInfo; // 0x38
		::System::String* RelativeParentPath; // 0x40
		::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::StreamingItemEnableReason> _EnableReasonBool; // 0x48
		::System::Int16 JobLod; // 0x50
		::System::Int16 m_CullingLod; // 0x52
		::System::Int32 LodLevel; // 0x54
		::System::Int64 LastCullingIndex; // 0x58
		::System::Int32 _ObjStageIndex_k__BackingField; // 0x60
		::System::Int16 m_ForceLod; // 0x64
		::System::Boolean IndependentIRI; // 0x66
		::System::Boolean _IsUseAutoLodTemplate_k__BackingField; // 0x67
		::RPG::Client::BitFlag_1<::RPG::Client::OpenWorld::StreamingItemData_StreamingItemDataFlag> m_FlagBit; // 0x68
		::UnityEngine::Bounds Boundary; // 0x6C
		::System::Int32 DebugLod; // 0x84
		::System::Int16 m_CullingStatus; // 0x88
		::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::StreamingItemVisibleReason> Visible; // 0x90
		::System::Single MaxScale; // 0x98
		::System::Int32 _ObjectIndex; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA__CCTOR_OFFSET))();
		}

		::System::Void SetFlagDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SETFLAGDEFAULT_OFFSET))(this);
		}

		::System::Boolean BitGetHelper(::RPG::Client::OpenWorld::StreamingItemData_StreamingItemDataFlag BitMask)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData_StreamingItemDataFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_BITGETHELPER_OFFSET))(this, BitMask);
		}

		::System::Void BitSetHelper(::System::Boolean InValue, ::RPG::Client::OpenWorld::StreamingItemData_StreamingItemDataFlag BitMask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemData_StreamingItemDataFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_BITSETHELPER_OFFSET))(this, InValue, BitMask);
		}

		::System::Boolean get_StreamingLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_STREAMINGLOCK_OFFSET))(this);
		}

		::System::Void set_StreamingLock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_STREAMINGLOCK_OFFSET))(this, value);
		}

		::System::Boolean get_CameraCull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_CAMERACULL_OFFSET))(this);
		}

		::System::Void set_CameraCull(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_CAMERACULL_OFFSET))(this, value);
		}

		::System::Boolean get_IsFastFading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_ISFASTFADING_OFFSET))(this);
		}

		::System::Void set_IsFastFading(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_ISFASTFADING_OFFSET))(this, value);
		}

		::System::Boolean get_IsFilterByVolume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_ISFILTERBYVOLUME_OFFSET))(this);
		}

		::System::Void set_IsFilterByVolume(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_ISFILTERBYVOLUME_OFFSET))(this, value);
		}

		::System::Boolean get_NotLoadForPVS()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_NOTLOADFORPVS_OFFSET))(this);
		}

		::System::Void set_NotLoadForPVS(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_NOTLOADFORPVS_OFFSET))(this, value);
		}

		::System::Boolean AliasMark()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_ALIASMARK_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETHASHCODE_OFFSET))(this);
		}

		::System::Void OnTransformChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_ONTRANSFORMCHANGE_OFFSET))(this);
		}

		::System::Single GetCullingDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETCULLINGDISTANCE_OFFSET))(this);
		}

		::System::Int32 get_ObjectIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_OBJECTINDEX_OFFSET))(this);
		}

		::RPG::Client::OpenWorld::StreamingItemData* get_ParentItem()
		{
			return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_PARENTITEM_OFFSET))(this);
		}

		::System::Void set_ParentItem(::RPG::Client::OpenWorld::StreamingItemData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_PARENTITEM_OFFSET))(this, value);
		}

		::System::Single GetLoadingPriority(::UnityEngine::Vector3 cameraPos, ::System::Int32 sortTimes, ::System::Int32 lod, ::System::Int32 nextLod)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETLOADINGPRIORITY_OFFSET))(this, cameraPos, sortTimes, lod, nextLod);
		}

		::RPG::GameCore::StagePrefabInfo* get_StagePrefabInfo()
		{
			return ((::RPG::GameCore::StagePrefabInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_STAGEPREFABINFO_OFFSET))(this);
		}

		::System::Void set_StagePrefabInfo(::RPG::GameCore::StagePrefabInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StagePrefabInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_STAGEPREFABINFO_OFFSET))(this, value);
		}

		::System::String* GetAssetPath(::System::Int32 lod)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETASSETPATH_OFFSET))(this, lod);
		}

		::System::String* GetPersistentAssetPath(::System::Int32 lod)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETPERSISTENTASSETPATH_OFFSET))(this, lod);
		}

		::System::Int32 GetPreloadLod()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETPRELOADLOD_OFFSET))(this);
		}

		::System::Void SetVisibleReason(::System::Boolean enable, ::RPG::Client::OpenWorld::StreamingItemVisibleReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SETVISIBLEREASON_OFFSET))(this, enable, reason);
		}

		::System::Boolean GetVisibleValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETVISIBLEVALUE_OFFSET))(this);
		}

		::System::Void SetEnableReason(::System::Boolean enable, ::RPG::Client::OpenWorld::StreamingItemEnableReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemEnableReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SETENABLEREASON_OFFSET))(this, enable, reason);
		}

		::System::Boolean get_Enable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_ENABLE_OFFSET))(this);
		}

		::System::Int32 get_ObjStageIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_OBJSTAGEINDEX_OFFSET))(this);
		}

		::System::Void set_ObjStageIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_OBJSTAGEINDEX_OFFSET))(this, value);
		}

		::System::Int32 get_CullingStatus()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_CULLINGSTATUS_OFFSET))(this);
		}

		::System::Void set_CullingStatus(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_CULLINGSTATUS_OFFSET))(this, value);
		}

		::System::Int32 get_CullingLod()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_CULLINGLOD_OFFSET))(this);
		}

		::System::Void set_CullingLod(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_CULLINGLOD_OFFSET))(this, value);
		}

		::System::Int32 get_LastLod()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_LASTLOD_OFFSET))(this);
		}

		::System::Int32 get_FirstLod()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_FIRSTLOD_OFFSET))(this);
		}

		::System::Int32 get_ForceLod()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_FORCELOD_OFFSET))(this);
		}

		::System::Void set_ForceLod(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_FORCELOD_OFFSET))(this, value);
		}

		::System::Boolean get_IsDistEffectByScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_ISDISTEFFECTBYSCALE_OFFSET))(this);
		}

		::System::Boolean get_IsUseAutoLodTemplate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_ISUSEAUTOLODTEMPLATE_OFFSET))(this);
		}

		::System::Void set_IsUseAutoLodTemplate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_ISUSEAUTOLODTEMPLATE_OFFSET))(this, value);
		}

		::System::Void DEBUG_RECORD_STACK(::System::String* debugStr, ::System::String* extraInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_DEBUG_RECORD_STACK_OFFSET))(this, debugStr, extraInfo);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
