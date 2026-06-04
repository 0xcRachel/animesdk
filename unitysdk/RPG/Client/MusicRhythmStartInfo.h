#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MUSICRHYTHMSTARTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x187632D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmStartInfo_TypeDefinitionIndex = 56246;

	class MusicRhythmStartInfo : public ::System::Object
	{
	public:
		::System::Single BeatTime; // 0x10
		::System::UInt32 LevelId; // 0x14
		::System::UInt32 TotalScore; // 0x18
		::System::Int32 BeatCount; // 0x1C
		::System::Boolean IsTutorial; // 0x20
		::System::Boolean LineVisible; // 0x21
		::System::Boolean HintVisible; // 0x22
		::System::Boolean IsPuMan; // 0x23
		::System::Boolean ShowCircle; // 0x24
		::System::Single CircleOffset; // 0x28
		::System::Single MusicTotalTime; // 0x2C
		::System::Single GoodInputTime; // 0x30
		::System::UInt32 CountDown; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSTARTINFO__CTOR_OFFSET))(this);
		}
	};
}
