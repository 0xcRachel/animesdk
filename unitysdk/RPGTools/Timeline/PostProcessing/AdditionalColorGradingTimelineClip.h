#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BaseTimelineClip_1.h"

namespace RPGTools::Timeline::PostProcessing { class AdditionalColorGradingTimelineBehaviour; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_ADDITIONALCOLORGRADINGTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xA64B080)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int AdditionalColorGradingTimelineClip_TypeDefinitionIndex = 38353;

	class AdditionalColorGradingTimelineClip : public ::RPGTools::Timeline::PostProcessing::BaseTimelineClip_1<::RPGTools::Timeline::PostProcessing::AdditionalColorGradingTimelineBehaviour*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_ADDITIONALCOLORGRADINGTIMELINECLIP__CTOR_OFFSET))(this);
		}
	};
}
