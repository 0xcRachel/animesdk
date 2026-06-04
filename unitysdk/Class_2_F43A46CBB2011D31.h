#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

namespace System { class String; }

#define CLASS_2_F43A46CBB2011D31_GET_ISTICKABLE_OFFSET UNITYSDK_OFFSET(0x154BA580)
#define CLASS_2_F43A46CBB2011D31_TOSTRING_OFFSET UNITYSDK_OFFSET(0x154BA610)
#define CLASS_2_F43A46CBB2011D31__CTOR_OFFSET UNITYSDK_OFFSET(0x154BA680)
#define CLASS_2_F43A46CBB2011D31__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x154BA590)
#define CLASS_2_F43A46CBB2011D31___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x154BA6F0)
#define CLASS_2_F43A46CBB2011D31___IFIXBASEPROXY__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x154BA690)

inline static constexpr unsigned int Class_2_F43A46CBB2011D31_TypeDefinitionIndex = 55974;

class Class_2_F43A46CBB2011D31 : public ::RPG::Client::SyncCheckItemBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F43A46CBB2011D31__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsTickable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F43A46CBB2011D31_GET_ISTICKABLE_OFFSET))(this);
	}

	::System::Boolean _DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F43A46CBB2011D31__DOCHECKIMPL_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F43A46CBB2011D31_TOSTRING_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F43A46CBB2011D31___IFIXBASEPROXY__DOCHECKIMPL_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F43A46CBB2011D31___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
