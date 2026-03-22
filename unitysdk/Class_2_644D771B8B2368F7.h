#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F8F1752DCDE35E35.h"
#include "unitysdk/RPG/GameCore/AdvNavigationMotionFlagMode.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_644D771B8B2368F7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10372200)
#define CLASS_2_644D771B8B2368F7_METHOD_2_18D9238B9C310BFF_OFFSET UNITYSDK_OFFSET(0x103712C0)
#define CLASS_2_644D771B8B2368F7_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x10372080)
#define CLASS_2_644D771B8B2368F7_METHOD_2_378AD9E7C929AB6F_OFFSET UNITYSDK_OFFSET(0x10371F90)
#define CLASS_2_644D771B8B2368F7_METHOD_2_41A074549EF25F63_1_OFFSET UNITYSDK_OFFSET(0x10371B80)
#define CLASS_2_644D771B8B2368F7_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x10371100)
#define CLASS_2_644D771B8B2368F7_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10371E90)
#define CLASS_2_644D771B8B2368F7_METHOD_2_48A730878298E8F8_OFFSET UNITYSDK_OFFSET(0x10371450)
#define CLASS_2_644D771B8B2368F7_METHOD_2_49AA86D9F19FB057_OFFSET UNITYSDK_OFFSET(0x103715F0)
#define CLASS_2_644D771B8B2368F7_METHOD_2_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0x10370F70)
#define CLASS_2_644D771B8B2368F7_METHOD_2_60BDBD02AE36FD20_OFFSET UNITYSDK_OFFSET(0x103720E0)
#define CLASS_2_644D771B8B2368F7_METHOD_2_7F7379F8817AA054_OFFSET UNITYSDK_OFFSET(0x10370AE0)
#define CLASS_2_644D771B8B2368F7_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x10370870)
#define CLASS_2_644D771B8B2368F7_METHOD_2_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x103709E0)
#define CLASS_2_644D771B8B2368F7_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x10370920)
#define CLASS_2_644D771B8B2368F7_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10371EF0)
#define CLASS_2_644D771B8B2368F7_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x10371F40)
#define CLASS_2_644D771B8B2368F7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10371270)
#define CLASS_2_644D771B8B2368F7_METHOD_2_D8EB89DF128EDA39_1_OFFSET UNITYSDK_OFFSET(0x10371E00)
#define CLASS_2_644D771B8B2368F7_METHOD_2_D8EB89DF128EDA39_OFFSET UNITYSDK_OFFSET(0x10371D60)
#define CLASS_2_644D771B8B2368F7_METHOD_2_E46509D2BC81F8FB_OFFSET UNITYSDK_OFFSET(0x10371A80)
#define CLASS_2_644D771B8B2368F7_METHOD_2_F27A64F8FEB174E3_OFFSET UNITYSDK_OFFSET(0x10371040)
#define CLASS_2_644D771B8B2368F7_METHOD_2_F713E417997556FC_OFFSET UNITYSDK_OFFSET(0x10372160)
#define CLASS_2_644D771B8B2368F7__CTOR_OFFSET UNITYSDK_OFFSET(0x103707F0)
#define CLASS_2_644D771B8B2368F7___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x103722B0)

inline static constexpr unsigned int Class_2_644D771B8B2368F7_TypeDefinitionIndex = 41383;

class Class_2_644D771B8B2368F7 : public ::Class_1_F8F1752DCDE35E35
{
public:
	// static const ::System::Single Field_2_17; // 0x0
	::Class_1_5F51D4049EA87B7B* Field_2_20; // 0x78
	::System::Single Field_2_0; // 0x80
	::RPG::GameCore::AdvNavigationMotionFlagMode Field_2_21; // 0x84
	::System::Single Field_2_23; // 0x88
	::System::Single Field_2_1; // 0x8C
	::System::Single Field_2_14; // 0x90
	::System::Single Field_2_22; // 0x94
	::System::Single Field_2_16; // 0x98
	::System::Single Field_2_6; // 0x9C
	::System::Single Field_2_5; // 0xA0
	::System::Single Field_2_2; // 0xA4
	::System::Single Field_2_13; // 0xA8
	::System::Single Field_2_15; // 0xAC
	::System::Single Field_2_7; // 0xB0
	::System::Single Field_2_19; // 0xB4
	::System::Single Field_2_8; // 0xB8
	::System::Single Field_2_3; // 0xBC
	::System::Single Field_2_12; // 0xC0
	::System::Boolean Field_2_10; // 0xC4
	::System::Single Field_2_11; // 0xC8
	::System::Single Field_2_18; // 0xCC
	::System::Single Field_2_9; // 0xD0
	::System::Single Field_2_4; // 0xD4

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Boolean Method_2_7F7379F8817AA054(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_7F7379F8817AA054_OFFSET))(this, a1);
	}

	::System::Void Method_2_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_F27A64F8FEB174E3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_F27A64F8FEB174E3_OFFSET))(this, a1);
	}

	::System::Void Method_2_18D9238B9C310BFF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_18D9238B9C310BFF_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_41A074549EF25F63_1_OFFSET))(this);
	}

	::System::Void Method_2_D8EB89DF128EDA39(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_D8EB89DF128EDA39_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8EB89DF128EDA39_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_D8EB89DF128EDA39_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_48A730878298E8F8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_48A730878298E8F8_OFFSET))(this, a1);
	}

	::System::Void Method_2_49AA86D9F19FB057(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_49AA86D9F19FB057_OFFSET))(this, a1);
	}

	::System::Void Method_2_378AD9E7C929AB6F(::System::Single a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::TaskConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_378AD9E7C929AB6F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E46509D2BC81F8FB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_E46509D2BC81F8FB_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_60BDBD02AE36FD20(::RPG::GameCore::AdvNavigationMotionFlagMode a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationMotionFlagMode, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_60BDBD02AE36FD20_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F713E417997556FC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_F713E417997556FC_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
