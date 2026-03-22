#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_542;
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class AvatarData_UpgradeAvatarData; }

#define CLASS_1_6019A7D654FD2699_METHOD_1_379C2C7747DAA3F1_OFFSET UNITYSDK_OFFSET(0x10088600)
#define CLASS_1_6019A7D654FD2699_METHOD_1_49C508F28AEF0474_OFFSET UNITYSDK_OFFSET(0x10088560)
#define CLASS_1_6019A7D654FD2699__CTOR_OFFSET UNITYSDK_OFFSET(0x10088650)

inline static constexpr unsigned int Class_1_6019A7D654FD2699_TypeDefinitionIndex = 49627;

class Class_1_6019A7D654FD2699 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_542* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6019A7D654FD2699__CTOR_OFFSET))(this);
	}

	::RPG::Client::AvatarData_UpgradeAvatarData* Method_1_49C508F28AEF0474(::RPG::Client::AvatarData* a1)
	{
		return ((::RPG::Client::AvatarData_UpgradeAvatarData*(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_6019A7D654FD2699_METHOD_1_49C508F28AEF0474_OFFSET))(this, a1);
	}

	::Class_1_6019A7D654FD2699* Method_1_379C2C7747DAA3F1(::Class_0_16E4307DCC419505_542* a1)
	{
		return ((::Class_1_6019A7D654FD2699*(*)(::PVOID, ::Class_0_16E4307DCC419505_542*))((::PBYTE)hIl2Cpp + CLASS_1_6019A7D654FD2699_METHOD_1_379C2C7747DAA3F1_OFFSET))(this, a1);
	}
};
