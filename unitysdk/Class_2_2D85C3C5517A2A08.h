#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/Class_2_2D85C3C5517A2A08_TransitionMode.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_30B5FE4AA7ABAB8C;
class Class_1_E34FF29EE1CCACD4;
class Class_2_2D85C3C5517A2A08_TransitionShotData;
namespace RPG::Client { class BattleTransitionModuleConfig; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_2D85C3C5517A2A08_METHOD_2_02C9D3E4CF92A0EA_OFFSET UNITYSDK_OFFSET(0x876E9F0)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x876D240)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x876D2B0)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x876BE00)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_37011B6DDBE4CF26_OFFSET UNITYSDK_OFFSET(0x876D100)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_3BFE3B9EF8374F61_OFFSET UNITYSDK_OFFSET(0x876D930)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_3FD7F404CBE15205_OFFSET UNITYSDK_OFFSET(0x876DAB0)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x876F460)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x876F7C0)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_61743D762B88668C_OFFSET UNITYSDK_OFFSET(0x876B790)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_65115CD0067642FB_OFFSET UNITYSDK_OFFSET(0x876F750)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_658EE8727A9219A5_OFFSET UNITYSDK_OFFSET(0x876B9C0)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_6DB394AEB9D6B279_OFFSET UNITYSDK_OFFSET(0x876F210)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0x876E390)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x876B940)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x876BC00)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_9C72894CB5D45A5A_OFFSET UNITYSDK_OFFSET(0x876BB30)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_AFDBE2353EC32F1F_OFFSET UNITYSDK_OFFSET(0x876F6B0)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_B71A1FD8E76D8130_OFFSET UNITYSDK_OFFSET(0x876DBF0)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x876E340)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x876C420)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_E05ADF64DE351167_OFFSET UNITYSDK_OFFSET(0x876C7B0)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x876EE10)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_F27A64F8FEB174E3_OFFSET UNITYSDK_OFFSET(0x876C460)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_F6A9BCB6F5A4C097_OFFSET UNITYSDK_OFFSET(0x876D990)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_FB1640F63143C0EA_OFFSET UNITYSDK_OFFSET(0x876C3C0)
#define CLASS_2_2D85C3C5517A2A08__CCTOR_OFFSET UNITYSDK_OFFSET(0x876F680)
#define CLASS_2_2D85C3C5517A2A08__CTOR_1_OFFSET UNITYSDK_OFFSET(0x876B750)
#define CLASS_2_2D85C3C5517A2A08__CTOR_OFFSET UNITYSDK_OFFSET(0x876B740)

inline static constexpr unsigned int Class_2_2D85C3C5517A2A08_TypeDefinitionIndex = 55358;

