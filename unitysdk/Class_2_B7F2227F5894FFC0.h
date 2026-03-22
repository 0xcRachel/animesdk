#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_DynamicWavesManager_HitData.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/SurfaceType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_347;
class Class_1_495BD7C43746BF8B;
class Class_2_06AE6486A53015B3;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class GameObjectAudio; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class NPCMonsterHintSoundConfig; }
namespace RPG::GameCore { class NPCSoundConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B7F2227F5894FFC0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11060380)
#define CLASS_2_B7F2227F5894FFC0_GET_WATERCOLOR_OFFSET UNITYSDK_OFFSET(0x11064C10)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x11063550)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x11063500)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x11061C90)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x11064BF0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_12D0F45BB408A2E6_OFFSET UNITYSDK_OFFSET(0x110636D0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0x110617D0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_151E25A63D14DDB0_2_OFFSET UNITYSDK_OFFSET(0x110607C0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x110625B0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_1713F44301AA802F_OFFSET UNITYSDK_OFFSET(0x11060940)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x110626F0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x110605A0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x110618A0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x11064B80)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x11062090)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_453AA36A51F9AA77_OFFSET UNITYSDK_OFFSET(0x110623F0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_4994E127E1414136_OFFSET UNITYSDK_OFFSET(0x110620E0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0x11064640)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x110612F0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_6D71CC7A9DF62322_OFFSET UNITYSDK_OFFSET(0x110608E0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0x11062650)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_7CA8CEC368BDAF2F_OFFSET UNITYSDK_OFFSET(0x11062570)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x11060D80)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_94F7C31F3BFBD430_OFFSET UNITYSDK_OFFSET(0x11060DD0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x11064B00)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_96F429055CEF6085_OFFSET UNITYSDK_OFFSET(0x110635A0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x11064970)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_A168E12C6BB2E0E2_OFFSET UNITYSDK_OFFSET(0x11064690)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_A479FAB2BDAFE4D6_OFFSET UNITYSDK_OFFSET(0x11064BE0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_A98D3E0263C925ED_OFFSET UNITYSDK_OFFSET(0x11060B10)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_AB0D5AE688458ECB_OFFSET UNITYSDK_OFFSET(0x110610D0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_B158205E55E833D6_OFFSET UNITYSDK_OFFSET(0x11064C00)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_B6BF8BDAB8EF1357_OFFSET UNITYSDK_OFFSET(0x11061F40)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_C1238CC3B5758A25_1_OFFSET UNITYSDK_OFFSET(0x11063B30)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_C1238CC3B5758A25_OFFSET UNITYSDK_OFFSET(0x11064350)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x11060E80)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0x110611B0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11062C70)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x11060890)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11062850)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x11061AB0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_D4F6A905B06D72AB_OFFSET UNITYSDK_OFFSET(0x11063DE0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x11063440)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_DF4C68F31B1E687C_OFFSET UNITYSDK_OFFSET(0x11062890)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_EDB0D8DA4A269034_OFFSET UNITYSDK_OFFSET(0x11060F50)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x11062CC0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0x11064880)
#define CLASS_2_B7F2227F5894FFC0_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x11061290)
#define CLASS_2_B7F2227F5894FFC0_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x11061A50)
#define CLASS_2_B7F2227F5894FFC0_SET_WATERCOLOR_OFFSET UNITYSDK_OFFSET(0x11064C20)
#define CLASS_2_B7F2227F5894FFC0_TICK_OFFSET UNITYSDK_OFFSET(0x11061B60)
#define CLASS_2_B7F2227F5894FFC0__CCTOR_OFFSET UNITYSDK_OFFSET(0x11064C30)
#define CLASS_2_B7F2227F5894FFC0__CTOR_OFFSET UNITYSDK_OFFSET(0x110602F0)
#define CLASS_2_B7F2227F5894FFC0___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x11064C60)

inline static constexpr unsigned int Class_2_B7F2227F5894FFC0_TypeDefinitionIndex = 44877;

