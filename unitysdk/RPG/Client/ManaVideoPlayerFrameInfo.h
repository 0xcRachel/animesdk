#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare::CriMana { class FrameInfo; }

#define RPG_CLIENT_MANAVIDEOPLAYERFRAMEINFO_UPDATEINFO_OFFSET UNITYSDK_OFFSET(0x95ECFC0)
#define RPG_CLIENT_MANAVIDEOPLAYERFRAMEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x95ED0D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ManaVideoPlayerFrameInfo_TypeDefinitionIndex = 58356;

	class ManaVideoPlayerFrameInfo : public ::System::Object
	{
	public:
		::System::Int32 Frame; // 0x10
		::System::UInt32 FullFrame; // 0x14
		::System::Single Time; // 0x18
		::System::Single FullTime; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYERFRAMEINFO__CTOR_OFFSET))(this);
		}

		::System::Void UpdateInfo(::CriWare::CriMana::FrameInfo* frameInfo)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::FrameInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYERFRAMEINFO_UPDATEINFO_OFFSET))(this, frameInfo);
		}
	};
}
