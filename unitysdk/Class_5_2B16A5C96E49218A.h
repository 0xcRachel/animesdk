#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_77E9A57BF479B8FD.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class Texture; }

#define CLASS_5_2B16A5C96E49218A_METHOD_5_1A83B4B5F36C859C_1_OFFSET UNITYSDK_OFFSET(0x9E92B60)
#define CLASS_5_2B16A5C96E49218A_METHOD_5_1A83B4B5F36C859C_OFFSET UNITYSDK_OFFSET(0x9E92770)
#define CLASS_5_2B16A5C96E49218A_METHOD_5_29757CCEC95F1D79_OFFSET UNITYSDK_OFFSET(0x9E92B50)
#define CLASS_5_2B16A5C96E49218A_METHOD_5_4252E84AE0496D23_OFFSET UNITYSDK_OFFSET(0x9E92C40)
#define CLASS_5_2B16A5C96E49218A_METHOD_5_4E86709449004B68_OFFSET UNITYSDK_OFFSET(0x9E928E0)
#define CLASS_5_2B16A5C96E49218A_METHOD_5_9360C31866DA05E1_OFFSET UNITYSDK_OFFSET(0x9E92810)
#define CLASS_5_2B16A5C96E49218A_METHOD_5_9E600C4C9DC20126_1_OFFSET UNITYSDK_OFFSET(0x9E92700)
#define CLASS_5_2B16A5C96E49218A_METHOD_5_9E600C4C9DC20126_OFFSET UNITYSDK_OFFSET(0x9E92690)
#define CLASS_5_2B16A5C96E49218A__CTOR_OFFSET UNITYSDK_OFFSET(0x9E92B00)

inline static constexpr unsigned int Class_5_2B16A5C96E49218A_TypeDefinitionIndex = 39202;

class Class_5_2B16A5C96E49218A : public ::Class_4_77E9A57BF479B8FD
{
public:
	static ::UnityEngine::Texture** StaticGet_Field_5_0()
	{
		return (::UnityEngine::Texture**)Il2CppClass::FromTypeDefinitionIndex(Class_5_2B16A5C96E49218A_TypeDefinitionIndex)->GetStaticField(0x18910);
	}
	::System::Int32 Field_5_1; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2B16A5C96E49218A__CTOR_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_5_9E600C4C9DC20126(::UnityEngine::Texture* a1, ::UnityEngine::Texture* a2, ::System::Single a3)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2B16A5C96E49218A_METHOD_5_9E600C4C9DC20126_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Texture* Method_5_9E600C4C9DC20126_1(::UnityEngine::Texture* a1, ::UnityEngine::Texture* a2, ::System::Single a3)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2B16A5C96E49218A_METHOD_5_9E600C4C9DC20126_1_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Texture* Method_5_1A83B4B5F36C859C()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2B16A5C96E49218A_METHOD_5_1A83B4B5F36C859C_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_5_9360C31866DA05E1()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2B16A5C96E49218A_METHOD_5_9360C31866DA05E1_OFFSET))(this);
	}

	::System::Void Method_5_4E86709449004B68(::UnityEngine::Cubemap* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Cubemap*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_5_2B16A5C96E49218A_METHOD_5_4E86709449004B68_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Texture* Method_5_29757CCEC95F1D79(::UnityEngine::Texture* P0, ::UnityEngine::Texture* P1, ::System::Single P2)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2B16A5C96E49218A_METHOD_5_29757CCEC95F1D79_OFFSET))(this, P0, P1, P2);
	}

	::UnityEngine::Texture* Method_5_1A83B4B5F36C859C_1()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2B16A5C96E49218A_METHOD_5_1A83B4B5F36C859C_1_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_5_4252E84AE0496D23()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2B16A5C96E49218A_METHOD_5_4252E84AE0496D23_OFFSET))(this);
	}
};
