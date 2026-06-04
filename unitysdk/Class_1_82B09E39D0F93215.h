#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_12ABE890CAA92AB9;
class Class_1_2AEC7C4C0F203579;
class Class_1_9015B34004B876E5;
class Class_1_9015B34004B876E5_1;
class Class_1_AE4553DBAC72BB2D;
class Class_1_D1E0AD3915BCCF29_6;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_82B09E39D0F93215_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x134D9060)
#define CLASS_1_82B09E39D0F93215_METHOD_1_546CAA3EBBF2E065_OFFSET UNITYSDK_OFFSET(0x134D90D0)
#define CLASS_1_82B09E39D0F93215_METHOD_1_A85C48C9FFC0CF55_OFFSET UNITYSDK_OFFSET(0x134D8B30)
#define CLASS_1_82B09E39D0F93215_METHOD_1_F6D7793A0810CFC7_OFFSET UNITYSDK_OFFSET(0x134D8D70)
#define CLASS_1_82B09E39D0F93215__CTOR_OFFSET UNITYSDK_OFFSET(0x134D9E30)

inline static constexpr unsigned int Class_1_82B09E39D0F93215_TypeDefinitionIndex = 52556;

class Class_1_82B09E39D0F93215 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_AE4553DBAC72BB2D*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::LineUpCharacter*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightAvatarData*>* Field_1_3; // 0x28
	::Class_1_12ABE890CAA92AB9* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* Field_1_5; // 0x38
	::System::Collections::Generic::List_1<::Class_1_D1E0AD3915BCCF29_6*>* Field_1_6; // 0x40
	::System::Collections::Generic::List_1<::Class_1_9015B34004B876E5_1*>* Field_1_7; // 0x48
	::System::Collections::Generic::List_1<::Class_1_9015B34004B876E5*>* Field_1_8; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* Field_1_9; // 0x58
	::Class_1_2AEC7C4C0F203579* Field_1_10; // 0x60
	::System::UInt32 Field_1_11; // 0x68
	::System::UInt32 Field_1_12; // 0x6C
	::System::Boolean Field_1_13; // 0x70
	::System::UInt32 Field_1_14; // 0x74
	::System::UInt32 Field_1_15; // 0x78
	::System::UInt32 Field_1_16; // 0x7C
	::System::UInt32 Field_1_17; // 0x80
	::System::UInt32 Field_1_18; // 0x84
	::System::UInt32 Field_1_19; // 0x88
	::System::UInt32 Field_1_20; // 0x8C
	::System::UInt32 Field_1_21; // 0x90
	::System::UInt32 Field_1_22; // 0x94
	::RPG::GameCore::FixPoint Field_1_23; // 0x98
	::System::UInt32 Field_1_24; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82B09E39D0F93215__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* Method_1_A85C48C9FFC0CF55()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82B09E39D0F93215_METHOD_1_A85C48C9FFC0CF55_OFFSET))(this);
	}

	::RPG::PoolList_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* Method_1_F6D7793A0810CFC7()
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::BattleGridFightTeamTraitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82B09E39D0F93215_METHOD_1_F6D7793A0810CFC7_OFFSET))(this);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82B09E39D0F93215_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}

	::Class_1_82B09E39D0F93215* Method_1_546CAA3EBBF2E065()
	{
		return ((::Class_1_82B09E39D0F93215*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82B09E39D0F93215_METHOD_1_546CAA3EBBF2E065_OFFSET))(this);
	}
};
