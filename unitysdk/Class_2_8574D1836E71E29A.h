#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF2B522AC5DB4E39.h"

class Class_2_8574D1836E71E29A_Class_1_E2FC60A5D4BDF5C3;
namespace RPG::Client { class BattleAssetPreload_CharacterPreloadGroupBase; }
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8574D1836E71E29A_METHOD_2_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0x111DA630)
#define CLASS_2_8574D1836E71E29A_METHOD_2_1AD51778485AD495_OFFSET UNITYSDK_OFFSET(0x111D8BE0)
#define CLASS_2_8574D1836E71E29A_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x111D8140)
#define CLASS_2_8574D1836E71E29A_METHOD_2_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0x111D8C80)
#define CLASS_2_8574D1836E71E29A_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x111D8AB0)
#define CLASS_2_8574D1836E71E29A_METHOD_2_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x111D9470)
#define CLASS_2_8574D1836E71E29A_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x111DAC10)
#define CLASS_2_8574D1836E71E29A_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x111DAC70)
#define CLASS_2_8574D1836E71E29A_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x111DABB0)
#define CLASS_2_8574D1836E71E29A_METHOD_2_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0x111D9400)
#define CLASS_2_8574D1836E71E29A_METHOD_2_5C6932327C33FBF6_OFFSET UNITYSDK_OFFSET(0x111DA380)
#define CLASS_2_8574D1836E71E29A_METHOD_2_913947B6596EB50A_1_OFFSET UNITYSDK_OFFSET(0x111D8A60)
#define CLASS_2_8574D1836E71E29A_METHOD_2_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x111D7EB0)
#define CLASS_2_8574D1836E71E29A_METHOD_2_96AD5F7BC3D76517_1_OFFSET UNITYSDK_OFFSET(0x111DA330)
#define CLASS_2_8574D1836E71E29A_METHOD_2_96AD5F7BC3D76517_OFFSET UNITYSDK_OFFSET(0x111D8EF0)
#define CLASS_2_8574D1836E71E29A_METHOD_2_992B88E0E0E3EDAE_OFFSET UNITYSDK_OFFSET(0x111D9FB0)
#define CLASS_2_8574D1836E71E29A_METHOD_2_99D848AEA005759A_OFFSET UNITYSDK_OFFSET(0x111D8F50)
#define CLASS_2_8574D1836E71E29A_METHOD_2_B3F5D3A448F27F9B_OFFSET UNITYSDK_OFFSET(0x111D8880)
#define CLASS_2_8574D1836E71E29A_METHOD_2_C796A0B42720FBD3_OFFSET UNITYSDK_OFFSET(0x111D9E50)
#define CLASS_2_8574D1836E71E29A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x111D8410)
#define CLASS_2_8574D1836E71E29A_METHOD_2_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x111DABA0)
#define CLASS_2_8574D1836E71E29A_METHOD_2_DF606F1BC273FE84_1_OFFSET UNITYSDK_OFFSET(0x111DAA10)
#define CLASS_2_8574D1836E71E29A_METHOD_2_DF606F1BC273FE84_OFFSET UNITYSDK_OFFSET(0x111DA8E0)
#define CLASS_2_8574D1836E71E29A_METHOD_2_E8BE6CF225B0DE2B_OFFSET UNITYSDK_OFFSET(0x111D86A0)
#define CLASS_2_8574D1836E71E29A_METHOD_2_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x111D7F00)
#define CLASS_2_8574D1836E71E29A_METHOD_2_FE6F894869C3D404_1_OFFSET UNITYSDK_OFFSET(0x111D93B0)
#define CLASS_2_8574D1836E71E29A_METHOD_2_FE6F894869C3D404_OFFSET UNITYSDK_OFFSET(0x111D9360)
#define CLASS_2_8574D1836E71E29A__CCTOR_OFFSET UNITYSDK_OFFSET(0x111DAB70)
#define CLASS_2_8574D1836E71E29A__CTOR_OFFSET UNITYSDK_OFFSET(0x111DAB30)

inline static constexpr unsigned int Class_2_8574D1836E71E29A_TypeDefinitionIndex = 47271;

class Class_2_8574D1836E71E29A : public ::Class_1_BF2B522AC5DB4E39
{
public:
	static ::System::Single* StaticGet_Field_2_8()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_8574D1836E71E29A_TypeDefinitionIndex)->GetStaticField(0xFE10);
	}
	static ::System::Single* StaticGet_Field_2_10()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_8574D1836E71E29A_TypeDefinitionIndex)->GetStaticField(0xFE14);
	}
	static ::System::Single* StaticGet_Field_2_9()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_8574D1836E71E29A_TypeDefinitionIndex)->GetStaticField(0xFE18);
	}
	static ::System::Boolean* StaticGet_Field_2_11()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_8574D1836E71E29A_TypeDefinitionIndex)->GetStaticField(0xFE1C);
	}
	::RPG::Client::BattleGamePhase* Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::Class_2_8574D1836E71E29A_Class_1_E2FC60A5D4BDF5C3*>* Field_2_5; // 0x28
	::RPG::GameCore::GameEntity* Field_2_3; // 0x30
	::RPG::GameCore::GameEntity* Field_2_1; // 0x38
	::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase* Field_2_2; // 0x40
	::System::Boolean Field_2_7; // 0x48
	::System::Boolean Field_2_6; // 0x49
	::System::Boolean Field_2_4; // 0x4A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A__CCTOR_OFFSET))();
	}

	::System::Void Method_2_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_913947B6596EB50A_OFFSET))(this);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_913947B6596EB50A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_913947B6596EB50A_1_OFFSET))(this);
	}

	::System::Void Method_2_E8BE6CF225B0DE2B(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_E8BE6CF225B0DE2B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_1AD51778485AD495(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_1AD51778485AD495_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_2_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_276036CDF4BFF5A6_OFFSET))(this);
	}

	::System::Void Method_2_96AD5F7BC3D76517(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_96AD5F7BC3D76517_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE6F894869C3D404(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_FE6F894869C3D404_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE6F894869C3D404_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_FE6F894869C3D404_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_2_5AFFA079DA8B20AA()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_5AFFA079DA8B20AA_OFFSET))(this);
	}

	::System::Void Method_2_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Void Method_2_99D848AEA005759A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_99D848AEA005759A_OFFSET))(this);
	}

	::System::Void Method_2_B3F5D3A448F27F9B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_B3F5D3A448F27F9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_C796A0B42720FBD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_C796A0B42720FBD3_OFFSET))(this);
	}

	::System::Void Method_2_992B88E0E0E3EDAE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_992B88E0E0E3EDAE_OFFSET))(this, a1);
	}

	::System::Void Method_2_96AD5F7BC3D76517_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_96AD5F7BC3D76517_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5C6932327C33FBF6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_5C6932327C33FBF6_OFFSET))(this, a1);
	}

	::System::Void Method_2_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF606F1BC273FE84(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_DF606F1BC273FE84_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF606F1BC273FE84_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_DF606F1BC273FE84_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}
};
