#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1F45DE918CFECDFD_Class_1_1490BB0B276F3429;

#define CLASS_1_1F45DE918CFECDFD__CTOR_OFFSET UNITYSDK_OFFSET(0x105B12A0)

inline static constexpr unsigned int Class_1_1F45DE918CFECDFD_TypeDefinitionIndex = 53768;

class Class_1_1F45DE918CFECDFD : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_1F45DE918CFECDFD_Class_1_1490BB0B276F3429*>* DataList; // 0x10
	::System::UInt32 DataVersion; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F45DE918CFECDFD__CTOR_OFFSET))(this);
	}
};
