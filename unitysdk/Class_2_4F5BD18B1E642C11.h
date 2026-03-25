#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/SimpleViewService_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_1152250B69783505;
class Class_2_921296CE04546AF9;
class Class_3_89DDDD327D710B05;
namespace RPG::Client::LittleGame::PingPong { class PingPongCameraView; }
namespace RPG::Client::LittleGame::PingPong { class PingPongDynamicBone; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class PingPongDropItemInfo; }
namespace RPG::GameCore { class PingPongEnemyConfig; }
namespace RPG::GameCore { class PingPongEnemyGroupConfig; }
namespace RPG::GameCore { class PingPongEnemyShootConfig; }
namespace RPG::GameCore { class PingPongEnemyShootOverrideCmptConfig; }
namespace RPG::GameCore { class PingPongEnemyStackConfig; }
namespace RPG::GameCore { class PingPongEnemyUnitConfig; }
namespace RPG::GameCore { class PingPongLevelAddPointCmptConfig; }
namespace RPG::GameCore { class PingPongProjectileInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_2_4F5BD18B1E642C11_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11838480)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_01B43D1B877F310E_OFFSET UNITYSDK_OFFSET(0x1183A210)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_06EE413F5F118F16_OFFSET UNITYSDK_OFFSET(0x1183CA50)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_1064C5A41AEC63B0_OFFSET UNITYSDK_OFFSET(0x1183AAB0)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_10EF39D435E748E3_OFFSET UNITYSDK_OFFSET(0x118384F0)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_2E02644DA6D8A1B8_OFFSET UNITYSDK_OFFSET(0x1183C6A0)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_32156F548DFF9B68_OFFSET UNITYSDK_OFFSET(0x11838870)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_327272D1A198C8CE_OFFSET UNITYSDK_OFFSET(0x11839F90)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_35B2FBA0E5997D8D_OFFSET UNITYSDK_OFFSET(0x1183E610)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_394F35BBA0EE596A_OFFSET UNITYSDK_OFFSET(0x118389D0)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_3CABABA5662625D5_OFFSET UNITYSDK_OFFSET(0x1183D0A0)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_499753F854A80466_OFFSET UNITYSDK_OFFSET(0x1183BE70)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_54CEDBD5DCB8FF0F_OFFSET UNITYSDK_OFFSET(0x1183E2C0)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_6C0B3C25A399E6A9_OFFSET UNITYSDK_OFFSET(0x11838760)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_6E78FFB96CFDE4C6_OFFSET UNITYSDK_OFFSET(0x1183E070)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_7C05131EF8C8E87C_OFFSET UNITYSDK_OFFSET(0x11839240)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_8684B0427C2DD4C0_OFFSET UNITYSDK_OFFSET(0x1183D700)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_8CFF0F636B91228D_OFFSET UNITYSDK_OFFSET(0x1183EB20)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_99DAAF8A6C143EA7_OFFSET UNITYSDK_OFFSET(0x1183E740)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_B5E0810CCF755BEC_OFFSET UNITYSDK_OFFSET(0x1183C110)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_BD18710535826B8B_1_OFFSET UNITYSDK_OFFSET(0x1183DAD0)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_BD18710535826B8B_2_OFFSET UNITYSDK_OFFSET(0x1183DCB0)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_BD18710535826B8B_3_OFFSET UNITYSDK_OFFSET(0x1183DE90)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_BD18710535826B8B_OFFSET UNITYSDK_OFFSET(0x1183D8F0)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_C8E1A02841F0B42D_OFFSET UNITYSDK_OFFSET(0x1183E510)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_C8F84D26A15B58A6_OFFSET UNITYSDK_OFFSET(0x1183A630)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_CB23A95221F9177E_OFFSET UNITYSDK_OFFSET(0x1183CD20)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_D49C76FF06AA4E4B_OFFSET UNITYSDK_OFFSET(0x1183A700)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_E1351C3D265D7C3C_OFFSET UNITYSDK_OFFSET(0x11839CD0)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_EA4634D00039440F_OFFSET UNITYSDK_OFFSET(0x1183D7B0)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_EC1B7452242AE25F_OFFSET UNITYSDK_OFFSET(0x1183E9D0)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_F2C7BD54DCBACB51_OFFSET UNITYSDK_OFFSET(0x1183B4D0)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_F3C25EDF70FA5F54_OFFSET UNITYSDK_OFFSET(0x1183AD50)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_F7861F5872DC19FD_OFFSET UNITYSDK_OFFSET(0x11838D60)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x11838570)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_FB94E25B5AAA4415_OFFSET UNITYSDK_OFFSET(0x118396E0)
#define CLASS_2_4F5BD18B1E642C11__CTOR_OFFSET UNITYSDK_OFFSET(0x118383C0)
#define CLASS_2_4F5BD18B1E642C11___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1183EDB0)

