#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/Class_1_A214C2B77618A37D_TestPlanesResults.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"
#include "unitysdk/RPG/MQuaternion.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_799;
class Class_1_AA5627556691B674;
class Class_1_D2B8D50DD9833CFC;
namespace Cinemachine { class CinemachineBrain; }
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class ICameraFightState; }
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class VCameraBlend; }
namespace RPG::GameCore { class VCameraConfig; }
namespace RPG::GameCore { class VCameraFreelook3rdConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_1_A214C2B77618A37D_METHOD_1_039B14E9DF496733_OFFSET UNITYSDK_OFFSET(0xA9B2540)
#define CLASS_1_A214C2B77618A37D_METHOD_1_07102D52E522A52C_OFFSET UNITYSDK_OFFSET(0xA9AA140)
#define CLASS_1_A214C2B77618A37D_METHOD_1_07F47BD71D685D69_OFFSET UNITYSDK_OFFSET(0xA9B0FA0)
#define CLASS_1_A214C2B77618A37D_METHOD_1_0E976279993A6463_OFFSET UNITYSDK_OFFSET(0xA9AB3E0)
#define CLASS_1_A214C2B77618A37D_METHOD_1_0EED83C52D83728F_OFFSET UNITYSDK_OFFSET(0xA9B1D80)
#define CLASS_1_A214C2B77618A37D_METHOD_1_10867B69EFBCA83E_OFFSET UNITYSDK_OFFSET(0xA9A8B30)
#define CLASS_1_A214C2B77618A37D_METHOD_1_131270D628598FC6_OFFSET UNITYSDK_OFFSET(0xA9AD680)
#define CLASS_1_A214C2B77618A37D_METHOD_1_33012CEA52AB175A_OFFSET UNITYSDK_OFFSET(0xA9AD3F0)
#define CLASS_1_A214C2B77618A37D_METHOD_1_345EF29602ABA39A_OFFSET UNITYSDK_OFFSET(0xA9B1B40)
#define CLASS_1_A214C2B77618A37D_METHOD_1_3636839047123195_OFFSET UNITYSDK_OFFSET(0xA9B20B0)
#define CLASS_1_A214C2B77618A37D_METHOD_1_36E7A4EC9082B0F3_OFFSET UNITYSDK_OFFSET(0xA9B0B00)
#define CLASS_1_A214C2B77618A37D_METHOD_1_377AA00E718475DF_OFFSET UNITYSDK_OFFSET(0xA9A9B50)
#define CLASS_1_A214C2B77618A37D_METHOD_1_37EEC77C4F8C3E93_OFFSET UNITYSDK_OFFSET(0xA9AE890)
#define CLASS_1_A214C2B77618A37D_METHOD_1_3C5307F598D88590_OFFSET UNITYSDK_OFFSET(0xA9AA360)
#define CLASS_1_A214C2B77618A37D_METHOD_1_410582CDD4D1FEA3_OFFSET UNITYSDK_OFFSET(0xA9B17B0)
#define CLASS_1_A214C2B77618A37D_METHOD_1_4314555060268815_OFFSET UNITYSDK_OFFSET(0xA9A9440)
#define CLASS_1_A214C2B77618A37D_METHOD_1_49C6583E97C558DC_OFFSET UNITYSDK_OFFSET(0xA9A9120)
#define CLASS_1_A214C2B77618A37D_METHOD_1_536E673ED0B916BA_OFFSET UNITYSDK_OFFSET(0xA9A8C80)
#define CLASS_1_A214C2B77618A37D_METHOD_1_54C4999AD8BA51B0_OFFSET UNITYSDK_OFFSET(0xA9A8DC0)
#define CLASS_1_A214C2B77618A37D_METHOD_1_5BB75F2A9E765631_OFFSET UNITYSDK_OFFSET(0xA9A8E60)
#define CLASS_1_A214C2B77618A37D_METHOD_1_5F821FBEC78A26FB_OFFSET UNITYSDK_OFFSET(0xA9B1080)
#define CLASS_1_A214C2B77618A37D_METHOD_1_6B567837359D7974_OFFSET UNITYSDK_OFFSET(0xA9B1940)
#define CLASS_1_A214C2B77618A37D_METHOD_1_72788DF9FB018326_OFFSET UNITYSDK_OFFSET(0xA9AC0F0)
#define CLASS_1_A214C2B77618A37D_METHOD_1_75362892DB78D160_OFFSET UNITYSDK_OFFSET(0xA9AABE0)
#define CLASS_1_A214C2B77618A37D_METHOD_1_78E0835F5F9ACC27_OFFSET UNITYSDK_OFFSET(0xA9A9CD0)
#define CLASS_1_A214C2B77618A37D_METHOD_1_7B5CF29097D2700A_OFFSET UNITYSDK_OFFSET(0xA9AD2A0)
#define CLASS_1_A214C2B77618A37D_METHOD_1_801971704576A210_OFFSET UNITYSDK_OFFSET(0xA9ABF50)
#define CLASS_1_A214C2B77618A37D_METHOD_1_85BE21E91E0DF4EA_OFFSET UNITYSDK_OFFSET(0xA9ABCE0)
#define CLASS_1_A214C2B77618A37D_METHOD_1_8ADA98900A3F8A09_OFFSET UNITYSDK_OFFSET(0xA9AE7B0)
#define CLASS_1_A214C2B77618A37D_METHOD_1_8EF1F50986F3708C_OFFSET UNITYSDK_OFFSET(0xA9AB680)
#define CLASS_1_A214C2B77618A37D_METHOD_1_92CE60A2D0EDB315_OFFSET UNITYSDK_OFFSET(0xA9AC270)
#define CLASS_1_A214C2B77618A37D_METHOD_1_94DD251267B2C35C_OFFSET UNITYSDK_OFFSET(0xA9AEF40)
#define CLASS_1_A214C2B77618A37D_METHOD_1_A33093C8E9E03E08_OFFSET UNITYSDK_OFFSET(0xA9B06B0)
#define CLASS_1_A214C2B77618A37D_METHOD_1_A46C25C9468879BF_OFFSET UNITYSDK_OFFSET(0xA9AF540)
#define CLASS_1_A214C2B77618A37D_METHOD_1_A6A785EDA1001609_OFFSET UNITYSDK_OFFSET(0xA9B2780)
#define CLASS_1_A214C2B77618A37D_METHOD_1_A7F6540F92D653BD_OFFSET UNITYSDK_OFFSET(0xA9A9F20)
#define CLASS_1_A214C2B77618A37D_METHOD_1_AA4B844A0C789EB2_OFFSET UNITYSDK_OFFSET(0xA9AD340)
#define CLASS_1_A214C2B77618A37D_METHOD_1_B199648B35657B1C_OFFSET UNITYSDK_OFFSET(0xA9B1E10)
#define CLASS_1_A214C2B77618A37D_METHOD_1_BD0AD131EE48698A_OFFSET UNITYSDK_OFFSET(0xA9AF440)
#define CLASS_1_A214C2B77618A37D_METHOD_1_BE905BB20CF31ED6_OFFSET UNITYSDK_OFFSET(0xA9B21C0)
#define CLASS_1_A214C2B77618A37D_METHOD_1_CE20FDA4D86B39C9_OFFSET UNITYSDK_OFFSET(0xA9AF620)
#define CLASS_1_A214C2B77618A37D_METHOD_1_D00A220CF60A4357_OFFSET UNITYSDK_OFFSET(0xA9ABFA0)
#define CLASS_1_A214C2B77618A37D_METHOD_1_D0D2187E1B16FF24_OFFSET UNITYSDK_OFFSET(0xA9B0530)
#define CLASS_1_A214C2B77618A37D_METHOD_1_DEBEF7B95160E077_OFFSET UNITYSDK_OFFSET(0xA9AA520)
#define CLASS_1_A214C2B77618A37D_METHOD_1_E5320DFC32CDF79E_OFFSET UNITYSDK_OFFSET(0xA9B10D0)
#define CLASS_1_A214C2B77618A37D_METHOD_1_EA9DD40FB77BF9A6_OFFSET UNITYSDK_OFFSET(0xA9ACAE0)
#define CLASS_1_A214C2B77618A37D_METHOD_1_EC1B7452242AE25F_OFFSET UNITYSDK_OFFSET(0xA9AA700)
#define CLASS_1_A214C2B77618A37D_METHOD_1_EEA74E0937BADBE9_OFFSET UNITYSDK_OFFSET(0xA9ABB00)
#define CLASS_1_A214C2B77618A37D_METHOD_1_EF9172EB0556775E_OFFSET UNITYSDK_OFFSET(0xA9AB540)
#define CLASS_1_A214C2B77618A37D_METHOD_1_F0BB96C9F9DB0E0E_OFFSET UNITYSDK_OFFSET(0xA9B0EC0)
#define CLASS_1_A214C2B77618A37D_METHOD_1_F47D472826800AA5_1_OFFSET UNITYSDK_OFFSET(0xA9ABD40)
#define CLASS_1_A214C2B77618A37D_METHOD_1_F47D472826800AA5_OFFSET UNITYSDK_OFFSET(0xA9AB900)
#define CLASS_1_A214C2B77618A37D_METHOD_1_F8FB1889CE21FE4C_OFFSET UNITYSDK_OFFSET(0xA9A99D0)
#define CLASS_1_A214C2B77618A37D__CCTOR_OFFSET UNITYSDK_OFFSET(0xA9B27C0)

inline static constexpr unsigned int Class_1_A214C2B77618A37D_TypeDefinitionIndex = 56987;

class Class_1_A214C2B77618A37D : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Single>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A214C2B77618A37D_TypeDefinitionIndex)->GetStaticField(0x48970);
	}
	static ::Il2CppArray<::System::Single>** StaticGet_Field_1_7()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A214C2B77618A37D_TypeDefinitionIndex)->GetStaticField(0x48978);
	}
	// static const ::System::Int32 Field_1_0 = 0x384; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x3E8; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x41A; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x44C; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4B0; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xFFFFFFFF; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Vector3 Method_1_10867B69EFBCA83E(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_10867B69EFBCA83E_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_536E673ED0B916BA(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_536E673ED0B916BA_OFFSET))(a1);
	}

	static ::UnityEngine::Vector2 Method_1_54C4999AD8BA51B0(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_54C4999AD8BA51B0_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_5BB75F2A9E765631(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_5BB75F2A9E765631_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_4314555060268815(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_4314555060268815_OFFSET))(a1);
	}

	static ::UnityEngine::Transform* Method_1_F8FB1889CE21FE4C(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_F8FB1889CE21FE4C_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_49C6583E97C558DC(::UnityEngine::Transform* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_49C6583E97C558DC_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::AnimationCurve* Method_1_377AA00E718475DF(::System::String* a1)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_377AA00E718475DF_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_78E0835F5F9ACC27(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_78E0835F5F9ACC27_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 Method_1_A7F6540F92D653BD(::RPG::Client::CameraDataAndFlags* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::Client::CameraDataAndFlags*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_A7F6540F92D653BD_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_07102D52E522A52C(::RPG::MQuaternion a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::MQuaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_07102D52E522A52C_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_3C5307F598D88590(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::TeamType a2)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_3C5307F598D88590_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_DEBEF7B95160E077(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::TeamType a2)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_DEBEF7B95160E077_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_EC1B7452242AE25F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_EC1B7452242AE25F_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_75362892DB78D160(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_75362892DB78D160_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_0E976279993A6463(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single& a4, ::System::Single& a5)
	{
		return ((::System::Int32(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_0E976279993A6463_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::RPG::GameCore::VCameraConfig* Method_1_EF9172EB0556775E(::RPG::GameCore::VCameraConfig* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::VCameraConfig*(*)(::RPG::GameCore::VCameraConfig*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_EF9172EB0556775E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8EF1F50986F3708C(::Cinemachine::CinemachineBrain* a1, ::Class_0_16E4307DCC419505_799* a2)
	{
		return ((::System::Boolean(*)(::Cinemachine::CinemachineBrain*, ::Class_0_16E4307DCC419505_799*))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_8EF1F50986F3708C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F47D472826800AA5(::Cinemachine::CinemachineBrain* a1, ::RPG::GameCore::VCameraBlend* a2)
	{
		return ((::System::Void(*)(::Cinemachine::CinemachineBrain*, ::RPG::GameCore::VCameraBlend*))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_F47D472826800AA5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_85BE21E91E0DF4EA(::RPG::GameCore::FloatCurve* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::FloatCurve*))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_85BE21E91E0DF4EA_OFFSET))(a1);
	}

	static ::UnityEngine::AnimationCurve* Method_1_EEA74E0937BADBE9(::RPG::GameCore::VCameraBlend* a1, ::System::Collections::Generic::List_1<::RPG::Client::CameraBlendCurve*>* a2)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::RPG::GameCore::VCameraBlend*, ::System::Collections::Generic::List_1<::RPG::Client::CameraBlendCurve*>*))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_EEA74E0937BADBE9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F47D472826800AA5_1(::Cinemachine::CinemachineBrain* a1, ::RPG::GameCore::VCameraBlend* a2)
	{
		return ((::System::Void(*)(::Cinemachine::CinemachineBrain*, ::RPG::GameCore::VCameraBlend*))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_F47D472826800AA5_1_OFFSET))(a1, a2);
	}

	static ::Cinemachine::CinemachineBlendDefinition_Style Method_1_801971704576A210(::RPG::GameCore::VCameraBlendType a1)
	{
		return ((::Cinemachine::CinemachineBlendDefinition_Style(*)(::RPG::GameCore::VCameraBlendType))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_801971704576A210_OFFSET))(a1);
	}

	static ::UnityEngine::AnimationCurve* Method_1_D00A220CF60A4357(::System::String* a1)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_D00A220CF60A4357_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_72788DF9FB018326(::Cinemachine::CinemachineBrain* a1, ::Class_0_16E4307DCC419505_799* a2)
	{
		return ((::System::Boolean(*)(::Cinemachine::CinemachineBrain*, ::Class_0_16E4307DCC419505_799*))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_72788DF9FB018326_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Matrix4x4 Method_1_92CE60A2D0EDB315(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Matrix4x4 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_92CE60A2D0EDB315_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_EA9DD40FB77BF9A6(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_EA9DD40FB77BF9A6_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_1_7B5CF29097D2700A(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_7B5CF29097D2700A_OFFSET))(a1);
	}

	static ::Class_1_A214C2B77618A37D_TestPlanesResults Method_1_AA4B844A0C789EB2(::Il2CppArray<::UnityEngine::Plane>* a1, ::UnityEngine::Bounds& a2)
	{
		return ((::Class_1_A214C2B77618A37D_TestPlanesResults(*)(::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_AA4B844A0C789EB2_OFFSET))(a1, a2);
	}

	static ::Class_1_A214C2B77618A37D_TestPlanesResults Method_1_33012CEA52AB175A(::Il2CppArray<::UnityEngine::Plane>* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::System::Boolean a4)
	{
		return ((::Class_1_A214C2B77618A37D_TestPlanesResults(*)(::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_33012CEA52AB175A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_131270D628598FC6(::UnityEngine::Matrix4x4 a1, ::Il2CppArray<::UnityEngine::Plane>*& a2)
	{
		return ((::System::Void(*)(::UnityEngine::Matrix4x4, ::Il2CppArray<::UnityEngine::Plane>*&))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_131270D628598FC6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8ADA98900A3F8A09(::UnityEngine::Plane& a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::UnityEngine::Plane&, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_8ADA98900A3F8A09_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_37EEC77C4F8C3E93(::Il2CppArray<::UnityEngine::Plane>*& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3, ::UnityEngine::Bounds& a4, ::System::Int32& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Plane>*&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Bounds&, ::System::Int32&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_37EEC77C4F8C3E93_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_94DD251267B2C35C(::Il2CppArray<::UnityEngine::Plane>*& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3, ::UnityEngine::Bounds& a4)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Plane>*&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_94DD251267B2C35C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_BD0AD131EE48698A(::Il2CppArray<::UnityEngine::Plane>*& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Plane>*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_BD0AD131EE48698A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A46C25C9468879BF(::Class_1_AA5627556691B674* a1)
	{
		return ((::System::Void(*)(::Class_1_AA5627556691B674*))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_A46C25C9468879BF_OFFSET))(a1);
	}

	static ::System::Void Method_1_CE20FDA4D86B39C9(::RPG::GameCore::VCameraConfig* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Nullable_1<::RPG::MVector3> a6, ::RPG::GameCore::GameEntity* a7)
	{
		return ((::System::Void(*)(::RPG::GameCore::VCameraConfig*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Nullable_1<::RPG::MVector3>, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_CE20FDA4D86B39C9_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_1_D0D2187E1B16FF24(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TurnState a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_D0D2187E1B16FF24_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A33093C8E9E03E08(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_A33093C8E9E03E08_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_36E7A4EC9082B0F3(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_36E7A4EC9082B0F3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0BB96C9F9DB0E0E(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_F0BB96C9F9DB0E0E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_07F47BD71D685D69(::RPG::GameCore::VCameraFreelook3rdConfig* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::VCameraFreelook3rdConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_07F47BD71D685D69_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_5F821FBEC78A26FB(::RPG::GameCore::VCameraState a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::VCameraState))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_5F821FBEC78A26FB_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_E5320DFC32CDF79E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillCharacterComponent* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillCharacterComponent*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_E5320DFC32CDF79E_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_D2B8D50DD9833CFC* Method_1_410582CDD4D1FEA3(::UnityEngine::Camera* a1)
	{
		return ((::Class_1_D2B8D50DD9833CFC*(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_410582CDD4D1FEA3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6B567837359D7974(::UnityEngine::Camera* a1, ::UnityEngine::Bounds& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_6B567837359D7974_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_345EF29602ABA39A(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Bounds& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_345EF29602ABA39A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_0EED83C52D83728F(::UnityEngine::Bounds& a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_0EED83C52D83728F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B199648B35657B1C(::UnityEngine::Camera* a1, ::UnityEngine::Bounds& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_B199648B35657B1C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3636839047123195(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Bounds& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_3636839047123195_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_BE905BB20CF31ED6(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Bounds& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_BE905BB20CF31ED6_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_039B14E9DF496733(::UnityEngine::Camera* a1, ::Il2CppArray<::UnityEngine::Plane>* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Camera*, ::Il2CppArray<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_039B14E9DF496733_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A6A785EDA1001609(::RPG::Client::ICameraFightState* a1)
	{
		return ((::System::Void(*)(::RPG::Client::ICameraFightState*))((::PBYTE)hIl2Cpp + CLASS_1_A214C2B77618A37D_METHOD_1_A6A785EDA1001609_OFFSET))(a1);
	}
};
