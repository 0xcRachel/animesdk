#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleModule; }

#define CLASS_1_2FC18FF577A6112D_METHOD_1_72B8A97304045027_1_OFFSET UNITYSDK_OFFSET(0x96B3C50)
#define CLASS_1_2FC18FF577A6112D_METHOD_1_72B8A97304045027_OFFSET UNITYSDK_OFFSET(0x96B3AF0)
#define CLASS_1_2FC18FF577A6112D__CTOR_OFFSET UNITYSDK_OFFSET(0x96B3DB0)

inline static constexpr unsigned int Class_1_2FC18FF577A6112D_TypeDefinitionIndex = 53848;

class Class_1_2FC18FF577A6112D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FC18FF577A6112D__CTOR_OFFSET))(this);
	}

	static ::Class_1_2FC18FF577A6112D* Method_1_72B8A97304045027(::RPG::Client::ScheduleModule* a1, ::System::UInt32 a2)
	{
		return ((::Class_1_2FC18FF577A6112D*(*)(::RPG::Client::ScheduleModule*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2FC18FF577A6112D_METHOD_1_72B8A97304045027_OFFSET))(a1, a2);
	}

	static ::Class_1_2FC18FF577A6112D* Method_1_72B8A97304045027_1(::RPG::Client::ScheduleModule* a1, ::System::UInt32 a2)
	{
		return ((::Class_1_2FC18FF577A6112D*(*)(::RPG::Client::ScheduleModule*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2FC18FF577A6112D_METHOD_1_72B8A97304045027_1_OFFSET))(a1, a2);
	}
};
