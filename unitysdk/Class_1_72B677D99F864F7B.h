#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_72B677D99F864F7B_AUTOACTIVE_OFFSET UNITYSDK_OFFSET(0xFD6F8C0)
#define CLASS_1_72B677D99F864F7B_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0xFD6F900)
#define CLASS_1_72B677D99F864F7B_CLEAR_OFFSET UNITYSDK_OFFSET(0xFD6FA80)
#define CLASS_1_72B677D99F864F7B_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xFD6FAD0)
#define CLASS_1_72B677D99F864F7B_METHOD_1_FACE598724AB5897_OFFSET UNITYSDK_OFFSET(0xFD6F850)
#define CLASS_1_72B677D99F864F7B_ONCHANNELACTIVE_OFFSET UNITYSDK_OFFSET(0xFD6F940)
#define CLASS_1_72B677D99F864F7B_ONCHANNELDEACTIVE_OFFSET UNITYSDK_OFFSET(0xFD6F980)
#define CLASS_1_72B677D99F864F7B_ONCHANNELUPDATE_OFFSET UNITYSDK_OFFSET(0xFD6F9C0)
#define CLASS_1_72B677D99F864F7B_SAMPLE_OFFSET UNITYSDK_OFFSET(0xFD6FA20)
#define CLASS_1_72B677D99F864F7B__CTOR_OFFSET UNITYSDK_OFFSET(0xFD6FB30)

inline static constexpr unsigned int Class_1_72B677D99F864F7B_TypeDefinitionIndex = 48269;

class Class_1_72B677D99F864F7B : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B677D99F864F7B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FACE598724AB5897(::System::String* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_72B677D99F864F7B_METHOD_1_FACE598724AB5897_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean AutoActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B677D99F864F7B_AUTOACTIVE_OFFSET))(this);
	}

	::System::String* ChannelName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B677D99F864F7B_CHANNELNAME_OFFSET))(this);
	}

	::System::Void OnChannelActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B677D99F864F7B_ONCHANNELACTIVE_OFFSET))(this);
	}

	::System::Void OnChannelDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B677D99F864F7B_ONCHANNELDEACTIVE_OFFSET))(this);
	}

	::System::Void OnChannelUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_72B677D99F864F7B_ONCHANNELUPDATE_OFFSET))(this, a1);
	}

	::System::Single Sample(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_72B677D99F864F7B_SAMPLE_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B677D99F864F7B_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_72B677D99F864F7B_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}
};
