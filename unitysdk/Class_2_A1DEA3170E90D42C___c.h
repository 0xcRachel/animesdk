#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_A1DEA3170E90D42C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8BD8660)
#define CLASS_2_A1DEA3170E90D42C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8BD8690)
#define CLASS_2_A1DEA3170E90D42C___C___TRYCLOSEROGUETOURNENTRANCEPAGEINSTACK_B__11_0_OFFSET UNITYSDK_OFFSET(0x8BD86A0)

inline static constexpr unsigned int Class_2_A1DEA3170E90D42C___c_TypeDefinitionIndex = 55326;

class Class_2_A1DEA3170E90D42C___c : public ::System::Object
{
public:
	static ::Class_2_A1DEA3170E90D42C___c** StaticGet___9()
	{
		return (::Class_2_A1DEA3170E90D42C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A1DEA3170E90D42C___c_TypeDefinitionIndex)->GetStaticField(0x46DA0);
	}
	static ::System::Func_1<::RPG::Client::Promises::IPromise*>** StaticGet___9__11_0()
	{
		return (::System::Func_1<::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A1DEA3170E90D42C___c_TypeDefinitionIndex)->GetStaticField(0x46DA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C___C__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __TryCloseRogueTournEntrancePageInStack_b__11_0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C___C___TRYCLOSEROGUETOURNENTRANCEPAGEINSTACK_B__11_0_OFFSET))(this);
	}
};
