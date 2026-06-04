#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_MUSICRHYTHMNOTIFYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1875BA50)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmNotifyInfo_TypeDefinitionIndex = 56252;

	class MusicRhythmNotifyInfo : public ::System::Object
	{
	public:
		::System::Int32 Count; // 0x10
		::UnityEngine::Vector3 ScreenPos; // 0x14
		::System::Single Duration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMNOTIFYINFO__CTOR_OFFSET))(this);
		}
	};
}
