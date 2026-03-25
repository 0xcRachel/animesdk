#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_LOOPLISTVIEWINITPARAM_COPYDEFAULTINITPARAM_OFFSET UNITYSDK_OFFSET(0xAC22BA0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWINITPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xAC22C10)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListViewInitParam_TypeDefinitionIndex = 38523;

	class LoopListViewInitParam : public ::System::Object
	{
	public:
		::System::Single mDistanceForNew1; // 0x10
		::System::Single mSmoothDumpRate; // 0x14
		::System::Boolean mForbidAutoScrollWhenItemSelected; // 0x18
		::System::Boolean mMovePanelUseViewPortSize; // 0x19
		::System::Single mSnapVecThreshold; // 0x1C
		::System::Single mDistanceForNew0; // 0x20
		::System::Single mDistanceForRecycle0; // 0x24
		::System::Single mSnapFinishThreshold; // 0x28
		::System::Single mSnapFinishCallbackThreshold; // 0x2C
		::System::Single mItemDefaultWithPaddingSize; // 0x30
		::System::Single mDistanceForRecycle1; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWINITPARAM__CTOR_OFFSET))(this);
		}

		static ::SuperScrollView::LoopListViewInitParam* CopyDefaultInitParam()
		{
			return ((::SuperScrollView::LoopListViewInitParam*(*)())((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWINITPARAM_COPYDEFAULTINITPARAM_OFFSET))();
		}
	};
}
