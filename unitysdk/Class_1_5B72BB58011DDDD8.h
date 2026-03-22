#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ConeSphereTrigger_TriggerPattern.h"
#include "unitysdk/Struct_2_984AA94FB23486F9.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class ConeSphereTrigger; }
namespace RPG::Client { class EraFlipperCommonConfig; }
namespace RPG::Client { class FlipDevicePoint; }
namespace RPG::Client { class PartialFlipDeviceComponent; }
namespace RPG::Client { class RangeLimitCollider; }
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_5B72BB58011DDDD8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x110D0F40)
#define CLASS_1_5B72BB58011DDDD8_METHOD_1_1AD3CAF2B0982C3F_OFFSET UNITYSDK_OFFSET(0x110D1330)
#define CLASS_1_5B72BB58011DDDD8_METHOD_1_2BE3D7897F980828_OFFSET UNITYSDK_OFFSET(0x110D0C70)
#define CLASS_1_5B72BB58011DDDD8_METHOD_1_4AB9012B5D01108B_OFFSET UNITYSDK_OFFSET(0x110CFCE0)
#define CLASS_1_5B72BB58011DDDD8_METHOD_1_6D8954457E2B7EA7_OFFSET UNITYSDK_OFFSET(0x110CF200)
#define CLASS_1_5B72BB58011DDDD8_METHOD_1_98CD66A7F3C102A5_OFFSET UNITYSDK_OFFSET(0x110D0260)
#define CLASS_1_5B72BB58011DDDD8_METHOD_1_9C2E121ADF8FB956_OFFSET UNITYSDK_OFFSET(0x110CFE10)
#define CLASS_1_5B72BB58011DDDD8_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x110D1760)
#define CLASS_1_5B72BB58011DDDD8_METHOD_1_A3EF4ED894EBFFC3_OFFSET UNITYSDK_OFFSET(0x110CF8C0)
#define CLASS_1_5B72BB58011DDDD8_METHOD_1_AF2CFBAAD2629B3B_OFFSET UNITYSDK_OFFSET(0x110D03F0)
#define CLASS_1_5B72BB58011DDDD8_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x110D11A0)
#define CLASS_1_5B72BB58011DDDD8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x110CFDD0)
#define CLASS_1_5B72BB58011DDDD8_METHOD_1_ED0CD23D136F6F74_OFFSET UNITYSDK_OFFSET(0x110D0900)
#define CLASS_1_5B72BB58011DDDD8_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x110D1770)
#define CLASS_1_5B72BB58011DDDD8_METHOD_1_F9555880FBE027D5_OFFSET UNITYSDK_OFFSET(0x110D0FA0)
#define CLASS_1_5B72BB58011DDDD8_METHOD_1_FD86C67947CE3065_OFFSET UNITYSDK_OFFSET(0x110CF660)
#define CLASS_1_5B72BB58011DDDD8__CTOR_OFFSET UNITYSDK_OFFSET(0x110CEAC0)

inline static constexpr unsigned int Class_1_5B72BB58011DDDD8_TypeDefinitionIndex = 47927;

class Class_1_5B72BB58011DDDD8 : public ::System::Object
{
public:
	::System::Action_1<::RPG::Client::PartialFlipDeviceComponent*>* Field_1_5; // 0x10
	::RPG::Client::RangeLimitCollider* Field_1_14; // 0x18
	::UnityEngine::Transform* Field_1_8; // 0x20
	::RPG::Client::ConeSphereTrigger* Field_1_10; // 0x28
	::RPG::Client::ConeSphereTrigger* Field_1_11; // 0x30
	::RPG::Client::EraFlipperCommonConfig* Field_1_4; // 0x38
	::UnityEngine::GameObject* Field_1_9; // 0x40
	::RPG::Client::PartialFlipDeviceComponent* Field_1_6; // 0x48
	::UnityEngine::GameObject* Field_1_12; // 0x50
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_1_13; // 0x58
	::Struct_2_984AA94FB23486F9 Field_1_2; // 0x60
	::Struct_2_984AA94FB23486F9 Field_1_3; // 0x74
	::System::Single Field_1_1; // 0x88
	::System::Boolean Field_1_0; // 0x8C
	::UnityEngine::Vector3 Field_1_7; // 0x90

	::System::Void _ctor(::RPG::Client::EraFlipperCommonConfig* a1, ::RPG::Client::PartialFlipDeviceComponent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EraFlipperCommonConfig*, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + CLASS_1_5B72BB58011DDDD8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A3EF4ED894EBFFC3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5B72BB58011DDDD8_METHOD_1_A3EF4ED894EBFFC3_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B72BB58011DDDD8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_9C2E121ADF8FB956(::RPG::Client::FlipDevicePoint* a1, ::RPG::Client::FlipDevicePoint* a2, ::System::Action_1<::RPG::Client::PartialFlipDeviceComponent*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FlipDevicePoint*, ::RPG::Client::FlipDevicePoint*, ::System::Action_1<::RPG::Client::PartialFlipDeviceComponent*>*))((::PBYTE)hIl2Cpp + CLASS_1_5B72BB58011DDDD8_METHOD_1_9C2E121ADF8FB956_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_98CD66A7F3C102A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B72BB58011DDDD8_METHOD_1_98CD66A7F3C102A5_OFFSET))(this);
	}

	::System::Void Method_1_AF2CFBAAD2629B3B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5B72BB58011DDDD8_METHOD_1_AF2CFBAAD2629B3B_OFFSET))(this, a1);
	}

	::Struct_2_984AA94FB23486F9 Method_1_6D8954457E2B7EA7()
	{
		return ((::Struct_2_984AA94FB23486F9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B72BB58011DDDD8_METHOD_1_6D8954457E2B7EA7_OFFSET))(this);
	}

	::System::Void Method_1_ED0CD23D136F6F74(::UnityEngine::Collider* a1, ::RPG::Client::ConeSphereTrigger_TriggerPattern a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::RPG::Client::ConeSphereTrigger_TriggerPattern))((::PBYTE)hIl2Cpp + CLASS_1_5B72BB58011DDDD8_METHOD_1_ED0CD23D136F6F74_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2BE3D7897F980828(::UnityEngine::Collider* a1, ::RPG::Client::ConeSphereTrigger_TriggerPattern a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::RPG::Client::ConeSphereTrigger_TriggerPattern))((::PBYTE)hIl2Cpp + CLASS_1_5B72BB58011DDDD8_METHOD_1_2BE3D7897F980828_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B72BB58011DDDD8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F9555880FBE027D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B72BB58011DDDD8_METHOD_1_F9555880FBE027D5_OFFSET))(this);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B72BB58011DDDD8_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_1_1AD3CAF2B0982C3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B72BB58011DDDD8_METHOD_1_1AD3CAF2B0982C3F_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B72BB58011DDDD8_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Void Method_1_FD86C67947CE3065(::Struct_2_984AA94FB23486F9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_984AA94FB23486F9))((::PBYTE)hIl2Cpp + CLASS_1_5B72BB58011DDDD8_METHOD_1_FD86C67947CE3065_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B72BB58011DDDD8_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_4AB9012B5D01108B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B72BB58011DDDD8_METHOD_1_4AB9012B5D01108B_OFFSET))(this);
	}
};
