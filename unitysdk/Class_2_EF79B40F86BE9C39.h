#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_55D15933485AAE64;

#define CLASS_2_EF79B40F86BE9C39_METHOD_2_2F4B6108E2917C18_OFFSET UNITYSDK_OFFSET(0x164BC710)
#define CLASS_2_EF79B40F86BE9C39__CTOR_OFFSET UNITYSDK_OFFSET(0x164BC860)

inline static constexpr unsigned int Class_2_EF79B40F86BE9C39_TypeDefinitionIndex = 15142;

class Class_2_EF79B40F86BE9C39 : public ::RPG::GameCore::JsonConfig
{
public:
	::Class_2_55D15933485AAE64* Field_2_2; // 0x10
	::System::UInt64 Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF79B40F86BE9C39__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_2F4B6108E2917C18(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_EF79B40F86BE9C39*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_EF79B40F86BE9C39*&))((::PBYTE)hIl2Cpp + CLASS_2_EF79B40F86BE9C39_METHOD_2_2F4B6108E2917C18_OFFSET))(a1, a2);
	}
};
