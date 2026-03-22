#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client::StoryToken { class StoryTokenActivityData; }

#define CLASS_2_C76856D39A91405E_GET_CURRENTACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x8571770)
#define CLASS_2_C76856D39A91405E_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x85716D0)
#define CLASS_2_C76856D39A91405E_METHOD_2_64B6514CFF8F8D76_OFFSET UNITYSDK_OFFSET(0x8571670)
#define CLASS_2_C76856D39A91405E_SET_CURRENTACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x8571780)
#define CLASS_2_C76856D39A91405E__CTOR_OFFSET UNITYSDK_OFFSET(0x8571790)

inline static constexpr unsigned int Class_2_C76856D39A91405E_TypeDefinitionIndex = 59406;

class Class_2_C76856D39A91405E : public ::RPG::Client::BaseModule
{
public:
	::RPG::Client::StoryToken::StoryTokenActivityData* _CurrentActivityData_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C76856D39A91405E__CTOR_OFFSET))(this);
	}

	static ::Class_2_C76856D39A91405E* Method_2_64B6514CFF8F8D76()
	{
		return ((::Class_2_C76856D39A91405E*(*)())((::PBYTE)hIl2Cpp + CLASS_2_C76856D39A91405E_METHOD_2_64B6514CFF8F8D76_OFFSET))();
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C76856D39A91405E_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::RPG::Client::StoryToken::StoryTokenActivityData* get_CurrentActivityData()
	{
		return ((::RPG::Client::StoryToken::StoryTokenActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C76856D39A91405E_GET_CURRENTACTIVITYDATA_OFFSET))(this);
	}

	::System::Void set_CurrentActivityData(::RPG::Client::StoryToken::StoryTokenActivityData* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::StoryToken::StoryTokenActivityData*))((::PBYTE)hIl2Cpp + CLASS_2_C76856D39A91405E_SET_CURRENTACTIVITYDATA_OFFSET))(this, value);
	}
};
