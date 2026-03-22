#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HOYOSHARE_BASE_UTILS_CASTUTILS_ACCOUNTTHEMECAST_OFFSET UNITYSDK_OFFSET(0x156F2630)
#define HOYOSHARE_BASE_UTILS_CASTUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x156F2830)

namespace HoYoShare::Base::Utils
{
	inline static constexpr unsigned int CastUtils_TypeDefinitionIndex = 6435;

	class CastUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOYOSHARE_BASE_UTILS_CASTUTILS__CTOR_OFFSET))(this);
		}

		static ::System::String* AccountThemeCast(::System::String* gameBiz)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOYOSHARE_BASE_UTILS_CASTUTILS_ACCOUNTTHEMECAST_OFFSET))(gameBiz);
		}
	};
}
