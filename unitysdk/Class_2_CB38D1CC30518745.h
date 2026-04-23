#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Class_2_CB38D1CC30518745_Phase.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_CB38D1CC30518745_Class_1_AEB398135389F96A;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RogueAdventureRoomRayProcess; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define CLASS_2_CB38D1CC30518745_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCAFBF30)
#define CLASS_2_CB38D1CC30518745_METHOD_2_171A4D4799D0DC21_OFFSET UNITYSDK_OFFSET(0xCB00E50)
#define CLASS_2_CB38D1CC30518745_METHOD_2_277548B4528BF03C_OFFSET UNITYSDK_OFFSET(0xCAFEE40)
#define CLASS_2_CB38D1CC30518745_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xCAFD240)
#define CLASS_2_CB38D1CC30518745_METHOD_2_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0xCAFC8F0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0xCB007B0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_3C6EFDE37573F077_OFFSET UNITYSDK_OFFSET(0xCB00880)
#define CLASS_2_CB38D1CC30518745_METHOD_2_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0xCAFFDA0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_57D5ED2C4C06D908_OFFSET UNITYSDK_OFFSET(0xCAFDFF0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_5BF49FDE1D7B935F_OFFSET UNITYSDK_OFFSET(0xCAFFB80)
#define CLASS_2_CB38D1CC30518745_METHOD_2_64752E993AF7A109_OFFSET UNITYSDK_OFFSET(0xCB01010)
#define CLASS_2_CB38D1CC30518745_METHOD_2_67B10534C8C5ACFE_OFFSET UNITYSDK_OFFSET(0xCB01350)
#define CLASS_2_CB38D1CC30518745_METHOD_2_686221D5DF498040_OFFSET UNITYSDK_OFFSET(0xCAFFB20)
#define CLASS_2_CB38D1CC30518745_METHOD_2_7DD84EAFF333A1E4_1_OFFSET UNITYSDK_OFFSET(0xCAFED50)
#define CLASS_2_CB38D1CC30518745_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xCAFED00)
#define CLASS_2_CB38D1CC30518745_METHOD_2_816ED7FC0A7FCCD1_OFFSET UNITYSDK_OFFSET(0xCAFD420)
#define CLASS_2_CB38D1CC30518745_METHOD_2_82B2BADB6C94DC6B_OFFSET UNITYSDK_OFFSET(0xCB012C0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xCAFEB50)
#define CLASS_2_CB38D1CC30518745_METHOD_2_9D16F90644F98754_OFFSET UNITYSDK_OFFSET(0xCB00D50)
#define CLASS_2_CB38D1CC30518745_METHOD_2_9D8893CD130270AA_OFFSET UNITYSDK_OFFSET(0xCAFC440)
#define CLASS_2_CB38D1CC30518745_METHOD_2_9E49294C33DF47C3_OFFSET UNITYSDK_OFFSET(0xCAFEAF0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0xCB00390)
#define CLASS_2_CB38D1CC30518745_METHOD_2_C2302C13362F016F_OFFSET UNITYSDK_OFFSET(0xCAFF640)
#define CLASS_2_CB38D1CC30518745_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xCAFDFA0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCAFC870)
#define CLASS_2_CB38D1CC30518745_METHOD_2_D9F6AAE1EA9F3DF7_OFFSET UNITYSDK_OFFSET(0xCB01630)
#define CLASS_2_CB38D1CC30518745_METHOD_2_DB5B319D44B0143C_OFFSET UNITYSDK_OFFSET(0xCB015D0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0xCAFDAB0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0xCAFFCE0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xCAFEDD0)
#define CLASS_2_CB38D1CC30518745_METHOD_2_F7810952FE14E15C_OFFSET UNITYSDK_OFFSET(0xCAFE630)
#define CLASS_2_CB38D1CC30518745_METHOD_2_FEFB1056B17D055E_OFFSET UNITYSDK_OFFSET(0xCB00B30)
#define CLASS_2_CB38D1CC30518745_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCAFE0C0)
#define CLASS_2_CB38D1CC30518745_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCAFEAA0)
#define CLASS_2_CB38D1CC30518745_TICK_OFFSET UNITYSDK_OFFSET(0xCAFC5E0)
#define CLASS_2_CB38D1CC30518745__CCTOR_OFFSET UNITYSDK_OFFSET(0xCB018D0)
#define CLASS_2_CB38D1CC30518745__CTOR_OFFSET UNITYSDK_OFFSET(0xCAFBC80)

inline static constexpr unsigned int Class_2_CB38D1CC30518745_TypeDefinitionIndex = 53875;

