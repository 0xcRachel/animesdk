#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_335;
namespace System { class String; }

#define CLASS_1_735D63FF0721B01A_AUTOACTIVE_OFFSET UNITYSDK_OFFSET(0x102C7B40)
#define CLASS_1_735D63FF0721B01A_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0x102C7B80)
#define CLASS_1_735D63FF0721B01A_CLEAR_OFFSET UNITYSDK_OFFSET(0x102C7D00)
#define CLASS_1_735D63FF0721B01A_GET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x102C7AB0)
#define CLASS_1_735D63FF0721B01A_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x102C7D50)
#define CLASS_1_735D63FF0721B01A_METHOD_1_FACE598724AB5897_OFFSET UNITYSDK_OFFSET(0x102C7AD0)
#define CLASS_1_735D63FF0721B01A_ONCHANNELACTIVE_OFFSET UNITYSDK_OFFSET(0x102C7BC0)
#define CLASS_1_735D63FF0721B01A_ONCHANNELDEACTIVE_OFFSET UNITYSDK_OFFSET(0x102C7C00)
#define CLASS_1_735D63FF0721B01A_ONCHANNELUPDATE_OFFSET UNITYSDK_OFFSET(0x102C7C40)
#define CLASS_1_735D63FF0721B01A_SAMPLE_OFFSET UNITYSDK_OFFSET(0x102C7CA0)
#define CLASS_1_735D63FF0721B01A_SET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x102C7AC0)
#define CLASS_1_735D63FF0721B01A__CTOR_OFFSET UNITYSDK_OFFSET(0x102C7DB0)

inline static constexpr unsigned int Class_1_735D63FF0721B01A_TypeDefinitionIndex = 56158;

class Class_1_735D63FF0721B01A : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_335* _OwnerFMSystem_k__BackingField; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735D63FF0721B01A__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_335* get_OwnerFMSystem()
	{
		return ((::Class_0_16E4307DCC419505_335*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735D63FF0721B01A_GET_OWNERFMSYSTEM_OFFSET))(this);
	}

	::System::Void set_OwnerFMSystem(::Class_0_16E4307DCC419505_335* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_335*))((::PBYTE)hIl2Cpp + CLASS_1_735D63FF0721B01A_SET_OWNERFMSYSTEM_OFFSET))(this, value);
	}

	::System::Void Method_1_FACE598724AB5897(::System::String* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_735D63FF0721B01A_METHOD_1_FACE598724AB5897_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean AutoActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735D63FF0721B01A_AUTOACTIVE_OFFSET))(this);
	}

	::System::String* ChannelName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735D63FF0721B01A_CHANNELNAME_OFFSET))(this);
	}

	::System::Void OnChannelActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735D63FF0721B01A_ONCHANNELACTIVE_OFFSET))(this);
	}

	::System::Void OnChannelDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735D63FF0721B01A_ONCHANNELDEACTIVE_OFFSET))(this);
	}

	::System::Void OnChannelUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_735D63FF0721B01A_ONCHANNELUPDATE_OFFSET))(this, a1);
	}

	::System::Single Sample(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_735D63FF0721B01A_SAMPLE_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735D63FF0721B01A_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_735D63FF0721B01A_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}
};
