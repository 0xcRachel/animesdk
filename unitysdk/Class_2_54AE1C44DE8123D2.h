#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameCharacterMoveDirection.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelFloor.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGamePlayMode.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameCharacterMovementConfig.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameCharacterVisionConfig.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCell.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCellDrop.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCellSaver.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCellTrigger.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelGroup.h"
#include "unitysdk/Struct_2_882A7D00DFE0F598.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_0_16E4307DCC419505_168;
class Class_1_0C69BC2A626C1DF1;
class Class_1_1B491017037D3E0C;
class Class_1_328908A2B3683652;
class Class_1_491EB966F6E7F361;
class Class_1_65ECD476422B13F6;
class Class_1_6CBA5AB92E154556;
class Class_1_B470ECE8B4D9EC2E;
class Class_1_BDA2C084533125A6;
class Class_1_BF18D4907D184EDF;
class Class_1_F1E790FCE2711921;
class Class_1_F31115D5F56C5F10;
namespace RPG::Client::LittleGame { class TimelineControlGameCharacterMovementPath; }
namespace RPG::Client::LittleGame { class TimelineControlGameWorldLevelGrid; }
namespace RPG::Client::LittleGame { class TimelineControlGameWorld_LevelGroupAction; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_54AE1C44DE8123D2_METHOD_2_0BB9C416002C1CDC_OFFSET UNITYSDK_OFFSET(0x16130E60)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_10_OFFSET UNITYSDK_OFFSET(0x16132C90)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_11_OFFSET UNITYSDK_OFFSET(0x16133120)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_12_OFFSET UNITYSDK_OFFSET(0x16133240)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_13_OFFSET UNITYSDK_OFFSET(0x16133360)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_14_OFFSET UNITYSDK_OFFSET(0x16133480)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_15_OFFSET UNITYSDK_OFFSET(0x161335A0)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_16_OFFSET UNITYSDK_OFFSET(0x161336C0)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_17_OFFSET UNITYSDK_OFFSET(0x161337E0)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_18_OFFSET UNITYSDK_OFFSET(0x16133900)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_19_OFFSET UNITYSDK_OFFSET(0x16133A20)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x161308C0)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_20_OFFSET UNITYSDK_OFFSET(0x16133B40)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_21_OFFSET UNITYSDK_OFFSET(0x16133C60)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_2_OFFSET UNITYSDK_OFFSET(0x16130C90)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_3_OFFSET UNITYSDK_OFFSET(0x161310C0)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_4_OFFSET UNITYSDK_OFFSET(0x16131670)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_5_OFFSET UNITYSDK_OFFSET(0x16131C00)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_6_OFFSET UNITYSDK_OFFSET(0x16131F10)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_7_OFFSET UNITYSDK_OFFSET(0x16132240)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_8_OFFSET UNITYSDK_OFFSET(0x16132610)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_9_OFFSET UNITYSDK_OFFSET(0x16132960)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x16130490)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_1BD53E838BB1731A_OFFSET UNITYSDK_OFFSET(0x161322B0)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_330F3AADF4C9F5F4_OFFSET UNITYSDK_OFFSET(0x161318F0)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_33DFFB49B198AE56_OFFSET UNITYSDK_OFFSET(0x16130D00)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_410F4380E4F80261_OFFSET UNITYSDK_OFFSET(0x16132680)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_4533BA1E9954921B_OFFSET UNITYSDK_OFFSET(0x16132770)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_46694A8CF04D5F4B_OFFSET UNITYSDK_OFFSET(0x16130930)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_69D7F7C9B1B34F81_OFFSET UNITYSDK_OFFSET(0x16131F80)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_6CC0AD58B2BDA4A1_OFFSET UNITYSDK_OFFSET(0x161329D0)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_6F91B863FD5BF72A_OFFSET UNITYSDK_OFFSET(0x16132AB0)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_7B2B800030A84302_OFFSET UNITYSDK_OFFSET(0x161316E0)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_817633850ACDC3FB_OFFSET UNITYSDK_OFFSET(0x16132E90)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_8DA922E2B62C50C1_OFFSET UNITYSDK_OFFSET(0x16131350)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_9E3AA588BAFC60BB_OFFSET UNITYSDK_OFFSET(0x16132060)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_B5C634D856021058_OFFSET UNITYSDK_OFFSET(0x16130500)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_10_OFFSET UNITYSDK_OFFSET(0x16132BE0)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_11_OFFSET UNITYSDK_OFFSET(0x16133070)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_12_OFFSET UNITYSDK_OFFSET(0x16133190)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_13_OFFSET UNITYSDK_OFFSET(0x161332B0)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_14_OFFSET UNITYSDK_OFFSET(0x161333D0)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_15_OFFSET UNITYSDK_OFFSET(0x161334F0)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_16_OFFSET UNITYSDK_OFFSET(0x16133610)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_17_OFFSET UNITYSDK_OFFSET(0x16133730)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_18_OFFSET UNITYSDK_OFFSET(0x16133850)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_19_OFFSET UNITYSDK_OFFSET(0x16133970)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_1_OFFSET UNITYSDK_OFFSET(0x16130810)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_20_OFFSET UNITYSDK_OFFSET(0x16133A90)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_21_OFFSET UNITYSDK_OFFSET(0x16133BB0)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_2_OFFSET UNITYSDK_OFFSET(0x16130BE0)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_3_OFFSET UNITYSDK_OFFSET(0x16131010)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_4_OFFSET UNITYSDK_OFFSET(0x161315C0)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_5_OFFSET UNITYSDK_OFFSET(0x16131B50)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_6_OFFSET UNITYSDK_OFFSET(0x16131E60)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_7_OFFSET UNITYSDK_OFFSET(0x16132190)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_8_OFFSET UNITYSDK_OFFSET(0x16132560)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_9_OFFSET UNITYSDK_OFFSET(0x161328B0)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x161303E0)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_BAD5B927D9605856_OFFSET UNITYSDK_OFFSET(0x16131C70)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_D20F759FC2EC43FB_10_OFFSET UNITYSDK_OFFSET(0x16133020)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_D20F759FC2EC43FB_1_OFFSET UNITYSDK_OFFSET(0x16130B90)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_D20F759FC2EC43FB_2_OFFSET UNITYSDK_OFFSET(0x16130FC0)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_D20F759FC2EC43FB_3_OFFSET UNITYSDK_OFFSET(0x16131570)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_D20F759FC2EC43FB_4_OFFSET UNITYSDK_OFFSET(0x16131B00)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_D20F759FC2EC43FB_5_OFFSET UNITYSDK_OFFSET(0x16131E10)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_D20F759FC2EC43FB_6_OFFSET UNITYSDK_OFFSET(0x16132140)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_D20F759FC2EC43FB_7_OFFSET UNITYSDK_OFFSET(0x16132510)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_D20F759FC2EC43FB_8_OFFSET UNITYSDK_OFFSET(0x16132860)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_D20F759FC2EC43FB_9_OFFSET UNITYSDK_OFFSET(0x16132B90)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_D20F759FC2EC43FB_OFFSET UNITYSDK_OFFSET(0x161307C0)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_E15604CECE0C4E6C_OFFSET UNITYSDK_OFFSET(0x16132D00)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_E4546CBF0CA598D5_OFFSET UNITYSDK_OFFSET(0x16131D40)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_F0E61E82AD25CB18_OFFSET UNITYSDK_OFFSET(0x16131130)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_F32DB6D11404B568_OFFSET UNITYSDK_OFFSET(0x16130660)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_F8056532B803513F_OFFSET UNITYSDK_OFFSET(0x161323E0)
#define CLASS_2_54AE1C44DE8123D2_METHOD_2_FC48310C0E6EB6AC_OFFSET UNITYSDK_OFFSET(0x16130A60)
#define CLASS_2_54AE1C44DE8123D2__CTOR_OFFSET UNITYSDK_OFFSET(0x16133CD0)

