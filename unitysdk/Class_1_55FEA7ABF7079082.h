#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/RPG/GameCore/Match3/StyleGenerateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_867B6CE75953535A;
class Class_3_1A9D32B2B1D681B8;
namespace RPG::GameCore::Match3 { class BirdStyleWeightConfig; }
namespace RPG::GameCore::Match3 { class Match3ActionBase; }
namespace RPG::GameCore::Match3 { class Match3ChessBoardGridInfo; }
namespace RPG::GameCore::Match3 { class Match3ChessBoardTemplate; }
namespace RPG::GameCore::Match3 { class Match3ConditionBase; }
namespace RPG::GameCore::Match3 { class RandomChangeBombToMultiStyleAction; }
namespace RPG::GameCore::Match3 { class RandomChangeFruitToBlackFogAction; }
namespace RPG::GameCore::Match3 { class RandomChangeFruitToLineBombAction; }
namespace RPG::GameCore::Match3 { class RandomFreezeBombAction; }
namespace RPG::GameCore::Match3 { class SetEmojiReplyPatternAction; }
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_55FEA7ABF7079082_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1616D970)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_030C234A6E120A91_OFFSET UNITYSDK_OFFSET(0x1616FFB0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_0BD24E09D6D088F0_OFFSET UNITYSDK_OFFSET(0x16170C90)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x1616E120)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_1C6AD2DA62FB6EB1_OFFSET UNITYSDK_OFFSET(0x1616DE80)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0x1616E300)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_2757AE2486125A62_OFFSET UNITYSDK_OFFSET(0x1616FA50)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_2D0EF4C8B528FC1E_OFFSET UNITYSDK_OFFSET(0x1616F9F0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_38D99FF7D29DB041_OFFSET UNITYSDK_OFFSET(0x1616F8C0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_4A01ED88A46A35A8_OFFSET UNITYSDK_OFFSET(0x16172C10)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_543F8938BA868A0C_OFFSET UNITYSDK_OFFSET(0x1616DFA0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_713479C152EC121D_OFFSET UNITYSDK_OFFSET(0x16171E50)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_714C578DA15C5453_OFFSET UNITYSDK_OFFSET(0x16173620)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_7CC30AC1293C219D_OFFSET UNITYSDK_OFFSET(0x1616FC70)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_865E5B58FDDFEA9D_OFFSET UNITYSDK_OFFSET(0x16170C00)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0x1616E5A0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_91694C3617763047_OFFSET UNITYSDK_OFFSET(0x1616E640)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_9B1233F13230C9F5_OFFSET UNITYSDK_OFFSET(0x1616F010)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_9C7E046DF6F24AF1_OFFSET UNITYSDK_OFFSET(0x16171680)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_9CE44A1125649C26_OFFSET UNITYSDK_OFFSET(0x16172560)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1616E370)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_A5C2033D676A7828_OFFSET UNITYSDK_OFFSET(0x16172EB0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_A6483272094C4057_OFFSET UNITYSDK_OFFSET(0x16173880)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_CE944E12A64032F6_OFFSET UNITYSDK_OFFSET(0x1616FCD0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_CF4662834E5ABD8A_OFFSET UNITYSDK_OFFSET(0x16172FC0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_D8A435EF27CA44AA_OFFSET UNITYSDK_OFFSET(0x161703D0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_DF3A247817A8777D_OFFSET UNITYSDK_OFFSET(0x16173070)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_EB4B7D497A198F4C_1_OFFSET UNITYSDK_OFFSET(0x1616E510)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_EB4B7D497A198F4C_OFFSET UNITYSDK_OFFSET(0x1616E480)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_EE25B4DE52676DE8_OFFSET UNITYSDK_OFFSET(0x16170500)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_F2E34E8DE2DDE7A9_OFFSET UNITYSDK_OFFSET(0x16173710)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_F44FB68367AA4B58_OFFSET UNITYSDK_OFFSET(0x16173350)
#define CLASS_1_55FEA7ABF7079082__CTOR_OFFSET UNITYSDK_OFFSET(0x1616D8F0)
#define CLASS_1_55FEA7ABF7079082___APPLYRANDOMCHANGEBOMBTOMULTISTYLE_B__31_0_OFFSET UNITYSDK_OFFSET(0x16173EF0)
#define CLASS_1_55FEA7ABF7079082___APPLYRANDOMCHANGEFRUITTOBLACKFOG_B__33_0_OFFSET UNITYSDK_OFFSET(0x16173F60)
#define CLASS_1_55FEA7ABF7079082___APPLYRANDOMCHANGEFRUITTOLINEBOMB_B__32_0_OFFSET UNITYSDK_OFFSET(0x16173F10)

inline static constexpr unsigned int Class_1_55FEA7ABF7079082_TypeDefinitionIndex = 31866;

class Class_1_55FEA7ABF7079082 : public ::System::Object
{
public:
	::System::Random* Field_1_0; // 0x10
	::Class_3_1A9D32B2B1D681B8* Field_1_2; // 0x18
	::Class_1_867B6CE75953535A* Field_1_1; // 0x20

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_1A9D32B2B1D681B8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_1A9D32B2B1D681B8*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_EB4B7D497A198F4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_EB4B7D497A198F4C_OFFSET))(this);
	}

	::System::Void Method_1_543F8938BA868A0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_543F8938BA868A0C_OFFSET))(this);
	}

	::System::Void Method_1_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_1_1C6AD2DA62FB6EB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_1C6AD2DA62FB6EB1_OFFSET))(this);
	}

	::System::Void Method_1_228E3444D290BEE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_228E3444D290BEE7_OFFSET))(this);
	}

	::System::Void Method_1_EB4B7D497A198F4C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_EB4B7D497A198F4C_1_OFFSET))(this);
	}

	::System::Boolean Method_1_91694C3617763047(::RPG::GameCore::Match3::Match3ConditionBase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::Match3::Match3ConditionBase*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_91694C3617763047_OFFSET))(this, a1);
	}

	::System::Void Method_1_9B1233F13230C9F5(::RPG::GameCore::Match3::Match3ActionBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::Match3ActionBase*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_9B1233F13230C9F5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4A01ED88A46A35A8(::RPG::GameCore::Match3::Match3ActionBase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::Match3::Match3ActionBase*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_4A01ED88A46A35A8_OFFSET))(this, a1);
	}

	::System::Void Method_1_38D99FF7D29DB041(::RPG::GameCore::Match3::Match3ChessBoardTemplate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::Match3ChessBoardTemplate*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_38D99FF7D29DB041_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5C2033D676A7828(::Il2CppArray<::RPG::GameCore::Match3::Match3ChessBoardGridInfo*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::Match3::Match3ChessBoardGridInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_A5C2033D676A7828_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF4662834E5ABD8A(::RPG::GameCore::Match3::Match3ChessBoardGridInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::Match3ChessBoardGridInfo*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_CF4662834E5ABD8A_OFFSET))(this, a1);
	}

	::System::Void Method_1_2D0EF4C8B528FC1E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_2D0EF4C8B528FC1E_OFFSET))(this, a1);
	}

	::System::Void Method_1_2757AE2486125A62(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_2757AE2486125A62_OFFSET))(this, a1);
	}

	::System::Void Method_1_7CC30AC1293C219D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_7CC30AC1293C219D_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF3A247817A8777D(::System::UInt32 a1, ::RPG::GameCore::Match3::BombType a2, ::RPG::GameCore::Match3::StyleGenerateType a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::StyleGenerateType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_DF3A247817A8777D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_F2E34E8DE2DDE7A9(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::Match3::BombType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_F2E34E8DE2DDE7A9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F44FB68367AA4B58(::RPG::GameCore::Match3::PieceTag a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::PieceTag, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_F44FB68367AA4B58_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_714C578DA15C5453(::RPG::GameCore::Match3::GridTag a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::GridTag, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_714C578DA15C5453_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_8DC652D916C182B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_8DC652D916C182B2_OFFSET))(this);
	}

	::System::Void Method_1_A6483272094C4057(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_A6483272094C4057_OFFSET))(this, a1);
	}

	::System::Void Method_1_CE944E12A64032F6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_CE944E12A64032F6_OFFSET))(this, a1);
	}

	::System::Void Method_1_D8A435EF27CA44AA(::RPG::GameCore::Match3::SetEmojiReplyPatternAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::SetEmojiReplyPatternAction*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_D8A435EF27CA44AA_OFFSET))(this, a1);
	}

	::System::Void Method_1_030C234A6E120A91(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::Match3::BirdStyleWeightConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::Match3::BirdStyleWeightConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_030C234A6E120A91_OFFSET))(this, a1);
	}

	::System::Void Method_1_EE25B4DE52676DE8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_EE25B4DE52676DE8_OFFSET))(this, a1);
	}

	::System::Void Method_1_865E5B58FDDFEA9D(::System::UInt32 a1, ::RPG::Client::LittleGame::Match3::OpponentRole a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_865E5B58FDDFEA9D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0BD24E09D6D088F0(::RPG::GameCore::Match3::RandomFreezeBombAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::RandomFreezeBombAction*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_0BD24E09D6D088F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_9C7E046DF6F24AF1(::RPG::GameCore::Match3::RandomChangeBombToMultiStyleAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::RandomChangeBombToMultiStyleAction*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_9C7E046DF6F24AF1_OFFSET))(this, a1);
	}

	::System::Void Method_1_713479C152EC121D(::RPG::GameCore::Match3::RandomChangeFruitToLineBombAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::RandomChangeFruitToLineBombAction*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_713479C152EC121D_OFFSET))(this, a1);
	}

	::System::Void Method_1_9CE44A1125649C26(::RPG::GameCore::Match3::RandomChangeFruitToBlackFogAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::RandomChangeFruitToBlackFogAction*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_9CE44A1125649C26_OFFSET))(this, a1);
	}

	::System::Boolean __ApplyRandomChangeBombToMultiStyle_b__31_0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> rowAndCol)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082___APPLYRANDOMCHANGEBOMBTOMULTISTYLE_B__31_0_OFFSET))(this, rowAndCol);
	}

	::System::Boolean __ApplyRandomChangeFruitToLineBomb_b__32_0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> rowAndCol)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082___APPLYRANDOMCHANGEFRUITTOLINEBOMB_B__32_0_OFFSET))(this, rowAndCol);
	}

	::System::Boolean __ApplyRandomChangeFruitToBlackFog_b__33_0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> rowAndCol)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082___APPLYRANDOMCHANGEFRUITTOBLACKFOG_B__33_0_OFFSET))(this, rowAndCol);
	}
};
