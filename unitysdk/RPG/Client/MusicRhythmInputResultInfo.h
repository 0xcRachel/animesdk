#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NoteInputResult.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MUSICRHYTHMINPUTRESULTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x98FCE20)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmInputResultInfo_TypeDefinitionIndex = 47667;

	class MusicRhythmInputResultInfo : public ::System::Object
	{
	public:
		::System::Int32 NoteIndex; // 0x10
		::System::Int32 GroupIndex; // 0x14
		::System::Boolean LongInput; // 0x18
		::System::Boolean KeyUp; // 0x19
		::System::Boolean PassMiss; // 0x1A
		::System::Boolean Active; // 0x1B
		::System::Single MusicTime; // 0x1C
		::System::Single DeltaTime; // 0x20
		::RPG::Client::NoteInputResult Result; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMINPUTRESULTINFO__CTOR_OFFSET))(this);
		}
	};
}
