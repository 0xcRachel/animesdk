#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class EvolveBuildLevel; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace RPG::GameCore { class LevelInfiniteWaveProgressChange; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_E8A526B5D529DBB0_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x10B6C3F0)
#define CLASS_2_E8A526B5D529DBB0_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x10B6C720)
#define CLASS_2_E8A526B5D529DBB0_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x10B6A720)
#define CLASS_2_E8A526B5D529DBB0_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x10B6A740)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x10B6AA40)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x10B6B6A0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x10B6B7F0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x10B6A930)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x10B6A750)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x10B6B5E0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x10B6ADD0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10B6AD10)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_479759059E440327_1_OFFSET UNITYSDK_OFFSET(0x10B6BE70)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_479759059E440327_2_OFFSET UNITYSDK_OFFSET(0x10B6C1B0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x10B6BC50)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_4A924CEE40144255_OFFSET UNITYSDK_OFFSET(0x10B6AC10)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x10B6CB10)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10B6CAB0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_5D5817B6B3027F40_OFFSET UNITYSDK_OFFSET(0x10B6B9C0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x10B6AC60)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_A002848F130F70CA_OFFSET UNITYSDK_OFFSET(0x10B6B290)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x10B6C390)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x10B6C240)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0x10B6BFB0)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_C145705A054F47D2_OFFSET UNITYSDK_OFFSET(0x10B6BD30)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_E6FA84ECDEF620CE_OFFSET UNITYSDK_OFFSET(0x10B6AE60)
#define CLASS_2_E8A526B5D529DBB0_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x10B6C2A0)
#define CLASS_2_E8A526B5D529DBB0_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x10B6A730)
#define CLASS_2_E8A526B5D529DBB0__CTOR_OFFSET UNITYSDK_OFFSET(0x10B6CA10)
#define CLASS_2_E8A526B5D529DBB0__ONBIND_OFFSET UNITYSDK_OFFSET(0x10B6A200)
#define CLASS_2_E8A526B5D529DBB0__ONTICK_OFFSET UNITYSDK_OFFSET(0x10B6BF00)
#define CLASS_2_E8A526B5D529DBB0___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x10B6CBE0)
#define CLASS_2_E8A526B5D529DBB0___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x10B6CC40)
#define CLASS_2_E8A526B5D529DBB0___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x10B6CA50)
#define CLASS_2_E8A526B5D529DBB0___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x10B6CB70)

inline static constexpr unsigned int Class_2_E8A526B5D529DBB0_TypeDefinitionIndex = 58494;

class Class_2_E8A526B5D529DBB0 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Single Field_2_18; // 0x0
	// static const ::System::Single Field_2_23; // 0x0
	// static const ::System::String* Field_2_26; // 0x0
	// static const ::System::String* Field_2_27; // 0x0
	::RPG::GameCore::LevelDataComponent* Field_2_13; // 0x60
	::UnityEngine::Animation* Field_2_6; // 0x68
	::UnityEngine::UI::Image* Field_2_7; // 0x70
	::UnityEngine::Transform* Field_2_10; // 0x78
	::RPG::Client::LocalizedText* Field_2_4; // 0x80
	::RPG::Client::EvolveBuildLevel* Field_2_28; // 0x88
	::UnityEngine::RectTransform* Field_2_8; // 0x90
	::RPG::GameCore::LevelUIComponent* Field_2_12; // 0x98
	::UnityEngine::UI::Image* Field_2_1; // 0xA0
	::UnityEngine::Transform* Field_2_2; // 0xA8
	::UnityEngine::Transform* Field_2_9; // 0xB0
	::RPG::Client::LocalizedText* Field_2_5; // 0xB8
	::System::Single Field_2_24; // 0xC0
	::System::Single Field_2_16; // 0xC4
	::System::Boolean Field_2_22; // 0xC8
	::System::Boolean Field_2_20; // 0xC9
	::System::Boolean Field_2_21; // 0xCA
	::System::Boolean Field_2_19; // 0xCB
	::System::Single Field_2_17; // 0xCC
	::System::Single Field_2_14; // 0xD0
	::System::Int32 _Index_k__BackingField; // 0xD4
	::System::Single Field_2_3; // 0xD8
	::System::UInt32 Field_2_25; // 0xDC
	::System::Single Field_2_15; // 0xE0
	::System::UInt32 Field_2_29; // 0xE4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_SET_INDEX_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_E6FA84ECDEF620CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_E6FA84ECDEF620CE_OFFSET))(this);
	}

	::System::Void Method_2_4A924CEE40144255()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_4A924CEE40144255_OFFSET))(this);
	}

	::System::Void Method_2_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_5D5817B6B3027F40(::RPG::GameCore::LevelInfiniteWaveProgressChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelInfiniteWaveProgressChange*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_5D5817B6B3027F40_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_2_C145705A054F47D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_C145705A054F47D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_479759059E440327_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A002848F130F70CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_A002848F130F70CA_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_1290EA767C459179_1_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_479759059E440327_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A57FA722AB2A8938(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_A57FA722AB2A8938_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_4343F372F34C05BF_2_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
