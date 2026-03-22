#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtomExBeatSync_CbFunc; }

#define CRIWARE_CRIATOMEXBEATSYNC_ADD_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1129E6B0)
#define CRIWARE_CRIATOMEXBEATSYNC_REMOVE_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1129E6C0)
#define CRIWARE_CRIATOMEXBEATSYNC_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x1129E6D0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExBeatSync_TypeDefinitionIndex = 30150;

	class CriAtomExBeatSync : public ::System::Object
	{
	public:
		static ::System::Void add_OnCallback(::CriWare::CriAtomExBeatSync_CbFunc* value)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_CbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXBEATSYNC_ADD_ONCALLBACK_OFFSET))(value);
		}

		static ::System::Void remove_OnCallback(::CriWare::CriAtomExBeatSync_CbFunc* value)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_CbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXBEATSYNC_REMOVE_ONCALLBACK_OFFSET))(value);
		}

		static ::System::Void SetCallback(::CriWare::CriAtomExBeatSync_CbFunc* func)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_CbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXBEATSYNC_SETCALLBACK_OFFSET))(func);
		}
	};
}
