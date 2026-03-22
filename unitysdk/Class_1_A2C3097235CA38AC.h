#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_661;
namespace RPG::GameCore { class RogueTournWeeklyDisplayRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A2C3097235CA38AC_GET_MACROPARAMS_OFFSET UNITYSDK_OFFSET(0xF57DC10)
#define CLASS_1_A2C3097235CA38AC_METHOD_1_420F5543CED5025E_OFFSET UNITYSDK_OFFSET(0xF57DC20)
#define CLASS_1_A2C3097235CA38AC_METHOD_1_A15511C16BAB4E1B_OFFSET UNITYSDK_OFFSET(0xF57DA10)
#define CLASS_1_A2C3097235CA38AC_METHOD_1_F9F6D6E5A8732245_OFFSET UNITYSDK_OFFSET(0xF57DA70)
#define CLASS_1_A2C3097235CA38AC__CTOR_OFFSET UNITYSDK_OFFSET(0xF57D990)

inline static constexpr unsigned int Class_1_A2C3097235CA38AC_TypeDefinitionIndex = 53826;

class Class_1_A2C3097235CA38AC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_661*>* _MacroParams_k__BackingField; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A2C3097235CA38AC__CTOR_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_A2C3097235CA38AC*>* Method_1_F9F6D6E5A8732245(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_A2C3097235CA38AC*>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_A2C3097235CA38AC_METHOD_1_F9F6D6E5A8732245_OFFSET))(a1);
	}

	::RPG::GameCore::RogueTournWeeklyDisplayRow* Method_1_A15511C16BAB4E1B()
	{
		return ((::RPG::GameCore::RogueTournWeeklyDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2C3097235CA38AC_METHOD_1_A15511C16BAB4E1B_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_661*>* get_MacroParams()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_661*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2C3097235CA38AC_GET_MACROPARAMS_OFFSET))(this);
	}

	::System::String* Method_1_420F5543CED5025E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2C3097235CA38AC_METHOD_1_420F5543CED5025E_OFFSET))(this);
	}
};
