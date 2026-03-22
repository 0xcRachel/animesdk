#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_92F96E13C9577099;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_456376B48EA45206_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0xFF31BD0)
#define CLASS_1_456376B48EA45206_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xFF31820)
#define CLASS_1_456376B48EA45206_METHOD_1_323DCA18419DFB89_OFFSET UNITYSDK_OFFSET(0xFF31570)
#define CLASS_1_456376B48EA45206_METHOD_1_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0xFF31DF0)
#define CLASS_1_456376B48EA45206_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xFF31440)
#define CLASS_1_456376B48EA45206_METHOD_1_5DFFE922C2406CCE_OFFSET UNITYSDK_OFFSET(0xFF31760)
#define CLASS_1_456376B48EA45206_METHOD_1_651A585E3ED0787A_OFFSET UNITYSDK_OFFSET(0xFF31210)
#define CLASS_1_456376B48EA45206_METHOD_1_79C6CF7920BBB63A_OFFSET UNITYSDK_OFFSET(0xFF314A0)
#define CLASS_1_456376B48EA45206_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xFF31990)
#define CLASS_1_456376B48EA45206_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xFF31450)
#define CLASS_1_456376B48EA45206_METHOD_1_9C45022812211693_OFFSET UNITYSDK_OFFSET(0xFF31600)
#define CLASS_1_456376B48EA45206_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xFF31660)
#define CLASS_1_456376B48EA45206_METHOD_1_B7252E7FA488DD14_OFFSET UNITYSDK_OFFSET(0xFF312F0)
#define CLASS_1_456376B48EA45206_METHOD_1_C2C10E2BA8A55C5E_OFFSET UNITYSDK_OFFSET(0xFF31A90)
#define CLASS_1_456376B48EA45206_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xFF31250)
#define CLASS_1_456376B48EA45206_METHOD_1_E7CD24A54D7ADF3B_OFFSET UNITYSDK_OFFSET(0xFF31AE0)
#define CLASS_1_456376B48EA45206_METHOD_1_F0BD65B017F2AC0B_1_OFFSET UNITYSDK_OFFSET(0xFF31E40)
#define CLASS_1_456376B48EA45206_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xFF31940)
#define CLASS_1_456376B48EA45206_ONSAMPLE_OFFSET UNITYSDK_OFFSET(0xFF31C60)
#define CLASS_1_456376B48EA45206_SAMPLEDELAY_OFFSET UNITYSDK_OFFSET(0xFF31C10)
#define CLASS_1_456376B48EA45206__CTOR_OFFSET UNITYSDK_OFFSET(0xFF31E90)

inline static constexpr unsigned int Class_1_456376B48EA45206_TypeDefinitionIndex = 39272;

class Class_1_456376B48EA45206 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_92F96E13C9577099*>* Field_1_1; // 0x10
	::UnityEngine::AnimationCurve* _mappingCurve; // 0x18
	::System::String* _fmChannelName; // 0x20
	::System::Single Field_1_0; // 0x28
	::System::Boolean Field_1_9; // 0x2C
	::System::Boolean Field_1_8; // 0x2D
	::System::Boolean _enableFMControl; // 0x2E
	::System::Single _fmSampleDelay; // 0x30
	::UnityEngine::Vector2 _inputRange; // 0x34
	::UnityEngine::Vector2 _outputRange; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_456376B48EA45206__CTOR_OFFSET))(this);
	}

	::EnviromentSystemV2Space::EnvCallbackCurveType Method_1_651A585E3ED0787A()
	{
		return ((::EnviromentSystemV2Space::EnvCallbackCurveType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_456376B48EA45206_METHOD_1_651A585E3ED0787A_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_456376B48EA45206_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_456376B48EA45206_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_456376B48EA45206_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_79C6CF7920BBB63A(::Class_2_92F96E13C9577099* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_92F96E13C9577099*))((::PBYTE)hIl2Cpp + CLASS_1_456376B48EA45206_METHOD_1_79C6CF7920BBB63A_OFFSET))(this, a1);
	}

	::System::Void Method_1_323DCA18419DFB89(::Class_2_92F96E13C9577099* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_92F96E13C9577099*))((::PBYTE)hIl2Cpp + CLASS_1_456376B48EA45206_METHOD_1_323DCA18419DFB89_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7252E7FA488DD14()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_456376B48EA45206_METHOD_1_B7252E7FA488DD14_OFFSET))(this);
	}

	::System::Void Method_1_9C45022812211693(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_456376B48EA45206_METHOD_1_9C45022812211693_OFFSET))(this, a1);
	}

	::System::Void Method_1_5DFFE922C2406CCE(::System::String* a1, ::System::Nullable_1<::UnityEngine::Vector2> a2, ::System::Nullable_1<::UnityEngine::Vector2> a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Nullable_1<::UnityEngine::Vector2>, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + CLASS_1_456376B48EA45206_METHOD_1_5DFFE922C2406CCE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_456376B48EA45206_METHOD_1_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_1_C2C10E2BA8A55C5E(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_456376B48EA45206_METHOD_1_C2C10E2BA8A55C5E_OFFSET))(this, a1);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_456376B48EA45206_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_456376B48EA45206_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_456376B48EA45206_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Single Method_1_E7CD24A54D7ADF3B(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_456376B48EA45206_METHOD_1_E7CD24A54D7ADF3B_OFFSET))(this, a1);
	}

	::System::String* ChannelName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_456376B48EA45206_CHANNELNAME_OFFSET))(this);
	}

	::System::Single SampleDelay()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_456376B48EA45206_SAMPLEDELAY_OFFSET))(this);
	}

	::System::Void OnSample(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_456376B48EA45206_ONSAMPLE_OFFSET))(this, a1);
	}

	::System::Void Method_1_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_456376B48EA45206_METHOD_1_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_1_F0BD65B017F2AC0B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_456376B48EA45206_METHOD_1_F0BD65B017F2AC0B_1_OFFSET))(this);
	}
};
