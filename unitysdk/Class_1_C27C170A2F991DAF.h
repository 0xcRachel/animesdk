#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C27C170A2F991DAF_BeatType.h"
#include "unitysdk/Class_1_C27C170A2F991DAF_MusicPhase.h"
#include "unitysdk/RPG/Client/NoteInputResult.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
#include "unitysdk/System/Object.h"

class Class_1_502BA065E26E8F2F;
class Class_1_5D89E5E082F40A4C;
class Class_1_8DD407826F55E7BF;
class Class_1_A64499D9B51BFF0E;
class Class_1_AA81E11139890B4C;
namespace RPG::Client { class MusicRhythmBoard; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MusicRhythmTimelineConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_1_C27C170A2F991DAF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1116CC70)
#define CLASS_1_C27C170A2F991DAF_GET_ADJUSTTIME_OFFSET UNITYSDK_OFFSET(0x11170DB0)
#define CLASS_1_C27C170A2F991DAF_GET_BEATTIME_OFFSET UNITYSDK_OFFSET(0x11170D30)
#define CLASS_1_C27C170A2F991DAF_GET_BOARD_OFFSET UNITYSDK_OFFSET(0x11170D90)
#define CLASS_1_C27C170A2F991DAF_GET_ISADJUST_OFFSET UNITYSDK_OFFSET(0x11170DD0)
#define CLASS_1_C27C170A2F991DAF_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x11170D70)
#define CLASS_1_C27C170A2F991DAF_GET_PRESSNOTE_OFFSET UNITYSDK_OFFSET(0x11170DF0)
#define CLASS_1_C27C170A2F991DAF_GET_TIMELINECONFIG_OFFSET UNITYSDK_OFFSET(0x11170D50)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1116D960)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_2B581A34D8D24906_OFFSET UNITYSDK_OFFSET(0x1116F690)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_2E05D4898E2BA5A5_OFFSET UNITYSDK_OFFSET(0x11170490)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_332E8DA02BCCBD12_OFFSET UNITYSDK_OFFSET(0x1116D2D0)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x11170870)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_3411EC0F4D7F3117_OFFSET UNITYSDK_OFFSET(0x1116E2B0)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x11170E10)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x11170C60)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x1116EC30)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_5213E75FA17D9E65_OFFSET UNITYSDK_OFFSET(0x1116D4D0)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x1116EDC0)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_602B796CAD5DBEDB_OFFSET UNITYSDK_OFFSET(0x11170960)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_69C06A9FE3D3F5F1_OFFSET UNITYSDK_OFFSET(0x1116FDF0)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_83DA8FE11BEA9751_OFFSET UNITYSDK_OFFSET(0x1116D6E0)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x1116DE00)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_890F5FC885825F9E_OFFSET UNITYSDK_OFFSET(0x1116D0A0)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_B12CF4EA0F6A87A6_OFFSET UNITYSDK_OFFSET(0x1116F350)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x1116EA60)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x1116DD90)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_D4C4D785C5CD02F3_OFFSET UNITYSDK_OFFSET(0x1116EE60)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_D5BA0D4001A1E089_OFFSET UNITYSDK_OFFSET(0x1116F450)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x1116F2B0)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_DD9D53DC7442B251_OFFSET UNITYSDK_OFFSET(0x111705E0)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x1116D9D0)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_E0A54554DB1135DD_OFFSET UNITYSDK_OFFSET(0x1116D210)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_F3266EF6115029E7_OFFSET UNITYSDK_OFFSET(0x1116F9A0)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_F6F9B34A23100241_OFFSET UNITYSDK_OFFSET(0x1116E350)
#define CLASS_1_C27C170A2F991DAF_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x11170D10)
#define CLASS_1_C27C170A2F991DAF_SET_ADJUSTTIME_OFFSET UNITYSDK_OFFSET(0x11170DC0)
#define CLASS_1_C27C170A2F991DAF_SET_BEATTIME_OFFSET UNITYSDK_OFFSET(0x11170D40)
#define CLASS_1_C27C170A2F991DAF_SET_BOARD_OFFSET UNITYSDK_OFFSET(0x11170DA0)
#define CLASS_1_C27C170A2F991DAF_SET_ISADJUST_OFFSET UNITYSDK_OFFSET(0x11170DE0)
#define CLASS_1_C27C170A2F991DAF_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x11170D80)
#define CLASS_1_C27C170A2F991DAF_SET_PRESSNOTE_OFFSET UNITYSDK_OFFSET(0x11170E00)
#define CLASS_1_C27C170A2F991DAF_SET_TIMELINECONFIG_OFFSET UNITYSDK_OFFSET(0x11170D60)
#define CLASS_1_C27C170A2F991DAF__CCTOR_OFFSET UNITYSDK_OFFSET(0x11170E70)
#define CLASS_1_C27C170A2F991DAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1116CAF0)

