#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52AE8D741A62A8F4;
class Class_1_FA4F4A67B1C04320_144;
namespace RPG::Client { class AvatarData; }

#define CLASS_1_1C4AA3840DCF3F0A_METHOD_1_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x1047E600)
#define CLASS_1_1C4AA3840DCF3F0A_METHOD_1_4139563A3BEB5307_OFFSET UNITYSDK_OFFSET(0x1047E5B0)
#define CLASS_1_1C4AA3840DCF3F0A__CTOR_OFFSET UNITYSDK_OFFSET(0x1047E580)

inline static constexpr unsigned int Class_1_1C4AA3840DCF3F0A_TypeDefinitionIndex = 50095;

class Class_1_1C4AA3840DCF3F0A : public ::System::Object
{
public:
	::Class_1_FA4F4A67B1C04320_144* Field_1_2; // 0x10
	::Class_1_52AE8D741A62A8F4* Field_1_3; // 0x18
	::RPG::Client::AvatarData* Field_1_1; // 0x20
	::System::UInt32 Field_1_0; // 0x28

	::System::Void _ctor(::System::UInt32 a1, ::Class_1_FA4F4A67B1C04320_144* a2, ::Class_1_52AE8D741A62A8F4* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_FA4F4A67B1C04320_144*, ::Class_1_52AE8D741A62A8F4*))((::PBYTE)hIl2Cpp + CLASS_1_1C4AA3840DCF3F0A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::AvatarData* Method_1_4139563A3BEB5307()
	{
		return ((::RPG::Client::AvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C4AA3840DCF3F0A_METHOD_1_4139563A3BEB5307_OFFSET))(this);
	}

	::System::Void Method_1_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C4AA3840DCF3F0A_METHOD_1_33E2FA8E6403B93D_OFFSET))(this);
	}
};
