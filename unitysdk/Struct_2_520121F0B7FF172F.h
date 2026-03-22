#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E0A99F3F953ABF88.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_520121F0B7FF172F_METHOD_2_1DACE685A565B45E_OFFSET UNITYSDK_OFFSET(0xB2BA4C0)
#define STRUCT_2_520121F0B7FF172F_METHOD_2_6ECD6AEF43AFDC8B_OFFSET UNITYSDK_OFFSET(0xB2BA700)
#define STRUCT_2_520121F0B7FF172F_METHOD_2_B2182821D893BB26_OFFSET UNITYSDK_OFFSET(0xB2BA440)
#define STRUCT_2_520121F0B7FF172F__CTOR_OFFSET UNITYSDK_OFFSET(0x3F1550)

inline static constexpr unsigned int Struct_2_520121F0B7FF172F_TypeDefinitionIndex = 58880;

struct alignas(8) Struct_2_520121F0B7FF172F
{
	::Struct_2_E0A99F3F953ABF88 Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_2_1; // 0x38
	::System::Single Field_2_2; // 0x40
	::UnityEngine::Vector3 Field_2_3; // 0x44
	::UnityEngine::Vector2 Field_2_4; // 0x50
	::UnityEngine::Vector2 Field_2_5; // 0x58
	::System::Boolean Field_2_6; // 0x60
	::System::Boolean Field_2_7; // 0x61

	::System::Void _ctor(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Action* a4, ::System::Action* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::UnityEngine::Vector3, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + STRUCT_2_520121F0B7FF172F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_2_B2182821D893BB26(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + STRUCT_2_520121F0B7FF172F_METHOD_2_B2182821D893BB26_OFFSET))(a1);
	}

	static ::System::Void Method_2_1DACE685A565B45E(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + STRUCT_2_520121F0B7FF172F_METHOD_2_1DACE685A565B45E_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_2_6ECD6AEF43AFDC8B(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + STRUCT_2_520121F0B7FF172F_METHOD_2_6ECD6AEF43AFDC8B_OFFSET))(a1);
	}
};
