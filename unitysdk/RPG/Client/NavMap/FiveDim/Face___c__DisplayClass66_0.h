#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B765BE6F498EEA22;

#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0x992BF50)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__DISPLAYCLASS66_0__GETSURFACE_B__0_OFFSET UNITYSDK_OFFSET(0x992C440)

namespace RPG::Client::NavMap::FiveDim
{
	inline static constexpr unsigned int Face___c__DisplayClass66_0_TypeDefinitionIndex = 59634;

	class Face___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::System::UInt32 surfaceID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSurface_b__0(::Class_1_B765BE6F498EEA22* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_B765BE6F498EEA22*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__DISPLAYCLASS66_0__GETSURFACE_B__0_OFFSET))(this, x);
		}
	};
}
