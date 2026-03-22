#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class SmallWindowVCControl; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_0CD3207F981C1AF8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10550180)
#define CLASS_1_0CD3207F981C1AF8_METHOD_1_0DDA4DE2896B5A04_OFFSET UNITYSDK_OFFSET(0x105504A0)
#define CLASS_1_0CD3207F981C1AF8_METHOD_1_7C7377C794E8973C_1_OFFSET UNITYSDK_OFFSET(0x10550270)
#define CLASS_1_0CD3207F981C1AF8_METHOD_1_7C7377C794E8973C_OFFSET UNITYSDK_OFFSET(0x10550210)
#define CLASS_1_0CD3207F981C1AF8_METHOD_1_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x10550430)
#define CLASS_1_0CD3207F981C1AF8_METHOD_1_B12B4E4A39A083D2_OFFSET UNITYSDK_OFFSET(0x10550110)
#define CLASS_1_0CD3207F981C1AF8_METHOD_1_BD486D5C6E7D68DB_OFFSET UNITYSDK_OFFSET(0x105503B0)
#define CLASS_1_0CD3207F981C1AF8_METHOD_1_DD39EBECB7933120_OFFSET UNITYSDK_OFFSET(0x10550030)
#define CLASS_1_0CD3207F981C1AF8_METHOD_1_FB1C56FCE4ABD259_OFFSET UNITYSDK_OFFSET(0x105502D0)
#define CLASS_1_0CD3207F981C1AF8_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x10550340)
#define CLASS_1_0CD3207F981C1AF8__CTOR_OFFSET UNITYSDK_OFFSET(0x10550570)

inline static constexpr unsigned int Class_1_0CD3207F981C1AF8_TypeDefinitionIndex = 48062;

class Class_1_0CD3207F981C1AF8 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::RPG::Client::SmallWindowVCControl* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CD3207F981C1AF8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DD39EBECB7933120(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_0CD3207F981C1AF8_METHOD_1_DD39EBECB7933120_OFFSET))(this, a1);
	}

	::System::Void Method_1_B12B4E4A39A083D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0CD3207F981C1AF8_METHOD_1_B12B4E4A39A083D2_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CD3207F981C1AF8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_7C7377C794E8973C(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_0CD3207F981C1AF8_METHOD_1_7C7377C794E8973C_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C7377C794E8973C_1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_0CD3207F981C1AF8_METHOD_1_7C7377C794E8973C_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_FB1C56FCE4ABD259(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0CD3207F981C1AF8_METHOD_1_FB1C56FCE4ABD259_OFFSET))(this, a1);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0CD3207F981C1AF8_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_BD486D5C6E7D68DB(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_0CD3207F981C1AF8_METHOD_1_BD486D5C6E7D68DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0CD3207F981C1AF8_METHOD_1_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Void Method_1_0DDA4DE2896B5A04(::System::Single a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0CD3207F981C1AF8_METHOD_1_0DDA4DE2896B5A04_OFFSET))(this, a1, a2, a3);
	}
};
