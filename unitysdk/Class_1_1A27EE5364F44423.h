#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_638;
class Class_1_20FCC2F82753283C;
namespace Cinemachine { class CinemachineFramingTransposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class MonoExUICamera; }
namespace RPG::Client { class MonoUI3DTouch; }

#define CLASS_1_1A27EE5364F44423_METHOD_1_058772F3CAEAB1B5_OFFSET UNITYSDK_OFFSET(0x152DB1E0)
#define CLASS_1_1A27EE5364F44423_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x152DB400)
#define CLASS_1_1A27EE5364F44423_METHOD_1_218124418542E081_OFFSET UNITYSDK_OFFSET(0x152DB6A0)
#define CLASS_1_1A27EE5364F44423_METHOD_1_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x152DB7D0)
#define CLASS_1_1A27EE5364F44423_METHOD_1_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x152DBBE0)
#define CLASS_1_1A27EE5364F44423_METHOD_1_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0x152DB970)
#define CLASS_1_1A27EE5364F44423_METHOD_1_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x152DBD60)
#define CLASS_1_1A27EE5364F44423_METHOD_1_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x152DB9F0)
#define CLASS_1_1A27EE5364F44423_METHOD_1_793067EE61114591_OFFSET UNITYSDK_OFFSET(0x152DB570)
#define CLASS_1_1A27EE5364F44423_METHOD_1_999B8B439422C7E7_OFFSET UNITYSDK_OFFSET(0x152DB890)
#define CLASS_1_1A27EE5364F44423_METHOD_1_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x152DBC80)
#define CLASS_1_1A27EE5364F44423_METHOD_1_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x152DB840)
#define CLASS_1_1A27EE5364F44423_METHOD_1_ADDF7C69AC3A8B56_OFFSET UNITYSDK_OFFSET(0x152DAF60)
#define CLASS_1_1A27EE5364F44423_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x152DB740)
#define CLASS_1_1A27EE5364F44423_METHOD_1_BC7A11A7B3A4E581_OFFSET UNITYSDK_OFFSET(0x152DAFD0)
#define CLASS_1_1A27EE5364F44423_METHOD_1_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x152DB160)
#define CLASS_1_1A27EE5364F44423_POINTERPOSITION_OFFSET UNITYSDK_OFFSET(0x152DAEE0)
#define CLASS_1_1A27EE5364F44423__CTOR_OFFSET UNITYSDK_OFFSET(0x152DBDF0)

inline static constexpr unsigned int Class_1_1A27EE5364F44423_TypeDefinitionIndex = 57479;

class Class_1_1A27EE5364F44423 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::Cinemachine::CinemachineFramingTransposer* Field_1_9; // 0x10
	::Class_1_20FCC2F82753283C* Field_1_11; // 0x18
	::RPG::Client::MonoUI3DTouch* Field_1_5; // 0x20
	::Cinemachine::CinemachineVirtualCamera* Field_1_8; // 0x28
	::RPG::Client::MonoExUICamera* Field_1_4; // 0x30
	::Class_0_16E4307DCC419505_638* Field_1_10; // 0x38
	::System::Boolean Field_1_7; // 0x40
	::System::Boolean Field_1_6; // 0x41
	::System::Single Field_1_3; // 0x44
	::System::Single Field_1_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 PointerPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_POINTERPOSITION_OFFSET))(this);
	}

	::System::Void Method_1_ADDF7C69AC3A8B56(::Cinemachine::CinemachineVirtualCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_ADDF7C69AC3A8B56_OFFSET))(this, a1);
	}

	::System::Void Method_1_BC7A11A7B3A4E581(::RPG::Client::MonoExUICamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoExUICamera*))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_BC7A11A7B3A4E581_OFFSET))(this, a1);
	}

	::System::Void Method_1_FAA945ED465745BC(::Class_0_16E4307DCC419505_638* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_638*))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_058772F3CAEAB1B5(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_058772F3CAEAB1B5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_793067EE61114591(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_793067EE61114591_OFFSET))(this, a1);
	}

	::System::Void Method_1_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_2F0F99A12DB93F30_OFFSET))(this);
	}

	::System::Boolean Method_1_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_A8F6F688241E6DBC_OFFSET))(this);
	}

	::System::Void Method_1_999B8B439422C7E7(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_999B8B439422C7E7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_76CD9B9D1269FA90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_76CD9B9D1269FA90_OFFSET))(this, a1);
	}

	::System::Single Method_1_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_3422201382CE593B_OFFSET))(this);
	}

	::System::Void Method_1_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_626C719A884DEF9A_OFFSET))(this, a1);
	}

	::System::Void Method_1_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_1_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_664C062015F0C2D3_OFFSET))(this, a1);
	}
};
