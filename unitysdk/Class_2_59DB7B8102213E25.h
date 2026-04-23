#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FarmElementPropState.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define CLASS_2_59DB7B8102213E25_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4A9C30)
#define CLASS_2_59DB7B8102213E25_GET_ISFARMELEMENTACTIVE_OFFSET UNITYSDK_OFFSET(0xC4AA690)
#define CLASS_2_59DB7B8102213E25_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0xC4A9F10)
#define CLASS_2_59DB7B8102213E25_METHOD_2_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0xC4A9C80)
#define CLASS_2_59DB7B8102213E25_METHOD_2_627C7524E98F4AC5_1_OFFSET UNITYSDK_OFFSET(0xC4AA2B0)
#define CLASS_2_59DB7B8102213E25_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xC4AA0F0)
#define CLASS_2_59DB7B8102213E25_METHOD_2_7BB881FF8A7B80C2_OFFSET UNITYSDK_OFFSET(0xC4AA4C0)
#define CLASS_2_59DB7B8102213E25_METHOD_2_AE2ADF6C0A456481_OFFSET UNITYSDK_OFFSET(0xC4AA330)
#define CLASS_2_59DB7B8102213E25_METHOD_2_BB4E8EF38FBBC39F_OFFSET UNITYSDK_OFFSET(0xC4AA570)
#define CLASS_2_59DB7B8102213E25_METHOD_2_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0xC4A9EC0)
#define CLASS_2_59DB7B8102213E25_METHOD_2_E7EF6BC52B28648C_1_OFFSET UNITYSDK_OFFSET(0xC4AA170)
#define CLASS_2_59DB7B8102213E25_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xC4A9FB0)
#define CLASS_2_59DB7B8102213E25_SET_ISFARMELEMENTACTIVE_OFFSET UNITYSDK_OFFSET(0xC4AA6A0)
#define CLASS_2_59DB7B8102213E25__CTOR_OFFSET UNITYSDK_OFFSET(0xC4AA6B0)
#define CLASS_2_59DB7B8102213E25___DOACTIVE_B__7_0_OFFSET UNITYSDK_OFFSET(0xC4AA6F0)

inline static constexpr unsigned int Class_2_59DB7B8102213E25_TypeDefinitionIndex = 52656;

class Class_2_59DB7B8102213E25 : public ::RPG::GameCore::GameComponentBase
{
public:
	::UnityEngine::Coroutine* Field_2_1; // 0x18
	::System::String* Field_2_6; // 0x20
	::UnityEngine::Coroutine* Field_2_14; // 0x28
	::System::String* Field_2_9; // 0x30
	::System::String* Field_2_10; // 0x38
	::System::String* Field_2_4; // 0x40
	::System::Collections::Generic::List_1<::System::String*>* Field_2_11; // 0x48
	::UnityEngine::Coroutine* Field_2_2; // 0x50
	::System::String* Field_2_5; // 0x58
	::System::String* Field_2_3; // 0x60
	::System::Collections::Generic::List_1<::System::String*>* Field_2_7; // 0x68
	::RPG::Client::TextID Field_2_8; // 0x70
	::RPG::GameCore::FarmElementPropState Field_2_0; // 0x80
	::System::Boolean Field_2_13; // 0x84
	::System::Boolean _IsFarmElementActive_k__BackingField; // 0x85

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59DB7B8102213E25__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59DB7B8102213E25_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_C1D3BDE2A17F5C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59DB7B8102213E25_METHOD_2_C1D3BDE2A17F5C9D_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59DB7B8102213E25_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59DB7B8102213E25_METHOD_2_E7EF6BC52B28648C_1_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_AE2ADF6C0A456481()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59DB7B8102213E25_METHOD_2_AE2ADF6C0A456481_OFFSET))(this);
	}

	::RPG::Client::MonoEffectManager* Method_2_7BB881FF8A7B80C2()
	{
		return ((::RPG::Client::MonoEffectManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59DB7B8102213E25_METHOD_2_7BB881FF8A7B80C2_OFFSET))(this);
	}

	::System::Void Method_2_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59DB7B8102213E25_METHOD_2_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_2_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59DB7B8102213E25_METHOD_2_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_2_627C7524E98F4AC5_1()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59DB7B8102213E25_METHOD_2_627C7524E98F4AC5_1_OFFSET))(this);
	}

	::System::Void Method_2_BB4E8EF38FBBC39F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59DB7B8102213E25_METHOD_2_BB4E8EF38FBBC39F_OFFSET))(this, a1);
	}

	::System::Void Method_2_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59DB7B8102213E25_METHOD_2_092CD57850778EFC_OFFSET))(this);
	}

	::System::Boolean get_IsFarmElementActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59DB7B8102213E25_GET_ISFARMELEMENTACTIVE_OFFSET))(this);
	}

	::System::Void set_IsFarmElementActive(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59DB7B8102213E25_SET_ISFARMELEMENTACTIVE_OFFSET))(this, value);
	}

	::System::Void __DoActive_b__7_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59DB7B8102213E25___DOACTIVE_B__7_0_OFFSET))(this);
	}
};
