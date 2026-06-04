#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1197;
class Class_2_48960C526AFA0F72;
namespace RPG::Client::Prop { class DuelChimeraProxy; }

#define CLASS_2_7315BEC18CBD51C3_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x13B8A020)
#define CLASS_2_7315BEC18CBD51C3_METHOD_2_48EE6F8CA58AC368_OFFSET UNITYSDK_OFFSET(0x163D34D0)
#define CLASS_2_7315BEC18CBD51C3_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x163D3F30)
#define CLASS_2_7315BEC18CBD51C3_METHOD_2_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0x163D2EA0)
#define CLASS_2_7315BEC18CBD51C3__CTOR_OFFSET UNITYSDK_OFFSET(0x163D2E90)

inline static constexpr unsigned int Class_2_7315BEC18CBD51C3_TypeDefinitionIndex = 72784;

class Class_2_7315BEC18CBD51C3 : public ::Class_1_FD611945730E269E
{
public:
	::RPG::Client::Prop::DuelChimeraProxy* Field_2_0; // 0x18
	::Class_2_48960C526AFA0F72* Field_2_1; // 0x20
	::RPG::Client::Prop::DuelChimeraProxy* Field_2_2; // 0x28
	::Class_0_16E4307DCC419505_1197* Field_2_3; // 0x30
	::UnityEngine::Quaternion Field_2_4; // 0x38
	::UnityEngine::Vector3 Field_2_5; // 0x48
	::System::Single Field_2_6; // 0x54
	::System::Single Field_2_7; // 0x58
	::UnityEngine::Quaternion Field_2_8; // 0x5C
	::UnityEngine::Vector3 Field_2_9; // 0x6C

	::System::Void _ctor(::Class_2_48960C526AFA0F72* a1, ::Class_0_16E4307DCC419505_1197* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_48960C526AFA0F72*, ::Class_0_16E4307DCC419505_1197*))((::PBYTE)hIl2Cpp + CLASS_2_7315BEC18CBD51C3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BD2F8ECECEAD4800()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7315BEC18CBD51C3_METHOD_2_BD2F8ECECEAD4800_OFFSET))(this);
	}

	::System::Void Method_2_48EE6F8CA58AC368(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7315BEC18CBD51C3_METHOD_2_48EE6F8CA58AC368_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7315BEC18CBD51C3_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7315BEC18CBD51C3_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
