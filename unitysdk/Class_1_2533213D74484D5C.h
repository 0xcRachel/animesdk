#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TimeRewindCheckSetStateResult.h"
#include "unitysdk/RPG/Client/TimeRewindExtraMode.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/Struct_2_9BF8902D61AE1796.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_519;
class Class_1_22DFC3839E157DF2;
class Class_1_2533213D74484D5C_Class_1_598861075ECB5399;
class Class_1_5C7F0A9A533D7AE6;
class Class_1_E7DA329C99460319;
namespace RPG::Client { class EntityTimelineControlNode; }
namespace RPG::Client { class EntityTimelineControlTrackInfo; }
namespace RPG::Client { class TimeRewindNodeIndexInfo; }
namespace RPG::Client { class TimeRewindPathRuntime; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SingleTimeRewindEntityAnimEventBaseConfig; }
namespace RPG::GameCore { class TimeRewindAudioConfig; }
namespace RPG::GameCore { class TimeRewindCameraShakeConfig; }
namespace RPG::GameCore { class TimeRewindEffConfig; }
namespace RPG::GameCore { class TimeRewindEntityEventConfig; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2533213D74484D5C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118E0D10)
#define CLASS_1_2533213D74484D5C_GET_ENABLELOOPREWIND_OFFSET UNITYSDK_OFFSET(0x118E1260)
#define CLASS_1_2533213D74484D5C_GET_ISINCONTROL_OFFSET UNITYSDK_OFFSET(0x118E11A0)
#define CLASS_1_2533213D74484D5C_GET_ISINMOTION_OFFSET UNITYSDK_OFFSET(0x118E1180)
#define CLASS_1_2533213D74484D5C_GET_LOOPREWINDSNAPTARGETRATIO_OFFSET UNITYSDK_OFFSET(0x118E1280)
#define CLASS_1_2533213D74484D5C_GET_REWINDEXTRAMODE_OFFSET UNITYSDK_OFFSET(0x118DD8C0)
#define CLASS_1_2533213D74484D5C_METHOD_1_00056B7706CBE75F_OFFSET UNITYSDK_OFFSET(0x118E0000)
#define CLASS_1_2533213D74484D5C_METHOD_1_04BF15E8EBD90FC9_OFFSET UNITYSDK_OFFSET(0x118972F0)
#define CLASS_1_2533213D74484D5C_METHOD_1_08B7287B59325288_OFFSET UNITYSDK_OFFSET(0x118DD800)
#define CLASS_1_2533213D74484D5C_METHOD_1_12AE54057FEFD85C_OFFSET UNITYSDK_OFFSET(0x118DB510)
#define CLASS_1_2533213D74484D5C_METHOD_1_13E8B1F3F0042AA5_OFFSET UNITYSDK_OFFSET(0x118E08B0)
#define CLASS_1_2533213D74484D5C_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x118E07B0)
#define CLASS_1_2533213D74484D5C_METHOD_1_171A4D4799D0DC21_OFFSET UNITYSDK_OFFSET(0x118DB950)
#define CLASS_1_2533213D74484D5C_METHOD_1_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x118DA020)
#define CLASS_1_2533213D74484D5C_METHOD_1_1DE61D52879171EA_OFFSET UNITYSDK_OFFSET(0x118DD6B0)
#define CLASS_1_2533213D74484D5C_METHOD_1_1EDDD623459E1A71_OFFSET UNITYSDK_OFFSET(0x118DD8E0)
#define CLASS_1_2533213D74484D5C_METHOD_1_243675D19F8F3B66_OFFSET UNITYSDK_OFFSET(0x118DFE10)
#define CLASS_1_2533213D74484D5C_METHOD_1_2DF0EFFDA2B6622E_OFFSET UNITYSDK_OFFSET(0x118DFCA0)
#define CLASS_1_2533213D74484D5C_METHOD_1_2DF54689451C0CF0_OFFSET UNITYSDK_OFFSET(0x118E0EC0)
#define CLASS_1_2533213D74484D5C_METHOD_1_2ED6C3773AA1E488_OFFSET UNITYSDK_OFFSET(0x118E0370)
#define CLASS_1_2533213D74484D5C_METHOD_1_32093F47AD5C9627_OFFSET UNITYSDK_OFFSET(0x118DC2A0)
#define CLASS_1_2533213D74484D5C_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x118E06E0)
#define CLASS_1_2533213D74484D5C_METHOD_1_35CC232176269AD8_OFFSET UNITYSDK_OFFSET(0x118E01D0)
#define CLASS_1_2533213D74484D5C_METHOD_1_39A7DCE3B426791A_OFFSET UNITYSDK_OFFSET(0x118DBB10)
#define CLASS_1_2533213D74484D5C_METHOD_1_3B81DE967BCF7FA1_OFFSET UNITYSDK_OFFSET(0x118DE700)
#define CLASS_1_2533213D74484D5C_METHOD_1_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x118E1130)
#define CLASS_1_2533213D74484D5C_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x118E10E0)
#define CLASS_1_2533213D74484D5C_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x118DB100)
#define CLASS_1_2533213D74484D5C_METHOD_1_4358F70A163BCEAE_OFFSET UNITYSDK_OFFSET(0x118E0C40)
#define CLASS_1_2533213D74484D5C_METHOD_1_4385D631F08B20DB_OFFSET UNITYSDK_OFFSET(0x118DE500)
#define CLASS_1_2533213D74484D5C_METHOD_1_43A8DE046F4EECDF_OFFSET UNITYSDK_OFFSET(0x118DDBA0)
#define CLASS_1_2533213D74484D5C_METHOD_1_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x118DF060)
#define CLASS_1_2533213D74484D5C_METHOD_1_46E030E6F5465A66_OFFSET UNITYSDK_OFFSET(0x118E0E60)
#define CLASS_1_2533213D74484D5C_METHOD_1_4D84AE5BC2BB0D66_OFFSET UNITYSDK_OFFSET(0x118DDD80)
#define CLASS_1_2533213D74484D5C_METHOD_1_5197441EABF2542B_OFFSET UNITYSDK_OFFSET(0x118DEE20)
#define CLASS_1_2533213D74484D5C_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x118DA1C0)
#define CLASS_1_2533213D74484D5C_METHOD_1_60A7C5B7A3EBEE47_OFFSET UNITYSDK_OFFSET(0x118DBC30)
#define CLASS_1_2533213D74484D5C_METHOD_1_68A2CA32DC720C44_OFFSET UNITYSDK_OFFSET(0x118DA850)
#define CLASS_1_2533213D74484D5C_METHOD_1_696E70B96088889D_OFFSET UNITYSDK_OFFSET(0x118DB840)
#define CLASS_1_2533213D74484D5C_METHOD_1_6B47CDE3B34D5A39_OFFSET UNITYSDK_OFFSET(0x118DE690)
#define CLASS_1_2533213D74484D5C_METHOD_1_70F996834AEFED46_OFFSET UNITYSDK_OFFSET(0x118DA950)
#define CLASS_1_2533213D74484D5C_METHOD_1_741837A0FB99F394_OFFSET UNITYSDK_OFFSET(0x118DB240)
#define CLASS_1_2533213D74484D5C_METHOD_1_74F49F23504A427D_OFFSET UNITYSDK_OFFSET(0x118DC0A0)
#define CLASS_1_2533213D74484D5C_METHOD_1_76E39B41CA36D23E_OFFSET UNITYSDK_OFFSET(0x118DFAD0)
#define CLASS_1_2533213D74484D5C_METHOD_1_7718E5D285F56824_OFFSET UNITYSDK_OFFSET(0x118D9F60)
#define CLASS_1_2533213D74484D5C_METHOD_1_7AC9D28A9D7B409B_OFFSET UNITYSDK_OFFSET(0x118DC120)
#define CLASS_1_2533213D74484D5C_METHOD_1_7E243539CF85D7E9_OFFSET UNITYSDK_OFFSET(0x118DE880)
#define CLASS_1_2533213D74484D5C_METHOD_1_826E56CC1BDFDC08_OFFSET UNITYSDK_OFFSET(0x118DF660)
#define CLASS_1_2533213D74484D5C_METHOD_1_828EE97043D8DA9E_OFFSET UNITYSDK_OFFSET(0x11897520)
#define CLASS_1_2533213D74484D5C_METHOD_1_93BC2AF9C1DFDF7C_OFFSET UNITYSDK_OFFSET(0x118DA700)
#define CLASS_1_2533213D74484D5C_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x118DE4B0)
#define CLASS_1_2533213D74484D5C_METHOD_1_9CD6E3BD279AA792_OFFSET UNITYSDK_OFFSET(0x118DEC00)
#define CLASS_1_2533213D74484D5C_METHOD_1_9E3751A8C9767297_OFFSET UNITYSDK_OFFSET(0x118DD980)
#define CLASS_1_2533213D74484D5C_METHOD_1_9EFA03D82DC53333_OFFSET UNITYSDK_OFFSET(0x118DB740)
#define CLASS_1_2533213D74484D5C_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x118DB0B0)
#define CLASS_1_2533213D74484D5C_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x118DE7E0)
#define CLASS_1_2533213D74484D5C_METHOD_1_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0x118DF210)
#define CLASS_1_2533213D74484D5C_METHOD_1_A3E94568D5184024_OFFSET UNITYSDK_OFFSET(0x118DC1F0)
#define CLASS_1_2533213D74484D5C_METHOD_1_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x118DBA30)
#define CLASS_1_2533213D74484D5C_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x118DB1A0)
#define CLASS_1_2533213D74484D5C_METHOD_1_A9BED4B32F3F3606_OFFSET UNITYSDK_OFFSET(0x118D9E50)
#define CLASS_1_2533213D74484D5C_METHOD_1_B153DBF66F2B9EE2_OFFSET UNITYSDK_OFFSET(0x118DAAD0)
#define CLASS_1_2533213D74484D5C_METHOD_1_B8E9D6C7E52A56C2_1_OFFSET UNITYSDK_OFFSET(0x118DD740)
#define CLASS_1_2533213D74484D5C_METHOD_1_B8E9D6C7E52A56C2_OFFSET UNITYSDK_OFFSET(0x118DBB70)
#define CLASS_1_2533213D74484D5C_METHOD_1_B9738F207E8D6A89_OFFSET UNITYSDK_OFFSET(0x118DA340)
#define CLASS_1_2533213D74484D5C_METHOD_1_BD5F1AF5661A4E98_OFFSET UNITYSDK_OFFSET(0x118DA430)
#define CLASS_1_2533213D74484D5C_METHOD_1_BEFE0208268549F4_OFFSET UNITYSDK_OFFSET(0x118DBE70)
#define CLASS_1_2533213D74484D5C_METHOD_1_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0x118DECA0)
#define CLASS_1_2533213D74484D5C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x118DE830)
#define CLASS_1_2533213D74484D5C_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x118DD610)
#define CLASS_1_2533213D74484D5C_METHOD_1_CC4DDEEB549C9978_OFFSET UNITYSDK_OFFSET(0x118DD550)
#define CLASS_1_2533213D74484D5C_METHOD_1_CF4B368BE9AEFB42_OFFSET UNITYSDK_OFFSET(0x118DF4A0)
#define CLASS_1_2533213D74484D5C_METHOD_1_D3EA5C9E7ED3E40D_OFFSET UNITYSDK_OFFSET(0x118DC250)
#define CLASS_1_2533213D74484D5C_METHOD_1_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0x118E11E0)
#define CLASS_1_2533213D74484D5C_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x118DA680)
#define CLASS_1_2533213D74484D5C_METHOD_1_DDBFD384E0179A2A_OFFSET UNITYSDK_OFFSET(0x118E0DD0)
#define CLASS_1_2533213D74484D5C_METHOD_1_E32BCC2C6A959814_OFFSET UNITYSDK_OFFSET(0x118E0CB0)
#define CLASS_1_2533213D74484D5C_METHOD_1_E33A426D149D816E_OFFSET UNITYSDK_OFFSET(0x118DBDB0)
#define CLASS_1_2533213D74484D5C_METHOD_1_E44C4B1878F85417_OFFSET UNITYSDK_OFFSET(0x118DA3A0)
#define CLASS_1_2533213D74484D5C_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x118D9B40)
#define CLASS_1_2533213D74484D5C_METHOD_1_EBD210A60727976A_OFFSET UNITYSDK_OFFSET(0x118D9B90)
#define CLASS_1_2533213D74484D5C_METHOD_1_EDDD1B285B468C3C_OFFSET UNITYSDK_OFFSET(0x118E09C0)
#define CLASS_1_2533213D74484D5C_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x118E11D0)
#define CLASS_1_2533213D74484D5C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x118E11C0)
#define CLASS_1_2533213D74484D5C_METHOD_1_F10865B2F967F86A_OFFSET UNITYSDK_OFFSET(0x118E1250)
#define CLASS_1_2533213D74484D5C_METHOD_1_F6DDBB5EC464B28C_OFFSET UNITYSDK_OFFSET(0x118DD870)
#define CLASS_1_2533213D74484D5C_METHOD_1_FAF26456A956DC6C_OFFSET UNITYSDK_OFFSET(0x118DEDB0)
#define CLASS_1_2533213D74484D5C_METHOD_1_FC738999CCAFD561_OFFSET UNITYSDK_OFFSET(0x118D98E0)
#define CLASS_1_2533213D74484D5C_METHOD_1_FF3C6D7263F5B9E0_OFFSET UNITYSDK_OFFSET(0x118DA070)
#define CLASS_1_2533213D74484D5C_SET_ENABLELOOPREWIND_OFFSET UNITYSDK_OFFSET(0x118E1270)
#define CLASS_1_2533213D74484D5C_SET_ISINCONTROL_OFFSET UNITYSDK_OFFSET(0x118E11B0)
#define CLASS_1_2533213D74484D5C_SET_ISINMOTION_OFFSET UNITYSDK_OFFSET(0x118E1190)
#define CLASS_1_2533213D74484D5C_SET_LOOPREWINDSNAPTARGETRATIO_OFFSET UNITYSDK_OFFSET(0x118E1290)
#define CLASS_1_2533213D74484D5C_SET_REWINDEXTRAMODE_OFFSET UNITYSDK_OFFSET(0x118DD8D0)
#define CLASS_1_2533213D74484D5C__CTOR_OFFSET UNITYSDK_OFFSET(0x118E12A0)

