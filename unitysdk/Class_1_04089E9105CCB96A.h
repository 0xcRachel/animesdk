#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_04089E9105CCB96A_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x165A02C0)
#define CLASS_1_04089E9105CCB96A_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x165A0170)
#define CLASS_1_04089E9105CCB96A_METHOD_1_050926EEA9F75C36_OFFSET UNITYSDK_OFFSET(0x165A06C0)
#define CLASS_1_04089E9105CCB96A_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x165A04E0)
#define CLASS_1_04089E9105CCB96A_METHOD_1_241D2AFD7C4CDE5B_OFFSET UNITYSDK_OFFSET(0x165A0730)
#define CLASS_1_04089E9105CCB96A_METHOD_1_5FB8120EAA10CD1F_OFFSET UNITYSDK_OFFSET(0x165A05B0)
#define CLASS_1_04089E9105CCB96A_METHOD_1_7B2415EF3B4401A0_OFFSET UNITYSDK_OFFSET(0x165A0620)
#define CLASS_1_04089E9105CCB96A_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x165A0540)
#define CLASS_1_04089E9105CCB96A_METHOD_1_F00276A0DE918F56_1_OFFSET UNITYSDK_OFFSET(0x165A0460)
#define CLASS_1_04089E9105CCB96A_METHOD_1_F00276A0DE918F56_OFFSET UNITYSDK_OFFSET(0x165A03E0)
#define CLASS_1_04089E9105CCB96A_METHOD_1_F5D2B8B014A6F84F_OFFSET UNITYSDK_OFFSET(0x165A01C0)
#define CLASS_1_04089E9105CCB96A_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x165A0340)
#define CLASS_1_04089E9105CCB96A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x165A0280)
#define CLASS_1_04089E9105CCB96A__CTOR_OFFSET UNITYSDK_OFFSET(0x165A0240)

inline static constexpr unsigned int Class_1_04089E9105CCB96A_TypeDefinitionIndex = 66702;

class Class_1_04089E9105CCB96A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::UIController*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A__CTOR_1_OFFSET))(this, a1);
	}

	::System::Int32 get_Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_GET_COUNT_OFFSET))(this);
	}

	::RPG::Client::UIController* Method_1_F5D2B8B014A6F84F(::System::Int32 a1)
	{
		return ((::RPG::Client::UIController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_F5D2B8B014A6F84F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::RPG::Client::UIController*>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::UIController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::RPG::Client::UIController* Method_1_F00276A0DE918F56()
	{
		return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_F00276A0DE918F56_OFFSET))(this);
	}

	::RPG::Client::UIController* Method_1_F00276A0DE918F56_1()
	{
		return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_F00276A0DE918F56_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_1_5FB8120EAA10CD1F(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_5FB8120EAA10CD1F_OFFSET))(this, a1);
	}

	::System::Void Method_1_050926EEA9F75C36(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_050926EEA9F75C36_OFFSET))(this, a1);
	}

	::RPG::Client::UIController* Method_1_241D2AFD7C4CDE5B(::System::Predicate_1<::RPG::Client::UIController*>* a1)
	{
		return ((::RPG::Client::UIController*(*)(::PVOID, ::System::Predicate_1<::RPG::Client::UIController*>*))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_241D2AFD7C4CDE5B_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_7B2415EF3B4401A0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_7B2415EF3B4401A0_OFFSET))(this);
	}
};
