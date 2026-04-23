#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/RenderTestMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_0_16E4307DCC419505_299;
class Class_1_004034A1FAAF468A;
class Class_1_6B41D5D37BA0605F;
namespace RPG::Client { class DebugRenderTestCamera; }
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::GameCore { class RenderTestItemJson; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class VolumeProfile; }

#define CLASS_1_C60D2BC78CA45019_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10894C70)
#define CLASS_1_C60D2BC78CA45019_ENTER_OFFSET UNITYSDK_OFFSET(0x10895190)
#define CLASS_1_C60D2BC78CA45019_GETENVIRONMENTSYSTEM_OFFSET UNITYSDK_OFFSET(0x10896640)
#define CLASS_1_C60D2BC78CA45019_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x108965F0)
#define CLASS_1_C60D2BC78CA45019_GET_CAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x108993D0)
#define CLASS_1_C60D2BC78CA45019_GET_CURMODELPATH_OFFSET UNITYSDK_OFFSET(0x108993F0)
#define CLASS_1_C60D2BC78CA45019_GET_CURTARGETCHARACTER_OFFSET UNITYSDK_OFFSET(0x108993B0)
#define CLASS_1_C60D2BC78CA45019_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10896080)
#define CLASS_1_C60D2BC78CA45019_LEAVE_OFFSET UNITYSDK_OFFSET(0x10896290)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_0C60A530AA0118C2_OFFSET UNITYSDK_OFFSET(0x10898720)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x10896680)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x10895CC0)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x10896310)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x10895080)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_19FB5FBEA9EA66CD_1_OFFSET UNITYSDK_OFFSET(0x108964D0)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x10895B80)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x10898770)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_2CE52CE032F120BC_OFFSET UNITYSDK_OFFSET(0x10898690)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_2ECB6C44A24F8B05_OFFSET UNITYSDK_OFFSET(0x10895F40)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x10897780)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x10895A20)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0x108990B0)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x10898E50)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_469183E373DE8A3B_OFFSET UNITYSDK_OFFSET(0x10896890)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_49EE381760174C5A_OFFSET UNITYSDK_OFFSET(0x10899280)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_6E567866C2EC7AA0_OFFSET UNITYSDK_OFFSET(0x10897A50)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0x10898140)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x10898940)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0x10898AB0)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_8801E17996F45E0D_1_OFFSET UNITYSDK_OFFSET(0x10897470)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_8801E17996F45E0D_OFFSET UNITYSDK_OFFSET(0x10897E30)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_8923446497E3D0C5_OFFSET UNITYSDK_OFFSET(0x10895850)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x108985D0)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0x10896F40)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x10895DD0)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x10896D70)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_9F6799F6A7C5E6F2_OFFSET UNITYSDK_OFFSET(0x10896CC0)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x10894FD0)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_A52062643A2DBAD8_OFFSET UNITYSDK_OFFSET(0x10896160)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_AA38E4FCB3EE00FC_OFFSET UNITYSDK_OFFSET(0x10897020)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x10898BE0)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_C332681133FB1A7B_OFFSET UNITYSDK_OFFSET(0x108981F0)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_E30A96E323F0C9DA_OFFSET UNITYSDK_OFFSET(0x10896B60)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x108988F0)
#define CLASS_1_C60D2BC78CA45019_METHOD_1_E42D85D6668A6C8C_OFFSET UNITYSDK_OFFSET(0x10896E20)
#define CLASS_1_C60D2BC78CA45019_SET_CAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x108993E0)
#define CLASS_1_C60D2BC78CA45019_SET_CURMODELPATH_OFFSET UNITYSDK_OFFSET(0x10899400)
#define CLASS_1_C60D2BC78CA45019_SET_CURTARGETCHARACTER_OFFSET UNITYSDK_OFFSET(0x108993C0)
#define CLASS_1_C60D2BC78CA45019_TICK_OFFSET UNITYSDK_OFFSET(0x10896020)
#define CLASS_1_C60D2BC78CA45019__CCTOR_OFFSET UNITYSDK_OFFSET(0x10899410)
#define CLASS_1_C60D2BC78CA45019__CTOR_OFFSET UNITYSDK_OFFSET(0x10894C20)

inline static constexpr unsigned int Class_1_C60D2BC78CA45019_TypeDefinitionIndex = 56447;

