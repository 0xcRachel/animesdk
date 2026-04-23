#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A9854C4F46202100_GET_INITRANDSEED_OFFSET UNITYSDK_OFFSET(0x1793FC60)
#define CLASS_1_A9854C4F46202100_GET_KEEPRUNWITHOUTONLINEPLAYER_OFFSET UNITYSDK_OFFSET(0x1793FC80)
#define CLASS_1_A9854C4F46202100_GET_NEXTFIELDEFFECTID_OFFSET UNITYSDK_OFFSET(0x1793FCA0)
#define CLASS_1_A9854C4F46202100_GET_PAUSECAT_OFFSET UNITYSDK_OFFSET(0x1793FCE0)
#define CLASS_1_A9854C4F46202100_GET_TIMEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0x1793FCC0)
#define CLASS_1_A9854C4F46202100_METHOD_1_9972734FC91A4B95_1_OFFSET UNITYSDK_OFFSET(0x17940260)
#define CLASS_1_A9854C4F46202100_METHOD_1_9972734FC91A4B95_OFFSET UNITYSDK_OFFSET(0x179400A0)
#define CLASS_1_A9854C4F46202100_METHOD_1_B892007B9247C983_OFFSET UNITYSDK_OFFSET(0x17940420)
#define CLASS_1_A9854C4F46202100_METHOD_1_B8FA2BA3B5C0B3B5_OFFSET UNITYSDK_OFFSET(0x1793FD60)
#define CLASS_1_A9854C4F46202100_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1793FD00)
#define CLASS_1_A9854C4F46202100_SET_INITRANDSEED_OFFSET UNITYSDK_OFFSET(0x1793FC70)
#define CLASS_1_A9854C4F46202100_SET_KEEPRUNWITHOUTONLINEPLAYER_OFFSET UNITYSDK_OFFSET(0x1793FC90)
#define CLASS_1_A9854C4F46202100_SET_NEXTFIELDEFFECTID_OFFSET UNITYSDK_OFFSET(0x1793FCB0)
#define CLASS_1_A9854C4F46202100_SET_PAUSECAT_OFFSET UNITYSDK_OFFSET(0x1793FCF0)
#define CLASS_1_A9854C4F46202100_SET_TIMEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0x1793FCD0)
#define CLASS_1_A9854C4F46202100__CTOR_OFFSET UNITYSDK_OFFSET(0x17940600)

inline static constexpr unsigned int Class_1_A9854C4F46202100_TypeDefinitionIndex = 34837;

class Class_1_A9854C4F46202100 : public ::System::Object
{
public:
	::Il2CppArray<::System::Collections::Generic::List_1<::System::UInt32>*>* Field_1_1; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_11; // 0x18
	::Il2CppArray<::System::UInt32>* Field_1_2; // 0x20
	::System::Boolean Field_1_10; // 0x28
	::System::Boolean _TimeDynamicScale_k__BackingField; // 0x29
	::System::Boolean _PauseCat_k__BackingField; // 0x2A
	::System::Boolean _KeepRunWithoutOnlinePlayer_k__BackingField; // 0x2B
	::System::Int32 _InitRandSeed_k__BackingField; // 0x2C
	::System::UInt32 Field_1_7; // 0x30
	::System::UInt32 Field_1_8; // 0x34
	::System::UInt32 _NextFieldEffectID_k__BackingField; // 0x38
	::System::UInt32 Field_1_0; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100__CTOR_OFFSET))(this);
	}

	::System::Int32 get_InitRandSeed()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_GET_INITRANDSEED_OFFSET))(this);
	}

	::System::Void set_InitRandSeed(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_SET_INITRANDSEED_OFFSET))(this, value);
	}

	::System::Boolean get_KeepRunWithoutOnlinePlayer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_GET_KEEPRUNWITHOUTONLINEPLAYER_OFFSET))(this);
	}

	::System::Void set_KeepRunWithoutOnlinePlayer(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_SET_KEEPRUNWITHOUTONLINEPLAYER_OFFSET))(this, value);
	}

	::System::UInt32 get_NextFieldEffectID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_GET_NEXTFIELDEFFECTID_OFFSET))(this);
	}

	::System::Void set_NextFieldEffectID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_SET_NEXTFIELDEFFECTID_OFFSET))(this, value);
	}

	::System::Boolean get_TimeDynamicScale()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_GET_TIMEDYNAMICSCALE_OFFSET))(this);
	}

	::System::Void set_TimeDynamicScale(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_SET_TIMEDYNAMICSCALE_OFFSET))(this, value);
	}

	::System::Boolean get_PauseCat()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_GET_PAUSECAT_OFFSET))(this);
	}

	::System::Void set_PauseCat(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_SET_PAUSECAT_OFFSET))(this, value);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_B8FA2BA3B5C0B3B5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_METHOD_1_B8FA2BA3B5C0B3B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_9972734FC91A4B95(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_METHOD_1_9972734FC91A4B95_OFFSET))(this, a1);
	}

	::System::Void Method_1_9972734FC91A4B95_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_METHOD_1_9972734FC91A4B95_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B892007B9247C983(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_METHOD_1_B892007B9247C983_OFFSET))(this, a1);
	}
};
