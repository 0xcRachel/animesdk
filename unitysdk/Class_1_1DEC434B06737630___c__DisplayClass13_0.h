#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::OpenWorld { class PVSRuntimeReplayJudgeEntry; }
namespace System { class String; }

#define CLASS_1_1DEC434B06737630___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xEA056D0)
#define CLASS_1_1DEC434B06737630___C__DISPLAYCLASS13_0__RECORDSTAGE_B__0_OFFSET UNITYSDK_OFFSET(0xEA059A0)

inline static constexpr unsigned int Class_1_1DEC434B06737630___c__DisplayClass13_0_TypeDefinitionIndex = 67905;

class Class_1_1DEC434B06737630___c__DisplayClass13_0 : public ::System::Object
{
public:
	::System::String* stage; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DEC434B06737630___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RecordStage_b__0(::RPG::Client::OpenWorld::PVSRuntimeReplayJudgeEntry* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::PVSRuntimeReplayJudgeEntry*))((::PBYTE)hIl2Cpp + CLASS_1_1DEC434B06737630___C__DISPLAYCLASS13_0__RECORDSTAGE_B__0_OFFSET))(this, x);
	}
};
