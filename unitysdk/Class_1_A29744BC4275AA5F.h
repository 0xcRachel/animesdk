#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleRightInfoSortType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_866;
class Class_1_896583BE596CCB59_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A29744BC4275AA5F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8A360E0)
#define CLASS_1_A29744BC4275AA5F_METHOD_1_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x8A36530)
#define CLASS_1_A29744BC4275AA5F_METHOD_1_C6882CCC114407DC_OFFSET UNITYSDK_OFFSET(0x8A36B20)
#define CLASS_1_A29744BC4275AA5F_METHOD_1_DFEC1F5291DCD37F_OFFSET UNITYSDK_OFFSET(0x8A362F0)
#define CLASS_1_A29744BC4275AA5F__CTOR_OFFSET UNITYSDK_OFFSET(0x8A36C70)

inline static constexpr unsigned int Class_1_A29744BC4275AA5F_TypeDefinitionIndex = 59139;

class Class_1_A29744BC4275AA5F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::BattleRightInfoSortType, ::Class_1_896583BE596CCB59_1*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A29744BC4275AA5F__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A29744BC4275AA5F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_DFEC1F5291DCD37F(::Class_0_16E4307DCC419505_866* a1, ::RPG::Client::BattleRightInfoSortType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_866*, ::RPG::Client::BattleRightInfoSortType))((::PBYTE)hIl2Cpp + CLASS_1_A29744BC4275AA5F_METHOD_1_DFEC1F5291DCD37F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A29744BC4275AA5F_METHOD_1_B961D33AD47A2113_OFFSET))(this);
	}

	::System::Int32 Method_1_C6882CCC114407DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A29744BC4275AA5F_METHOD_1_C6882CCC114407DC_OFFSET))(this);
	}
};
