#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_62281EC06BEFA462.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_DD2706738F86C698;

#define CLASS_3_9B5B48A41297FFF2_CLEAR_OFFSET UNITYSDK_OFFSET(0x10C82710)
#define CLASS_3_9B5B48A41297FFF2_METHOD_3_42169FC15C54FFA0_OFFSET UNITYSDK_OFFSET(0x10C81500)
#define CLASS_3_9B5B48A41297FFF2_METHOD_3_49F66CAAAF9DF912_OFFSET UNITYSDK_OFFSET(0x10C82860)
#define CLASS_3_9B5B48A41297FFF2_METHOD_3_602B796CAD5DBEDB_OFFSET UNITYSDK_OFFSET(0x10C80660)
#define CLASS_3_9B5B48A41297FFF2_METHOD_3_6D85CF874B2C700E_OFFSET UNITYSDK_OFFSET(0x10C82870)
#define CLASS_3_9B5B48A41297FFF2_METHOD_3_94CD5D7B33054742_OFFSET UNITYSDK_OFFSET(0x10C808C0)
#define CLASS_3_9B5B48A41297FFF2_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x10C80370)
#define CLASS_3_9B5B48A41297FFF2_METHOD_3_B7FF7B2A1BA2FA7B_OFFSET UNITYSDK_OFFSET(0x10C803C0)
#define CLASS_3_9B5B48A41297FFF2__CTOR_OFFSET UNITYSDK_OFFSET(0x10C827E0)
#define CLASS_3_9B5B48A41297FFF2___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x10C82880)

inline static constexpr unsigned int Class_3_9B5B48A41297FFF2_TypeDefinitionIndex = 60743;

class Class_3_9B5B48A41297FFF2 : public ::Class_2_62281EC06BEFA462
{
public:
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_3_2; // 0x20
	::Il2CppArray<::UnityEngine::Vector3>* Field_3_0; // 0x28
	::System::Single Field_3_1; // 0x30
	::System::Boolean Field_3_4; // 0x34
	::System::Int32 Field_3_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9B5B48A41297FFF2__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9B5B48A41297FFF2_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}

	::System::Void Method_3_B7FF7B2A1BA2FA7B(::Class_1_DD2706738F86C698* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD2706738F86C698*))((::PBYTE)hIl2Cpp + CLASS_3_9B5B48A41297FFF2_METHOD_3_B7FF7B2A1BA2FA7B_OFFSET))(this, a1);
	}

	::System::Void Method_3_602B796CAD5DBEDB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9B5B48A41297FFF2_METHOD_3_602B796CAD5DBEDB_OFFSET))(this, a1);
	}

	::System::Void Method_3_94CD5D7B33054742(::UnityEngine::Vector3& a1, ::Il2CppArray<::UnityEngine::Vector3>*& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::Vector3>*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_9B5B48A41297FFF2_METHOD_3_94CD5D7B33054742_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_42169FC15C54FFA0(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_9B5B48A41297FFF2_METHOD_3_42169FC15C54FFA0_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9B5B48A41297FFF2_CLEAR_OFFSET))(this);
	}

	::System::Void Method_3_49F66CAAAF9DF912(::Class_1_DD2706738F86C698* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD2706738F86C698*))((::PBYTE)hIl2Cpp + CLASS_3_9B5B48A41297FFF2_METHOD_3_49F66CAAAF9DF912_OFFSET))(this, P0);
	}

	::System::Void Method_3_6D85CF874B2C700E(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9B5B48A41297FFF2_METHOD_3_6D85CF874B2C700E_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9B5B48A41297FFF2___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
