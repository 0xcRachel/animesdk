#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_E7571CDD6466764F_AUTOACTIVE_OFFSET UNITYSDK_OFFSET(0x8435D90)
#define CLASS_1_E7571CDD6466764F_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0x8435B50)
#define CLASS_1_E7571CDD6466764F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8435A10)
#define CLASS_1_E7571CDD6466764F_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x8435990)
#define CLASS_1_E7571CDD6466764F_GET_NAME_OFFSET UNITYSDK_OFFSET(0x8435980)
#define CLASS_1_E7571CDD6466764F_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x8435A90)
#define CLASS_1_E7571CDD6466764F_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x8435D30)
#define CLASS_1_E7571CDD6466764F_METHOD_1_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x8435C50)
#define CLASS_1_E7571CDD6466764F_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x8435B90)
#define CLASS_1_E7571CDD6466764F_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x8435CE0)
#define CLASS_1_E7571CDD6466764F_ONCHANNELACTIVE_OFFSET UNITYSDK_OFFSET(0x8435DD0)
#define CLASS_1_E7571CDD6466764F_ONCHANNELDEACTIVE_OFFSET UNITYSDK_OFFSET(0x8435E10)
#define CLASS_1_E7571CDD6466764F_ONCHANNELUPDATE_OFFSET UNITYSDK_OFFSET(0x8435E50)
#define CLASS_1_E7571CDD6466764F_SAMPLE_OFFSET UNITYSDK_OFFSET(0x8435EB0)
#define CLASS_1_E7571CDD6466764F_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x84359A0)
#define CLASS_1_E7571CDD6466764F__CTOR_OFFSET UNITYSDK_OFFSET(0x84359B0)

inline static constexpr unsigned int Class_1_E7571CDD6466764F_TypeDefinitionIndex = 58969;

class Class_1_E7571CDD6466764F : public ::System::Object
{
public:
	::System::String* _Name_k__BackingField; // 0x10
	::System::Single Field_1_2; // 0x18
	::System::Boolean _IsActive_k__BackingField; // 0x1C

	::System::Void _ctor(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E7571CDD6466764F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7571CDD6466764F_GET_NAME_OFFSET))(this);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7571CDD6466764F_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7571CDD6466764F_SET_ISACTIVE_OFFSET))(this, value);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7571CDD6466764F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7571CDD6466764F_METHOD_1_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7571CDD6466764F_METHOD_1_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Void Method_1_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7571CDD6466764F_METHOD_1_2F0F99A12DB93F30_OFFSET))(this);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E7571CDD6466764F_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E7571CDD6466764F_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean AutoActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7571CDD6466764F_AUTOACTIVE_OFFSET))(this);
	}

	::System::String* ChannelName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7571CDD6466764F_CHANNELNAME_OFFSET))(this);
	}

	::System::Void OnChannelActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7571CDD6466764F_ONCHANNELACTIVE_OFFSET))(this);
	}

	::System::Void OnChannelDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7571CDD6466764F_ONCHANNELDEACTIVE_OFFSET))(this);
	}

	::System::Void OnChannelUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E7571CDD6466764F_ONCHANNELUPDATE_OFFSET))(this, a1);
	}

	::System::Single Sample(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E7571CDD6466764F_SAMPLE_OFFSET))(this, a1);
	}
};
