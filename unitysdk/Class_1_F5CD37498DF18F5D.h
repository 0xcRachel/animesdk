#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/RPG/CustomRP/VCMask.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_489;
class Class_1_4A90D78D94DB1347;
class Class_1_4B703F2764047929;
class Class_1_9CBC71DC5240DC00;
class Class_1_F5CD37498DF18F5D_Class_1_E73E54167298A951;
namespace Cinemachine { class CinemachineCRPVirtualCamera; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::CustomRP { class CRPVirtualCameraVolumn; }
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools { class MonoTimelineEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F5CD37498DF18F5D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F67110)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x8F672B0)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_1A1A223B50198530_OFFSET UNITYSDK_OFFSET(0x8F68F90)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_29AF9EBBD301B25E_OFFSET UNITYSDK_OFFSET(0x8F691A0)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_2A50A7EA4A6523A5_OFFSET UNITYSDK_OFFSET(0x8F68AE0)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_39A5DB7FDFD75ACA_OFFSET UNITYSDK_OFFSET(0x8F68700)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_41EC8E0AD6EE8093_OFFSET UNITYSDK_OFFSET(0x8F67910)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x8F67000)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8F671A0)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_46049D0DD3BDCF94_OFFSET UNITYSDK_OFFSET(0x8F676B0)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_4A111163FD8F1931_OFFSET UNITYSDK_OFFSET(0x8F67510)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_4AF5D2CC76356D63_OFFSET UNITYSDK_OFFSET(0x8F68550)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_4F6CB99543AF5BF6_OFFSET UNITYSDK_OFFSET(0x8F67210)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_5AD297B90767E73A_OFFSET UNITYSDK_OFFSET(0x8F67A40)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0x8F67070)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x8F66D90)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_5DBCCDE266FE476C_OFFSET UNITYSDK_OFFSET(0x8F68B50)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_613D7391D33C4C9B_1_OFFSET UNITYSDK_OFFSET(0x8F68980)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_613D7391D33C4C9B_OFFSET UNITYSDK_OFFSET(0x8F68760)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0x8F67B20)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_7A8816166666F64D_OFFSET UNITYSDK_OFFSET(0x8F688D0)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_818C193EE6DDF386_OFFSET UNITYSDK_OFFSET(0x8F68380)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_99BD3572EC5FF0A8_OFFSET UNITYSDK_OFFSET(0x8F68EE0)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_A7836646989A4215_OFFSET UNITYSDK_OFFSET(0x8F68130)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8F67A00)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8F679C0)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_CB08619BC606C2E5_OFFSET UNITYSDK_OFFSET(0x8F68620)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_E16846F6D6EF4D1B_OFFSET UNITYSDK_OFFSET(0x8F67650)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_E375A9E6D91AC702_OFFSET UNITYSDK_OFFSET(0x8F67BB0)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_E9C3890FA1FB2D42_OFFSET UNITYSDK_OFFSET(0x8F66F60)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x8F678F0)
#define CLASS_1_F5CD37498DF18F5D_METHOD_1_FE327FD0760E1514_OFFSET UNITYSDK_OFFSET(0x8F67400)
#define CLASS_1_F5CD37498DF18F5D__CTOR_OFFSET UNITYSDK_OFFSET(0x8F66DA0)

inline static constexpr unsigned int Class_1_F5CD37498DF18F5D_TypeDefinitionIndex = 48058;