inline static constexpr unsigned int Class_2_54AE1C44DE8123D2_TypeDefinitionIndex = 31675;

class Class_2_54AE1C44DE8123D2 : public ::Entitas::Entity
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2__CTOR_OFFSET))(this);
	}

	::Class_1_F1E790FCE2711921* Method_2_B64C60973842FE45()
	{
		return ((::Class_1_F1E790FCE2711921*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_B5C634D856021058(::UnityEngine::Transform* a1, ::UnityEngine::Vector3Int a2, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a3, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig a4, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath* a5, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*>*))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_B5C634D856021058_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_F32DB6D11404B568(::UnityEngine::Transform* a1, ::UnityEngine::Vector3Int a2, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a3, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig a4, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath* a5, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*>*))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_F32DB6D11404B568_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_D20F759FC2EC43FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_D20F759FC2EC43FB_OFFSET))(this);
	}

	::Class_1_491EB966F6E7F361* Method_2_B64C60973842FE45_1()
	{
		return ((::Class_1_491EB966F6E7F361*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_1_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Void Method_2_46694A8CF04D5F4B(::UnityEngine::Vector3 a1, ::System::Single a2, ::RPG::Client::LittleGame::TimelineControlGameCharacterVisionConfig a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::RPG::Client::LittleGame::TimelineControlGameCharacterVisionConfig))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_46694A8CF04D5F4B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_FC48310C0E6EB6AC(::UnityEngine::Vector3 a1, ::System::Single a2, ::RPG::Client::LittleGame::TimelineControlGameCharacterVisionConfig a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::RPG::Client::LittleGame::TimelineControlGameCharacterVisionConfig))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_FC48310C0E6EB6AC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_D20F759FC2EC43FB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_D20F759FC2EC43FB_1_OFFSET))(this);
	}

	::Class_1_328908A2B3683652* Method_2_B64C60973842FE45_2()
	{
		return ((::Class_1_328908A2B3683652*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_2_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_2_OFFSET))(this);
	}

	::System::Void Method_2_33DFFB49B198AE56(::UnityEngine::Vector3Int a1, ::Class_2_54AE1C44DE8123D2* a2, ::UnityEngine::Transform* a3, ::System::Nullable_1<::Struct_2_882A7D00DFE0F598> a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::Class_2_54AE1C44DE8123D2*, ::UnityEngine::Transform*, ::System::Nullable_1<::Struct_2_882A7D00DFE0F598>))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_33DFFB49B198AE56_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_0BB9C416002C1CDC(::UnityEngine::Vector3Int a1, ::Class_2_54AE1C44DE8123D2* a2, ::UnityEngine::Transform* a3, ::System::Nullable_1<::Struct_2_882A7D00DFE0F598> a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::Class_2_54AE1C44DE8123D2*, ::UnityEngine::Transform*, ::System::Nullable_1<::Struct_2_882A7D00DFE0F598>))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_0BB9C416002C1CDC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_D20F759FC2EC43FB_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_D20F759FC2EC43FB_2_OFFSET))(this);
	}

	::Class_1_B470ECE8B4D9EC2E* Method_2_B64C60973842FE45_3()
	{
		return ((::Class_1_B470ECE8B4D9EC2E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_3_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_3_OFFSET))(this);
	}

	::System::Void Method_2_F0E61E82AD25CB18(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::RPG::Client::LittleGame::ETimelineControlGamePlayMode a8, ::Class_0_16E4307DCC419505_168* a9, ::System::Single a10)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LittleGame::ETimelineControlGamePlayMode, ::Class_0_16E4307DCC419505_168*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_F0E61E82AD25CB18_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_2_8DA922E2B62C50C1(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::RPG::Client::LittleGame::ETimelineControlGamePlayMode a8, ::Class_0_16E4307DCC419505_168* a9, ::System::Single a10)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LittleGame::ETimelineControlGamePlayMode, ::Class_0_16E4307DCC419505_168*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_8DA922E2B62C50C1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_2_D20F759FC2EC43FB_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_D20F759FC2EC43FB_3_OFFSET))(this);
	}

	::Class_1_F31115D5F56C5F10* Method_2_B64C60973842FE45_4()
	{
		return ((::Class_1_F31115D5F56C5F10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_4_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_4_OFFSET))(this);
	}

	::System::Void Method_2_7B2B800030A84302(::Class_1_65ECD476422B13F6* a1, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCell a2, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloor a3, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a4, ::UnityEngine::Vector3Int a5, ::UnityEngine::Vector3Int a6, ::System::Single a7, ::UnityEngine::Vector2Int a8)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_65ECD476422B13F6*, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCell, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloor, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation, ::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int, ::System::Single, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_7B2B800030A84302_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_330F3AADF4C9F5F4(::Class_1_65ECD476422B13F6* a1, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCell a2, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloor a3, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a4, ::UnityEngine::Vector3Int a5, ::UnityEngine::Vector3Int a6, ::System::Single a7, ::UnityEngine::Vector2Int a8)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_65ECD476422B13F6*, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCell, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloor, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation, ::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int, ::System::Single, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_330F3AADF4C9F5F4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_D20F759FC2EC43FB_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_D20F759FC2EC43FB_4_OFFSET))(this);
	}

	::Class_1_1B491017037D3E0C* Method_2_B64C60973842FE45_5()
	{
		return ((::Class_1_1B491017037D3E0C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_5_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_5_OFFSET))(this);
	}

	::System::Void Method_2_BAD5B927D9605856(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellDrop a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellDrop))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_BAD5B927D9605856_OFFSET))(this, a1);
	}

	::System::Void Method_2_E4546CBF0CA598D5(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellDrop a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellDrop))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_E4546CBF0CA598D5_OFFSET))(this, a1);
	}

	::System::Void Method_2_D20F759FC2EC43FB_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_D20F759FC2EC43FB_5_OFFSET))(this);
	}

	::Class_1_BF18D4907D184EDF* Method_2_B64C60973842FE45_6()
	{
		return ((::Class_1_BF18D4907D184EDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_6_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_6_OFFSET))(this);
	}

	::System::Void Method_2_69D7F7C9B1B34F81(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellSaver a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellSaver, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_69D7F7C9B1B34F81_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9E3AA588BAFC60BB(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellSaver a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellSaver, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_9E3AA588BAFC60BB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D20F759FC2EC43FB_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_D20F759FC2EC43FB_6_OFFSET))(this);
	}

	::Class_1_6CBA5AB92E154556* Method_2_B64C60973842FE45_7()
	{
		return ((::Class_1_6CBA5AB92E154556*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_7_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_7_OFFSET))(this);
	}

	::System::Void Method_2_1BD53E838BB1731A(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellTrigger a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellTrigger, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_1BD53E838BB1731A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F8056532B803513F(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellTrigger a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellTrigger, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_F8056532B803513F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_D20F759FC2EC43FB_7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_D20F759FC2EC43FB_7_OFFSET))(this);
	}

	::Class_1_0C69BC2A626C1DF1* Method_2_B64C60973842FE45_8()
	{
		return ((::Class_1_0C69BC2A626C1DF1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_8_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_8_OFFSET))(this);
	}

	::System::Void Method_2_410F4380E4F80261(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>* a1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>*))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_410F4380E4F80261_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4533BA1E9954921B(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>* a1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>*))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_4533BA1E9954921B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D20F759FC2EC43FB_8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_D20F759FC2EC43FB_8_OFFSET))(this);
	}

	::Class_1_BDA2C084533125A6* Method_2_B64C60973842FE45_9()
	{
		return ((::Class_1_BDA2C084533125A6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_9_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_9_OFFSET))(this);
	}

	::System::Void Method_2_6CC0AD58B2BDA4A1(::Il2CppArray<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*>*))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_6CC0AD58B2BDA4A1_OFFSET))(this, a1);
	}

	::System::Void Method_2_6F91B863FD5BF72A(::Il2CppArray<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*>*))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_6F91B863FD5BF72A_OFFSET))(this, a1);
	}

	::System::Void Method_2_D20F759FC2EC43FB_9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_D20F759FC2EC43FB_9_OFFSET))(this);
	}

	::Class_1_65ECD476422B13F6* Method_2_B64C60973842FE45_10()
	{
		return ((::Class_1_65ECD476422B13F6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_10_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_10()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_10_OFFSET))(this);
	}

	::System::Void Method_2_E15604CECE0C4E6C(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a2, ::UnityEngine::Vector3Int a3, ::System::Boolean a4, ::Il2CppArray<::Class_2_54AE1C44DE8123D2*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation, ::UnityEngine::Vector3Int, ::System::Boolean, ::Il2CppArray<::Class_2_54AE1C44DE8123D2*>*))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_E15604CECE0C4E6C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_817633850ACDC3FB(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a2, ::UnityEngine::Vector3Int a3, ::System::Boolean a4, ::Il2CppArray<::Class_2_54AE1C44DE8123D2*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation, ::UnityEngine::Vector3Int, ::System::Boolean, ::Il2CppArray<::Class_2_54AE1C44DE8123D2*>*))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_817633850ACDC3FB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_D20F759FC2EC43FB_10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_D20F759FC2EC43FB_10_OFFSET))(this);
	}

	::Class_1_F1E790FCE2711921* Method_2_B64C60973842FE45_11()
	{
		return ((::Class_1_F1E790FCE2711921*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_11_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_11()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_11_OFFSET))(this);
	}

	::Class_1_491EB966F6E7F361* Method_2_B64C60973842FE45_12()
	{
		return ((::Class_1_491EB966F6E7F361*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_12_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_12()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_12_OFFSET))(this);
	}

	::Class_1_328908A2B3683652* Method_2_B64C60973842FE45_13()
	{
		return ((::Class_1_328908A2B3683652*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_13_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_13()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_13_OFFSET))(this);
	}

	::Class_1_B470ECE8B4D9EC2E* Method_2_B64C60973842FE45_14()
	{
		return ((::Class_1_B470ECE8B4D9EC2E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_14_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_14()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_14_OFFSET))(this);
	}

	::Class_1_F31115D5F56C5F10* Method_2_B64C60973842FE45_15()
	{
		return ((::Class_1_F31115D5F56C5F10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_15_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_15()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_15_OFFSET))(this);
	}

	::Class_1_1B491017037D3E0C* Method_2_B64C60973842FE45_16()
	{
		return ((::Class_1_1B491017037D3E0C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_16_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_16()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_16_OFFSET))(this);
	}

	::Class_1_BF18D4907D184EDF* Method_2_B64C60973842FE45_17()
	{
		return ((::Class_1_BF18D4907D184EDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_17_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_17()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_17_OFFSET))(this);
	}

	::Class_1_6CBA5AB92E154556* Method_2_B64C60973842FE45_18()
	{
		return ((::Class_1_6CBA5AB92E154556*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_18_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_18()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_18_OFFSET))(this);
	}

	::Class_1_0C69BC2A626C1DF1* Method_2_B64C60973842FE45_19()
	{
		return ((::Class_1_0C69BC2A626C1DF1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_19_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_19()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_19_OFFSET))(this);
	}

	::Class_1_65ECD476422B13F6* Method_2_B64C60973842FE45_20()
	{
		return ((::Class_1_65ECD476422B13F6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_20_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_20()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_20_OFFSET))(this);
	}

	::Class_1_BDA2C084533125A6* Method_2_B64C60973842FE45_21()
	{
		return ((::Class_1_BDA2C084533125A6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_B64C60973842FE45_21_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_21()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54AE1C44DE8123D2_METHOD_2_1808E1CF7A125519_21_OFFSET))(this);
	}
};