inline static constexpr unsigned int Class_2_4F5BD18B1E642C11_TypeDefinitionIndex = 62414;

class Class_2_4F5BD18B1E642C11 : public ::RPG::Client::LittleGame::SimpleViewService_1<::Class_2_921296CE04546AF9*>
{
public:
	// static const ::System::Single Field_2_3; // 0x0
	::Class_2_1152250B69783505* Field_2_0; // 0x30
	::UnityEngine::Transform* Field_2_2; // 0x38
	::Class_3_89DDDD327D710B05* Field_2_1; // 0x40

	::System::Void _ctor(::Class_3_89DDDD327D710B05* a1, ::Class_2_1152250B69783505* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_89DDDD327D710B05*, ::Class_2_1152250B69783505*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_DISPOSE_OFFSET))(this);
	}

	::Class_2_921296CE04546AF9* Method_2_10EF39D435E748E3()
	{
		return ((::Class_2_921296CE04546AF9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_10EF39D435E748E3_OFFSET))(this);
	}

	::System::Void Method_2_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_2_6C0B3C25A399E6A9(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_6C0B3C25A399E6A9_OFFSET))(this, a1);
	}

	::System::Void Method_2_32156F548DFF9B68(::RPG::GameCore::PingPongLevelAddPointCmptConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PingPongLevelAddPointCmptConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_32156F548DFF9B68_OFFSET))(this, a1);
	}

	::System::Void Method_2_394F35BBA0EE596A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_394F35BBA0EE596A_OFFSET))(this);
	}

	::System::Void Method_2_F7861F5872DC19FD(::RPG::GameCore::PingPongProjectileInfo* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PingPongProjectileInfo*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_F7861F5872DC19FD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7C05131EF8C8E87C(::RPG::GameCore::PingPongProjectileInfo* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PingPongProjectileInfo*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_7C05131EF8C8E87C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FB94E25B5AAA4415(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_FB94E25B5AAA4415_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E1351C3D265D7C3C(::RPG::GameCore::PingPongDropItemInfo* a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PingPongDropItemInfo*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_E1351C3D265D7C3C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_327272D1A198C8CE(::RPG::GameCore::LittleGameEntityConfig* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_327272D1A198C8CE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_01B43D1B877F310E(::Class_2_921296CE04546AF9* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_921296CE04546AF9*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_01B43D1B877F310E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8F84D26A15B58A6(::RPG::Client::LittleGame::PingPong::PingPongCameraView* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::PingPong::PingPongCameraView*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_C8F84D26A15B58A6_OFFSET))(this, a1);
	}

	::System::Void Method_2_D49C76FF06AA4E4B(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_D49C76FF06AA4E4B_OFFSET))(this, a1);
	}

	::System::Void Method_2_F3C25EDF70FA5F54(::RPG::GameCore::LittleGameEntityConfig* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_F3C25EDF70FA5F54_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F2C7BD54DCBACB51(::Class_2_921296CE04546AF9* a1, ::UnityEngine::Transform* a2, ::System::ValueTuple_2<::RPG::GameCore::PingPongEnemyConfig*, ::RPG::GameCore::LittleGameEntityConfig*> a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_921296CE04546AF9*, ::UnityEngine::Transform*, ::System::ValueTuple_2<::RPG::GameCore::PingPongEnemyConfig*, ::RPG::GameCore::LittleGameEntityConfig*>))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_F2C7BD54DCBACB51_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_921296CE04546AF9* Method_2_499753F854A80466(::RPG::Client::LittleGame::PingPong::PingPongDynamicBone* a1)
	{
		return ((::Class_2_921296CE04546AF9*(*)(::PVOID, ::RPG::Client::LittleGame::PingPong::PingPongDynamicBone*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_499753F854A80466_OFFSET))(this, a1);
	}

	::Class_2_921296CE04546AF9* Method_2_06EE413F5F118F16(::System::UInt32 a1, ::RPG::GameCore::PingPongEnemyShootConfig* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_921296CE04546AF9*>* a3, ::RPG::GameCore::PingPongEnemyShootOverrideCmptConfig* a4)
	{
		return ((::Class_2_921296CE04546AF9*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PingPongEnemyShootConfig*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_921296CE04546AF9*>*, ::RPG::GameCore::PingPongEnemyShootOverrideCmptConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_06EE413F5F118F16_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_921296CE04546AF9* Method_2_2E02644DA6D8A1B8(::System::UInt32 a1, ::RPG::GameCore::PingPongEnemyStackConfig* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_921296CE04546AF9*>* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* a4)
	{
		return ((::Class_2_921296CE04546AF9*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PingPongEnemyStackConfig*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_921296CE04546AF9*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_2E02644DA6D8A1B8_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_921296CE04546AF9* Method_2_CB23A95221F9177E(::System::UInt32 a1, ::RPG::GameCore::PingPongEnemyGroupConfig* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_921296CE04546AF9*>* a3)
	{
		return ((::Class_2_921296CE04546AF9*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PingPongEnemyGroupConfig*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_921296CE04546AF9*>*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_CB23A95221F9177E_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_921296CE04546AF9* Method_2_B5E0810CCF755BEC(::System::UInt32 a1, ::RPG::GameCore::PingPongEnemyUnitConfig* a2, ::UnityEngine::Transform* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* a4)
	{
		return ((::Class_2_921296CE04546AF9*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PingPongEnemyUnitConfig*, ::UnityEngine::Transform*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_B5E0810CCF755BEC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_3CABABA5662625D5(::Class_2_921296CE04546AF9* a1, ::UnityEngine::Transform* a2, ::RPG::GameCore::PingPongEnemyUnitConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_921296CE04546AF9*, ::UnityEngine::Transform*, ::RPG::GameCore::PingPongEnemyUnitConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_3CABABA5662625D5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_1064C5A41AEC63B0(::Class_2_921296CE04546AF9* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_921296CE04546AF9*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_1064C5A41AEC63B0_OFFSET))(this, a1, a2);
	}

	::Class_2_921296CE04546AF9* Method_2_8684B0427C2DD4C0(::UnityEngine::RaycastHit a1)
	{
		return ((::Class_2_921296CE04546AF9*(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_8684B0427C2DD4C0_OFFSET))(this, a1);
	}

	::Class_2_921296CE04546AF9* Method_2_EA4634D00039440F(::UnityEngine::Collider* a1)
	{
		return ((::Class_2_921296CE04546AF9*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_EA4634D00039440F_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_BD18710535826B8B(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_BD18710535826B8B_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_BD18710535826B8B_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_BD18710535826B8B_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_BD18710535826B8B_2(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_BD18710535826B8B_2_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_BD18710535826B8B_3(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_BD18710535826B8B_3_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_2_6E78FFB96CFDE4C6(::UnityEngine::Quaternion a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_6E78FFB96CFDE4C6_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_54CEDBD5DCB8FF0F(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::RaycastHit>* a4, ::System::Boolean a5, ::System::Single a6, ::System::Int32 a7)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_54CEDBD5DCB8FF0F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Int32 Method_2_C8E1A02841F0B42D(::UnityEngine::Vector3 a1, ::System::Single a2, ::Il2CppArray<::UnityEngine::Collider*>* a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_C8E1A02841F0B42D_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_2_35B2FBA0E5997D8D(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_35B2FBA0E5997D8D_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_99DAAF8A6C143EA7(::UnityEngine::RaycastHit a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_99DAAF8A6C143EA7_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_EC1B7452242AE25F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_EC1B7452242AE25F_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_8CFF0F636B91228D(::Class_2_921296CE04546AF9* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_921296CE04546AF9*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_8CFF0F636B91228D_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
