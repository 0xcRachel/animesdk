#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_907;
class Class_1_933C07741192A471_Class_1_ACB67ECEDD06AD5B_1;
class Class_1_F9FBCC956DFCF137_13;
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_933C07741192A471_METHOD_1_270550E508A1D3CD_OFFSET UNITYSDK_OFFSET(0x111B6140)
#define CLASS_1_933C07741192A471_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x111B5E50)
#define CLASS_1_933C07741192A471_METHOD_1_7EA127DE55AAA205_OFFSET UNITYSDK_OFFSET(0x111B6070)
#define CLASS_1_933C07741192A471_METHOD_1_B6AECBC638DC1B17_OFFSET UNITYSDK_OFFSET(0x111B5DC0)
#define CLASS_1_933C07741192A471_METHOD_1_EC01BF7837991593_OFFSET UNITYSDK_OFFSET(0x111B5EE0)
#define CLASS_1_933C07741192A471__CTOR_OFFSET UNITYSDK_OFFSET(0x111B61D0)

inline static constexpr unsigned int Class_1_933C07741192A471_TypeDefinitionIndex = 61493;

class Class_1_933C07741192A471 : public ::System::Object
{
public:
	::System::Collections::Generic::Stack_1<::Class_1_933C07741192A471_Class_1_ACB67ECEDD06AD5B_1*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_933C07741192A471__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_907* Method_1_B6AECBC638DC1B17()
	{
		return ((::Class_0_16E4307DCC419505_907*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_933C07741192A471_METHOD_1_B6AECBC638DC1B17_OFFSET))(this);
	}

	::Class_1_F9FBCC956DFCF137_13* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_F9FBCC956DFCF137_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_933C07741192A471_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_EC01BF7837991593(::Class_0_16E4307DCC419505_907* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_907*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_933C07741192A471_METHOD_1_EC01BF7837991593_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7EA127DE55AAA205(::Class_0_16E4307DCC419505_907* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_907*))((::PBYTE)hIl2Cpp + CLASS_1_933C07741192A471_METHOD_1_7EA127DE55AAA205_OFFSET))(this, a1);
	}

	::System::Void Method_1_270550E508A1D3CD(::Class_0_16E4307DCC419505_907* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_907*))((::PBYTE)hIl2Cpp + CLASS_1_933C07741192A471_METHOD_1_270550E508A1D3CD_OFFSET))(this, a1);
	}
};
