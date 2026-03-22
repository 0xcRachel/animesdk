#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_38CB396D65CE8ADD.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

#define CLASS_3_B2C30CF19C7EFBFF_METHOD_3_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0x9939060)
#define CLASS_3_B2C30CF19C7EFBFF_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x9939000)
#define CLASS_3_B2C30CF19C7EFBFF__CTOR_OFFSET UNITYSDK_OFFSET(0x9939250)
#define CLASS_3_B2C30CF19C7EFBFF___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x9939260)

inline static constexpr unsigned int Class_3_B2C30CF19C7EFBFF_TypeDefinitionIndex = 38250;

class Class_3_B2C30CF19C7EFBFF : public ::Class_2_38CB396D65CE8ADD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B2C30CF19C7EFBFF__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_B2C30CF19C7EFBFF_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_3_08DCF72FBE01FF99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B2C30CF19C7EFBFF_METHOD_3_08DCF72FBE01FF99_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_B2C30CF19C7EFBFF___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
	}
};
