#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SuperScrollView/LoopListView2_PredictSnapValue.h"
#include "unitysdk/SuperScrollView/SnapStatus.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x13EEF920)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13F07630)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListView2_SnapData_TypeDefinitionIndex = 44953;

	class LoopListView2_SnapData : public ::System::Object
	{
	public:
		::System::Boolean mIsForceSnapTo; // 0x10
		::System::Boolean mIsSnapWithPredict; // 0x11
		::System::Boolean mIsTempTarget; // 0x12
		::System::Boolean mIsFinishCallbackDone; // 0x13
		::System::Single mTargetSnapVal; // 0x14
		::System::Int32 mTempTargetIndex; // 0x18
		::System::Int32 mSnapTargetIndex; // 0x1C
		::SuperScrollView::SnapStatus mSnapStatus; // 0x20
		::System::Single mCurSnapVal; // 0x24
		::System::Int32 mIsSnapDirect; // 0x28
		::System::Single mMoveMaxAbsVec; // 0x2C
		::SuperScrollView::LoopListView2_PredictSnapValue predictSnapValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA_CLEAR_OFFSET))(this);
		}
	};
}
