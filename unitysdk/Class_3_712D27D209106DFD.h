#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/PropertyGroupAttribute.h"

namespace System { class String; }

#define CLASS_3_712D27D209106DFD_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0xF081F70)
#define CLASS_3_712D27D209106DFD_GET_EXPANDED_OFFSET UNITYSDK_OFFSET(0xF081EE0)
#define CLASS_3_712D27D209106DFD_GET_TOGGLEMEMBERNAME_OFFSET UNITYSDK_OFFSET(0xF081EC0)
#define CLASS_3_712D27D209106DFD_SET_EXPANDED_OFFSET UNITYSDK_OFFSET(0xF081EF0)
#define CLASS_3_712D27D209106DFD_SET_TOGGLEMEMBERNAME_OFFSET UNITYSDK_OFFSET(0xF081ED0)
#define CLASS_3_712D27D209106DFD__CTOR_OFFSET UNITYSDK_OFFSET(0xF081F00)
#define CLASS_3_712D27D209106DFD___IFIXBASEPROXY_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0xF082020)

inline static constexpr unsigned int Class_3_712D27D209106DFD_TypeDefinitionIndex = 67799;

class Class_3_712D27D209106DFD : public ::Sirenix::OdinInspector::PropertyGroupAttribute
{
public:
	::System::String* _ToggleMemberName_k__BackingField; // 0x28
	::System::Boolean _Expanded_k__BackingField; // 0x30

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_712D27D209106DFD__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* get_ToggleMemberName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_712D27D209106DFD_GET_TOGGLEMEMBERNAME_OFFSET))(this);
	}

	::System::Void set_ToggleMemberName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_712D27D209106DFD_SET_TOGGLEMEMBERNAME_OFFSET))(this, value);
	}

	::System::Boolean get_Expanded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_712D27D209106DFD_GET_EXPANDED_OFFSET))(this);
	}

	::System::Void set_Expanded(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_712D27D209106DFD_SET_EXPANDED_OFFSET))(this, value);
	}

	::System::Void CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + CLASS_3_712D27D209106DFD_COMBINEVALUESWITH_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + CLASS_3_712D27D209106DFD___IFIXBASEPROXY_COMBINEVALUESWITH_OFFSET))(this, P0);
	}
};