class Class_1_F5CD37498DF18F5D : public ::System::Object
{
public:
	// static const ::System::String* Field_1_11; // 0x0
	// static const ::System::String* Field_1_12; // 0x0
	// static const ::System::String* Field_1_13; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::CustomRP::VCMask>* Field_1_8; // 0x10
	::UnityEngine::GameObject* Field_1_2; // 0x18
	::Class_1_4A90D78D94DB1347* Field_1_4; // 0x20
	::System::Collections::Generic::HashSet_1<::UnityEngine::Renderer*>* Field_1_6; // 0x28
	::RPG::CustomRP::CRPVirtualCameraVolumn* Field_1_3; // 0x30
	::Class_1_F5CD37498DF18F5D_Class_1_E73E54167298A951* Field_1_1; // 0x38
	::Class_0_16E4307DCC419505_489* Field_1_9; // 0x40
	::Class_1_4B703F2764047929* Field_1_10; // 0x48
	::Class_1_F5CD37498DF18F5D_Class_1_E73E54167298A951* Field_1_0; // 0x50
	::System::String* Field_1_5; // 0x58
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::CustomRP::VCMask>* Field_1_7; // 0x60
	::RPG::CustomRP::Quality Field_1_16; // 0x68
	::System::Boolean Field_1_14; // 0x6C
	::System::Boolean Field_1_15; // 0x6D

	::System::Void _ctor(::Class_1_4B703F2764047929* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4B703F2764047929*))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_489* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_489*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::System::Void Method_1_E9C3890FA1FB2D42()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_E9C3890FA1FB2D42_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_FE327FD0760E1514(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_FE327FD0760E1514_OFFSET))(this, a1);
	}

	::System::Void Method_1_E16846F6D6EF4D1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_E16846F6D6EF4D1B_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_41EC8E0AD6EE8093()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_41EC8E0AD6EE8093_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_5AD297B90767E73A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_5AD297B90767E73A_OFFSET))(this, a1);
	}

	::System::Void Method_1_73FB9DE4849AF1B5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_73FB9DE4849AF1B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::Cinemachine::CinemachineCRPVirtualCamera* Method_1_818C193EE6DDF386(::System::Int32 a1, ::UnityEngine::Transform* a2)
	{
		return ((::Cinemachine::CinemachineCRPVirtualCamera*(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_818C193EE6DDF386_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E375A9E6D91AC702(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_E375A9E6D91AC702_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_489* Method_1_4AF5D2CC76356D63(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_489*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_4AF5D2CC76356D63_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB08619BC606C2E5(::System::UInt32 a1, ::Cinemachine::CinemachineVirtualCamera* a2, ::Cinemachine::CinemachineBlendDefinition a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Cinemachine::CinemachineVirtualCamera*, ::Cinemachine::CinemachineBlendDefinition))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_CB08619BC606C2E5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4A111163FD8F1931(::System::UInt32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_4A111163FD8F1931_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_46049D0DD3BDCF94(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_46049D0DD3BDCF94_OFFSET))(this, a1);
	}

	::Class_1_F5CD37498DF18F5D_Class_1_E73E54167298A951* Method_1_39A5DB7FDFD75ACA(::System::UInt32 a1)
	{
		return ((::Class_1_F5CD37498DF18F5D_Class_1_E73E54167298A951*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_39A5DB7FDFD75ACA_OFFSET))(this, a1);
	}

	::System::Void Method_1_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_1_4F6CB99543AF5BF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_4F6CB99543AF5BF6_OFFSET))(this);
	}

	::System::Void Method_1_613D7391D33C4C9B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_613D7391D33C4C9B_OFFSET))(this, a1);
	}

	::System::Void Method_1_613D7391D33C4C9B_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_613D7391D33C4C9B_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5DBCCDE266FE476C(::RPG::CustomRP::VCMask a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::VCMask, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_5DBCCDE266FE476C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1A1A223B50198530(::RPG::GameCore::GameEntity* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_1A1A223B50198530_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7A8816166666F64D(::RPG::Client::MonoEffect* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_7A8816166666F64D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2A50A7EA4A6523A5(::RPGTools::MonoTimelineEffect* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::MonoTimelineEffect*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_2A50A7EA4A6523A5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_99BD3572EC5FF0A8(::UnityEngine::GameObject* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_99BD3572EC5FF0A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_29AF9EBBD301B25E(::Class_1_9CBC71DC5240DC00* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CBC71DC5240DC00*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_29AF9EBBD301B25E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A7836646989A4215()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_METHOD_1_A7836646989A4215_OFFSET))(this);
	}
};
