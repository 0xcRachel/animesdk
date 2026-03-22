#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/EffectConfig.h"
#include "unitysdk/Struct_2_0B84ADD7815498A2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E862591348D7E760_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9945FA0)
#define CLASS_1_E862591348D7E760_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x9946170)
#define CLASS_1_E862591348D7E760_METHOD_1_B8B516E8543C2D3C_OFFSET UNITYSDK_OFFSET(0x9946110)
#define CLASS_1_E862591348D7E760_METHOD_1_B9B71AEDC43C03F6_OFFSET UNITYSDK_OFFSET(0x9945F60)
#define CLASS_1_E862591348D7E760__CTOR_OFFSET UNITYSDK_OFFSET(0x9945C00)

inline static constexpr unsigned int Class_1_E862591348D7E760_TypeDefinitionIndex = 59096;

class Class_1_E862591348D7E760 : public ::System::Object
{
public:
	::Struct_2_0B84ADD7815498A2 Field_1_2; // 0x10
	::System::Func_1<::System::Boolean>* Field_1_3; // 0x20
	::System::String* Field_1_0; // 0x28
	::RPG::Client::ParkourGame::EffectConfig Field_1_1; // 0x30

	::System::Void _ctor(::UnityEngine::Transform* a1, ::System::String* a2, ::RPG::Client::ParkourGame::EffectConfig a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::RPG::Client::ParkourGame::EffectConfig))((::PBYTE)hIl2Cpp + CLASS_1_E862591348D7E760__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::MonoEffect* Method_1_B9B71AEDC43C03F6()
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E862591348D7E760_METHOD_1_B9B71AEDC43C03F6_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E862591348D7E760_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_B8B516E8543C2D3C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E862591348D7E760_METHOD_1_B8B516E8543C2D3C_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E862591348D7E760_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}
};
