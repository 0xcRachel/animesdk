#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/ChessBoardState.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/Match3GameState.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/MatchThreeGameMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1257637E4CB15DE5_11;
class Class_1_1257637E4CB15DE5_18;
class Class_1_1257637E4CB15DE5_19;
class Class_1_867B6CE75953535A;
class Class_1_9931D0806556F3CF;
class Class_1_9ADD1D872350330F;
class Class_1_BCDD35C835BE896D;
class Class_2_536CC4186B095618;
class Class_3_1A9D32B2B1D681B8;
class Class_3_83FD4418E6E9E045;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeGame; }
namespace RPG::Client { class MatchThreeGameProp; }
namespace RPG::Client::LittleGame { class MatchThreeTimelineBattleField; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore::Match3 { class BirdPieceTypeWeightConfig; }
namespace RPG::GameCore::Match3 { class BombCreateConfig; }
namespace RPG::GameCore::Match3 { class Match3BirdSkillConfig; }
namespace RPG::GameCore::Match3 { class PieceConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DC55B9E766BF1C8D_GET_ISPVP1V1NETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0xA620E70)
#define CLASS_1_DC55B9E766BF1C8D_GET_ISPVPNETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0xA620E50)
#define CLASS_1_DC55B9E766BF1C8D_GET_ISPVPROYALENETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0xA620E90)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_06214874AEC5790B_1_OFFSET UNITYSDK_OFFSET(0xA620590)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_06214874AEC5790B_OFFSET UNITYSDK_OFFSET(0xA6202F0)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_0BDAEE707043B6C9_OFFSET UNITYSDK_OFFSET(0xA61C580)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xA61BB40)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0xA61BCF0)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_11D5322717FDFD9D_OFFSET UNITYSDK_OFFSET(0xA61E9B0)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xA61FF30)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0xA61CD20)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xA61C7C0)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0xA61B450)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_218124418542E081_OFFSET UNITYSDK_OFFSET(0xA61B210)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_28F7DEBE82551A1C_OFFSET UNITYSDK_OFFSET(0xA61E370)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_30C8E66800A11032_OFFSET UNITYSDK_OFFSET(0xA61E3F0)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_32E223354230F40F_OFFSET UNITYSDK_OFFSET(0xA61B640)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_40A10C74E0EFD4AD_OFFSET UNITYSDK_OFFSET(0xA61CC40)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_40E03D354D1ACC85_OFFSET UNITYSDK_OFFSET(0xA61E6A0)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xA61FBF0)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_4ADA9931134C2C14_OFFSET UNITYSDK_OFFSET(0xA61CD90)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_661B9239EC21817A_1_OFFSET UNITYSDK_OFFSET(0xA61C900)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_661B9239EC21817A_2_OFFSET UNITYSDK_OFFSET(0xA61CAA0)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_661B9239EC21817A_3_OFFSET UNITYSDK_OFFSET(0xA61CB70)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_661B9239EC21817A_OFFSET UNITYSDK_OFFSET(0xA61C830)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_72A8068D2AF9B485_OFFSET UNITYSDK_OFFSET(0xA620050)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0xA61CDF0)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_78A816EDF045E4C8_OFFSET UNITYSDK_OFFSET(0xA61D680)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_79D3E3D754041A2D_1_OFFSET UNITYSDK_OFFSET(0xA61D870)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_79D3E3D754041A2D_2_OFFSET UNITYSDK_OFFSET(0xA61DEF0)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_79D3E3D754041A2D_OFFSET UNITYSDK_OFFSET(0xA61CEB0)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_8BB948EFB8DB02D1_OFFSET UNITYSDK_OFFSET(0xA61C630)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_915FBC3734874058_OFFSET UNITYSDK_OFFSET(0xA61D430)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_924C62BE8591D2FD_OFFSET UNITYSDK_OFFSET(0xA61B7B0)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xA61EDF0)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0xA61FE80)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA61B830)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xA61FDA0)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_A9D32F2F0F364875_OFFSET UNITYSDK_OFFSET(0xA61C090)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_BDE3028FCE2D9EC3_OFFSET UNITYSDK_OFFSET(0xA61C9D0)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_C01E346F395C4E22_OFFSET UNITYSDK_OFFSET(0xA620830)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_C179563822B8D27A_OFFSET UNITYSDK_OFFSET(0xA620C60)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_C8110F9A5AB27813_OFFSET UNITYSDK_OFFSET(0xA61B760)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0xA61BEA0)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_CB145AC06225B366_OFFSET UNITYSDK_OFFSET(0xA620240)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xA61B360)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_D148B5D9B2EC21BB_1_OFFSET UNITYSDK_OFFSET(0xA61C280)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_D148B5D9B2EC21BB_2_OFFSET UNITYSDK_OFFSET(0xA61C400)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_D148B5D9B2EC21BB_OFFSET UNITYSDK_OFFSET(0xA61C100)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0xA6201A0)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_D308836DB54415C3_OFFSET UNITYSDK_OFFSET(0xA61D440)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_D43F965E849D0AEF_OFFSET UNITYSDK_OFFSET(0xA61BFB0)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_D5A96D9F1BD66E15_OFFSET UNITYSDK_OFFSET(0xA61C020)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_DE1C1F4DF5D06882_1_OFFSET UNITYSDK_OFFSET(0xA61DDF0)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_DE1C1F4DF5D06882_2_OFFSET UNITYSDK_OFFSET(0xA61E270)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0xA61D770)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0xA61C6E0)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0xA61E450)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xA61EEA0)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xA61ED60)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0xA61F960)
#define CLASS_1_DC55B9E766BF1C8D_METHOD_1_FAAD73FD69D33577_OFFSET UNITYSDK_OFFSET(0xA620A40)
#define CLASS_1_DC55B9E766BF1C8D_SET_ISPVP1V1NETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0xA620E80)
#define CLASS_1_DC55B9E766BF1C8D_SET_ISPVPNETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0xA620E60)
#define CLASS_1_DC55B9E766BF1C8D_SET_ISPVPROYALENETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0xA620EA0)
#define CLASS_1_DC55B9E766BF1C8D__CTOR_OFFSET UNITYSDK_OFFSET(0xA620EB0)

inline static constexpr unsigned int Class_1_DC55B9E766BF1C8D_TypeDefinitionIndex = 70316;

class Class_1_DC55B9E766BF1C8D : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_3 = 0x7; // 0x0
	// static const ::System::UInt32 Field_1_4 = 0x7; // 0x0
	::System::Action* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameProp*>* Field_1_12; // 0x18
	::RPG::Client::MatchThreeBoard* Field_1_17; // 0x20
	::RPG::GameCore::Match3::Match3BirdSkillConfig* Field_1_10; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::Match3::PieceConfig*>* Field_1_22; // 0x30
	::System::String* Field_1_14; // 0x38
	::System::Collections::Generic::List_1<::RPG::GameCore::Match3::BombCreateConfig*>* Field_1_23; // 0x40
	::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameProp*>* Field_1_13; // 0x48
	::Class_3_83FD4418E6E9E045* Field_1_21; // 0x50
	::Class_1_867B6CE75953535A* Field_1_19; // 0x58
	::RPG::GameCore::Match3::Match3BirdSkillConfig* Field_1_11; // 0x60
	::System::Action_1<::RPG::Client::LittleGame::Match3::Match3GameState>* Field_1_5; // 0x68
	::System::Action* Field_1_7; // 0x70
	::RPG::GameCore::GameEntity* Field_1_29; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::Match3::PieceConfig*>* Field_1_25; // 0x80
	::RPG::Client::LittleGame::MatchThreeTimelineBattleField* Field_1_28; // 0x88
	::Class_3_1A9D32B2B1D681B8* Field_1_20; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::Match3::PieceConfig*>* Field_1_24; // 0x98
	::System::UInt32 Field_1_9; // 0xA0
	::RPG::Client::LittleGame::Match3::MatchThreeGameMode Field_1_18; // 0xA4
	::System::UInt32 Field_1_16; // 0xA8
	::System::UInt32 Field_1_8; // 0xAC
	::System::UInt32 Field_1_15; // 0xB0
	::System::UInt32 Field_1_26; // 0xB4
	::System::Boolean _IsPvpNetworkDataReady_k__BackingField; // 0xB8
	::System::Boolean Field_1_27; // 0xB9
	::System::Boolean _IsPvpRoyaleNetworkDataReady_k__BackingField; // 0xBA
	::System::Boolean _IsPvp1v1NetworkDataReady_k__BackingField; // 0xBB

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_1_32E223354230F40F(::RPG::Client::MatchThreeBoard* a1, ::RPG::Client::LittleGame::MatchThreeTimelineBattleField* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBoard*, ::RPG::Client::LittleGame::MatchThreeTimelineBattleField*))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_32E223354230F40F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C8110F9A5AB27813()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_C8110F9A5AB27813_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_1_D43F965E849D0AEF(::Class_2_536CC4186B095618* a1, ::RPG::Client::LittleGame::Match3::Match3GameState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_536CC4186B095618*, ::RPG::Client::LittleGame::Match3::Match3GameState))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_D43F965E849D0AEF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D5A96D9F1BD66E15(::Class_2_536CC4186B095618* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_536CC4186B095618*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_D5A96D9F1BD66E15_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A9D32F2F0F364875(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_A9D32F2F0F364875_OFFSET))(this, a1);
	}

	::System::Void Method_1_D148B5D9B2EC21BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_D148B5D9B2EC21BB_OFFSET))(this);
	}

	::System::Void Method_1_D148B5D9B2EC21BB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_D148B5D9B2EC21BB_1_OFFSET))(this);
	}

	::System::Void Method_1_D148B5D9B2EC21BB_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_D148B5D9B2EC21BB_2_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Match3::Match3GameState Method_1_0BDAEE707043B6C9()
	{
		return ((::RPG::Client::LittleGame::Match3::Match3GameState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_0BDAEE707043B6C9_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Match3::ChessBoardState Method_1_8BB948EFB8DB02D1()
	{
		return ((::RPG::Client::LittleGame::Match3::ChessBoardState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_8BB948EFB8DB02D1_OFFSET))(this);
	}

	::System::Boolean Method_1_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_DFF98536D8B4074F_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::Class_1_BCDD35C835BE896D* Method_1_661B9239EC21817A()
	{
		return ((::Class_1_BCDD35C835BE896D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_661B9239EC21817A_OFFSET))(this);
	}

	::Class_1_9931D0806556F3CF* Method_1_661B9239EC21817A_1()
	{
		return ((::Class_1_9931D0806556F3CF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_661B9239EC21817A_1_OFFSET))(this);
	}

	::Class_1_1257637E4CB15DE5_11* Method_1_BDE3028FCE2D9EC3()
	{
		return ((::Class_1_1257637E4CB15DE5_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_BDE3028FCE2D9EC3_OFFSET))(this);
	}

	::Class_1_1257637E4CB15DE5_18* Method_1_661B9239EC21817A_2()
	{
		return ((::Class_1_1257637E4CB15DE5_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_661B9239EC21817A_2_OFFSET))(this);
	}

	::Class_1_1257637E4CB15DE5_19* Method_1_661B9239EC21817A_3()
	{
		return ((::Class_1_1257637E4CB15DE5_19*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_661B9239EC21817A_3_OFFSET))(this);
	}

	::System::UInt64 Method_1_40A10C74E0EFD4AD()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_40A10C74E0EFD4AD_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Method_1_4ADA9931134C2C14()
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_4ADA9931134C2C14_OFFSET))(this);
	}

	::System::Void Method_1_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_1_79D3E3D754041A2D(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_79D3E3D754041A2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DE1C1F4DF5D06882(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_DE1C1F4DF5D06882_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_79D3E3D754041A2D_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_79D3E3D754041A2D_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DE1C1F4DF5D06882_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_DE1C1F4DF5D06882_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_79D3E3D754041A2D_2(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_79D3E3D754041A2D_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DE1C1F4DF5D06882_2(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_DE1C1F4DF5D06882_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_28F7DEBE82551A1C(::RPG::Client::LittleGame::Match3::ChessBoardState a1, ::RPG::Client::LittleGame::Match3::ChessBoardState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::ChessBoardState, ::RPG::Client::LittleGame::Match3::ChessBoardState))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_28F7DEBE82551A1C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30C8E66800A11032(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_30C8E66800A11032_OFFSET))(this, a1);
	}

	::System::Void Method_1_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_E21AC6EE08DC160A_OFFSET))(this);
	}

	::System::Void Method_1_40E03D354D1ACC85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_40E03D354D1ACC85_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_1_11D5322717FDFD9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_11D5322717FDFD9D_OFFSET))(this);
	}

	::Class_2_536CC4186B095618* Method_1_CB145AC06225B366(::System::String* a1)
	{
		return ((::Class_2_536CC4186B095618*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_CB145AC06225B366_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_C8E2469222842786_OFFSET))(this);
	}

	::System::Void Method_1_924C62BE8591D2FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_924C62BE8591D2FD_OFFSET))(this);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_D308836DB54415C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_D308836DB54415C3_OFFSET))(this);
	}

	::System::Void Method_1_78A816EDF045E4C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_78A816EDF045E4C8_OFFSET))(this);
	}

	::System::Void Method_1_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_D14D1C669EDC2D6B_OFFSET))(this);
	}

	::RPG::PoolDictionary_2<::System::UInt32, ::Class_1_9ADD1D872350330F*>* Method_1_FAAD73FD69D33577(::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameProp*>* a1)
	{
		return ((::RPG::PoolDictionary_2<::System::UInt32, ::Class_1_9ADD1D872350330F*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameProp*>*))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_FAAD73FD69D33577_OFFSET))(this, a1);
	}

	::RPG::PoolList_1<::System::UInt32>* Method_1_C179563822B8D27A(::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameProp*>* a1)
	{
		return ((::RPG::PoolList_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameProp*>*))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_C179563822B8D27A_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Method_1_06214874AEC5790B(::RPG::GameCore::Match3::Match3BirdSkillConfig* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::RPG::GameCore::Match3::Match3BirdSkillConfig*))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_06214874AEC5790B_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Method_1_06214874AEC5790B_1(::RPG::GameCore::Match3::Match3BirdSkillConfig* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::RPG::GameCore::Match3::Match3BirdSkillConfig*))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_06214874AEC5790B_1_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*>* Method_1_C01E346F395C4E22(::RPG::GameCore::Match3::Match3BirdSkillConfig* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*>*(*)(::RPG::GameCore::Match3::Match3BirdSkillConfig*))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_C01E346F395C4E22_OFFSET))(a1);
	}

	::System::Void Method_1_72A8068D2AF9B485()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_72A8068D2AF9B485_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_9681042564541CD6_2_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Boolean get_IsPvpNetworkDataReady()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_GET_ISPVPNETWORKDATAREADY_OFFSET))(this);
	}

	::System::Void set_IsPvpNetworkDataReady(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_SET_ISPVPNETWORKDATAREADY_OFFSET))(this, value);
	}

	::System::Boolean get_IsPvp1v1NetworkDataReady()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_GET_ISPVP1V1NETWORKDATAREADY_OFFSET))(this);
	}

	::System::Void set_IsPvp1v1NetworkDataReady(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_SET_ISPVP1V1NETWORKDATAREADY_OFFSET))(this, value);
	}

	::System::Boolean get_IsPvpRoyaleNetworkDataReady()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_GET_ISPVPROYALENETWORKDATAREADY_OFFSET))(this);
	}

	::System::Void set_IsPvpRoyaleNetworkDataReady(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_SET_ISPVPROYALENETWORKDATAREADY_OFFSET))(this, value);
	}

	::RPG::Client::MatchThreeGame* Method_1_915FBC3734874058()
	{
		return ((::RPG::Client::MatchThreeGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D_METHOD_1_915FBC3734874058_OFFSET))(this);
	}
};
