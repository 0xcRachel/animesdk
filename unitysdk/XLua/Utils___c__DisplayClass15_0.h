#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define XLUA_UTILS___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xFD09A70)
#define XLUA_UTILS___C__DISPLAYCLASS15_0__REFLECTIONWRAP_B__0_OFFSET UNITYSDK_OFFSET(0xFD0FBF0)

namespace XLua
{
	inline static constexpr unsigned int Utils___c__DisplayClass15_0_TypeDefinitionIndex = 39530;

	class Utils___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Type* type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _ReflectionWrap_b__0(::System::IntPtr LL)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS15_0__REFLECTIONWRAP_B__0_OFFSET))(this, LL);
		}
	};
}