inline static constexpr unsigned int Class_1_C27C170A2F991DAF_TypeDefinitionIndex = 48740;

class Class_1_C27C170A2F991DAF : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_48()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C27C170A2F991DAF_TypeDefinitionIndex)->GetStaticField(0x124A0);
	}
	static ::System::String** StaticGet_Field_1_46()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C27C170A2F991DAF_TypeDefinitionIndex)->GetStaticField(0x124A8);
	}
	static ::System::String** StaticGet_Field_1_47()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C27C170A2F991DAF_TypeDefinitionIndex)->GetStaticField(0x124B0);
	}
	static ::System::Single* StaticGet_Field_1_43()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C27C170A2F991DAF_TypeDefinitionIndex)->GetStaticField(0x6220);
	}
	static ::System::Single* StaticGet_Field_1_45()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C27C170A2F991DAF_TypeDefinitionIndex)->GetStaticField(0x6224);
	}
	static ::System::Single* StaticGet_Field_1_44()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C27C170A2F991DAF_TypeDefinitionIndex)->GetStaticField(0x6228);
	}
	::RPG::Client::MusicRhythmBoard* _Board_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Class_1_AA81E11139890B4C*>* Field_1_14; // 0x18
	::Class_1_502BA065E26E8F2F* _PressNote_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::Class_1_A64499D9B51BFF0E*>* Field_1_12; // 0x28
	::System::Collections::Generic::List_1<::Class_1_AA81E11139890B4C*>* Field_1_15; // 0x30
	::System::Collections::Generic::List_1<::Class_1_AA81E11139890B4C*>* Field_1_17; // 0x38
	::System::Collections::Generic::List_1<::Class_1_8DD407826F55E7BF*>* Field_1_30; // 0x40
	::System::Collections::Generic::List_1<::Class_1_AA81E11139890B4C*>* Field_1_16; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_13; // 0x50
	::RPG::GameCore::MusicRhythmTimelineConfig* _TimelineConfig_k__BackingField; // 0x58
	::System::Collections::Generic::List_1<::Class_1_5D89E5E082F40A4C*>* Field_1_29; // 0x60
	::System::Single Field_1_34; // 0x68
	::System::Single Field_1_37; // 0x6C
	::System::Single _AdjustTime_k__BackingField; // 0x70
	::System::Int32 Field_1_19; // 0x74
	::System::Single _BeatTime_k__BackingField; // 0x78
	::System::UInt32 Field_1_21; // 0x7C
	::System::UInt32 Field_1_27; // 0x80
	::Class_1_C27C170A2F991DAF_BeatType Field_1_38; // 0x84
	::Class_1_C27C170A2F991DAF_MusicPhase _Phase_k__BackingField; // 0x88
	::System::Boolean Field_1_10; // 0x8C
	::System::Double Field_1_7; // 0x90
	::System::Single Field_1_39; // 0x98
	::System::Int32 Field_1_31; // 0x9C
	::System::Int32 Field_1_32; // 0xA0
	::System::Boolean Field_1_8; // 0xA4
	::System::Boolean Field_1_9; // 0xA5
	::System::Boolean Field_1_36; // 0xA6
	::System::Boolean _IsAdjust_k__BackingField; // 0xA7
	::System::UInt32 Field_1_24; // 0xA8
	::System::UInt32 Field_1_20; // 0xAC
	::System::UInt32 Field_1_25; // 0xB0
	::System::UInt32 Field_1_23; // 0xB4
	::System::Single Field_1_40; // 0xB8
	::System::Single Field_1_33; // 0xBC
	::System::UInt32 Field_1_22; // 0xC0
	::System::UInt32 Field_1_26; // 0xC4
	::System::Single Field_1_41; // 0xC8
	::System::Single Field_1_18; // 0xCC
	::System::Boolean Field_1_28; // 0xD0
	::System::Boolean Field_1_11; // 0xD1
	::System::Boolean Field_1_42; // 0xD2
	::System::Boolean Field_1_35; // 0xD3

	::System::Void _ctor(::RPG::Client::MusicRhythmBoard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicRhythmBoard*))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E0A54554DB1135DD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_E0A54554DB1135DD_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Void Method_1_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Single Method_1_D437D090E63BE8A7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_D437D090E63BE8A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_3411EC0F4D7F3117(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_3411EC0F4D7F3117_OFFSET))(this, a1);
	}

	::System::Void Method_1_332E8DA02BCCBD12(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_332E8DA02BCCBD12_OFFSET))(this, a1);
	}

	::System::Void Method_1_F6F9B34A23100241(::RPG::GameCore::MusicRhythmTimelineConfig* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MusicRhythmTimelineConfig*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_F6F9B34A23100241_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_B961D33AD47A2113_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_1_890F5FC885825F9E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_890F5FC885825F9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_1_D4C4D785C5CD02F3(::RPG::GameCore::PuzzleCustomEvent a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_D4C4D785C5CD02F3_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Boolean Method_1_B12CF4EA0F6A87A6(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_B12CF4EA0F6A87A6_OFFSET))(this, a1);
	}

	::System::Void Method_1_D5BA0D4001A1E089(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::String* a3, ::System::String* a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::String*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_D5BA0D4001A1E089_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_2B581A34D8D24906(::UnityEngine::Animator* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_2B581A34D8D24906_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_5213E75FA17D9E65(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_5213E75FA17D9E65_OFFSET))(this, a1);
	}

	::System::Void Method_1_F3266EF6115029E7(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::String* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_F3266EF6115029E7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_83DA8FE11BEA9751(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_83DA8FE11BEA9751_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Int32>* Method_1_69C06A9FE3D3F5F1(::System::Single a1)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_69C06A9FE3D3F5F1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2E05D4898E2BA5A5(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_2E05D4898E2BA5A5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DD9D53DC7442B251(::System::Single a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_DD9D53DC7442B251_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_602B796CAD5DBEDB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_602B796CAD5DBEDB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Single get_BeatTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_GET_BEATTIME_OFFSET))(this);
	}

	::System::Void set_BeatTime(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_SET_BEATTIME_OFFSET))(this, value);
	}

	::RPG::GameCore::MusicRhythmTimelineConfig* get_TimelineConfig()
	{
		return ((::RPG::GameCore::MusicRhythmTimelineConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_GET_TIMELINECONFIG_OFFSET))(this);
	}

	::System::Void set_TimelineConfig(::RPG::GameCore::MusicRhythmTimelineConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MusicRhythmTimelineConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_SET_TIMELINECONFIG_OFFSET))(this, value);
	}

	::Class_1_C27C170A2F991DAF_MusicPhase get_Phase()
	{
		return ((::Class_1_C27C170A2F991DAF_MusicPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_GET_PHASE_OFFSET))(this);
	}

	::System::Void set_Phase(::Class_1_C27C170A2F991DAF_MusicPhase value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C27C170A2F991DAF_MusicPhase))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_SET_PHASE_OFFSET))(this, value);
	}

	::RPG::Client::MusicRhythmBoard* get_Board()
	{
		return ((::RPG::Client::MusicRhythmBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_GET_BOARD_OFFSET))(this);
	}

	::System::Void set_Board(::RPG::Client::MusicRhythmBoard* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicRhythmBoard*))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_SET_BOARD_OFFSET))(this, value);
	}

	::System::Single get_AdjustTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_GET_ADJUSTTIME_OFFSET))(this);
	}

	::System::Void set_AdjustTime(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_SET_ADJUSTTIME_OFFSET))(this, value);
	}

	::System::Boolean get_IsAdjust()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_GET_ISADJUST_OFFSET))(this);
	}

	::System::Void set_IsAdjust(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_SET_ISADJUST_OFFSET))(this, value);
	}

	::Class_1_502BA065E26E8F2F* get_PressNote()
	{
		return ((::Class_1_502BA065E26E8F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_GET_PRESSNOTE_OFFSET))(this);
	}

	::System::Void set_PressNote(::Class_1_502BA065E26E8F2F* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_502BA065E26E8F2F*))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_SET_PRESSNOTE_OFFSET))(this, value);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C27C170A2F991DAF_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