class Class_2_B7F2227F5894FFC0 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::RPG::Client::MonoEffect** StaticGet_Field_2_30()
	{
		return (::RPG::Client::MonoEffect**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B7F2227F5894FFC0_TypeDefinitionIndex)->GetStaticField(0x409A0);
	}
	static ::System::String** StaticGet_Field_2_32()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B7F2227F5894FFC0_TypeDefinitionIndex)->GetStaticField(0x409A8);
	}
	static ::System::String** StaticGet_Field_2_33()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B7F2227F5894FFC0_TypeDefinitionIndex)->GetStaticField(0x409B0);
	}
	// static const ::System::Int32 Field_2_2 = 0x3; // 0x0
	// static const ::System::Single Field_2_17; // 0x0
	::RPG::GameCore::AdventureCharacterController* Field_2_27; // 0x18
	::UnityEngine::Transform* Field_2_24; // 0x20
	::System::String* Field_2_34; // 0x28
	::UnityEngine::Transform* Field_2_25; // 0x30
	::UnityEngine::Transform* Field_2_7; // 0x38
	::Class_2_06AE6486A53015B3* Field_2_37; // 0x40
	::System::String* Field_2_36; // 0x48
	::RPG::Client::GameObjectAudio* Field_2_28; // 0x50
	::UnityEngine::Collider* Field_2_12; // 0x58
	::System::Collections::Generic::List_1<::RPG::Client::Effect_DynamicWavesManager_HitData>* Field_2_26; // 0x60
	::RPG::GameCore::NPCMonsterHintSoundConfig* Field_2_20; // 0x68
	::RPG::GameCore::NPCSoundConfig* Field_2_18; // 0x70
	::System::String* Field_2_10; // 0x78
	::RPG::Client::AdventurePhase* Field_2_1; // 0x80
	::System::String* Field_2_35; // 0x88
	::System::Collections::Generic::List_1<::Class_1_495BD7C43746BF8B*>* Field_2_19; // 0x90
	::System::Action* Field_2_21; // 0x98
	::System::Boolean Field_2_5; // 0xA0
	::System::Boolean Field_2_31; // 0xA1
	::System::Boolean Field_2_9; // 0xA2
	::System::Boolean Field_2_23; // 0xA3
	::System::Int32 Field_2_3; // 0xA4
	::System::Boolean Field_2_15; // 0xA8
	::System::Single Field_2_16; // 0xAC
	::System::Int32 Field_2_14; // 0xB0
	::System::Boolean Field_2_6; // 0xB4
	::System::Boolean Field_2_22; // 0xB5
	::System::Boolean Field_2_29; // 0xB6
	::System::Boolean Field_2_4; // 0xB7
	::UnityEngine::Vector3 Field_2_13; // 0xB8
	::UnityEngine::Color _waterColor_k__BackingField; // 0xC4
	::System::Int32 Field_2_11; // 0xD4
	::RPG::GameCore::SurfaceType Field_2_8; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_6D71CC7A9DF62322()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_6D71CC7A9DF62322_OFFSET))(this);
	}

	::System::Void Method_2_A98D3E0263C925ED(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_A98D3E0263C925ED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_94F7C31F3BFBD430(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_94F7C31F3BFBD430_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDB0D8DA4A269034(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_EDB0D8DA4A269034_OFFSET))(this, a1);
	}

	::System::Void Method_2_AB0D5AE688458ECB(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_AB0D5AE688458ECB_OFFSET))(this, a1);
	}

	::System::Void Method_2_C8D6B29192F288ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_C8D6B29192F288ED_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_4994E127E1414136(::RPG::GameCore::NPCSoundConfig* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCSoundConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_4994E127E1414136_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_453AA36A51F9AA77(::RPG::GameCore::NPCMonsterHintSoundConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCMonsterHintSoundConfig*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_453AA36A51F9AA77_OFFSET))(this, a1);
	}

	::RPG::GameCore::NPCSoundConfig* Method_2_7CA8CEC368BDAF2F()
	{
		return ((::RPG::GameCore::NPCSoundConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_7CA8CEC368BDAF2F_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_1713F44301AA802F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_1713F44301AA802F_OFFSET))(this);
	}

	::System::Void Method_2_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_21886A8411E71157_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_DF4C68F31B1E687C(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_DF4C68F31B1E687C_OFFSET))(this, a1);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_2_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_96F429055CEF6085(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_96F429055CEF6085_OFFSET))(this, a1);
	}

	::System::Void Method_2_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Int32 Method_2_D4F6A905B06D72AB(::RPG::GameCore::SurfaceType& a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::SurfaceType&))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_D4F6A905B06D72AB_OFFSET))(this, a1);
	}

	::RPG::GameCore::SurfaceType Method_2_12D0F45BB408A2E6()
	{
		return ((::RPG::GameCore::SurfaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_12D0F45BB408A2E6_OFFSET))(this);
	}

	::System::Void Method_2_C1238CC3B5758A25(::RPG::GameCore::SurfaceType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_C1238CC3B5758A25_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1238CC3B5758A25_1(::RPG::GameCore::SurfaceType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_C1238CC3B5758A25_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_70603E2AE56EBD6B(::Class_1_495BD7C43746BF8B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_495BD7C43746BF8B*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_70603E2AE56EBD6B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A168E12C6BB2E0E2(::Class_1_495BD7C43746BF8B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_495BD7C43746BF8B*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_A168E12C6BB2E0E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_659B881A8763C779()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_659B881A8763C779_OFFSET))(this);
	}

	::System::Void Method_2_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_2_FD7514C64FB1B043(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_FD7514C64FB1B043_OFFSET))(this, a1);
	}

	::System::Void Method_2_B6BF8BDAB8EF1357(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_B6BF8BDAB8EF1357_OFFSET))(this, a1);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_151E25A63D14DDB0_1_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_151E25A63D14DDB0_2_OFFSET))(this);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Void Method_2_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::RPG::GameCore::SurfaceType Method_2_A479FAB2BDAFE4D6()
	{
		return ((::RPG::GameCore::SurfaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_A479FAB2BDAFE4D6_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::RPG::GameCore::NPCMonsterHintSoundConfig* Method_2_B158205E55E833D6()
	{
		return ((::RPG::GameCore::NPCMonsterHintSoundConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_B158205E55E833D6_OFFSET))(this);
	}

	::UnityEngine::Color get_waterColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_GET_WATERCOLOR_OFFSET))(this);
	}

	::System::Void set_waterColor(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_SET_WATERCOLOR_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
