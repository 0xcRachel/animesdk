#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D27BF54F25500E5F;
namespace System { class String; }

#define CLASS_1_5B897B04A14E9354_AUTOACTIVE_OFFSET UNITYSDK_OFFSET(0xFE693F0)
#define CLASS_1_5B897B04A14E9354_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0xFE690F0)
#define CLASS_1_5B897B04A14E9354_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFE69130)
#define CLASS_1_5B897B04A14E9354_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xFE693A0)
#define CLASS_1_5B897B04A14E9354_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xFE69220)
#define CLASS_1_5B897B04A14E9354_METHOD_1_F9A791B5381B18AE_OFFSET UNITYSDK_OFFSET(0xFE692D0)
#define CLASS_1_5B897B04A14E9354_ONCHANNELACTIVE_OFFSET UNITYSDK_OFFSET(0xFE69430)
#define CLASS_1_5B897B04A14E9354_ONCHANNELDEACTIVE_OFFSET UNITYSDK_OFFSET(0xFE69470)
#define CLASS_1_5B897B04A14E9354_ONCHANNELUPDATE_OFFSET UNITYSDK_OFFSET(0xFE694B0)
#define CLASS_1_5B897B04A14E9354_SAMPLE_OFFSET UNITYSDK_OFFSET(0xFE69550)
#define CLASS_1_5B897B04A14E9354__CTOR_OFFSET UNITYSDK_OFFSET(0xFE69020)

inline static constexpr unsigned int Class_1_5B897B04A14E9354_TypeDefinitionIndex = 54967;

class Class_1_5B897B04A14E9354 : public ::System::Object
{
public:
	::Class_1_D27BF54F25500E5F* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5B897B04A14E9354__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B897B04A14E9354_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5B897B04A14E9354_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_F9A791B5381B18AE(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5B897B04A14E9354_METHOD_1_F9A791B5381B18AE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B897B04A14E9354_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::String* ChannelName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B897B04A14E9354_CHANNELNAME_OFFSET))(this);
	}

	::System::Boolean AutoActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B897B04A14E9354_AUTOACTIVE_OFFSET))(this);
	}

	::System::Void OnChannelActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B897B04A14E9354_ONCHANNELACTIVE_OFFSET))(this);
	}

	::System::Void OnChannelDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B897B04A14E9354_ONCHANNELDEACTIVE_OFFSET))(this);
	}

	::System::Void OnChannelUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5B897B04A14E9354_ONCHANNELUPDATE_OFFSET))(this, a1);
	}

	::System::Single Sample(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5B897B04A14E9354_SAMPLE_OFFSET))(this, a1);
	}
};
