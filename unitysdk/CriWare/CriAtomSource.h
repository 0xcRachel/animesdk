#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExPlayback.h"
#include "unitysdk/CriWare/CriAtomSourceBase.h"

namespace CriWare { class CriAtomExAcb; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define CRIWARE_CRIATOMSOURCE_GETACB_OFFSET UNITYSDK_OFFSET(0x112BADE0)
#define CRIWARE_CRIATOMSOURCE_GET_CUENAME_OFFSET UNITYSDK_OFFSET(0x112BAC70)
#define CRIWARE_CRIATOMSOURCE_GET_CUESHEET_OFFSET UNITYSDK_OFFSET(0x112BAC90)
#define CRIWARE_CRIATOMSOURCE_PLAYASYNC_OFFSET UNITYSDK_OFFSET(0x112BAE80)
#define CRIWARE_CRIATOMSOURCE_PLAYONSTART_OFFSET UNITYSDK_OFFSET(0x112BAE00)
#define CRIWARE_CRIATOMSOURCE_PLAY_OFFSET UNITYSDK_OFFSET(0x112BACB0)
#define CRIWARE_CRIATOMSOURCE_SET_CUENAME_OFFSET UNITYSDK_OFFSET(0x112BAC80)
#define CRIWARE_CRIATOMSOURCE_SET_CUESHEET_OFFSET UNITYSDK_OFFSET(0x112BACA0)
#define CRIWARE_CRIATOMSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x112BAEE0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomSource_TypeDefinitionIndex = 30095;

	class CriAtomSource : public ::CriWare::CriAtomSourceBase
	{
	public:
		::System::String* _cueName; // 0xA0
		::System::String* _cueSheet; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE__CTOR_OFFSET))(this);
		}

		::System::String* get_cueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_GET_CUENAME_OFFSET))(this);
		}

		::System::Void set_cueName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_SET_CUENAME_OFFSET))(this, value);
		}

		::System::String* get_cueSheet()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_GET_CUESHEET_OFFSET))(this);
		}

		::System::Void set_cueSheet(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_SET_CUESHEET_OFFSET))(this, value);
		}

		::CriWare::CriAtomExPlayback Play()
		{
			return ((::CriWare::CriAtomExPlayback(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_PLAY_OFFSET))(this);
		}

		::CriWare::CriAtomExAcb* GetAcb()
		{
			return ((::CriWare::CriAtomExAcb*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_GETACB_OFFSET))(this);
		}

		::System::Void PlayOnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_PLAYONSTART_OFFSET))(this);
		}

		::System::Collections::IEnumerator* PlayAsync(::System::String* cueName)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_PLAYASYNC_OFFSET))(this, cueName);
		}
	};
}
