#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_867B6CE75953535A;
class Class_2_536CC4186B095618;
class Class_3_1A9D32B2B1D681B8;
namespace RPG::GameCore::Match3 { class BirdSkillActionGainRandomProp; }
namespace RPG::GameCore::Match3 { class BirdSkillActionGenerateBomb; }
namespace RPG::GameCore::Match3 { class BirdSkillActionGenerateItemPack; }
namespace RPG::GameCore::Match3 { class BirdSkillActionGeneratePiece; }
namespace RPG::GameCore::Match3 { class Match3ActionBase; }

#define CLASS_1_3BEB0001ADA26FB9_EXECUTE_OFFSET UNITYSDK_OFFSET(0x163447C0)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_0DE9F36AFB69C9F4_OFFSET UNITYSDK_OFFSET(0x16346350)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_2CD1E4D47E3F1E6E_OFFSET UNITYSDK_OFFSET(0x16345520)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_33EA4F46A108DE7D_OFFSET UNITYSDK_OFFSET(0x16344C40)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_5D3B488F64C9B0F7_OFFSET UNITYSDK_OFFSET(0x16346690)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_69DE60094D4DC991_OFFSET UNITYSDK_OFFSET(0x163451B0)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_70D461E1E65CA593_OFFSET UNITYSDK_OFFSET(0x16345F80)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_741A41CE0A023F45_OFFSET UNITYSDK_OFFSET(0x16346250)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_81DE48467F234C5A_OFFSET UNITYSDK_OFFSET(0x163465B0)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_A97107D69EC6875F_OFFSET UNITYSDK_OFFSET(0x163449A0)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_AC0C322250AD722F_OFFSET UNITYSDK_OFFSET(0x16345910)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_B991F0E3AEE27E3A_OFFSET UNITYSDK_OFFSET(0x16345E20)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_EFA30C330A9FD2CA_OFFSET UNITYSDK_OFFSET(0x16345C90)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_FF4277AB36E6459C_OFFSET UNITYSDK_OFFSET(0x16344DE0)
#define CLASS_1_3BEB0001ADA26FB9__CTOR_OFFSET UNITYSDK_OFFSET(0x163447B0)

inline static constexpr unsigned int Class_1_3BEB0001ADA26FB9_TypeDefinitionIndex = 31864;

class Class_1_3BEB0001ADA26FB9 : public ::System::Object
{
public:
	::Class_3_1A9D32B2B1D681B8* Field_1_1; // 0x10
	::Class_1_867B6CE75953535A* Field_1_0; // 0x18

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_1A9D32B2B1D681B8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_1A9D32B2B1D681B8*))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_EXECUTE_OFFSET))(this);
	}

	::System::Boolean Method_1_A97107D69EC6875F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_A97107D69EC6875F_OFFSET))(this);
	}

	::System::Void Method_1_33EA4F46A108DE7D(::RPG::GameCore::Match3::Match3ActionBase* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::Match3ActionBase*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_33EA4F46A108DE7D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FF4277AB36E6459C(::RPG::GameCore::Match3::BirdSkillActionGenerateBomb* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::BirdSkillActionGenerateBomb*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_FF4277AB36E6459C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_69DE60094D4DC991(::RPG::GameCore::Match3::BirdSkillActionGeneratePiece* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::BirdSkillActionGeneratePiece*))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_69DE60094D4DC991_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CD1E4D47E3F1E6E(::RPG::GameCore::Match3::BirdSkillActionGainRandomProp* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::BirdSkillActionGainRandomProp*))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_2CD1E4D47E3F1E6E_OFFSET))(this, a1);
	}

	::System::Void Method_1_AC0C322250AD722F(::RPG::GameCore::Match3::BirdSkillActionGenerateItemPack* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::BirdSkillActionGenerateItemPack*))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_AC0C322250AD722F_OFFSET))(this, a1);
	}

	::System::Void Method_1_70D461E1E65CA593(::Class_2_536CC4186B095618* a1, ::RPG::GameCore::Match3::BombType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_536CC4186B095618*, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_70D461E1E65CA593_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B991F0E3AEE27E3A(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::RPG::GameCore::Match3::BombType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_B991F0E3AEE27E3A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EFA30C330A9FD2CA(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::Boolean a2, ::RPG::GameCore::Match3::BombType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Boolean, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_EFA30C330A9FD2CA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0DE9F36AFB69C9F4(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_0DE9F36AFB69C9F4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5D3B488F64C9B0F7(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_5D3B488F64C9B0F7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_741A41CE0A023F45(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_741A41CE0A023F45_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_81DE48467F234C5A(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_81DE48467F234C5A_OFFSET))(this, a1);
	}
};
