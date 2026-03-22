#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_16214D4BC9EF44B9.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"

namespace RPG::GameCore { class ItemDisplaySortNewRow; }

#define CLASS_2_FD969DDB47E87EB7_1_METHOD_2_4EC2E1ECDEE1B9F2_OFFSET UNITYSDK_OFFSET(0x86335B0)
#define CLASS_2_FD969DDB47E87EB7_1_METHOD_2_9E77C2541BDB01C0_OFFSET UNITYSDK_OFFSET(0x8633680)
#define CLASS_2_FD969DDB47E87EB7_1_METHOD_2_D22525D41FAF058E_OFFSET UNITYSDK_OFFSET(0x8633670)
#define CLASS_2_FD969DDB47E87EB7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8633580)

inline static constexpr unsigned int Class_2_FD969DDB47E87EB7_1_TypeDefinitionIndex = 52249;

class Class_2_FD969DDB47E87EB7_1 : public ::Class_1_16214D4BC9EF44B9
{
public:
	::System::Void _ctor(::RPG::GameCore::ItemDisplaySortNewRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemDisplaySortNewRow*))((::PBYTE)hIl2Cpp + CLASS_2_FD969DDB47E87EB7_1__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4EC2E1ECDEE1B9F2(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FD969DDB47E87EB7_1_METHOD_2_4EC2E1ECDEE1B9F2_OFFSET))(this, a1);
	}

	::RPG::GameCore::ItemSubType Method_2_D22525D41FAF058E()
	{
		return ((::RPG::GameCore::ItemSubType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD969DDB47E87EB7_1_METHOD_2_D22525D41FAF058E_OFFSET))(this);
	}

	::System::Boolean Method_2_9E77C2541BDB01C0(::System::UInt32 P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FD969DDB47E87EB7_1_METHOD_2_9E77C2541BDB01C0_OFFSET))(this, P0);
	}
};
