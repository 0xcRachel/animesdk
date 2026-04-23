#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_199CB11225DCC8EA_GET_FEATURENAME_OFFSET UNITYSDK_OFFSET(0x15DB0580)
#define CLASS_2_199CB11225DCC8EA_GET_ISOPTIONAL_OFFSET UNITYSDK_OFFSET(0x15DB0590)
#define CLASS_2_199CB11225DCC8EA_SET_ISOPTIONAL_OFFSET UNITYSDK_OFFSET(0x15DB05A0)
#define CLASS_2_199CB11225DCC8EA__CTOR_OFFSET UNITYSDK_OFFSET(0x15DB0570)

inline static constexpr unsigned int Class_2_199CB11225DCC8EA_TypeDefinitionIndex = 8822;

class Class_2_199CB11225DCC8EA : public ::System::Attribute
{
public:
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	::System::String* _FeatureName_k__BackingField; // 0x10
	::System::Boolean _IsOptional_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_199CB11225DCC8EA__CTOR_OFFSET))(this, a1);
	}

	::System::String* get_FeatureName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_199CB11225DCC8EA_GET_FEATURENAME_OFFSET))(this);
	}

	::System::Boolean get_IsOptional()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_199CB11225DCC8EA_GET_ISOPTIONAL_OFFSET))(this);
	}

	::System::Void set_IsOptional(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_199CB11225DCC8EA_SET_ISOPTIONAL_OFFSET))(this, value);
	}
};
