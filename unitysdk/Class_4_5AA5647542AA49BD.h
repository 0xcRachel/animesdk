#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0693CD0AFBBF2A3B.h"

class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_4_5AA5647542AA49BD_METHOD_4_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0x10E7ADD0)
#define CLASS_4_5AA5647542AA49BD_METHOD_4_4C27EF85256A8DCC_OFFSET UNITYSDK_OFFSET(0x10E7AE10)
#define CLASS_4_5AA5647542AA49BD_METHOD_4_56CD335BB2D53E2C_OFFSET UNITYSDK_OFFSET(0x10E7AD10)
#define CLASS_4_5AA5647542AA49BD_METHOD_4_BA72140EE922A8FE_OFFSET UNITYSDK_OFFSET(0x10E7AE20)
#define CLASS_4_5AA5647542AA49BD__CTOR_OFFSET UNITYSDK_OFFSET(0x10E7AC90)

inline static constexpr unsigned int Class_4_5AA5647542AA49BD_TypeDefinitionIndex = 61167;

class Class_4_5AA5647542AA49BD : public ::Class_3_0693CD0AFBBF2A3B
{
public:
	::Class_2_49CAB3DE74280C58* Field_4_0; // 0x30
	::System::Int32 Field_4_4; // 0x38
	::System::Int32 Field_4_3; // 0x3C
	::System::Int32 Field_4_5; // 0x40
	::System::Int32 Field_4_2; // 0x44
	::System::Int32 Field_4_6; // 0x48
	::System::Int32 Field_4_1; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5AA5647542AA49BD__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_56CD335BB2D53E2C(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_5AA5647542AA49BD_METHOD_4_56CD335BB2D53E2C_OFFSET))(this, a1);
	}

	::Class_2_49CAB3DE74280C58* Method_4_457717A0CF438A7C()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5AA5647542AA49BD_METHOD_4_457717A0CF438A7C_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_4C27EF85256A8DCC(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* P0)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_5AA5647542AA49BD_METHOD_4_4C27EF85256A8DCC_OFFSET))(this, P0);
	}

	::Class_2_49CAB3DE74280C58* Method_4_BA72140EE922A8FE()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5AA5647542AA49BD_METHOD_4_BA72140EE922A8FE_OFFSET))(this);
	}
};
