#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3977C7347E397100;
class Class_1_8AFE2EEBB16173EB;
class Class_1_ECD7A5F2FD4A5436;
namespace RPG::Common { template <typename T> class StateMachine_1; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ScrollRect; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_DISPATCH_OFFSET UNITYSDK_OFFSET(0x1958BA60)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GETCURMOVETOITEMINDEX_OFFSET UNITYSDK_OFFSET(0x1958B5F0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GETCURRENTVIEWITEM_OFFSET UNITYSDK_OFFSET(0x1958B140)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GETSCROLLRECT_OFFSET UNITYSDK_OFFSET(0x1958B710)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_IDLESTATE_OFFSET UNITYSDK_OFFSET(0x1958BCA0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_ISLISTVIEWSNAPPING_OFFSET UNITYSDK_OFFSET(0x1958B860)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_ISMOVETOWARDSOUTOFBORDER_OFFSET UNITYSDK_OFFSET(0x1958B9C0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_ISMOVING_OFFSET UNITYSDK_OFFSET(0x1958B770)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_ISSCROLLRECTSCROLLING_OFFSET UNITYSDK_OFFSET(0x1958B940)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_ISVELOCITYOVERDEADZONE_OFFSET UNITYSDK_OFFSET(0x1958B8D0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_LISTVIEW_OFFSET UNITYSDK_OFFSET(0x1958BD00)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_MOVESTATE_OFFSET UNITYSDK_OFFSET(0x1958BCC0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_SNAPSTATE_OFFSET UNITYSDK_OFFSET(0x1958BCE0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_STATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1958BC80)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_STOPMOVEPROTECTTIME_OFFSET UNITYSDK_OFFSET(0x1958B760)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_INIT_OFFSET UNITYSDK_OFFSET(0x1958B030)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1958BAD0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_MOVETOITEMINDEX_OFFSET UNITYSDK_OFFSET(0x1958B530)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_SET_IDLESTATE_OFFSET UNITYSDK_OFFSET(0x1958BCB0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_SET_MOVESTATE_OFFSET UNITYSDK_OFFSET(0x1958BCD0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_SET_SNAPSTATE_OFFSET UNITYSDK_OFFSET(0x1958BCF0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_SET_STATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1958BC90)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA__CTOR_OFFSET UNITYSDK_OFFSET(0x1958BD10)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA__GETNEARESTCURITEMINDEX_OFFSET UNITYSDK_OFFSET(0x1958B1A0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA__INITSTATE_OFFSET UNITYSDK_OFFSET(0x1958B0A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightDivisionListViewExtra_TypeDefinitionIndex = 60240;

	class GridFightDivisionListViewExtra : public ::UnityEngine::MonoBehaviour
	{
	public:
		::SuperScrollView::LoopListView2* _ListView; // 0x18
		::UnityEngine::RectTransform* _ViewPort; // 0x20
		::System::Single _AnchorPosRatio; // 0x28
		::System::Single _ListMoveVelocityDeadZone; // 0x2C
		::System::Single _StopMoveProtectTime; // 0x30
		::System::Nullable_1<::System::Int32> _CurMoveToItemIndex; // 0x34
		::RPG::Common::StateMachine_1<::RPG::Client::GridFightDivisionListViewExtra*>* _StateMachine_k__BackingField; // 0x40
		::Class_1_8AFE2EEBB16173EB* _IdleState_k__BackingField; // 0x48
		::Class_1_3977C7347E397100* _MoveState_k__BackingField; // 0x50
		::Class_1_ECD7A5F2FD4A5436* _SnapState_k__BackingField; // 0x58
		::UnityEngine::Vector2 _CachedScrollRectVelocity; // 0x60
		::System::Action_1<::XLua::LuaTable*>* OnStartMove; // 0x68
		::System::Action_1<::XLua::LuaTable*>* OnEndMove; // 0x70
		::System::Action_1<::XLua::LuaTable*>* OnCurItemChanged; // 0x78
		::System::Int32 ItemIndexRangeL; // 0x80
		::System::Int32 ItemIndexRangeR; // 0x84
		::XLua::LuaTable* _LuaTable; // 0x88
		::System::Boolean _Inited; // 0x90
		::UnityEngine::UI::ScrollRect* _ScrollRect; // 0x98
		::Il2CppArray<::UnityEngine::Vector3>* _WorldCornersHelper; // 0xA0
		::System::Boolean _IsMoving; // 0xA8
		::System::Int32 _CurItemIndex; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_INIT_OFFSET))(this);
		}

		::SuperScrollView::LoopListViewItem2* GetCurrentViewItem()
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GETCURRENTVIEWITEM_OFFSET))(this);
		}

		::System::Void MoveToItemIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_MOVETOITEMINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetCurMoveToItemIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GETCURMOVETOITEMINDEX_OFFSET))(this);
		}

		::UnityEngine::UI::ScrollRect* GetScrollRect()
		{
			return ((::UnityEngine::UI::ScrollRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GETSCROLLRECT_OFFSET))(this);
		}

		::System::Single get_StopMoveProtectTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_STOPMOVEPROTECTTIME_OFFSET))(this);
		}

		::System::Boolean get_IsMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_ISMOVING_OFFSET))(this);
		}

		::System::Boolean get_IsScrollRectScrolling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_ISSCROLLRECTSCROLLING_OFFSET))(this);
		}

		::System::Boolean get_IsListViewSnapping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_ISLISTVIEWSNAPPING_OFFSET))(this);
		}

		::System::Boolean get_IsVelocityOverDeadZone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_ISVELOCITYOVERDEADZONE_OFFSET))(this);
		}

		::System::Boolean get_IsMoveTowardsOutOfBorder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_ISMOVETOWARDSOUTOFBORDER_OFFSET))(this);
		}

		::System::Void Dispatch(::System::Action_1<::XLua::LuaTable*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::XLua::LuaTable*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_DISPATCH_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_LATEUPDATE_OFFSET))(this);
		}

		::System::Void _InitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA__INITSTATE_OFFSET))(this);
		}

		::System::Int32 _GetNearestCurItemIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA__GETNEARESTCURITEMINDEX_OFFSET))(this);
		}

		::RPG::Common::StateMachine_1<::RPG::Client::GridFightDivisionListViewExtra*>* get_StateMachine()
		{
			return ((::RPG::Common::StateMachine_1<::RPG::Client::GridFightDivisionListViewExtra*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_STATEMACHINE_OFFSET))(this);
		}

		::System::Void set_StateMachine(::RPG::Common::StateMachine_1<::RPG::Client::GridFightDivisionListViewExtra*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Common::StateMachine_1<::RPG::Client::GridFightDivisionListViewExtra*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_SET_STATEMACHINE_OFFSET))(this, a1);
		}

		::Class_1_8AFE2EEBB16173EB* get_IdleState()
		{
			return ((::Class_1_8AFE2EEBB16173EB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_IDLESTATE_OFFSET))(this);
		}

		::System::Void set_IdleState(::Class_1_8AFE2EEBB16173EB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8AFE2EEBB16173EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_SET_IDLESTATE_OFFSET))(this, a1);
		}

		::Class_1_3977C7347E397100* get_MoveState()
		{
			return ((::Class_1_3977C7347E397100*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_MOVESTATE_OFFSET))(this);
		}

		::System::Void set_MoveState(::Class_1_3977C7347E397100* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3977C7347E397100*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_SET_MOVESTATE_OFFSET))(this, a1);
		}

		::Class_1_ECD7A5F2FD4A5436* get_SnapState()
		{
			return ((::Class_1_ECD7A5F2FD4A5436*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_SNAPSTATE_OFFSET))(this);
		}

		::System::Void set_SnapState(::Class_1_ECD7A5F2FD4A5436* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ECD7A5F2FD4A5436*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_SET_SNAPSTATE_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopListView2* get_ListView()
		{
			return ((::SuperScrollView::LoopListView2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_LISTVIEW_OFFSET))(this);
		}
	};
}
