#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F8F1752DCDE35E35.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/AdvancedFollowType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_60475C2D4D583319;
class Class_1_BA25C773E88BA4BE;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_20ABFF56D19D108A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x168C1140)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_0D926A533E72C276_OFFSET UNITYSDK_OFFSET(0x168C16B0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x168C1950)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x168C36B0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_298236AC333160E8_OFFSET UNITYSDK_OFFSET(0x168C2EA0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_2D1808F981B590D0_OFFSET UNITYSDK_OFFSET(0x168C2BD0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_44D79A8627DE7D79_OFFSET UNITYSDK_OFFSET(0x168C2030)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_49AA86D9F19FB057_OFFSET UNITYSDK_OFFSET(0x168C2560)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_4D331AADF765164C_OFFSET UNITYSDK_OFFSET(0x168C37F0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_4E608ED8CF3CBCB8_OFFSET UNITYSDK_OFFSET(0x168C2F50)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x168C3710)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_5C3494A3B250FBC5_OFFSET UNITYSDK_OFFSET(0x168C3850)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_7889E856344009E9_OFFSET UNITYSDK_OFFSET(0x168C1630)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x168C1BC0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_8D34CF21F7480E9E_OFFSET UNITYSDK_OFFSET(0x168C3900)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_8E2613C0147FD640_OFFSET UNITYSDK_OFFSET(0x168C1FB0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_9C25D81B36F50A81_OFFSET UNITYSDK_OFFSET(0x168C29F0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x168C39B0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_9EF498B1022669D3_OFFSET UNITYSDK_OFFSET(0x168C3AF0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_A844A48E0B749108_OFFSET UNITYSDK_OFFSET(0x168C3640)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_ABF056BF98833431_OFFSET UNITYSDK_OFFSET(0x168C3B10)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_B650CDF375474809_OFFSET UNITYSDK_OFFSET(0x168C2500)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_B73CDCBF771B2B3A_OFFSET UNITYSDK_OFFSET(0x168C1B60)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_C25F3A2B844157D6_OFFSET UNITYSDK_OFFSET(0x168C1230)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x168C1DF0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0x168C3B20)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_D6C225F121F56344_OFFSET UNITYSDK_OFFSET(0x168C1EF0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x168C3B00)
#define CLASS_2_20ABFF56D19D108A__CTOR_OFFSET UNITYSDK_OFFSET(0x168C0FA0)
#define CLASS_2_20ABFF56D19D108A___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x168C3A70)

inline static constexpr unsigned int Class_2_20ABFF56D19D108A_TypeDefinitionIndex = 49019;

class Class_2_20ABFF56D19D108A : public ::Class_1_F8F1752DCDE35E35
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::Single Field_2_2; // 0x0
	::Class_1_BA25C773E88BA4BE* Field_2_3; // 0x80
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x88
	::RPG::GameCore::TaskContext* Field_2_5; // 0x90
	::Class_1_60475C2D4D583319* Field_2_6; // 0x98
	::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* Field_2_7; // 0xA0
	::Class_3_07C3C4D2990C49EE* Field_2_8; // 0xA8
	::System::Single Field_2_9; // 0xB0
	::UnityEngine::Vector3 Field_2_10; // 0xB4
	::System::Single Field_2_11; // 0xC0
	::UnityEngine::Vector3 Field_2_12; // 0xC4
	::System::Single Field_2_13; // 0xD0
	::System::Single Field_2_14; // 0xD4
	::System::Single Field_2_15; // 0xD8
	::System::Boolean Field_2_16; // 0xDC
	::System::Boolean Field_2_17; // 0xDD
	::System::Single Field_2_18; // 0xE0
	::System::Single Field_2_19; // 0xE4
	::System::Single Field_2_20; // 0xE8
	::System::Single Field_2_21; // 0xEC
	::System::Single Field_2_22; // 0xF0
	::System::Single Field_2_23; // 0xF4
	::System::Single Field_2_24; // 0xF8
	::System::Single Field_2_25; // 0xFC
	::System::Single Field_2_26; // 0x100

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_C25F3A2B844157D6(::RPG::GameCore::AdvancedFollowType a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Il2CppArray<::System::Int32>* a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Boolean a10, ::System::Single a11, ::System::Single a12, ::System::Boolean a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Single a16, ::System::Single a17)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::Il2CppArray<::System::Int32>*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_C25F3A2B844157D6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
	}

	::System::Void Method_2_0D926A533E72C276(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_0D926A533E72C276_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_2_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_2_8E2613C0147FD640(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_8E2613C0147FD640_OFFSET))(this, a1);
	}

	::System::Void Method_2_B650CDF375474809(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_B650CDF375474809_OFFSET))(this, a1);
	}

	::System::Void Method_2_9C25D81B36F50A81(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_9C25D81B36F50A81_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D6C225F121F56344(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_D6C225F121F56344_OFFSET))(this, a1);
	}

	::System::Void Method_2_298236AC333160E8(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_298236AC333160E8_OFFSET))(this, a1);
	}

	::System::Void Method_2_44D79A8627DE7D79(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_44D79A8627DE7D79_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4E608ED8CF3CBCB8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_4E608ED8CF3CBCB8_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_4D331AADF765164C(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_4D331AADF765164C_OFFSET))(this, a1);
	}

	::System::Void Method_2_A844A48E0B749108(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_A844A48E0B749108_OFFSET))(this, a1);
	}

	::System::Void Method_2_B73CDCBF771B2B3A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_B73CDCBF771B2B3A_OFFSET))(this);
	}

	::System::Void Method_2_5C3494A3B250FBC5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_5C3494A3B250FBC5_OFFSET))(this, a1);
	}

	::System::Void Method_2_8D34CF21F7480E9E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_8D34CF21F7480E9E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2D1808F981B590D0(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_2D1808F981B590D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_7889E856344009E9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_7889E856344009E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_49AA86D9F19FB057(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_49AA86D9F19FB057_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_9EF498B1022669D3(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_9EF498B1022669D3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_DF3C54A5ADEABAF1_OFFSET))(this);
	}

	::System::Void Method_2_ABF056BF98833431(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_ABF056BF98833431_OFFSET))(this, a1);
	}

	::System::Void Method_2_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_C91E5170F9E36EED_OFFSET))(this, a1);
	}
};
