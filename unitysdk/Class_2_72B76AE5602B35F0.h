#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_72B76AE5602B35F0_NpcShowState.h"
#include "unitysdk/Class_2_72B76AE5602B35F0_NpcStateControlSource.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0CB627C4F1CDDD99;
namespace RPG::Client { class EraFlipperCommonConfig; }
namespace RPG::Client { class EraFlipperManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCComponent; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_72B76AE5602B35F0_BEFOREDISPOSE_OFFSET UNITYSDK_OFFSET(0x104FA6A0)
#define CLASS_2_72B76AE5602B35F0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x104FA660)
#define CLASS_2_72B76AE5602B35F0_METHOD_2_142DFCCB3B0421A2_OFFSET UNITYSDK_OFFSET(0x104F9150)
#define CLASS_2_72B76AE5602B35F0_METHOD_2_169C5280D338BD7B_OFFSET UNITYSDK_OFFSET(0x104FAC40)
#define CLASS_2_72B76AE5602B35F0_METHOD_2_1AD51778485AD495_OFFSET UNITYSDK_OFFSET(0x104FAB40)
#define CLASS_2_72B76AE5602B35F0_METHOD_2_30ED3FB71BE27728_OFFSET UNITYSDK_OFFSET(0x104F97B0)
#define CLASS_2_72B76AE5602B35F0_METHOD_2_3899FDD7FD93BFAC_OFFSET UNITYSDK_OFFSET(0x104F9FB0)
#define CLASS_2_72B76AE5602B35F0_METHOD_2_3C6260EB9E672654_OFFSET UNITYSDK_OFFSET(0x104FACD0)
#define CLASS_2_72B76AE5602B35F0_METHOD_2_464B7FEEA3D325D3_OFFSET UNITYSDK_OFFSET(0x104F99A0)
#define CLASS_2_72B76AE5602B35F0_METHOD_2_9AFCA18B112F248A_OFFSET UNITYSDK_OFFSET(0x104FB240)
#define CLASS_2_72B76AE5602B35F0_METHOD_2_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x104FA750)
#define CLASS_2_72B76AE5602B35F0_METHOD_2_D585F38104927894_OFFSET UNITYSDK_OFFSET(0x104F8F50)
#define CLASS_2_72B76AE5602B35F0_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x104F9130)
#define CLASS_2_72B76AE5602B35F0_TICK_OFFSET UNITYSDK_OFFSET(0x104FA8D0)
#define CLASS_2_72B76AE5602B35F0__CTOR_OFFSET UNITYSDK_OFFSET(0x104FB320)
#define CLASS_2_72B76AE5602B35F0___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x104FB330)

inline static constexpr unsigned int Class_2_72B76AE5602B35F0_TypeDefinitionIndex = 58420;

class Class_2_72B76AE5602B35F0 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::NPCComponent* Field_2_8; // 0x18
	::System::String* Field_2_2; // 0x20
	::Class_1_0CB627C4F1CDDD99* Field_2_7; // 0x28
	::System::String* Field_2_3; // 0x30
	::RPG::Client::EraFlipperManager* Field_2_9; // 0x38
	::System::Nullable_1<::Class_2_72B76AE5602B35F0_NpcStateControlSource> Field_2_1; // 0x40
	::System::Nullable_1<::Class_2_72B76AE5602B35F0_NpcShowState> Field_2_0; // 0x48
	::System::Single Field_2_11; // 0x50
	::Class_2_72B76AE5602B35F0_NpcShowState Field_2_6; // 0x54
	::System::Int32 Field_2_4; // 0x58
	::System::Boolean Field_2_12; // 0x5C
	::System::Single Field_2_10; // 0x60
	::System::UInt32 Field_2_5; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72B76AE5602B35F0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D585F38104927894(::RPG::Client::EraFlipperCommonConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EraFlipperCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_2_72B76AE5602B35F0_METHOD_2_D585F38104927894_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72B76AE5602B35F0_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_142DFCCB3B0421A2(::Class_2_72B76AE5602B35F0_NpcShowState a1, ::Class_2_72B76AE5602B35F0_NpcStateControlSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_72B76AE5602B35F0_NpcShowState, ::Class_2_72B76AE5602B35F0_NpcStateControlSource))((::PBYTE)hIl2Cpp + CLASS_2_72B76AE5602B35F0_METHOD_2_142DFCCB3B0421A2_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72B76AE5602B35F0_DISPOSE_OFFSET))(this);
	}

	::System::Void BeforeDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72B76AE5602B35F0_BEFOREDISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_72B76AE5602B35F0_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_1AD51778485AD495(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_72B76AE5602B35F0_METHOD_2_1AD51778485AD495_OFFSET))(this, a1);
	}

	::System::Void Method_2_464B7FEEA3D325D3(::Class_2_72B76AE5602B35F0_NpcStateControlSource a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_72B76AE5602B35F0_NpcStateControlSource))((::PBYTE)hIl2Cpp + CLASS_2_72B76AE5602B35F0_METHOD_2_464B7FEEA3D325D3_OFFSET))(this, a1);
	}

	::System::Void Method_2_3899FDD7FD93BFAC(::Class_2_72B76AE5602B35F0_NpcStateControlSource a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_72B76AE5602B35F0_NpcStateControlSource))((::PBYTE)hIl2Cpp + CLASS_2_72B76AE5602B35F0_METHOD_2_3899FDD7FD93BFAC_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_30ED3FB71BE27728(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_72B76AE5602B35F0_METHOD_2_30ED3FB71BE27728_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72B76AE5602B35F0_METHOD_2_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::System::Void Method_2_169C5280D338BD7B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72B76AE5602B35F0_METHOD_2_169C5280D338BD7B_OFFSET))(this);
	}

	::System::Void Method_2_3C6260EB9E672654(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_72B76AE5602B35F0_METHOD_2_3C6260EB9E672654_OFFSET))(this, a1);
	}

	::System::Void Method_2_9AFCA18B112F248A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_72B76AE5602B35F0_METHOD_2_9AFCA18B112F248A_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_72B76AE5602B35F0___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
