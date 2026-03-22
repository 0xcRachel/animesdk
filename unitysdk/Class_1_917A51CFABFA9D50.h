#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2FC18FF577A6112D;
namespace RPG::Client { class ScheduleModule; }

#define CLASS_1_917A51CFABFA9D50_METHOD_1_633B14F19DB86E4A_1_OFFSET UNITYSDK_OFFSET(0xFDA9E70)
#define CLASS_1_917A51CFABFA9D50_METHOD_1_633B14F19DB86E4A_OFFSET UNITYSDK_OFFSET(0xFDA9E20)
#define CLASS_1_917A51CFABFA9D50__CTOR_OFFSET UNITYSDK_OFFSET(0xFDA9DB0)

inline static constexpr unsigned int Class_1_917A51CFABFA9D50_TypeDefinitionIndex = 53851;

class Class_1_917A51CFABFA9D50 : public ::System::Object
{
public:
	::RPG::Client::ScheduleModule* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::ScheduleModule* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleModule*))((::PBYTE)hIl2Cpp + CLASS_1_917A51CFABFA9D50__CTOR_OFFSET))(this, a1);
	}

	::Class_1_2FC18FF577A6112D* Method_1_633B14F19DB86E4A(::System::UInt32 a1)
	{
		return ((::Class_1_2FC18FF577A6112D*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_917A51CFABFA9D50_METHOD_1_633B14F19DB86E4A_OFFSET))(this, a1);
	}

	::Class_1_2FC18FF577A6112D* Method_1_633B14F19DB86E4A_1(::System::UInt32 a1)
	{
		return ((::Class_1_2FC18FF577A6112D*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_917A51CFABFA9D50_METHOD_1_633B14F19DB86E4A_1_OFFSET))(this, a1);
	}
};
