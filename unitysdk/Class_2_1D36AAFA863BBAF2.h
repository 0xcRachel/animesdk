#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class MonoInControlButton; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_1D36AAFA863BBAF2_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x10DC7F40)
#define CLASS_2_1D36AAFA863BBAF2_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x10DC8700)
#define CLASS_2_1D36AAFA863BBAF2_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x10DC8760)
#define CLASS_2_1D36AAFA863BBAF2_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10DC86A0)
#define CLASS_2_1D36AAFA863BBAF2_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10DC8090)
#define CLASS_2_1D36AAFA863BBAF2_METHOD_2_9B92C44D5842AA8A_OFFSET UNITYSDK_OFFSET(0x10DC7E50)
#define CLASS_2_1D36AAFA863BBAF2_METHOD_2_D1B8EDD075FF9494_OFFSET UNITYSDK_OFFSET(0x10DC8150)
#define CLASS_2_1D36AAFA863BBAF2_METHOD_2_FF396CC145481CA0_OFFSET UNITYSDK_OFFSET(0x10DC7D90)
#define CLASS_2_1D36AAFA863BBAF2__CTOR_OFFSET UNITYSDK_OFFSET(0x10DC8600)
#define CLASS_2_1D36AAFA863BBAF2__ONBIND_OFFSET UNITYSDK_OFFSET(0x10DC7CD0)
#define CLASS_2_1D36AAFA863BBAF2___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x10DC8640)

inline static constexpr unsigned int Class_2_1D36AAFA863BBAF2_TypeDefinitionIndex = 57651;

class Class_2_1D36AAFA863BBAF2 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	::RPG::GameCore::LevelDataComponent* Field_2_5; // 0x60
	::UnityEngine::UI::Text* Field_2_1; // 0x68
	::RPG::Client::MonoInControlButton* Field_2_2; // 0x70
	::UnityEngine::UI::Button* Field_2_0; // 0x78
	::System::Boolean Field_2_4; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D36AAFA863BBAF2__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D36AAFA863BBAF2__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_FF396CC145481CA0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1D36AAFA863BBAF2_METHOD_2_FF396CC145481CA0_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B92C44D5842AA8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D36AAFA863BBAF2_METHOD_2_9B92C44D5842AA8A_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D36AAFA863BBAF2_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D36AAFA863BBAF2_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_D1B8EDD075FF9494(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1D36AAFA863BBAF2_METHOD_2_D1B8EDD075FF9494_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D36AAFA863BBAF2___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D36AAFA863BBAF2_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D36AAFA863BBAF2_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D36AAFA863BBAF2_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}
};
