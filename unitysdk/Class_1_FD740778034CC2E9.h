#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_617;
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class EquipmentItemData; }

#define CLASS_1_FD740778034CC2E9_METHOD_1_232429C69FD28461_OFFSET UNITYSDK_OFFSET(0xCBC30B0)
#define CLASS_1_FD740778034CC2E9_METHOD_1_3F6B5B1012601EB6_OFFSET UNITYSDK_OFFSET(0xCBC32B0)
#define CLASS_1_FD740778034CC2E9_METHOD_1_530DC23F3772EBE7_OFFSET UNITYSDK_OFFSET(0xCBC3030)
#define CLASS_1_FD740778034CC2E9__CTOR_OFFSET UNITYSDK_OFFSET(0xCBC3440)

inline static constexpr unsigned int Class_1_FD740778034CC2E9_TypeDefinitionIndex = 52107;

class Class_1_FD740778034CC2E9 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD740778034CC2E9__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_530DC23F3772EBE7(::RPG::Client::AvatarData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_FD740778034CC2E9_METHOD_1_530DC23F3772EBE7_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_617* Method_1_3F6B5B1012601EB6(::RPG::Client::AvatarData* a1)
	{
		return ((::Class_0_16E4307DCC419505_617*(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_FD740778034CC2E9_METHOD_1_3F6B5B1012601EB6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_232429C69FD28461(::RPG::Client::EquipmentItemData* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + CLASS_1_FD740778034CC2E9_METHOD_1_232429C69FD28461_OFFSET))(this, a1);
	}
};
