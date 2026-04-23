#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_382;
class Class_1_8976C473AE3B2B47;
class Class_1_E7BD46EB43F1A06F;
class Class_1_F1CBA2F1FD2FDF38;
class Class_1_F1CBA2F1FD2FDF38_1;
class Class_1_F98A96E373E13AED;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtBattleMode; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C1943EC6B1B061DE_METHOD_1_454429A122F071C5_OFFSET UNITYSDK_OFFSET(0x109291C0)
#define CLASS_1_C1943EC6B1B061DE_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x10928AC0)
#define CLASS_1_C1943EC6B1B061DE_METHOD_1_7F68D6D1D153FE6C_OFFSET UNITYSDK_OFFSET(0x10928BF0)
#define CLASS_1_C1943EC6B1B061DE_METHOD_1_8C6E68DB7E390F47_OFFSET UNITYSDK_OFFSET(0x10928D30)
#define CLASS_1_C1943EC6B1B061DE_METHOD_1_A41165C85F6825B3_1_OFFSET UNITYSDK_OFFSET(0x10929030)
#define CLASS_1_C1943EC6B1B061DE_METHOD_1_A41165C85F6825B3_OFFSET UNITYSDK_OFFSET(0x10928EA0)
#define CLASS_1_C1943EC6B1B061DE_METHOD_1_E0527F6B9A14910F_OFFSET UNITYSDK_OFFSET(0x109288C0)
#define CLASS_1_C1943EC6B1B061DE_METHOD_1_EBC83762ED0D0E57_OFFSET UNITYSDK_OFFSET(0x10929400)
#define CLASS_1_C1943EC6B1B061DE_METHOD_1_F9096507A659C510_OFFSET UNITYSDK_OFFSET(0x109296E0)
#define CLASS_1_C1943EC6B1B061DE__CTOR_OFFSET UNITYSDK_OFFSET(0x10929770)

inline static constexpr unsigned int Class_1_C1943EC6B1B061DE_TypeDefinitionIndex = 50057;

class Class_1_C1943EC6B1B061DE : public ::System::Object
{
public:
	::RPG::GameCore::RtBattleMode* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TeamType, ::Class_1_F98A96E373E13AED*>* Field_1_4; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F1CBA2F1FD2FDF38*>* Field_1_6; // 0x20
	::Class_1_8976C473AE3B2B47* Field_1_1; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F1CBA2F1FD2FDF38_1*>* Field_1_5; // 0x30
	::RPG::GameCore::FixPoint Field_1_2; // 0x38
	::System::Boolean Field_1_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1943EC6B1B061DE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E0527F6B9A14910F(::RPG::GameCore::RtBattleMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBattleMode*))((::PBYTE)hIl2Cpp + CLASS_1_C1943EC6B1B061DE_METHOD_1_E0527F6B9A14910F_OFFSET))(this, a1);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1943EC6B1B061DE_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_7F68D6D1D153FE6C(::Class_1_E7BD46EB43F1A06F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7BD46EB43F1A06F*))((::PBYTE)hIl2Cpp + CLASS_1_C1943EC6B1B061DE_METHOD_1_7F68D6D1D153FE6C_OFFSET))(this, a1);
	}

	::Class_1_F98A96E373E13AED* Method_1_8C6E68DB7E390F47(::RPG::GameCore::TeamType a1)
	{
		return ((::Class_1_F98A96E373E13AED*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_1_C1943EC6B1B061DE_METHOD_1_8C6E68DB7E390F47_OFFSET))(this, a1);
	}

	::Class_1_F1CBA2F1FD2FDF38_1* Method_1_A41165C85F6825B3(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::Class_1_F1CBA2F1FD2FDF38_1*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C1943EC6B1B061DE_METHOD_1_A41165C85F6825B3_OFFSET))(this, a1, a2);
	}

	::Class_1_F1CBA2F1FD2FDF38* Method_1_A41165C85F6825B3_1(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::Class_1_F1CBA2F1FD2FDF38*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C1943EC6B1B061DE_METHOD_1_A41165C85F6825B3_1_OFFSET))(this, a1, a2);
	}

	::Class_1_F1CBA2F1FD2FDF38* Method_1_454429A122F071C5(::RPG::GameCore::TaskContext* a1, ::System::Boolean a2)
	{
		return ((::Class_1_F1CBA2F1FD2FDF38*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C1943EC6B1B061DE_METHOD_1_454429A122F071C5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EBC83762ED0D0E57(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_C1943EC6B1B061DE_METHOD_1_EBC83762ED0D0E57_OFFSET))(this, a1);
	}

	static ::System::UInt32 Method_1_F9096507A659C510(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::UInt32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C1943EC6B1B061DE_METHOD_1_F9096507A659C510_OFFSET))(a1);
	}
};
