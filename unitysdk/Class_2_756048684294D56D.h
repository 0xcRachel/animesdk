#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class HalfBoomerangProjectileData; }

#define CLASS_2_756048684294D56D_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x10C82080)
#define CLASS_2_756048684294D56D_METHOD_2_5B35ABB5DACF382C_OFFSET UNITYSDK_OFFSET(0x10C819F0)
#define CLASS_2_756048684294D56D_METHOD_2_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x10C816B0)
#define CLASS_2_756048684294D56D_METHOD_2_808A56A256840289_OFFSET UNITYSDK_OFFSET(0x10C81890)
#define CLASS_2_756048684294D56D_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x10C81E30)
#define CLASS_2_756048684294D56D_METHOD_2_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x10C81FE0)
#define CLASS_2_756048684294D56D__CTOR_OFFSET UNITYSDK_OFFSET(0x10C814F0)

inline static constexpr unsigned int Class_2_756048684294D56D_TypeDefinitionIndex = 50506;

class Class_2_756048684294D56D : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::HalfBoomerangProjectileData* Field_2_0; // 0x48
	::System::Single Field_2_1; // 0x50
	::System::Single Field_2_2; // 0x54
	::UnityEngine::Vector3 Field_2_3; // 0x58

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_756048684294D56D__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_756048684294D56D_METHOD_2_77FD543600E00498_OFFSET))(this);
	}

	::System::Void Method_2_808A56A256840289(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_756048684294D56D_METHOD_2_808A56A256840289_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B35ABB5DACF382C(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_756048684294D56D_METHOD_2_5B35ABB5DACF382C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_756048684294D56D_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_756048684294D56D_METHOD_2_FA662896843C137A_OFFSET))(this);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_756048684294D56D_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}
};