class Class_1_C60D2BC78CA45019 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_30()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C60D2BC78CA45019_TypeDefinitionIndex)->GetStaticField(0x68CD0);
	}
	static ::System::String** StaticGet_Field_1_32()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C60D2BC78CA45019_TypeDefinitionIndex)->GetStaticField(0x68CD8);
	}
	static ::System::String** StaticGet_Field_1_28()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C60D2BC78CA45019_TypeDefinitionIndex)->GetStaticField(0x68CE0);
	}
	static ::System::String** StaticGet_Field_1_31()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C60D2BC78CA45019_TypeDefinitionIndex)->GetStaticField(0x68CE8);
	}
	static ::System::String** StaticGet_Field_1_29()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C60D2BC78CA45019_TypeDefinitionIndex)->GetStaticField(0x68CF0);
	}
	::RPG::Client::EnvironmentSystem* Field_1_7; // 0x10
	::Class_1_004034A1FAAF468A* Field_1_13; // 0x18
	::UnityEngine::Object* Field_1_27; // 0x20
	::Class_0_16E4307DCC419505_299* Field_1_8; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Object*>* Field_1_11; // 0x30
	::UnityEngine::Transform* _CurTargetCharacter_k__BackingField; // 0x38
	::Class_1_004034A1FAAF468A* Field_1_14; // 0x40
	::Class_1_004034A1FAAF468A* Field_1_10; // 0x48
	::Class_1_004034A1FAAF468A* Field_1_16; // 0x50
	::UnityEngine::Rendering::VolumeProfile* Field_1_26; // 0x58
	::System::String* Field_1_15; // 0x60
	::Class_1_004034A1FAAF468A* Field_1_20; // 0x68
	::UnityEngine::Material* Field_1_19; // 0x70
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_12; // 0x78
	::UnityEngine::Renderer* Field_1_18; // 0x80
	::Class_0_16E4307DCC419505_299* Field_1_9; // 0x88
	::RPG::Client::PipelineCameraEngine* Field_1_21; // 0x90
	::RPG::Client::DebugRenderTestCamera* _CameraConfig_k__BackingField; // 0x98
	::System::String* _CurModelPath_k__BackingField; // 0xA0
	::UnityEngine::Vector3 Field_1_22; // 0xA8
	::System::Int32 Field_1_5; // 0xB4
	::System::Single Field_1_4; // 0xB8
	::System::Boolean Field_1_3; // 0xBC
	::UnityEngine::Vector3 Field_1_23; // 0xC0
	::UnityEngine::Vector3 Field_1_25; // 0xCC
	::RPG::Client::RenderTestMode Field_1_6; // 0xD8
	::UnityEngine::Vector3 Field_1_17; // 0xDC
	::UnityEngine::Vector3 Field_1_24; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Enter()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_ENTER_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_LEAVE_OFFSET))(this, a1);
	}

	::RPG::Client::GamePhaseType GetGamePhaseType()
	{
		return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_GETGAMEPHASETYPE_OFFSET))(this);
	}

	::RPG::Client::EnvironmentSystem* GetEnvironmentSystem()
	{
		return ((::RPG::Client::EnvironmentSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_GETENVIRONMENTSYSTEM_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_1_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	::System::Void Method_1_19FB5FBEA9EA66CD_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_19FB5FBEA9EA66CD_1_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_469183E373DE8A3B(::System::String* a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_469183E373DE8A3B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9F6799F6A7C5E6F2(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_9F6799F6A7C5E6F2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_1_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_1_E42D85D6668A6C8C(::RPG::GameCore::RenderTestItemJson* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RenderTestItemJson*))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_E42D85D6668A6C8C_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_1_97889423B3D78768()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_97889423B3D78768_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_AA38E4FCB3EE00FC(::System::String* a1, ::System::Single a2, ::System::String* a3)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_AA38E4FCB3EE00FC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_73FB9DE4849AF1B5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_73FB9DE4849AF1B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_8801E17996F45E0D(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_8801E17996F45E0D_OFFSET))(this, a1);
	}

	::System::Void Method_1_8801E17996F45E0D_1(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_8801E17996F45E0D_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void Method_1_6E567866C2EC7AA0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_6E567866C2EC7AA0_OFFSET))(this, a1);
	}

	::System::Void Method_1_C332681133FB1A7B(::UnityEngine::GameObject*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_C332681133FB1A7B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CE52CE032F120BC(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_2CE52CE032F120BC_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_0C60A530AA0118C2()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_0C60A530AA0118C2_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_1290EA767C459179_1_OFFSET))(this);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_2ECB6C44A24F8B05(::RPG::Client::RenderTestMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RenderTestMode))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_2ECB6C44A24F8B05_OFFSET))(this, a1);
	}

	::System::Void Method_1_A52062643A2DBAD8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_A52062643A2DBAD8_OFFSET))(this, a1);
	}

	::System::Void Method_1_459C79521BFE514E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_459C79521BFE514E_OFFSET))(this, a1);
	}

	::System::Void Method_1_49EE381760174C5A(::UnityEngine::Vector4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_49EE381760174C5A_OFFSET))(this, a1);
	}

	::System::Void Method_1_870AF3CD1D0A67B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_870AF3CD1D0A67B1_OFFSET))(this);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_1_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_B06F516E4459C742_OFFSET))(this);
	}

	::System::Void Method_1_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_1_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_464B80C09A37526F_OFFSET))(this);
	}

	::System::Void Method_1_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_1_8923446497E3D0C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_8923446497E3D0C5_OFFSET))(this);
	}

	::System::Void Method_1_E30A96E323F0C9DA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_E30A96E323F0C9DA_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::UnityEngine::Transform* get_CurTargetCharacter()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_GET_CURTARGETCHARACTER_OFFSET))(this);
	}

	::System::Void set_CurTargetCharacter(::UnityEngine::Transform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_SET_CURTARGETCHARACTER_OFFSET))(this, value);
	}

	::RPG::Client::DebugRenderTestCamera* get_CameraConfig()
	{
		return ((::RPG::Client::DebugRenderTestCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_GET_CAMERACONFIG_OFFSET))(this);
	}

	::System::Void set_CameraConfig(::RPG::Client::DebugRenderTestCamera* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DebugRenderTestCamera*))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_SET_CAMERACONFIG_OFFSET))(this, value);
	}

	::System::String* get_CurModelPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_GET_CURMODELPATH_OFFSET))(this);
	}

	::System::Void set_CurModelPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C60D2BC78CA45019_SET_CURMODELPATH_OFFSET))(this, value);
	}
};
