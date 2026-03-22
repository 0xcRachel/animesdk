#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4B703F2764047929;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginFollow; }
namespace RPGTools { class MonoTimelineEffect; }
namespace System { class String; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_0B52F2DF5119EE9C_OFFSET UNITYSDK_OFFSET(0x8A30BD0)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_130CFB61EF066AEC_OFFSET UNITYSDK_OFFSET(0x8A30640)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_1C62453C3F38D037_OFFSET UNITYSDK_OFFSET(0x8A30A40)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_1F52320B28500330_OFFSET UNITYSDK_OFFSET(0x8A31380)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_2A6AEF91C7092C97_OFFSET UNITYSDK_OFFSET(0x8A310C0)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x8A30510)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_2F69830808EBC78F_OFFSET UNITYSDK_OFFSET(0x8A30220)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0x8A30850)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x8A30780)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_A8B662A2CC4B2F7D_OFFSET UNITYSDK_OFFSET(0x8A30CC0)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8A30A00)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x8A307F0)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8A309C0)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x8A311C0)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x8A303F0)
#define CLASS_1_4BA5BF6D6AE6A5EC__CTOR_OFFSET UNITYSDK_OFFSET(0x8A31540)

inline static constexpr unsigned int Class_1_4BA5BF6D6AE6A5EC_TypeDefinitionIndex = 37952;

class Class_1_4BA5BF6D6AE6A5EC : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_4; // 0x10
	::System::String* Field_1_1; // 0x18
	::UnityEngine::Transform* Field_1_10; // 0x20
	::UnityEngine::Object* Field_1_12; // 0x28
	::System::String* Field_1_3; // 0x30
	::Class_1_4B703F2764047929* Field_1_11; // 0x38
	::System::String* Field_1_0; // 0x40
	::RPG::Client::MonoEffect* Field_1_8; // 0x48
	::RPGTools::MonoTimelineEffect* Field_1_7; // 0x50
	::RPG::Client::MonoEffectPluginFollow* Field_1_9; // 0x58
	::UnityEngine::Vector3 Field_1_5; // 0x60
	::System::Boolean Field_1_2; // 0x6C
	::UnityEngine::Vector3 Field_1_6; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2F69830808EBC78F(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_2F69830808EBC78F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_130CFB61EF066AEC(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_130CFB61EF066AEC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_595E641DF1B4387D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_595E641DF1B4387D_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_1_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_E5695720AB0F6E98_OFFSET))(this);
	}

	::System::Void Method_1_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_2CBE0B79DD36047E_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_1C62453C3F38D037()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_1C62453C3F38D037_OFFSET))(this);
	}

	::System::Void Method_1_A8B662A2CC4B2F7D(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_A8B662A2CC4B2F7D_OFFSET))(this, a1);
	}

	::System::Void Method_1_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_CD8EB704BDED69B6_OFFSET))(this);
	}

	::System::Void Method_1_2A6AEF91C7092C97(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_2A6AEF91C7092C97_OFFSET))(this, a1);
	}

	::System::Void Method_1_0B52F2DF5119EE9C(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_0B52F2DF5119EE9C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1F52320B28500330(::UnityEngine::Component* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_1F52320B28500330_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}
};
