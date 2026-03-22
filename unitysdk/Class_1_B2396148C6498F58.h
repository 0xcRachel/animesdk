#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_76AEB9F7CCE28B4E_Class_1_93CDA5C33880619D;

#define CLASS_1_B2396148C6498F58__CTOR_OFFSET UNITYSDK_OFFSET(0x84A4C30)

inline static constexpr unsigned int Class_1_B2396148C6498F58_TypeDefinitionIndex = 51457;

class Class_1_B2396148C6498F58 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_76AEB9F7CCE28B4E_Class_1_93CDA5C33880619D*>* Datas; // 0x10
	::System::Int32 Version; // 0x18
	::System::Int32 TotalNum; // 0x1C
	::System::Int32 MaxFavourNum; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2396148C6498F58__CTOR_OFFSET))(this);
	}
};