inline static constexpr unsigned int Class_1_2533213D74484D5C_TypeDefinitionIndex = 49256;

class Class_1_2533213D74484D5C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_2533213D74484D5C_Class_1_598861075ECB5399*>* Field_1_1; // 0x10
	::Class_1_E7DA329C99460319* Field_1_15; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_519*>* Field_1_11; // 0x20
	::System::Collections::Generic::List_1<::Class_1_2533213D74484D5C_Class_1_598861075ECB5399*>* Field_1_0; // 0x28
	::Il2CppArray<::Class_0_16E4307DCC419505_519*>* Field_1_4; // 0x30
	::Class_1_5C7F0A9A533D7AE6* Field_1_14; // 0x38
	::RPG::GameCore::GameEntity* Field_1_29; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_27; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::EntityTimelineControlNode*>* Field_1_30; // 0x50
	::Class_1_22DFC3839E157DF2* Field_1_16; // 0x58
	::Struct_2_9BF8902D61AE1796 Field_1_38; // 0x60
	::System::Collections::Generic::List_1<::System::Single>* Field_1_28; // 0xF0
	::RPG::Client::EntityTimelineControlTrackInfo* Field_1_23; // 0xF8
	::System::Int32 Field_1_19; // 0x100
	::System::Single Field_1_12; // 0x104
	::System::Single Field_1_17; // 0x108
	::System::Int32 Field_1_26; // 0x10C
	::System::Single Field_1_35; // 0x110
	::System::Single Field_1_3; // 0x114
	::System::Int32 Field_1_22; // 0x118
	::System::Int32 Field_1_21; // 0x11C
	::System::Single Field_1_13; // 0x120
	::System::Boolean _LoopRewindSnapTargetRatio_k__BackingField; // 0x124
	::System::Boolean Field_1_37; // 0x125
	::System::Boolean Field_1_32; // 0x126
	::System::Boolean Field_1_7; // 0x127
	::RPG::Client::TimeRewindExtraMode _RewindExtraMode_k__BackingField; // 0x128
	::System::Boolean Field_1_10; // 0x12C
	::System::Boolean Field_1_8; // 0x12D
	::System::Boolean _IsInMotion_k__BackingField; // 0x12E
	::System::Boolean _EnableLoopRewind_k__BackingField; // 0x12F
	::System::Boolean _IsInControl_k__BackingField; // 0x130
	::System::Boolean Field_1_34; // 0x131
	::System::Single Field_1_24; // 0x134
	::System::Single Field_1_39; // 0x138
	::System::Single Field_1_18; // 0x13C
	::System::Single Field_1_20; // 0x140
	::System::Int32 Field_1_25; // 0x144
	::RPG::GameCore::TimeRewindState Field_1_9; // 0x148
	::System::Single Field_1_31; // 0x14C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FC738999CCAFD561(::RPG::GameCore::GameEntity* a1, ::RPG::Client::EntityTimelineControlTrackInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::EntityTimelineControlTrackInfo*))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_FC738999CCAFD561_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_22DFC3839E157DF2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_22DFC3839E157DF2*))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBD210A60727976A(::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::EntityTimelineControlNode*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::EntityTimelineControlNode*>*))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_EBD210A60727976A_OFFSET))(this, a1);
	}

	::RPG::Client::EntityTimelineControlNode* Method_1_A9BED4B32F3F3606(::System::Int32 a1)
	{
		return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_A9BED4B32F3F3606_OFFSET))(this, a1);
	}

	::RPG::Client::EntityTimelineControlNode* Method_1_7718E5D285F56824(::System::Int32 a1)
	{
		return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_7718E5D285F56824_OFFSET))(this, a1);
	}

	::System::Void Method_1_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_BD5F1AF5661A4E98(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_BD5F1AF5661A4E98_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_93BC2AF9C1DFDF7C(::System::Single a1, ::Struct_2_9BF8902D61AE1796 a2, ::RPG::GameCore::TimeRewindState& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::Struct_2_9BF8902D61AE1796, ::RPG::GameCore::TimeRewindState&))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_93BC2AF9C1DFDF7C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_70F996834AEFED46(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_70F996834AEFED46_OFFSET))(this, a1);
	}

	::System::Void Method_1_B153DBF66F2B9EE2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_B153DBF66F2B9EE2_OFFSET))(this, a1);
	}

	::System::Void Method_1_9EFA03D82DC53333(::RPG::GameCore::TimeRewindState a1, ::System::Single a2, ::System::Func_1<::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState, ::System::Single, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_9EFA03D82DC53333_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_696E70B96088889D(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_696E70B96088889D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_171A4D4799D0DC21(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_171A4D4799D0DC21_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_A8F6F688241E6DBC_OFFSET))(this);
	}

	::RPG::Client::EntityTimelineControlNode* Method_1_B8E9D6C7E52A56C2()
	{
		return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_B8E9D6C7E52A56C2_OFFSET))(this);
	}

	::System::Boolean Method_1_60A7C5B7A3EBEE47(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_60A7C5B7A3EBEE47_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_BEFE0208268549F4(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_BEFE0208268549F4_OFFSET))(this, a1, a2);
	}

	::RPG::Client::TimeRewindCheckSetStateResult Method_1_04BF15E8EBD90FC9(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::RPG::Client::TimeRewindCheckSetStateResult(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_04BF15E8EBD90FC9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_828EE97043D8DA9E(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_828EE97043D8DA9E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CC4DDEEB549C9978(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_CC4DDEEB549C9978_OFFSET))(this, a1);
	}

	::RPG::Client::EntityTimelineControlNode* Method_1_1DE61D52879171EA()
	{
		return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_1DE61D52879171EA_OFFSET))(this);
	}

	::RPG::Client::EntityTimelineControlNode* Method_1_B8E9D6C7E52A56C2_1()
	{
		return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_B8E9D6C7E52A56C2_1_OFFSET))(this);
	}

	::System::Void Method_1_08B7287B59325288(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_08B7287B59325288_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F6DDBB5EC464B28C(::RPG::Client::TimeRewindExtraMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeRewindExtraMode))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_F6DDBB5EC464B28C_OFFSET))(this, a1);
	}

	::RPG::Client::TimeRewindExtraMode get_RewindExtraMode()
	{
		return ((::RPG::Client::TimeRewindExtraMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_GET_REWINDEXTRAMODE_OFFSET))(this);
	}

	::System::Void set_RewindExtraMode(::RPG::Client::TimeRewindExtraMode value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeRewindExtraMode))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_SET_REWINDEXTRAMODE_OFFSET))(this, value);
	}

	::System::Void Method_1_12AE54057FEFD85C(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_12AE54057FEFD85C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_43A8DE046F4EECDF(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_43A8DE046F4EECDF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9E3751A8C9767297(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_9E3751A8C9767297_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4D84AE5BC2BB0D66(::System::Boolean& a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_4D84AE5BC2BB0D66_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Single Method_1_4385D631F08B20DB(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_4385D631F08B20DB_OFFSET))(this, a1);
	}

	::System::Single Method_1_6B47CDE3B34D5A39(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_6B47CDE3B34D5A39_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3B81DE967BCF7FA1(::System::Int32& a1, ::System::Int32& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_3B81DE967BCF7FA1_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_D3EA5C9E7ED3E40D()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_D3EA5C9E7ED3E40D_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single Method_1_1EDDD623459E1A71()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_1EDDD623459E1A71_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Single Method_1_7E243539CF85D7E9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_7E243539CF85D7E9_OFFSET))(this);
	}

	::RPG::Client::EntityTimelineControlNode* Method_1_B9738F207E8D6A89(::System::Int32 a1)
	{
		return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_B9738F207E8D6A89_OFFSET))(this, a1);
	}

	::RPG::Client::EntityTimelineControlNode* Method_1_9CD6E3BD279AA792(::System::Int32 a1)
	{
		return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_9CD6E3BD279AA792_OFFSET))(this, a1);
	}

	::RPG::Client::EntityTimelineControlNode* Method_1_7AC9D28A9D7B409B(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_7AC9D28A9D7B409B_OFFSET))(this, a1, a2);
	}

	::RPG::Client::TimeRewindNodeIndexInfo* Method_1_39A7DCE3B426791A(::System::Int32 a1)
	{
		return ((::RPG::Client::TimeRewindNodeIndexInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_39A7DCE3B426791A_OFFSET))(this, a1);
	}

	::RPG::Client::TimeRewindNodeIndexInfo* Method_1_E33A426D149D816E(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::RPG::Client::TimeRewindNodeIndexInfo*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_E33A426D149D816E_OFFSET))(this, a1, a2);
	}

	::RPG::Client::TimeRewindPathRuntime* Method_1_74F49F23504A427D(::System::Int32 a1)
	{
		return ((::RPG::Client::TimeRewindPathRuntime*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_74F49F23504A427D_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_32093F47AD5C9627(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_32093F47AD5C9627_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5197441EABF2542B(::RPG::Client::EntityTimelineControlNode* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EntityTimelineControlNode*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_5197441EABF2542B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_464B80C09A37526F_OFFSET))(this);
	}

	::System::Void Method_1_CF4B368BE9AEFB42(::RPG::Client::EntityTimelineControlNode* a1, ::System::Single a2, ::System::Collections::Generic::List_1<::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EntityTimelineControlNode*, ::System::Single, ::System::Collections::Generic::List_1<::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_CF4B368BE9AEFB42_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_00056B7706CBE75F(::System::Single a1, ::Il2CppArray<::RPG::GameCore::TimeRewindEntityEventConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::RPG::GameCore::TimeRewindEntityEventConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_00056B7706CBE75F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2DF0EFFDA2B6622E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_2DF0EFFDA2B6622E_OFFSET))(this, a1);
	}

	::System::Void Method_1_826E56CC1BDFDC08(::System::Single a1, ::Il2CppArray<::RPG::GameCore::TimeRewindEffConfig*>* a2, ::System::Single a3, ::System::Single a4, ::RPG::Client::EntityTimelineControlNode* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::RPG::GameCore::TimeRewindEffConfig*>*, ::System::Single, ::System::Single, ::RPG::Client::EntityTimelineControlNode*))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_826E56CC1BDFDC08_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_35CC232176269AD8(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_35CC232176269AD8_OFFSET))(this, a1);
	}

	::System::Void Method_1_76E39B41CA36D23E(::System::Single a1, ::Il2CppArray<::RPG::GameCore::TimeRewindAudioConfig*>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::RPG::GameCore::TimeRewindAudioConfig*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_76E39B41CA36D23E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_243675D19F8F3B66(::System::Single a1, ::Il2CppArray<::RPG::GameCore::TimeRewindCameraShakeConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::RPG::GameCore::TimeRewindCameraShakeConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_243675D19F8F3B66_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2ED6C3773AA1E488()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_2ED6C3773AA1E488_OFFSET))(this);
	}

	::System::Void Method_1_FF3C6D7263F5B9E0(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_FF3C6D7263F5B9E0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E44C4B1878F85417(::System::Int32 a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_E44C4B1878F85417_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_13E8B1F3F0042AA5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_13E8B1F3F0042AA5_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3E94568D5184024(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_A3E94568D5184024_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_1_4358F70A163BCEAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_4358F70A163BCEAE_OFFSET))(this);
	}

	::System::Void Method_1_E32BCC2C6A959814()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_E32BCC2C6A959814_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_FAF26456A956DC6C(::Class_0_16E4307DCC419505_519* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_519*))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_FAF26456A956DC6C_OFFSET))(this, a1);
	}

	::System::Void Method_1_DDBFD384E0179A2A(::System::Single a1, ::Il2CppArray<::Class_0_16E4307DCC419505_519*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::Class_0_16E4307DCC419505_519*>*))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_DDBFD384E0179A2A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_46E030E6F5465A66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_46E030E6F5465A66_OFFSET))(this);
	}

	::System::Void Method_1_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_A3C36642AA77866E_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_A36150C5DCC8409E_1_OFFSET))(this);
	}

	::System::Void Method_1_741837A0FB99F394(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_741837A0FB99F394_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_1_2DF54689451C0CF0(::RPG::GameCore::TimeRewindState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_2DF54689451C0CF0_OFFSET))(this, a1);
	}

	::System::Void Method_1_C1D3BDE2A17F5C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_C1D3BDE2A17F5C9D_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_3E7178C5ECF017DB_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDDD1B285B468C3C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_EDDD1B285B468C3C_OFFSET))(this, a1);
	}

	::System::Boolean get_IsInMotion()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_GET_ISINMOTION_OFFSET))(this);
	}

	::System::Void set_IsInMotion(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_SET_ISINMOTION_OFFSET))(this, value);
	}

	::System::Boolean get_IsInControl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_GET_ISINCONTROL_OFFSET))(this);
	}

	::System::Void set_IsInControl(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_SET_ISINCONTROL_OFFSET))(this, value);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_D64FD9A228A1C4E0_1_OFFSET))(this);
	}

	::RPG::GameCore::TimeRewindState Method_1_F10865B2F967F86A()
	{
		return ((::RPG::GameCore::TimeRewindState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_F10865B2F967F86A_OFFSET))(this);
	}

	::System::Single Method_1_68A2CA32DC720C44()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_METHOD_1_68A2CA32DC720C44_OFFSET))(this);
	}

	::System::Boolean get_EnableLoopRewind()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_GET_ENABLELOOPREWIND_OFFSET))(this);
	}

	::System::Void set_EnableLoopRewind(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_SET_ENABLELOOPREWIND_OFFSET))(this, value);
	}

	::System::Boolean get_LoopRewindSnapTargetRatio()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_GET_LOOPREWINDSNAPTARGETRATIO_OFFSET))(this);
	}

	::System::Void set_LoopRewindSnapTargetRatio(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_SET_LOOPREWINDSNAPTARGETRATIO_OFFSET))(this, value);
	}
};
