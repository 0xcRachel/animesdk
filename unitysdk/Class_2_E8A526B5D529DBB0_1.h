#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/FeverTimePeriodType.h"

namespace RPG::Client { class ActivityFeverTimePileToast; }
namespace RPG::Client { class ProgressBar; }
namespace RPG::GameCore { class FeverTimeInfoChangeParam; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_E8A526B5D529DBB0_1_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x10B94130)
#define CLASS_2_E8A526B5D529DBB0_1_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x10B94360)
#define CLASS_2_E8A526B5D529DBB0_1_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x10B91FD0)
#define CLASS_2_E8A526B5D529DBB0_1_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x10B91FF0)
#define CLASS_2_E8A526B5D529DBB0_1_METHOD_2_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0x10B92420)
#define CLASS_2_E8A526B5D529DBB0_1_METHOD_2_3F2D284606B11F16_OFFSET UNITYSDK_OFFSET(0x10B93830)
#define CLASS_2_E8A526B5D529DBB0_1_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x10B922B0)
#define CLASS_2_E8A526B5D529DBB0_1_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x10B94950)
#define CLASS_2_E8A526B5D529DBB0_1_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x10B949B0)
#define CLASS_2_E8A526B5D529DBB0_1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10B948F0)
#define CLASS_2_E8A526B5D529DBB0_1_METHOD_2_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x10B92000)
#define CLASS_2_E8A526B5D529DBB0_1_METHOD_2_D8E44F7C510402BB_1_OFFSET UNITYSDK_OFFSET(0x10B93670)
#define CLASS_2_E8A526B5D529DBB0_1_METHOD_2_D8E44F7C510402BB_OFFSET UNITYSDK_OFFSET(0x10B934B0)
#define CLASS_2_E8A526B5D529DBB0_1_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x10B93430)
#define CLASS_2_E8A526B5D529DBB0_1_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x10B94020)
#define CLASS_2_E8A526B5D529DBB0_1_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x10B933B0)
#define CLASS_2_E8A526B5D529DBB0_1_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x10B91FE0)
#define CLASS_2_E8A526B5D529DBB0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10B94550)
#define CLASS_2_E8A526B5D529DBB0_1__ONBIND_OFFSET UNITYSDK_OFFSET(0x10B908C0)
#define CLASS_2_E8A526B5D529DBB0_1___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x10B94A10)
#define CLASS_2_E8A526B5D529DBB0_1___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x10B94A70)
#define CLASS_2_E8A526B5D529DBB0_1___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x10B94890)

inline static constexpr unsigned int Class_2_E8A526B5D529DBB0_1_TypeDefinitionIndex = 58495;

class Class_2_E8A526B5D529DBB0_1 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::UI::Image* Field_2_5; // 0x60
	::UnityEngine::UI::Button* Field_2_1; // 0x68
	::UnityEngine::UI::Text* Field_2_12; // 0x70
	::UnityEngine::UI::Button* Field_2_3; // 0x78
	::RPG::Client::ActivityFeverTimePileToast* Field_2_16; // 0x80
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::RPG::Client::ProgressBar*>* Field_2_22; // 0x88
	::UnityEngine::UI::Image* Field_2_7; // 0x90
	::UnityEngine::Transform* Field_2_17; // 0x98
	::UnityEngine::UI::Text* Field_2_19; // 0xA0
	::RPG::GameCore::LevelUIComponent* Field_2_31; // 0xA8
	::UnityEngine::Animation* Field_2_8; // 0xB0
	::UnityEngine::UI::Button* Field_2_4; // 0xB8
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Animation*>* Field_2_23; // 0xC0
	::UnityEngine::Animation* Field_2_9; // 0xC8
	::System::String* Field_2_30; // 0xD0
	::UnityEngine::Animation* Field_2_14; // 0xD8
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::UI::SmoothMask*>* Field_2_21; // 0xE0
	::UnityEngine::Animation* Field_2_10; // 0xE8
	::UnityEngine::UI::Button* Field_2_2; // 0xF0
	::UnityEngine::UI::Image* Field_2_6; // 0xF8
	::UnityEngine::UI::Text* Field_2_18; // 0x100
	::System::String* Field_2_29; // 0x108
	::UnityEngine::Animator* Field_2_11; // 0x110
	::UnityEngine::Transform* Field_2_13; // 0x118
	::UnityEngine::Transform* Field_2_15; // 0x120
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Transform*>* Field_2_20; // 0x128
	::System::UInt32 Field_2_27; // 0x130
	::System::UInt32 Field_2_26; // 0x134
	::RPG::GameCore::FeverTimePeriodType Field_2_28; // 0x138
	::System::Int32 _Index_k__BackingField; // 0x13C
	::System::Int32 Field_2_25; // 0x140

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_1__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_1__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_1_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_1_SET_INDEX_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_1_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_1_METHOD_2_B961D33AD47A2113_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_1_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_2157CED3CDDF8996()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_1_METHOD_2_2157CED3CDDF8996_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_1_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_1_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8E44F7C510402BB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_1_METHOD_2_D8E44F7C510402BB_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8E44F7C510402BB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_1_METHOD_2_D8E44F7C510402BB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_3F2D284606B11F16(::RPG::GameCore::FeverTimeInfoChangeParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FeverTimeInfoChangeParam*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_1_METHOD_2_3F2D284606B11F16_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_1_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_1_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_1_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_1___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_1_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_1_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_1___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_1___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
