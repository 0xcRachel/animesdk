#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_319;
class Class_0_16E4307DCC419505_345;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_4324BEDF827E4FFE_METHOD_1_7C3A34589767447A_OFFSET UNITYSDK_OFFSET(0x8D39D90)
#define CLASS_1_4324BEDF827E4FFE__CTOR_OFFSET UNITYSDK_OFFSET(0x8D39D40)

inline static constexpr unsigned int Class_1_4324BEDF827E4FFE_TypeDefinitionIndex = 40988;

class Class_1_4324BEDF827E4FFE : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_345*>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_345*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_345*>*))((::PBYTE)hIl2Cpp + CLASS_1_4324BEDF827E4FFE__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_7C3A34589767447A(::Class_0_16E4307DCC419505_319* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_0_16E4307DCC419505_319*))((::PBYTE)hIl2Cpp + CLASS_1_4324BEDF827E4FFE_METHOD_1_7C3A34589767447A_OFFSET))(this, a1);
	}
};
