#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_551;
class Class_1_EA471C1B20C1B83C;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_EC56D43FD689FAC8_METHOD_1_250203490119AF47_OFFSET UNITYSDK_OFFSET(0x114B6A80)
#define CLASS_1_EC56D43FD689FAC8_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x114B7260)
#define CLASS_1_EC56D43FD689FAC8_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x114B6B10)
#define CLASS_1_EC56D43FD689FAC8_METHOD_1_D4B3F6257D2DFAA9_1_OFFSET UNITYSDK_OFFSET(0x114B6EE0)
#define CLASS_1_EC56D43FD689FAC8_METHOD_1_D4B3F6257D2DFAA9_OFFSET UNITYSDK_OFFSET(0x114B6B60)
#define CLASS_1_EC56D43FD689FAC8__CTOR_OFFSET UNITYSDK_OFFSET(0x114B6B00)

inline static constexpr unsigned int Class_1_EC56D43FD689FAC8_TypeDefinitionIndex = 50682;

class Class_1_EC56D43FD689FAC8 : public ::System::Object
{
public:
	::Class_1_EA471C1B20C1B83C* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC56D43FD689FAC8__CTOR_OFFSET))(this);
	}

	static ::Class_1_EC56D43FD689FAC8* Method_1_250203490119AF47(::Class_1_EA471C1B20C1B83C* a1)
	{
		return ((::Class_1_EC56D43FD689FAC8*(*)(::Class_1_EA471C1B20C1B83C*))((::PBYTE)hIl2Cpp + CLASS_1_EC56D43FD689FAC8_METHOD_1_250203490119AF47_OFFSET))(a1);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_551* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_551*))((::PBYTE)hIl2Cpp + CLASS_1_EC56D43FD689FAC8_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_1_D4B3F6257D2DFAA9(::Class_0_16E4307DCC419505_551* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_551*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_EC56D43FD689FAC8_METHOD_1_D4B3F6257D2DFAA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D4B3F6257D2DFAA9_1(::Class_0_16E4307DCC419505_551* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_551*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_EC56D43FD689FAC8_METHOD_1_D4B3F6257D2DFAA9_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC56D43FD689FAC8_METHOD_1_BB881F05E41D3A04_OFFSET))(this);
	}
};
