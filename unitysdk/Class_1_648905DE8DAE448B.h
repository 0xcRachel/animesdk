#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_335;
class Class_2_92F96E13C9577099;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_648905DE8DAE448B_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0xDB62740)
#define CLASS_1_648905DE8DAE448B_GET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0xDB62720)
#define CLASS_1_648905DE8DAE448B_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xDB62370)
#define CLASS_1_648905DE8DAE448B_METHOD_1_323DCA18419DFB89_OFFSET UNITYSDK_OFFSET(0xDB620A0)
#define CLASS_1_648905DE8DAE448B_METHOD_1_455E250D679F9642_1_OFFSET UNITYSDK_OFFSET(0xDB62990)
#define CLASS_1_648905DE8DAE448B_METHOD_1_455E250D679F9642_2_OFFSET UNITYSDK_OFFSET(0xDB629E0)
#define CLASS_1_648905DE8DAE448B_METHOD_1_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0xDB624B0)
#define CLASS_1_648905DE8DAE448B_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0xDB61D40)
#define CLASS_1_648905DE8DAE448B_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xDB61F70)
#define CLASS_1_648905DE8DAE448B_METHOD_1_5DFFE922C2406CCE_OFFSET UNITYSDK_OFFSET(0xDB622B0)
#define CLASS_1_648905DE8DAE448B_METHOD_1_651A585E3ED0787A_OFFSET UNITYSDK_OFFSET(0xDB61D00)
#define CLASS_1_648905DE8DAE448B_METHOD_1_79C6CF7920BBB63A_OFFSET UNITYSDK_OFFSET(0xDB61FD0)
#define CLASS_1_648905DE8DAE448B_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xDB61F80)
#define CLASS_1_648905DE8DAE448B_METHOD_1_9C45022812211693_OFFSET UNITYSDK_OFFSET(0xDB62130)
#define CLASS_1_648905DE8DAE448B_METHOD_1_A239DF324AF4215D_1_OFFSET UNITYSDK_OFFSET(0xDB62500)
#define CLASS_1_648905DE8DAE448B_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xDB62190)
#define CLASS_1_648905DE8DAE448B_METHOD_1_B7252E7FA488DD14_OFFSET UNITYSDK_OFFSET(0xDB61E20)
#define CLASS_1_648905DE8DAE448B_METHOD_1_C2C10E2BA8A55C5E_OFFSET UNITYSDK_OFFSET(0xDB625E0)
#define CLASS_1_648905DE8DAE448B_METHOD_1_E7CD24A54D7ADF3B_OFFSET UNITYSDK_OFFSET(0xDB62630)
#define CLASS_1_648905DE8DAE448B_ONSAMPLE_OFFSET UNITYSDK_OFFSET(0xDB627D0)
#define CLASS_1_648905DE8DAE448B_SAMPLEDELAY_OFFSET UNITYSDK_OFFSET(0xDB62780)
#define CLASS_1_648905DE8DAE448B_SET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0xDB62730)
#define CLASS_1_648905DE8DAE448B__CTOR_OFFSET UNITYSDK_OFFSET(0xDB62A30)

inline static constexpr unsigned int Class_1_648905DE8DAE448B_TypeDefinitionIndex = 46161;

class Class_1_648905DE8DAE448B : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_335* _OwnerFMSystem_k__BackingField; // 0x10
	::System::String* _fmChannelName; // 0x18
	::UnityEngine::AnimationCurve* _mappingCurve; // 0x20
	::System::Collections::Generic::List_1<::Class_2_92F96E13C9577099*>* Field_1_1; // 0x28
	::System::Single _fmSampleDelay; // 0x30
	::UnityEngine::Vector2 _inputRange; // 0x34
	::UnityEngine::Vector2 _outputRange; // 0x3C
	::System::Single Field_1_0; // 0x44
	::System::Boolean Field_1_9; // 0x48
	::System::Boolean _enableFMControl; // 0x49
	::System::Boolean Field_1_8; // 0x4A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B__CTOR_OFFSET))(this);
	}

	::EnviromentSystemV2Space::EnvCallbackCurveType Method_1_651A585E3ED0787A()
	{
		return ((::EnviromentSystemV2Space::EnvCallbackCurveType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_651A585E3ED0787A_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_79C6CF7920BBB63A(::Class_2_92F96E13C9577099* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_92F96E13C9577099*))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_79C6CF7920BBB63A_OFFSET))(this, a1);
	}

	::System::Void Method_1_323DCA18419DFB89(::Class_2_92F96E13C9577099* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_92F96E13C9577099*))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_323DCA18419DFB89_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7252E7FA488DD14()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_B7252E7FA488DD14_OFFSET))(this);
	}

	::System::Void Method_1_9C45022812211693(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_9C45022812211693_OFFSET))(this, a1);
	}

	::System::Void Method_1_5DFFE922C2406CCE(::System::String* a1, ::System::Nullable_1<::UnityEngine::Vector2> a2, ::System::Nullable_1<::UnityEngine::Vector2> a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Nullable_1<::UnityEngine::Vector2>, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_5DFFE922C2406CCE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_1_C2C10E2BA8A55C5E(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_C2C10E2BA8A55C5E_OFFSET))(this, a1);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_A239DF324AF4215D_1_OFFSET))(this);
	}

	::System::Single Method_1_E7CD24A54D7ADF3B(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_E7CD24A54D7ADF3B_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_335* get_OwnerFMSystem()
	{
		return ((::Class_0_16E4307DCC419505_335*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_GET_OWNERFMSYSTEM_OFFSET))(this);
	}

	::System::Void set_OwnerFMSystem(::Class_0_16E4307DCC419505_335* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_335*))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_SET_OWNERFMSYSTEM_OFFSET))(this, value);
	}

	::System::String* ChannelName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_CHANNELNAME_OFFSET))(this);
	}

	::System::Single SampleDelay()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_SAMPLEDELAY_OFFSET))(this);
	}

	::System::Void OnSample(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_ONSAMPLE_OFFSET))(this, a1);
	}

	::System::Void Method_1_455E250D679F9642_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_455E250D679F9642_1_OFFSET))(this);
	}

	::System::Void Method_1_455E250D679F9642_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_455E250D679F9642_2_OFFSET))(this);
	}
};
