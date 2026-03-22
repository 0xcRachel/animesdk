#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_151B93D9C4BBDCA4.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PlayerDisableInteractReason.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_47EE63CB5C4DC8FC_5;
class Class_1_75C90E178B164D38;
class Class_1_867B6CE75953535A_1;
class Class_1_AEA95A1F4A190A36;
class Class_2_0C58AD91B0F4D809;
class Class_3_44EDAE37250FA2DB;
class Class_3_6F62955BDB52DF72;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class FPSCameraOverride; }
namespace RPG::Client::LittleGame { template <typename T> class SimpleEventService_1; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class FourRotateVoxelLevelSettings; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameLevelVarBindingMap; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_D9D2DA2BB37A3C3D_ADDLEVELVARIABLELISTENER_OFFSET UNITYSDK_OFFSET(0x8581DC0)
#define CLASS_2_D9D2DA2BB37A3C3D_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0x85814D0)
#define CLASS_2_D9D2DA2BB37A3C3D_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x85813C0)
#define CLASS_2_D9D2DA2BB37A3C3D_EVALUATELEVELVARNUMBER_OFFSET UNITYSDK_OFFSET(0x8581C70)
#define CLASS_2_D9D2DA2BB37A3C3D_EVALUATELEVELVARSHORT_OFFSET UNITYSDK_OFFSET(0x8581A00)
#define CLASS_2_D9D2DA2BB37A3C3D_GETSERVICES_OFFSET UNITYSDK_OFFSET(0x8581F50)
#define CLASS_2_D9D2DA2BB37A3C3D_GET_SKIPSTARTCURVE_OFFSET UNITYSDK_OFFSET(0x8581250)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_1738FE11B4451187_OFFSET UNITYSDK_OFFSET(0x857B260)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0x857C080)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_486E8C8C2FB1CEBC_OFFSET UNITYSDK_OFFSET(0x857B3B0)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0x857F790)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0x857BCB0)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x857FE50)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x857B470)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0x857D5E0)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x857CFA0)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x857C2A0)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_AA2D3E889C8A52CA_1_OFFSET UNITYSDK_OFFSET(0x857BDA0)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x857BD40)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8580510)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x857D5A0)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x857E3A0)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_D1F5A654A67BB61C_OFFSET UNITYSDK_OFFSET(0x857EB30)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_E4D7CA44911A3A88_OFFSET UNITYSDK_OFFSET(0x8581FA0)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_E727F9956B5BD78B_OFFSET UNITYSDK_OFFSET(0x857EAD0)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x8581240)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_F1EE1DC82503291D_OFFSET UNITYSDK_OFFSET(0x857F090)
#define CLASS_2_D9D2DA2BB37A3C3D_REMOVELEVELVARIABLELISTENER_OFFSET UNITYSDK_OFFSET(0x8581EA0)
#define CLASS_2_D9D2DA2BB37A3C3D_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0x85816C0)
#define CLASS_2_D9D2DA2BB37A3C3D_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x85815B0)
#define CLASS_2_D9D2DA2BB37A3C3D_SETLEVELVARSHORT_OFFSET UNITYSDK_OFFSET(0x8581790)
#define CLASS_2_D9D2DA2BB37A3C3D_SET_SKIPSTARTCURVE_OFFSET UNITYSDK_OFFSET(0x8581260)
#define CLASS_2_D9D2DA2BB37A3C3D_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET UNITYSDK_OFFSET(0x8581320)
#define CLASS_2_D9D2DA2BB37A3C3D_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x8581270)
#define CLASS_2_D9D2DA2BB37A3C3D__CANLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x8580830)
#define CLASS_2_D9D2DA2BB37A3C3D__CCTOR_OFFSET UNITYSDK_OFFSET(0x85820B0)
#define CLASS_2_D9D2DA2BB37A3C3D__CTOR_OFFSET UNITYSDK_OFFSET(0x8582010)
#define CLASS_2_D9D2DA2BB37A3C3D__FINISHINIT_OFFSET UNITYSDK_OFFSET(0x857F600)
#define CLASS_2_D9D2DA2BB37A3C3D__ONCLEAR_OFFSET UNITYSDK_OFFSET(0x8580550)
#define CLASS_2_D9D2DA2BB37A3C3D__ONINIT_OFFSET UNITYSDK_OFFSET(0x857BE00)
#define CLASS_2_D9D2DA2BB37A3C3D__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x8580870)
#define CLASS_2_D9D2DA2BB37A3C3D__ONSTART_OFFSET UNITYSDK_OFFSET(0x857D140)
#define CLASS_2_D9D2DA2BB37A3C3D__ONSTOP_OFFSET UNITYSDK_OFFSET(0x8580000)
#define CLASS_2_D9D2DA2BB37A3C3D__ONTICK_OFFSET UNITYSDK_OFFSET(0x8580950)
#define CLASS_2_D9D2DA2BB37A3C3D__SETPOSTPROCESSONCLEAR_OFFSET UNITYSDK_OFFSET(0x85807F0)
#define CLASS_2_D9D2DA2BB37A3C3D__SETPOSTPROCESSONINIT_OFFSET UNITYSDK_OFFSET(0x85807B0)
#define CLASS_2_D9D2DA2BB37A3C3D__STARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x857FFC0)
#define CLASS_2_D9D2DA2BB37A3C3D___BUILDENTITIES_G__GETINDEX_34_2_OFFSET UNITYSDK_OFFSET(0x85821A0)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_ADDLEVELVARIABLELISTENER_OFFSET UNITYSDK_OFFSET(0x8582640)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0x85825E0)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x85825D0)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_EVALUATELEVELVARNUMBER_OFFSET UNITYSDK_OFFSET(0x8582630)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_EVALUATELEVELVARSHORT_OFFSET UNITYSDK_OFFSET(0x8582620)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_GETSERVICES_OFFSET UNITYSDK_OFFSET(0x8582660)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_REMOVELEVELVARIABLELISTENER_OFFSET UNITYSDK_OFFSET(0x8582650)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0x8582600)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x85825F0)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_SETLEVELVARSHORT_OFFSET UNITYSDK_OFFSET(0x8582610)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET UNITYSDK_OFFSET(0x85825C0)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x85825B0)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__CANLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x8582460)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__FINISHINIT_OFFSET UNITYSDK_OFFSET(0x8582310)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__ONCLEAR_OFFSET UNITYSDK_OFFSET(0x85823E0)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__ONINIT_OFFSET UNITYSDK_OFFSET(0x8582240)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x85824D0)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__ONSTART_OFFSET UNITYSDK_OFFSET(0x85822B0)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__ONSTOP_OFFSET UNITYSDK_OFFSET(0x8582380)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x8582540)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__SETPOSTPROCESSONCLEAR_OFFSET UNITYSDK_OFFSET(0x8582450)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__SETPOSTPROCESSONINIT_OFFSET UNITYSDK_OFFSET(0x8582440)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__STARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x8582370)
#define CLASS_2_D9D2DA2BB37A3C3D___ONTICK_B__33_0_OFFSET UNITYSDK_OFFSET(0x85820F0)

inline static constexpr unsigned int Class_2_D9D2DA2BB37A3C3D_TypeDefinitionIndex = 47828;

class Class_2_D9D2DA2BB37A3C3D : public ::Class_1_151B93D9C4BBDCA4
{
public:
	static ::Class_2_D9D2DA2BB37A3C3D** StaticGet_Field_2_0()
	{
		return (::Class_2_D9D2DA2BB37A3C3D**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D9D2DA2BB37A3C3D_TypeDefinitionIndex)->GetStaticField(0x468B0);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D9D2DA2BB37A3C3D_TypeDefinitionIndex)->GetStaticField(0x108B0);
	}
	::Class_3_6F62955BDB52DF72* Field_2_9; // 0x78
	::RPG::GameCore::GameEntity* Field_2_3; // 0x80
	::RPG::GameCore::LittleGameLevelVarBindingMap* Field_2_15; // 0x88
	::System::String* Field_2_5; // 0x90
	::RPG::Client::AdventurePhase* Field_2_2; // 0x98
	::Class_3_44EDAE37250FA2DB* Field_2_8; // 0xA0
	::UnityEngine::GameObject* Field_2_14; // 0xA8
	::RPG::Client::LittleGame::SimpleEventService_1<::Class_2_0C58AD91B0F4D809*>* Field_2_7; // 0xB0
	::UnityEngine::GameObject* Field_2_13; // 0xB8
	::Class_1_867B6CE75953535A_1* Field_2_6; // 0xC0
	::RPG::Client::FPSCameraOverride* Field_2_12; // 0xC8
	::System::Boolean Field_2_11; // 0xD0
	::System::Boolean _SkipStartCurve_k__BackingField; // 0xD1
	::System::Boolean Field_2_10; // 0xD2
	::System::Single Field_2_4; // 0xD4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__CCTOR_OFFSET))();
	}

	::Class_1_AEA95A1F4A190A36* Method_2_1738FE11B4451187()
	{
		return ((::Class_1_AEA95A1F4A190A36*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_1738FE11B4451187_OFFSET))(this);
	}

	::System::Void Method_2_486E8C8C2FB1CEBC(::Class_1_AEA95A1F4A190A36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AEA95A1F4A190A36*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_486E8C8C2FB1CEBC_OFFSET))(this, a1);
	}

	::System::Void Method_2_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_7EAA8879197594BA_OFFSET))(this);
	}

	::System::Void Method_2_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_626C719A884DEF9A_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::UInt32 Method_2_AA2D3E889C8A52CA_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_AA2D3E889C8A52CA_1_OFFSET))(this);
	}

	::System::Void _OnInit(::Class_1_75C90E178B164D38* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_75C90E178B164D38*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__ONINIT_OFFSET))(this, a1);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void _OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_CEA32FF190776922()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_CEA32FF190776922_OFFSET))(this);
	}

	::System::Void Method_2_E727F9956B5BD78B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_E727F9956B5BD78B_OFFSET))(this);
	}

	::System::Void Method_2_D1F5A654A67BB61C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_D1F5A654A67BB61C_OFFSET))(this);
	}

	::System::Void Method_2_F1EE1DC82503291D(::RPG::GameCore::FourRotateVoxelLevelSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelLevelSettings*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_F1EE1DC82503291D_OFFSET))(this, a1);
	}

	::System::Void _FinishInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__FINISHINIT_OFFSET))(this);
	}

	::System::Void _StartLevelGraph()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__STARTLEVELGRAPH_OFFSET))(this);
	}

	::System::Void Method_2_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_2_5D3D37F2BAE9FB65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_5D3D37F2BAE9FB65_OFFSET))(this);
	}

	::System::Void _OnStop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__ONSTOP_OFFSET))(this);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_1ABF1CBED7A4AF0A_OFFSET))(this);
	}

	::System::Void _OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__ONCLEAR_OFFSET))(this);
	}

	::System::Void _SetPostProcessOnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__SETPOSTPROCESSONINIT_OFFSET))(this);
	}

	::System::Void _SetPostProcessOnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__SETPOSTPROCESSONCLEAR_OFFSET))(this);
	}

	::System::Boolean _CanLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__CANLATEUPDATE_OFFSET))(this);
	}

	::System::Void _OnLateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__ONLATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_81FEFD1B22CE37A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_81FEFD1B22CE37A2_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean get_SkipStartCurve()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_GET_SKIPSTARTCURVE_OFFSET))(this);
	}

	::System::Void set_SkipStartCurve(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_SET_SKIPSTARTCURVE_OFFSET))(this, value);
	}

	::System::Void TriggerLittleGameCustomEvent(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET))(this, a1);
	}

	::System::Void TriggerLittleGameCustomEvent_1(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET))(this, a1, a2);
	}

	::System::Void AddLittleGameCustomEventListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET))(this, a1, a2);
	}

	::System::Void AddLittleGameCustomEventListener_1(::System::String* a1, ::System::UInt32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void RemoveLittleGameCustomEventListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET))(this, a1, a2);
	}

	::System::Void RemoveLittleGameCustomEventListener_1(::System::String* a1, ::System::UInt32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetLevelVarShort(::System::String* a1, ::RPG::GameCore::DynamicFloat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_SETLEVELVARSHORT_OFFSET))(this, a1, a2);
	}

	::System::Int16 EvaluateLevelVarShort(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::System::Int16(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_EVALUATELEVELVARSHORT_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint EvaluateLevelVarNumber(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_EVALUATELEVELVARNUMBER_OFFSET))(this, a1);
	}

	::System::Void AddLevelVariableListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_ADDLEVELVARIABLELISTENER_OFFSET))(this, a1, a2);
	}

	::System::Void RemoveLevelVariableListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_REMOVELEVELVARIABLELISTENER_OFFSET))(this, a1, a2);
	}

	::Class_1_47EE63CB5C4DC8FC_5* GetServices()
	{
		return ((::Class_1_47EE63CB5C4DC8FC_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_GETSERVICES_OFFSET))(this);
	}

	::System::Void Method_2_E4D7CA44911A3A88(::System::Boolean a1, ::RPG::Client::LittleGame::FiveDim::PlayerDisableInteractReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::LittleGame::FiveDim::PlayerDisableInteractReason))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_E4D7CA44911A3A88_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void __OnTick_b__33_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___ONTICK_B__33_0_OFFSET))(this);
	}

	static ::System::Int32 __BuildEntities_g__GetIndex_34_2(::RPG::GameCore::LittleGameEntityConfig* x)
	{
		return ((::System::Int32(*)(::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___BUILDENTITIES_G__GETINDEX_34_2_OFFSET))(x);
	}

	::System::Void __iFixBaseProxy__OnInit(::Class_1_75C90E178B164D38* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_75C90E178B164D38*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__ONINIT_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__ONSTART_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__FinishInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__FINISHINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__StartLevelGraph()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__STARTLEVELGRAPH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnStop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__ONSTOP_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__ONCLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetPostProcessOnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__SETPOSTPROCESSONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetPostProcessOnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__SETPOSTPROCESSONCLEAR_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__CanLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__CANLATEUPDATE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnLateUpdate(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__ONLATEUPDATE_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_TriggerLittleGameCustomEvent(::System::String* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_TriggerLittleGameCustomEvent_1(::System::String* P0, ::System::UInt32 P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_AddLittleGameCustomEventListener(::System::String* P0, ::System::Action* P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_AddLittleGameCustomEventListener_1(::System::String* P0, ::System::UInt32 P1, ::System::Action* P2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __iFixBaseProxy_RemoveLittleGameCustomEventListener(::System::String* P0, ::System::Action* P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_RemoveLittleGameCustomEventListener_1(::System::String* P0, ::System::UInt32 P1, ::System::Action* P2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __iFixBaseProxy_SetLevelVarShort(::System::String* P0, ::RPG::GameCore::DynamicFloat* P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_SETLEVELVARSHORT_OFFSET))(this, P0, P1);
	}

	::System::Int16 __iFixBaseProxy_EvaluateLevelVarShort(::RPG::GameCore::DynamicFloat* P0)
	{
		return ((::System::Int16(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_EVALUATELEVELVARSHORT_OFFSET))(this, P0);
	}

	::RPG::GameCore::FixPoint __iFixBaseProxy_EvaluateLevelVarNumber(::RPG::GameCore::DynamicFloat* P0)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_EVALUATELEVELVARNUMBER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AddLevelVariableListener(::System::String* P0, ::System::Action* P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_ADDLEVELVARIABLELISTENER_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_RemoveLevelVariableListener(::System::String* P0, ::System::Action* P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_REMOVELEVELVARIABLELISTENER_OFFSET))(this, P0, P1);
	}

	::Class_1_47EE63CB5C4DC8FC_5* __iFixBaseProxy_GetServices()
	{
		return ((::Class_1_47EE63CB5C4DC8FC_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_GETSERVICES_OFFSET))(this);
	}
};
