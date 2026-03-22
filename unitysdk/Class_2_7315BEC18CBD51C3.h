#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_930;
class Class_2_48960C526AFA0F72;
namespace RPG::Client::Prop { class DuelChimeraProxy; }

#define CLASS_2_7315BEC18CBD51C3_METHOD_2_0414B7E68ABA5085_OFFSET UNITYSDK_OFFSET(0xF58BF00)
#define CLASS_2_7315BEC18CBD51C3_METHOD_2_48EE6F8CA58AC368_OFFSET UNITYSDK_OFFSET(0xF58B450)
#define CLASS_2_7315BEC18CBD51C3_METHOD_2_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0xF58AE20)
#define CLASS_2_7315BEC18CBD51C3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF58BEC0)
#define CLASS_2_7315BEC18CBD51C3__CTOR_OFFSET UNITYSDK_OFFSET(0xF58AE10)

inline static constexpr unsigned int Class_2_7315BEC18CBD51C3_TypeDefinitionIndex = 61529;

class Class_2_7315BEC18CBD51C3 : public ::Class_1_FD611945730E269E
{
public:
	::RPG::Client::Prop::DuelChimeraProxy* Field_2_3; // 0x18
	::Class_0_16E4307DCC419505_930* Field_2_1; // 0x20
	::RPG::Client::Prop::DuelChimeraProxy* Field_2_2; // 0x28
	::Class_2_48960C526AFA0F72* Field_2_0; // 0x30
	::System::Single Field_2_8; // 0x38
	::System::Single Field_2_9; // 0x3C
	::UnityEngine::Quaternion Field_2_7; // 0x40
	::UnityEngine::Vector3 Field_2_4; // 0x50
	::UnityEngine::Quaternion Field_2_6; // 0x5C
	::UnityEngine::Vector3 Field_2_5; // 0x6C

	::System::Void _ctor(::Class_2_48960C526AFA0F72* a1, ::Class_0_16E4307DCC419505_930* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_48960C526AFA0F72*, ::Class_0_16E4307DCC419505_930*))((::PBYTE)hIl2Cpp + CLASS_2_7315BEC18CBD51C3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BD2F8ECECEAD4800()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7315BEC18CBD51C3_METHOD_2_BD2F8ECECEAD4800_OFFSET))(this);
	}

	::System::Void Method_2_48EE6F8CA58AC368(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7315BEC18CBD51C3_METHOD_2_48EE6F8CA58AC368_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7315BEC18CBD51C3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_0414B7E68ABA5085(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7315BEC18CBD51C3_METHOD_2_0414B7E68ABA5085_OFFSET))(this, P0);
	}
};
