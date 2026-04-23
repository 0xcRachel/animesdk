#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore::Match3 { class BirdItemPackWeightConfig; }
namespace RPG::GameCore::Match3 { class BirdPieceTypeWeightConfig; }
namespace RPG::GameCore::Match3 { class BirdStyleWeightConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_DC55B9E766BF1C8D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA620EC0)
#define CLASS_1_DC55B9E766BF1C8D___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA620F00)
#define CLASS_1_DC55B9E766BF1C8D___C___COMPUTEITEMPACKWEIGHTS_B__49_0_OFFSET UNITYSDK_OFFSET(0xA620F50)
#define CLASS_1_DC55B9E766BF1C8D___C___COMPUTEITEMPACKWEIGHTS_B__49_1_OFFSET UNITYSDK_OFFSET(0xA620F70)
#define CLASS_1_DC55B9E766BF1C8D___C___COMPUTEPIECETYPEWEIGHTS_B__50_0_OFFSET UNITYSDK_OFFSET(0xA620F90)
#define CLASS_1_DC55B9E766BF1C8D___C___COMPUTESTYLEWEIGHTS_B__48_0_OFFSET UNITYSDK_OFFSET(0xA620F10)
#define CLASS_1_DC55B9E766BF1C8D___C___COMPUTESTYLEWEIGHTS_B__48_1_OFFSET UNITYSDK_OFFSET(0xA620F30)

inline static constexpr unsigned int Class_1_DC55B9E766BF1C8D___c_TypeDefinitionIndex = 70317;

class Class_1_DC55B9E766BF1C8D___c : public ::System::Object
{
public:
	static ::Class_1_DC55B9E766BF1C8D___c** StaticGet___9()
	{
		return (::Class_1_DC55B9E766BF1C8D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC55B9E766BF1C8D___c_TypeDefinitionIndex)->GetStaticField(0x5F0C0);
	}
	static ::System::Func_2<::RPG::GameCore::Match3::BirdItemPackWeightConfig*, ::System::UInt32>** StaticGet___9__49_1()
	{
		return (::System::Func_2<::RPG::GameCore::Match3::BirdItemPackWeightConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC55B9E766BF1C8D___c_TypeDefinitionIndex)->GetStaticField(0x5F0C8);
	}
	static ::System::Func_2<::RPG::GameCore::Match3::BirdStyleWeightConfig*, ::System::UInt32>** StaticGet___9__48_1()
	{
		return (::System::Func_2<::RPG::GameCore::Match3::BirdStyleWeightConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC55B9E766BF1C8D___c_TypeDefinitionIndex)->GetStaticField(0x5F0D0);
	}
	static ::System::Comparison_1<::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*>** StaticGet___9__50_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC55B9E766BF1C8D___c_TypeDefinitionIndex)->GetStaticField(0x5F0D8);
	}
	static ::System::Func_2<::RPG::GameCore::Match3::BirdItemPackWeightConfig*, ::System::UInt32>** StaticGet___9__49_0()
	{
		return (::System::Func_2<::RPG::GameCore::Match3::BirdItemPackWeightConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC55B9E766BF1C8D___c_TypeDefinitionIndex)->GetStaticField(0x5F0E0);
	}
	static ::System::Func_2<::RPG::GameCore::Match3::BirdStyleWeightConfig*, ::System::UInt32>** StaticGet___9__48_0()
	{
		return (::System::Func_2<::RPG::GameCore::Match3::BirdStyleWeightConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC55B9E766BF1C8D___c_TypeDefinitionIndex)->GetStaticField(0x5F0E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 __ComputeStyleWeights_b__48_0(::RPG::GameCore::Match3::BirdStyleWeightConfig* x)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::Match3::BirdStyleWeightConfig*))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D___C___COMPUTESTYLEWEIGHTS_B__48_0_OFFSET))(this, x);
	}

	::System::UInt32 __ComputeStyleWeights_b__48_1(::RPG::GameCore::Match3::BirdStyleWeightConfig* x)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::Match3::BirdStyleWeightConfig*))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D___C___COMPUTESTYLEWEIGHTS_B__48_1_OFFSET))(this, x);
	}

	::System::UInt32 __ComputeItemPackWeights_b__49_0(::RPG::GameCore::Match3::BirdItemPackWeightConfig* x)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::Match3::BirdItemPackWeightConfig*))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D___C___COMPUTEITEMPACKWEIGHTS_B__49_0_OFFSET))(this, x);
	}

	::System::UInt32 __ComputeItemPackWeights_b__49_1(::RPG::GameCore::Match3::BirdItemPackWeightConfig* x)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::Match3::BirdItemPackWeightConfig*))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D___C___COMPUTEITEMPACKWEIGHTS_B__49_1_OFFSET))(this, x);
	}

	::System::Int32 __ComputePieceTypeWeights_b__50_0(::RPG::GameCore::Match3::BirdPieceTypeWeightConfig* a, ::RPG::GameCore::Match3::BirdPieceTypeWeightConfig* b)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*, ::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*))((::PBYTE)hIl2Cpp + CLASS_1_DC55B9E766BF1C8D___C___COMPUTEPIECETYPEWEIGHTS_B__50_0_OFFSET))(this, a, b);
	}
};