class Class_2_2D85C3C5517A2A08 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	static ::System::Int32* StaticGet_Field_2_27()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2D85C3C5517A2A08_TypeDefinitionIndex)->GetStaticField(0xF300);
	}
	::Class_2_2D85C3C5517A2A08_TransitionShotData* Field_2_7; // 0x38
	::Class_2_2D85C3C5517A2A08_TransitionShotData* Field_2_10; // 0x40
	::RPG::Client::BattleTransitionModuleConfig* Field_2_28; // 0x48
	::Class_2_2D85C3C5517A2A08_TransitionShotData* Field_2_6; // 0x50
	::Class_1_E34FF29EE1CCACD4* Field_2_1; // 0x58
	::Class_1_E34FF29EE1CCACD4* Field_2_17; // 0x60
	::Class_2_2D85C3C5517A2A08_TransitionShotData* Field_2_11; // 0x68
	::Class_2_2D85C3C5517A2A08_TransitionShotData* Field_2_9; // 0x70
	::Class_2_2D85C3C5517A2A08_TransitionShotData* Field_2_8; // 0x78
	::Class_2_2D85C3C5517A2A08_TransitionShotData* Field_2_5; // 0x80
	::UnityEngine::Vector3 Field_2_19; // 0x88
	::UnityEngine::Vector3 Field_2_3; // 0x94
	::UnityEngine::Vector3 Field_2_18; // 0xA0
	::Class_2_2D85C3C5517A2A08_TransitionMode Field_2_0; // 0xAC
	::System::Single Field_2_14; // 0xB0
	::System::Single Field_2_15; // 0xB4
	::System::Single Field_2_24; // 0xB8
	::System::Boolean Field_2_29; // 0xBC
	::System::Boolean Field_2_13; // 0xBD
	::System::Boolean Field_2_12; // 0xBE
	::System::Boolean Field_2_26; // 0xBF
	::System::Single Field_2_20; // 0xC0
	::System::Single Field_2_23; // 0xC4
	::System::Single Field_2_21; // 0xC8
	::System::Single Field_2_25; // 0xCC
	::System::Int32 Field_2_16; // 0xD0
	::System::Single Field_2_4; // 0xD4
	::UnityEngine::Vector3 Field_2_2; // 0xD8
	::System::Single Field_2_22; // 0xE4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08__CCTOR_OFFSET))();
	}

	::System::Void Method_2_61743D762B88668C(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_61743D762B88668C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_658EE8727A9219A5(::Class_1_30B5FE4AA7ABAB8C* a1, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30B5FE4AA7ABAB8C*, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>*))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_658EE8727A9219A5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_9C72894CB5D45A5A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_9C72894CB5D45A5A_OFFSET))(this);
	}

	::System::Void Method_2_3574512695A597AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_3574512695A597AB_OFFSET))(this);
	}

	::System::Void Method_2_3BFE3B9EF8374F61()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_3BFE3B9EF8374F61_OFFSET))(this);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_2_FB1640F63143C0EA(::Class_2_2D85C3C5517A2A08_TransitionMode a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_2D85C3C5517A2A08_TransitionMode))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_FB1640F63143C0EA_OFFSET))(this, a1);
	}

	::System::Void Method_2_F27A64F8FEB174E3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_F27A64F8FEB174E3_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_B71A1FD8E76D8130()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_B71A1FD8E76D8130_OFFSET))(this);
	}

	::Class_2_2D85C3C5517A2A08_TransitionShotData* Method_2_F6A9BCB6F5A4C097()
	{
		return ((::Class_2_2D85C3C5517A2A08_TransitionShotData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_F6A9BCB6F5A4C097_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_3FD7F404CBE15205(::Class_2_2D85C3C5517A2A08_TransitionShotData* a1, ::Class_2_2D85C3C5517A2A08_TransitionShotData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2D85C3C5517A2A08_TransitionShotData*, ::Class_2_2D85C3C5517A2A08_TransitionShotData*))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_3FD7F404CBE15205_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E05ADF64DE351167(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_E05ADF64DE351167_OFFSET))(this, a1);
	}

	::System::Void Method_2_755870B55A8B3AFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_755870B55A8B3AFF_OFFSET))(this);
	}

	::System::Boolean Method_2_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_E5695720AB0F6E98_OFFSET))(this);
	}

	::System::Void Method_2_02C9D3E4CF92A0EA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_02C9D3E4CF92A0EA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_37011B6DDBE4CF26()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_37011B6DDBE4CF26_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_2_6DB394AEB9D6B279(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_6DB394AEB9D6B279_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_AFDBE2353EC32F1F(::RPG::Client::PipelineCameraEngine* P0, ::RPG::Client::CameraModuleConfigCollection* P1, ::RPG::Client::PipelineCameraGlobalConfig* P2, ::RPG::Client::CameraDataAndFlags* P3, ::RPG::Client::CameraModuleType P4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_AFDBE2353EC32F1F_OFFSET))(this, P0, P1, P2, P3, P4);
	}

	::System::Void Method_2_65115CD0067642FB(::Class_1_30B5FE4AA7ABAB8C* P0, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>* P1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30B5FE4AA7ABAB8C*, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>*))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_65115CD0067642FB_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
