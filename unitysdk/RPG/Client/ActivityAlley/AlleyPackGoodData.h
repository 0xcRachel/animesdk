#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityAlley/AlleyPackComponentType.h"
#include "unitysdk/RPG/GameCore/AlleyPackAnchorType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_23EB286BF2ED930D;
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }
namespace RPG::Client::ActivityAlley { class AlleyPackGoodDef; }
namespace RPG::Client::ActivityAlley { class AlleyPackGroupData; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ACQUIRETAILANCHORSINGRID_OFFSET UNITYSDK_OFFSET(0x171BD4C0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_AUTOSETTLEREFRESHANCHORSTATE_OFFSET UNITYSDK_OFFSET(0x171BE350)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_CANCELSETTLE_OFFSET UNITYSDK_OFFSET(0x171BCC20)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_CHECKANCHORPAIRS_OFFSET UNITYSDK_OFFSET(0x171BC3B0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_CHECKCANSETTLE_OFFSET UNITYSDK_OFFSET(0x171BC2D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ENABLECOLLIDERTRIGGER_OFFSET UNITYSDK_OFFSET(0x171BD770)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GETREQUIREDHEADANCHORTYPE_OFFSET UNITYSDK_OFFSET(0x171BA110)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_DRAGANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x171BEB80)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_DRAGGINGFIRSTHEADANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x171BF010)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_FIRSTHEADANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x171BE850)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_GROUPDATA_OFFSET UNITYSDK_OFFSET(0x171BE830)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_ROTATEANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x171BEEA0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x171BE2B0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_YAWANGLE_OFFSET UNITYSDK_OFFSET(0x171BEF70)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ISALLANCHORWAITINGATTACH_OFFSET UNITYSDK_OFFSET(0x171BD050)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ISCHILDOF_OFFSET UNITYSDK_OFFSET(0x171BE670)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x171BD1B0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_REFRESHANCHORSTATEWITHGRIDOFFSET_OFFSET UNITYSDK_OFFSET(0x171BDC70)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_REFRESHANCHORSTATE_OFFSET UNITYSDK_OFFSET(0x171BDA10)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_REFRESHGROUP_OFFSET UNITYSDK_OFFSET(0x171BAEE0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_REFRESHPOSDATA_OFFSET UNITYSDK_OFFSET(0x171BE3A0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_RELEASETAILANCHORSINGRID_OFFSET UNITYSDK_OFFSET(0x171BCF00)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_RESETCMPTPARENT_OFFSET UNITYSDK_OFFSET(0x171BE5D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SETCMPTPARENT_OFFSET UNITYSDK_OFFSET(0x171BE560)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SETTLE_OFFSET UNITYSDK_OFFSET(0x171BC530)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SET_DRAGANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x171BEC50)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SET_FIRSTHEADANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x171BE930)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SET_GROUPDATA_OFFSET UNITYSDK_OFFSET(0x171BE840)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x171BD6E0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x171BCBA0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_UPDATEROTATION_OFFSET UNITYSDK_OFFSET(0x171BD610)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x171BF0D0)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackGoodData_TypeDefinitionIndex = 68212;

