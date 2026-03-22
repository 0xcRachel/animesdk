#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4532365BD3F1290.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_9C2F1FCEC1A75FFD_METHOD_2_6F184156BD60CD91_1_OFFSET UNITYSDK_OFFSET(0x160CB450)
#define CLASS_2_9C2F1FCEC1A75FFD_METHOD_2_6F184156BD60CD91_2_OFFSET UNITYSDK_OFFSET(0x160CB590)
#define CLASS_2_9C2F1FCEC1A75FFD_METHOD_2_6F184156BD60CD91_3_OFFSET UNITYSDK_OFFSET(0x160CB6D0)
#define CLASS_2_9C2F1FCEC1A75FFD_METHOD_2_6F184156BD60CD91_OFFSET UNITYSDK_OFFSET(0x160CB310)
#define CLASS_2_9C2F1FCEC1A75FFD_METHOD_2_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x160CB810)
#define CLASS_2_9C2F1FCEC1A75FFD__CTOR_OFFSET UNITYSDK_OFFSET(0x160CB8D0)

inline static constexpr unsigned int Class_2_9C2F1FCEC1A75FFD_TypeDefinitionIndex = 32323;

class Class_2_9C2F1FCEC1A75FFD : public ::Class_1_F4532365BD3F1290
{
public:
	::UnityEngine::GameObject* Field_2_0; // 0x68
	::System::Collections::Generic::List_1<::Class_2_9C2F1FCEC1A75FFD*>* Field_2_2; // 0x70
	::UnityEngine::MonoBehaviour* Field_2_1; // 0x78
	::Class_2_9C2F1FCEC1A75FFD* Field_2_3; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C2F1FCEC1A75FFD__CTOR_OFFSET))(this);
	}

	::System::Single Method_2_6F184156BD60CD91(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9C2F1FCEC1A75FFD_METHOD_2_6F184156BD60CD91_OFFSET))(this, a1);
	}

	::System::Single Method_2_6F184156BD60CD91_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9C2F1FCEC1A75FFD_METHOD_2_6F184156BD60CD91_1_OFFSET))(this, a1);
	}

	::System::Single Method_2_6F184156BD60CD91_2(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9C2F1FCEC1A75FFD_METHOD_2_6F184156BD60CD91_2_OFFSET))(this, a1);
	}

	::System::Single Method_2_6F184156BD60CD91_3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9C2F1FCEC1A75FFD_METHOD_2_6F184156BD60CD91_3_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C2F1FCEC1A75FFD_METHOD_2_C2245EC58D417830_OFFSET))(this);
	}
};
