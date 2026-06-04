#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_660;
class Class_0_16E4307DCC419505_672;
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D19E08E6BA24C7F0_METHOD_1_3A687E7BC323C4B2_OFFSET UNITYSDK_OFFSET(0x14248750)
#define CLASS_1_D19E08E6BA24C7F0_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x14248670)
#define CLASS_1_D19E08E6BA24C7F0_METHOD_1_7E1BADD1D133FA1C_OFFSET UNITYSDK_OFFSET(0x14248C90)
#define CLASS_1_D19E08E6BA24C7F0_METHOD_1_F7279D36C07FFAAF_1_OFFSET UNITYSDK_OFFSET(0x14248AD0)
#define CLASS_1_D19E08E6BA24C7F0_METHOD_1_F7279D36C07FFAAF_OFFSET UNITYSDK_OFFSET(0x14248910)
#define CLASS_1_D19E08E6BA24C7F0__CTOR_OFFSET UNITYSDK_OFFSET(0x14248E30)

inline static constexpr unsigned int Class_1_D19E08E6BA24C7F0_TypeDefinitionIndex = 58360;

class Class_1_D19E08E6BA24C7F0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_672*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D19E08E6BA24C7F0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_672* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_672*))((::PBYTE)hIl2Cpp + CLASS_1_D19E08E6BA24C7F0_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_1_3A687E7BC323C4B2(::Class_0_16E4307DCC419505_660* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_660*))((::PBYTE)hIl2Cpp + CLASS_1_D19E08E6BA24C7F0_METHOD_1_3A687E7BC323C4B2_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7279D36C07FFAAF(::Class_0_16E4307DCC419505_660* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_660*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_D19E08E6BA24C7F0_METHOD_1_F7279D36C07FFAAF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F7279D36C07FFAAF_1(::Class_0_16E4307DCC419505_660* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_660*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_D19E08E6BA24C7F0_METHOD_1_F7279D36C07FFAAF_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7E1BADD1D133FA1C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D19E08E6BA24C7F0_METHOD_1_7E1BADD1D133FA1C_OFFSET))(this);
	}
};
