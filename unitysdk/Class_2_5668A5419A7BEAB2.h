#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"
#include "unitysdk/RPG/GameCore/ESwitchHandGestureType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_375;
class Class_1_F6641B177752AEFC;
class Class_2_5668A5419A7BEAB2_Class_1_C5FEB9B9881CF18E;
class Class_2_5B599AA9B6DFF68F;
class Class_2_6BC34AADE687F0FD_CatchItemData;
namespace RPG::Client { class MonoControllableHand; }
namespace RPG::Client { class MonoDroneAirwallControl; }
namespace RPG::Client { class MonoHandOverlapTrigger; }
namespace RPG::Client { class SwitchHandPuzzleBoard; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_5668A5419A7BEAB2_GET_NEEDLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10BB1F10)
#define CLASS_2_5668A5419A7BEAB2_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x10BB1F00)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_010163AEE88904F8_OFFSET UNITYSDK_OFFSET(0x10BAED10)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x10BB1F40)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0x10BAAC80)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x10BAAAF0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x10BAFF90)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_18A7BF8B592973BC_OFFSET UNITYSDK_OFFSET(0x10BAFD90)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_1F9DB45F7550A899_OFFSET UNITYSDK_OFFSET(0x10BB0020)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x10BAE2E0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x10BAC460)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_28BB8707B4CC88A2_OFFSET UNITYSDK_OFFSET(0x10BB1C10)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0x10BAFF40)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_32FE792EB1B0F498_OFFSET UNITYSDK_OFFSET(0x10BB0900)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_3306F24AC967FE79_OFFSET UNITYSDK_OFFSET(0x10BAB8B0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_3BF244C414C7BEE6_OFFSET UNITYSDK_OFFSET(0x10BAE740)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_3ECBFD28BA8C4296_OFFSET UNITYSDK_OFFSET(0x10BB1F30)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10BB0480)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x10BAD1B0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_47CC1467027929B1_OFFSET UNITYSDK_OFFSET(0x10BB1390)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x10BAB400)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_53FC3799497FA031_OFFSET UNITYSDK_OFFSET(0x10BB0710)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_54717D764304782D_OFFSET UNITYSDK_OFFSET(0x10BB0A70)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_5543817C5A5F79C6_OFFSET UNITYSDK_OFFSET(0x10BB09C0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x10BACD60)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x10BAE510)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x10BB20F0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_79E872D90798D236_OFFSET UNITYSDK_OFFSET(0x10BADEB0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_7B6EC255F45D034F_1_OFFSET UNITYSDK_OFFSET(0x10BAFA00)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x10BAF980)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_7DB49B5407C8FD68_1_OFFSET UNITYSDK_OFFSET(0x10BACAF0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x10BAC1F0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_85C3B0BE7BB243BD_OFFSET UNITYSDK_OFFSET(0x10BB11A0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_87DA5EB0C040E3E5_OFFSET UNITYSDK_OFFSET(0x10BAFA80)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_8873623EF8C35C8A_OFFSET UNITYSDK_OFFSET(0x10BB0AE0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_89EF18AF75A19433_OFFSET UNITYSDK_OFFSET(0x10BB0B50)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_914D6046CC39AD24_OFFSET UNITYSDK_OFFSET(0x10BB1F60)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_921759D9C6955DBC_OFFSET UNITYSDK_OFFSET(0x10BB00F0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_95ECDB89C94A0638_OFFSET UNITYSDK_OFFSET(0x10BAE3B0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0x10BAAD80)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_98060E4D16CBDFE4_1_OFFSET UNITYSDK_OFFSET(0x10BAF190)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_98060E4D16CBDFE4_OFFSET UNITYSDK_OFFSET(0x10BAEC00)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_A0374C870A27A45B_OFFSET UNITYSDK_OFFSET(0x10BB05F0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x10BB1140)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x10BB10E0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_A89412D0474E693F_OFFSET UNITYSDK_OFFSET(0x10BB02D0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_AE901FE5D06D0163_1_OFFSET UNITYSDK_OFFSET(0x10BAEFD0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_AE901FE5D06D0163_OFFSET UNITYSDK_OFFSET(0x10BAEA40)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x10BB1F20)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_BBA53B4B90B8C63A_1_OFFSET UNITYSDK_OFFSET(0x10BAEDE0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_BBA53B4B90B8C63A_OFFSET UNITYSDK_OFFSET(0x10BAE850)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x10BABC10)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10BAD420)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_D89EA8116A628F77_OFFSET UNITYSDK_OFFSET(0x10BAEB00)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_F1DA93F8DA3FE8B8_OFFSET UNITYSDK_OFFSET(0x10BB1F50)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x10BB0880)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x10BB0800)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_F40AF41B962D2981_OFFSET UNITYSDK_OFFSET(0x10BAF090)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_FB1C56FCE4ABD259_OFFSET UNITYSDK_OFFSET(0x10BAB1A0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_FBC3D7D544C66CDA_OFFSET UNITYSDK_OFFSET(0x10BB0150)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_FBC8074367171D08_OFFSET UNITYSDK_OFFSET(0x10BB07A0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_FED2DB1B40494A9B_OFFSET UNITYSDK_OFFSET(0x10BAE1A0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_FFF5314FB77720C3_OFFSET UNITYSDK_OFFSET(0x10BAF2A0)
#define CLASS_2_5668A5419A7BEAB2_ONINIT_OFFSET UNITYSDK_OFFSET(0x10BAA830)
#define CLASS_2_5668A5419A7BEAB2_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x10BAC680)
#define CLASS_2_5668A5419A7BEAB2_TICK_OFFSET UNITYSDK_OFFSET(0x10BAD470)
#define CLASS_2_5668A5419A7BEAB2__CCTOR_OFFSET UNITYSDK_OFFSET(0x10BB1FB0)
#define CLASS_2_5668A5419A7BEAB2__CTOR_OFFSET UNITYSDK_OFFSET(0x10BB1F80)
#define CLASS_2_5668A5419A7BEAB2___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0x10BB1FC0)
#define CLASS_2_5668A5419A7BEAB2___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x10BB2020)
#define CLASS_2_5668A5419A7BEAB2___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x10BB2080)

