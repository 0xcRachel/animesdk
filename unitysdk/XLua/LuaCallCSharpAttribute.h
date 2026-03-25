#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/XLua/GenFlag.h"

#define XLUA_LUACALLCSHARPATTRIBUTE_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x17A83E80)
#define XLUA_LUACALLCSHARPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17A83E90)

namespace XLua
{
	inline static constexpr unsigned int LuaCallCSharpAttribute_TypeDefinitionIndex = 8618;

	class LuaCallCSharpAttribute : public ::System::Attribute
	{
	public:
		::XLua::GenFlag flag; // 0x10

		::System::Void _ctor(::XLua::GenFlag flag)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::GenFlag))((::PBYTE)hIl2Cpp + XLUA_LUACALLCSHARPATTRIBUTE__CTOR_OFFSET))(this, flag);
		}

		::XLua::GenFlag get_Flag()
		{
			return ((::XLua::GenFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUACALLCSHARPATTRIBUTE_GET_FLAG_OFFSET))(this);
		}
	};
}
