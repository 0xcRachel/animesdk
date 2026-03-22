#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/SchedulerType.h"
#include "unitysdk/System/Object.h"

class Class_1_B55A056072768C34;

#define CLASS_1_0B0809607F5CA95D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1635C670)
#define CLASS_1_0B0809607F5CA95D_METHOD_1_2B0C2B8E1505D946_OFFSET UNITYSDK_OFFSET(0x1635C7E0)
#define CLASS_1_0B0809607F5CA95D_METHOD_1_DCA8152954D7F3F1_OFFSET UNITYSDK_OFFSET(0x1635C860)
#define CLASS_1_0B0809607F5CA95D_METHOD_1_E4A2B2F96A8B6FFF_OFFSET UNITYSDK_OFFSET(0x1635C7A0)
#define CLASS_1_0B0809607F5CA95D__CTOR_OFFSET UNITYSDK_OFFSET(0x1635C540)

inline static constexpr unsigned int Class_1_0B0809607F5CA95D_TypeDefinitionIndex = 32801;

class Class_1_0B0809607F5CA95D : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_B55A056072768C34*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B0809607F5CA95D__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B0809607F5CA95D_DISPOSE_OFFSET))(this);
	}

	::Class_1_B55A056072768C34* Method_1_E4A2B2F96A8B6FFF(::RPG::Client::Multithread::SchedulerType a1)
	{
		return ((::Class_1_B55A056072768C34*(*)(::PVOID, ::RPG::Client::Multithread::SchedulerType))((::PBYTE)hIl2Cpp + CLASS_1_0B0809607F5CA95D_METHOD_1_E4A2B2F96A8B6FFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B0C2B8E1505D946(::RPG::Client::Multithread::SchedulerType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Multithread::SchedulerType))((::PBYTE)hIl2Cpp + CLASS_1_0B0809607F5CA95D_METHOD_1_2B0C2B8E1505D946_OFFSET))(this, a1);
	}

	::System::Void Method_1_DCA8152954D7F3F1(::RPG::Client::Multithread::SchedulerType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Multithread::SchedulerType))((::PBYTE)hIl2Cpp + CLASS_1_0B0809607F5CA95D_METHOD_1_DCA8152954D7F3F1_OFFSET))(this, a1);
	}
};