inline static constexpr unsigned int Class_2_5668A5419A7BEAB2_TypeDefinitionIndex = 48840;

class Class_2_5668A5419A7BEAB2 : public ::Class_1_47C4886CB6C61234
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_5668A5419A7BEAB2_TypeDefinitionIndex)->GetStaticField(0x3E80);
	}
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::UInt32 Field_2_2 = 0x7531; // 0x0
	// static const ::System::Single Field_2_3; // 0x0
	// static const ::System::Single Field_2_4; // 0x0
	// static const ::System::Single Field_2_5; // 0x0
	// static const ::System::Single Field_2_6; // 0x0
	// static const ::System::Single Field_2_7; // 0x0
	// static const ::System::Single Field_2_37; // 0x0
	::RPG::GameCore::GameEntity* Field_2_26; // 0x20
	::UnityEngine::GameObject* Field_2_23; // 0x28
	::RPG::GameCore::AdventureCharacterController* Field_2_27; // 0x30
	::Class_2_5668A5419A7BEAB2_Class_1_C5FEB9B9881CF18E* Field_2_40; // 0x38
	::Il2CppArray<::System::Boolean>* Field_2_35; // 0x40
	::RPG::Client::SwitchHandPuzzleBoard* Field_2_21; // 0x48
	::System::String* Field_2_18; // 0x50
	::RPG::Client::MonoHandOverlapTrigger* Field_2_30; // 0x58
	::RPG::Client::MonoDroneAirwallControl* Field_2_24; // 0x60
	::Class_2_5B599AA9B6DFF68F* Field_2_28; // 0x68
	::RPG::Client::MonoControllableHand* Field_2_29; // 0x70
	::Class_1_F6641B177752AEFC* Field_2_32; // 0x78
	::System::String* Field_2_17; // 0x80
	::RPG::GameCore::GameEntity* Field_2_25; // 0x88
	::RPG::GameCore::ESwitchHandGestureType Field_2_31; // 0x90
	::System::Int32 Field_2_9; // 0x94
	::System::Single Field_2_33; // 0x98
	::System::Single Field_2_16; // 0x9C
	::System::Int32 Field_2_10; // 0xA0
	::System::Int32 Field_2_13; // 0xA4
	::UnityEngine::Vector3 Field_2_38; // 0xA8
	::UnityEngine::Quaternion Field_2_39; // 0xB4
	::System::Int32 Field_2_11; // 0xC4
	::System::Int32 Field_2_8; // 0xC8
	::System::Boolean Field_2_42; // 0xCC
	::System::Boolean Field_2_19; // 0xCD
	::System::Boolean Field_2_41; // 0xCE
	::System::Boolean Field_2_22; // 0xCF
	::System::Int32 Field_2_34; // 0xD0
	::System::UInt32 Field_2_20; // 0xD4
	::System::Single Field_2_15; // 0xD8
	::System::Int32 Field_2_12; // 0xDC
	::System::Single Field_2_36; // 0xE0
	::System::Int32 Field_2_14; // 0xE4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2__CCTOR_OFFSET))();
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_ONUNINIT_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_79E872D90798D236(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_79E872D90798D236_OFFSET))(this, a1);
	}

	::System::Void Method_2_FED2DB1B40494A9B(::RPG::GameCore::ESwitchHandGestureType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ESwitchHandGestureType))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_FED2DB1B40494A9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BF244C414C7BEE6(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::String* a3, ::System::Single a4, ::System::Action_1<::System::Boolean>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*, ::System::Single, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_3BF244C414C7BEE6_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_AE901FE5D06D0163(::RPG::GameCore::GameEntity* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_AE901FE5D06D0163_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D89EA8116A628F77(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_D89EA8116A628F77_OFFSET))(this, a1);
	}

	::System::Void Method_2_98060E4D16CBDFE4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_98060E4D16CBDFE4_OFFSET))(this);
	}

	::System::Void Method_2_010163AEE88904F8(::RPG::GameCore::GameEntity* a1, ::Class_2_6BC34AADE687F0FD_CatchItemData* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_2_6BC34AADE687F0FD_CatchItemData*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_010163AEE88904F8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AE901FE5D06D0163_1(::RPG::GameCore::GameEntity* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_AE901FE5D06D0163_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F40AF41B962D2981(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_F40AF41B962D2981_OFFSET))(this, a1);
	}

	::System::Void Method_2_98060E4D16CBDFE4_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_98060E4D16CBDFE4_1_OFFSET))(this);
	}

	::System::Boolean Method_2_FFF5314FB77720C3(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::AdventureHitConfig* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::AdventureHitConfig*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_FFF5314FB77720C3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_18A7BF8B592973BC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_18A7BF8B592973BC_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B66C008535F8B01()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_2B66C008535F8B01_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_2_1F9DB45F7550A899(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_1F9DB45F7550A899_OFFSET))(this, a1);
	}

	::System::Void Method_2_921759D9C6955DBC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_921759D9C6955DBC_OFFSET))(this, a1);
	}

	::System::Void Method_2_A89412D0474E693F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_A89412D0474E693F_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_960032BA2E22793D_OFFSET))(this);
	}

	::System::Void Method_2_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::System::Void Method_2_FB1C56FCE4ABD259(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_FB1C56FCE4ABD259_OFFSET))(this, a1);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_2_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_2_A0374C870A27A45B(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_A0374C870A27A45B_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_7DB49B5407C8FD68_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_7DB49B5407C8FD68_1_OFFSET))(this);
	}

	::System::Void Method_2_53FC3799497FA031(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_53FC3799497FA031_OFFSET))(this, a1);
	}

	::System::Void Method_2_FBC8074367171D08(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_FBC8074367171D08_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_32FE792EB1B0F498(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_32FE792EB1B0F498_OFFSET))(this, a1);
	}

	::System::Void Method_2_5543817C5A5F79C6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_5543817C5A5F79C6_OFFSET))(this, a1);
	}

	::System::Void Method_2_54717D764304782D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_54717D764304782D_OFFSET))(this, a1);
	}

	::System::Void Method_2_8873623EF8C35C8A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_8873623EF8C35C8A_OFFSET))(this, a1);
	}

	::System::Void Method_2_3306F24AC967FE79()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_3306F24AC967FE79_OFFSET))(this);
	}

	::System::Void Method_2_89EF18AF75A19433(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_89EF18AF75A19433_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::Class_1_F6641B177752AEFC* Method_2_95ECDB89C94A0638()
	{
		return ((::Class_1_F6641B177752AEFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_95ECDB89C94A0638_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_151E25A63D14DDB0_1_OFFSET))(this);
	}

	::System::Void Method_2_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_2_87DA5EB0C040E3E5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_87DA5EB0C040E3E5_OFFSET))(this, a1);
	}

	::System::Void Method_2_FBC3D7D544C66CDA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_FBC3D7D544C66CDA_OFFSET))(this, a1);
	}

	::System::Void Method_2_BBA53B4B90B8C63A(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_BBA53B4B90B8C63A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BBA53B4B90B8C63A_1(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_BBA53B4B90B8C63A_1_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Method_2_85C3B0BE7BB243BD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_85C3B0BE7BB243BD_OFFSET))(this);
	}

	::System::String* Method_2_47CC1467027929B1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_47CC1467027929B1_OFFSET))(this, a1);
	}

	::System::String* Method_2_28BB8707B4CC88A2(::UnityEngine::Vector3 a1)
	{
		return ((::System::String*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_28BB8707B4CC88A2_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_7B6EC255F45D034F_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B6EC255F45D034F_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_7B6EC255F45D034F_1_OFFSET))(this, a1);
	}

	::System::Boolean get_NeedTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_GET_NEEDTICK_OFFSET))(this);
	}

	::System::Boolean get_NeedLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_GET_NEEDLATEUPDATE_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::RPG::GameCore::ESwitchHandGestureType Method_2_3ECBFD28BA8C4296()
	{
		return ((::RPG::GameCore::ESwitchHandGestureType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_3ECBFD28BA8C4296_OFFSET))(this);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::RPG::Client::SwitchHandPuzzleBoard* Method_2_F1DA93F8DA3FE8B8()
	{
		return ((::RPG::Client::SwitchHandPuzzleBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_F1DA93F8DA3FE8B8_OFFSET))(this);
	}

	::UnityEngine::Collider* Method_2_914D6046CC39AD24()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_914D6046CC39AD24_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
