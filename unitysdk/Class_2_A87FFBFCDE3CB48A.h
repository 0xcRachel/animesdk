#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class EffectAudioItem; }
namespace RPG::Client { class MonoEffectPluginAudio; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_A87FFBFCDE3CB48A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99E6A10)
#define CLASS_2_A87FFBFCDE3CB48A_METHOD_2_0DD61B7EBFB9E6E3_OFFSET UNITYSDK_OFFSET(0x99E7490)
#define CLASS_2_A87FFBFCDE3CB48A_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x99E7300)
#define CLASS_2_A87FFBFCDE3CB48A_METHOD_2_1655B698CBDB2306_OFFSET UNITYSDK_OFFSET(0x99E7AE0)
#define CLASS_2_A87FFBFCDE3CB48A_METHOD_2_1AEC14D3B3CAC7BB_OFFSET UNITYSDK_OFFSET(0x99E6A80)
#define CLASS_2_A87FFBFCDE3CB48A_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x99E6D90)
#define CLASS_2_A87FFBFCDE3CB48A_METHOD_2_3DA91C9B57824EE6_OFFSET UNITYSDK_OFFSET(0x99E7660)
#define CLASS_2_A87FFBFCDE3CB48A_METHOD_2_3E33CF58E8DF016D_OFFSET UNITYSDK_OFFSET(0x99E6890)
#define CLASS_2_A87FFBFCDE3CB48A_METHOD_2_634412D8B2E4DF6D_1_OFFSET UNITYSDK_OFFSET(0x99E79D0)
#define CLASS_2_A87FFBFCDE3CB48A_METHOD_2_634412D8B2E4DF6D_OFFSET UNITYSDK_OFFSET(0x99E7550)
#define CLASS_2_A87FFBFCDE3CB48A_METHOD_2_6C92A5F1AD703DD1_OFFSET UNITYSDK_OFFSET(0x99E69C0)
#define CLASS_2_A87FFBFCDE3CB48A_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x99E7C40)
#define CLASS_2_A87FFBFCDE3CB48A_METHOD_2_EBBC49A9109F0F2F_OFFSET UNITYSDK_OFFSET(0x99E7180)
#define CLASS_2_A87FFBFCDE3CB48A__CTOR_OFFSET UNITYSDK_OFFSET(0x99E7C00)
#define CLASS_2_A87FFBFCDE3CB48A___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99E7CB0)

inline static constexpr unsigned int Class_2_A87FFBFCDE3CB48A_TypeDefinitionIndex = 57141;

class Class_2_A87FFBFCDE3CB48A : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::GameObject* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::EffectAudioItem*>* Field_2_2; // 0x20
	::System::Single Field_2_3; // 0x28
	::System::Single Field_2_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A87FFBFCDE3CB48A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_3E33CF58E8DF016D(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_A87FFBFCDE3CB48A_METHOD_2_3E33CF58E8DF016D_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A87FFBFCDE3CB48A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_1AEC14D3B3CAC7BB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A87FFBFCDE3CB48A_METHOD_2_1AEC14D3B3CAC7BB_OFFSET))(this, a1);
	}

	::System::Void Method_2_634412D8B2E4DF6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A87FFBFCDE3CB48A_METHOD_2_634412D8B2E4DF6D_OFFSET))(this);
	}

	::System::Void Method_2_3DA91C9B57824EE6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A87FFBFCDE3CB48A_METHOD_2_3DA91C9B57824EE6_OFFSET))(this);
	}

	::System::Void Method_2_634412D8B2E4DF6D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A87FFBFCDE3CB48A_METHOD_2_634412D8B2E4DF6D_1_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A87FFBFCDE3CB48A_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A87FFBFCDE3CB48A_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_0DD61B7EBFB9E6E3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A87FFBFCDE3CB48A_METHOD_2_0DD61B7EBFB9E6E3_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBBC49A9109F0F2F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A87FFBFCDE3CB48A_METHOD_2_EBBC49A9109F0F2F_OFFSET))(this);
	}

	::System::Void Method_2_1655B698CBDB2306()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A87FFBFCDE3CB48A_METHOD_2_1655B698CBDB2306_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginAudio* Method_2_6C92A5F1AD703DD1()
	{
		return ((::RPG::Client::MonoEffectPluginAudio*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A87FFBFCDE3CB48A_METHOD_2_6C92A5F1AD703DD1_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_A87FFBFCDE3CB48A_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A87FFBFCDE3CB48A___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