class Class_2_CB38D1CC30518745 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::String** StaticGet_Field_2_51()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB38D1CC30518745_TypeDefinitionIndex)->GetStaticField(0x5C2F0);
	}
	static ::System::String** StaticGet_Field_2_52()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB38D1CC30518745_TypeDefinitionIndex)->GetStaticField(0x5C2F8);
	}
	static ::System::Int32* StaticGet_Field_2_49()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB38D1CC30518745_TypeDefinitionIndex)->GetStaticField(0xFAC0);
	}
	static ::System::Int32* StaticGet_Field_2_50()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB38D1CC30518745_TypeDefinitionIndex)->GetStaticField(0xFAC4);
	}
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_19; // 0x18
	::RPG::GameCore::RogueAdventureRoomRayProcess* Field_2_0; // 0x20
	::UnityEngine::Object* Field_2_42; // 0x28
	::RPG::GameCore::AnchorInfo* Field_2_40; // 0x30
	::RPG::GameCore::TaskContext* Field_2_1; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_8; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_6; // 0x48
	::RPG::Client::IAssetOperation* Field_2_41; // 0x50
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_9; // 0x58
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_22; // 0x60
	::RPG::GameCore::AdventureHitConfig* Field_2_5; // 0x68
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_20; // 0x70
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_21; // 0x78
	::System::Collections::Generic::List_1<::Class_2_CB38D1CC30518745_Class_1_AEB398135389F96A*>* Field_2_25; // 0x80
	::System::Single Field_2_46; // 0x88
	::System::Single Field_2_13; // 0x8C
	::System::Int32 Field_2_48; // 0x90
	::System::Single Field_2_38; // 0x94
	::System::Single Field_2_29; // 0x98
	::System::UInt32 Field_2_23; // 0x9C
	::System::Boolean Field_2_28; // 0xA0
	::System::Boolean Field_2_15; // 0xA1
	::System::Boolean Field_2_14; // 0xA2
	::System::Boolean Field_2_17; // 0xA3
	::System::Single Field_2_44; // 0xA4
	::UnityEngine::Vector3 Field_2_4; // 0xA8
	::UnityEngine::Vector3 Field_2_2; // 0xB4
	::System::Single Field_2_7; // 0xC0
	::System::Single Field_2_34; // 0xC4
	::System::Single Field_2_32; // 0xC8
	::System::Single Field_2_35; // 0xCC
	::UnityEngine::Vector3 Field_2_43; // 0xD0
	::System::Single Field_2_33; // 0xDC
	::UnityEngine::Vector3 Field_2_18; // 0xE0
	::System::Int32 Field_2_30; // 0xEC
	::Class_2_CB38D1CC30518745_Phase Field_2_26; // 0xF0
	::System::Int32 Field_2_39; // 0xF4
	::System::Single Field_2_12; // 0xF8
	::System::Boolean Field_2_24; // 0xFC
	::System::Boolean Field_2_27; // 0xFD
	::System::Boolean Field_2_16; // 0xFE
	::System::Int32 Field_2_31; // 0x100
	::System::Single Field_2_36; // 0x104
	::System::Int32 Field_2_10; // 0x108
	::UnityEngine::Vector3 Field_2_3; // 0x10C
	::System::Single Field_2_45; // 0x118
	::System::Single Field_2_47; // 0x11C
	::System::Single Field_2_37; // 0x120
	::System::Single Field_2_11; // 0x124

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueAdventureRoomRayProcess* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueAdventureRoomRayProcess*))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_9E49294C33DF47C3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_9E49294C33DF47C3_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_7DD84EAFF333A1E4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_277548B4528BF03C(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_277548B4528BF03C_OFFSET))(this, a1);
	}

	::System::Void Method_2_C2302C13362F016F(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_C2302C13362F016F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_686221D5DF498040()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_686221D5DF498040_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_2_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_57D5ED2C4C06D908()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_57D5ED2C4C06D908_OFFSET))(this);
	}

	::System::Void Method_2_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Method_2_5BF49FDE1D7B935F(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_5BF49FDE1D7B935F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F7810952FE14E15C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_F7810952FE14E15C_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Int32 Method_2_9D16F90644F98754(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_9D16F90644F98754_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3C6EFDE37573F077(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_3C6EFDE37573F077_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_171A4D4799D0DC21(::System::Int32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_171A4D4799D0DC21_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_64752E993AF7A109()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_64752E993AF7A109_OFFSET))(this);
	}

	::System::Single Method_2_82B2BADB6C94DC6B(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_82B2BADB6C94DC6B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_FEFB1056B17D055E(::System::Int32 a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_FEFB1056B17D055E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4805283D59625FD9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_4805283D59625FD9_OFFSET))(this);
	}

	::System::Void Method_2_816ED7FC0A7FCCD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_816ED7FC0A7FCCD1_OFFSET))(this);
	}

	::System::Boolean Method_2_67B10534C8C5ACFE(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_67B10534C8C5ACFE_OFFSET))(this, a1);
	}

	::System::Void Method_2_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Boolean Method_2_DB5B319D44B0143C(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AdventureHitConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureHitConfig*))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_DB5B319D44B0143C_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_D9F6AAE1EA9F3DF7(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_D9F6AAE1EA9F3DF7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9D8893CD130270AA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_9D8893CD130270AA_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB38D1CC30518745_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}
};