	class AlleyPackGoodData : public ::System::Object
	{
	public:
		::RPG::Client::ActivityAlley::AlleyPackGroupData* _GroupData_k__BackingField; // 0x10
		::RPG::Client::ActivityAlley::AlleyPackComponent* APCmptRef; // 0x18
		::RPG::Client::ActivityAlley::AlleyPackGoodDef* GoodDef; // 0x20
		::Class_1_23EB286BF2ED930D* TopologyInfo; // 0x28
		::System::Boolean IsSettled; // 0x30
		::System::Boolean EnableAnchorMatchPosOffset; // 0x31
		::System::Boolean IsAutoSettleSelect; // 0x32
		::UnityEngine::Vector3 RelativePosToDragAnchor; // 0x34
		::UnityEngine::Vector3 _FirstHeadAnchorPosition; // 0x40
		::UnityEngine::Quaternion _Rotation; // 0x4C
		::UnityEngine::Vector3 RotateAnchorRelativePosToDragAnchor; // 0x5C
		::RPG::Client::ActivityAlley::AlleyPackComponentType ComponentType; // 0x68
		::UnityEngine::Vector3 FirstHeadRelativePosToDragAnchor; // 0x6C
		::UnityEngine::Vector3 RelativePosToFirstHeadAnchor; // 0x78
		::UnityEngine::Vector3 AnchorMatchPosOffset; // 0x84
		::UnityEngine::Vector3 _DragAnchorPosition; // 0x90
		::System::UInt32 RuntimeUniqueID; // 0x9C
		::UnityEngine::Vector3 RelativePosToRotateAnchor; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean CheckCanSettle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_CHECKCANSETTLE_OFFSET))(this);
		}

		::System::Boolean CheckAnchorPairs()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_CHECKANCHORPAIRS_OFFSET))(this);
		}

		::System::Void Settle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SETTLE_OFFSET))(this);
		}

		::System::Void CancelSettle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_CANCELSETTLE_OFFSET))(this);
		}

		::System::Boolean IsAllAnchorWaitingAttach()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ISALLANCHORWAITINGATTACH_OFFSET))(this);
		}

		::System::Void OnRemove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ONREMOVE_OFFSET))(this);
		}

		::System::Void AcquireTailAnchorsInGrid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ACQUIRETAILANCHORSINGRID_OFFSET))(this);
		}

		::System::Void ReleaseTailAnchorsInGrid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_RELEASETAILANCHORSINGRID_OFFSET))(this);
		}

		::System::Void UpdatePosition(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_UPDATEPOSITION_OFFSET))(this, position);
		}

		::System::Void UpdateRotation(::UnityEngine::Quaternion quaternion)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_UPDATEROTATION_OFFSET))(this, quaternion);
		}

		::System::Void EnableColliderTrigger(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ENABLECOLLIDERTRIGGER_OFFSET))(this, isEnable);
		}

		::System::Void RefreshAnchorState(::System::Boolean forceRefreshGridInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_REFRESHANCHORSTATE_OFFSET))(this, forceRefreshGridInfo);
		}

		::System::Void RefreshAnchorStateWithGridOffset(::System::Int32 gridOffsetX, ::System::Int32 gridOffsetY, ::System::Int32 gridOffsetZ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_REFRESHANCHORSTATEWITHGRIDOFFSET_OFFSET))(this, gridOffsetX, gridOffsetY, gridOffsetZ);
		}

		::System::Void AutoSettleRefreshAnchorState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_AUTOSETTLEREFRESHANCHORSTATE_OFFSET))(this);
		}

		::System::Void RefreshPosData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_REFRESHPOSDATA_OFFSET))(this);
		}

		::System::Void RefreshGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_REFRESHGROUP_OFFSET))(this);
		}

		::System::Void SetCmptParent(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SETCMPTPARENT_OFFSET))(this, transform);
		}

		::System::Void ResetCmptParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_RESETCMPTPARENT_OFFSET))(this);
		}

		::RPG::GameCore::AlleyPackAnchorType GetRequiredHeadAnchorType()
		{
			return ((::RPG::GameCore::AlleyPackAnchorType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GETREQUIREDHEADANCHORTYPE_OFFSET))(this);
		}

		::System::Boolean IsChildOf(::RPG::Client::ActivityAlley::AlleyPackGoodData* targetGood)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackGoodData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ISCHILDOF_OFFSET))(this, targetGood);
		}

		::RPG::Client::ActivityAlley::AlleyPackGroupData* get_GroupData()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_GROUPDATA_OFFSET))(this);
		}

		::System::Void set_GroupData(::RPG::Client::ActivityAlley::AlleyPackGroupData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SET_GROUPDATA_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_FirstHeadAnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_FIRSTHEADANCHORPOSITION_OFFSET))(this);
		}

		::System::Void set_FirstHeadAnchorPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SET_FIRSTHEADANCHORPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_DragAnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_DRAGANCHORPOSITION_OFFSET))(this);
		}

		::System::Void set_DragAnchorPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SET_DRAGANCHORPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_RotateAnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_ROTATEANCHORPOSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SET_ROTATION_OFFSET))(this, value);
		}

		::System::Single get_YawAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_YAWANGLE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_DraggingFirstHeadAnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_DRAGGINGFIRSTHEADANCHORPOSITION_OFFSET))(this);
		}
	};
}
