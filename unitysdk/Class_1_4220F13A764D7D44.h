#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAdditivePropertyType.h"
#include "unitysdk/RPG/GameCore/DiceCombatModifierFlag.h"
#include "unitysdk/System/Object.h"

class Class_1_247DF13861B4C286;
class Class_1_6B3E5A43A1B45F83;
class Class_1_DAC119B051861C6D;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4220F13A764D7D44_METHOD_1_029B3516099B4AF8_OFFSET UNITYSDK_OFFSET(0x1606DB10)
#define CLASS_1_4220F13A764D7D44_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1604B640)
#define CLASS_1_4220F13A764D7D44_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1606D680)
#define CLASS_1_4220F13A764D7D44_METHOD_1_9A6D1D47E588E644_OFFSET UNITYSDK_OFFSET(0x1606DCB0)
#define CLASS_1_4220F13A764D7D44_METHOD_1_AD6438C287489460_OFFSET UNITYSDK_OFFSET(0x1606D6D0)
#define CLASS_1_4220F13A764D7D44_METHOD_1_B3569348945CF6BB_OFFSET UNITYSDK_OFFSET(0x1606D7B0)
#define CLASS_1_4220F13A764D7D44_METHOD_1_CA99028638214CFF_OFFSET UNITYSDK_OFFSET(0x16037CF0)
#define CLASS_1_4220F13A764D7D44__CTOR_OFFSET UNITYSDK_OFFSET(0x16031900)

inline static constexpr unsigned int Class_1_4220F13A764D7D44_TypeDefinitionIndex = 27587;

class Class_1_4220F13A764D7D44 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int64>* Field_1_8; // 0x10
	::Class_1_6B3E5A43A1B45F83* Field_1_9; // 0x18
	::System::Collections::Generic::List_1<::Class_1_DAC119B051861C6D*>* Field_1_6; // 0x20
	::Class_1_247DF13861B4C286* Field_1_7; // 0x28
	::Class_1_6B3E5A43A1B45F83* Field_1_10; // 0x30
	::System::UInt32 Field_1_11; // 0x38
	::System::Int32 Field_1_0; // 0x3C
	::System::Int32 Field_1_5; // 0x40
	::System::Int32 Field_1_1; // 0x44
	::System::Int32 Field_1_3; // 0x48
	::System::Int32 Field_1_4; // 0x4C
	::System::Int32 Field_1_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4220F13A764D7D44__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4220F13A764D7D44_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4220F13A764D7D44_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::Class_1_DAC119B051861C6D* Method_1_CA99028638214CFF(::System::UInt32 a1)
	{
		return ((::Class_1_DAC119B051861C6D*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4220F13A764D7D44_METHOD_1_CA99028638214CFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_AD6438C287489460(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4220F13A764D7D44_METHOD_1_AD6438C287489460_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_B3569348945CF6BB(::RPG::GameCore::DiceCombatAdditivePropertyType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::DiceCombatAdditivePropertyType))((::PBYTE)hIl2Cpp + CLASS_1_4220F13A764D7D44_METHOD_1_B3569348945CF6BB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_029B3516099B4AF8(::RPG::GameCore::DiceCombatModifierFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DiceCombatModifierFlag))((::PBYTE)hIl2Cpp + CLASS_1_4220F13A764D7D44_METHOD_1_029B3516099B4AF8_OFFSET))(this, a1);
	}

	::System::Void Method_1_9A6D1D47E588E644(::Class_1_4220F13A764D7D44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4220F13A764D7D44*))((::PBYTE)hIl2Cpp + CLASS_1_4220F13A764D7D44_METHOD_1_9A6D1D47E588E644_OFFSET))(this, a1);
	}
};
