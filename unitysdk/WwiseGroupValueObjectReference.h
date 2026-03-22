#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/WwiseObjectReference.h"
#include "unitysdk/WwiseObjectType.h"

namespace System { class String; }

#define WWISEGROUPVALUEOBJECTREFERENCE_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1843D1F0)
#define WWISEGROUPVALUEOBJECTREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1843D290)
#define WWISEGROUPVALUEOBJECTREFERENCE___IFIXBASEPROXY_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1843D2B0)

inline static constexpr unsigned int WwiseGroupValueObjectReference_TypeDefinitionIndex = 33633;

class WwiseGroupValueObjectReference : public ::WwiseObjectReference
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEGROUPVALUEOBJECTREFERENCE__CTOR_OFFSET))(this);
	}

	::System::String* get_DisplayName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEGROUPVALUEOBJECTREFERENCE_GET_DISPLAYNAME_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_get_DisplayName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEGROUPVALUEOBJECTREFERENCE___IFIXBASEPROXY_GET_DISPLAYNAME_OFFSET))(this);
	}
};
