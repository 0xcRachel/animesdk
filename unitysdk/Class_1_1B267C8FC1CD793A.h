#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_510;
namespace RPG::Client { class BaseGameFlowContext; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1B267C8FC1CD793A_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x10C11620)
#define CLASS_1_1B267C8FC1CD793A_METHOD_1_1DFDAFA069284AFE_OFFSET UNITYSDK_OFFSET(0x10C11700)
#define CLASS_1_1B267C8FC1CD793A_METHOD_1_43558873524478EC_OFFSET UNITYSDK_OFFSET(0x10C11680)
#define CLASS_1_1B267C8FC1CD793A_METHOD_1_628D358C65300F5A_OFFSET UNITYSDK_OFFSET(0x10C11A00)
#define CLASS_1_1B267C8FC1CD793A_METHOD_1_738259FD4C68DE6A_OFFSET UNITYSDK_OFFSET(0x10C11690)
#define CLASS_1_1B267C8FC1CD793A_METHOD_1_81B3E0403F0D3681_OFFSET UNITYSDK_OFFSET(0x10C11770)
#define CLASS_1_1B267C8FC1CD793A_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10C11CC0)
#define CLASS_1_1B267C8FC1CD793A__CTOR_OFFSET UNITYSDK_OFFSET(0x10C11D30)

inline static constexpr unsigned int Class_1_1B267C8FC1CD793A_TypeDefinitionIndex = 51101;

class Class_1_1B267C8FC1CD793A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::BaseGameFlowContext*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B267C8FC1CD793A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B267C8FC1CD793A_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BaseGameFlowContext*>* Method_1_43558873524478EC()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BaseGameFlowContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B267C8FC1CD793A_METHOD_1_43558873524478EC_OFFSET))(this);
	}

	::System::Void Method_1_738259FD4C68DE6A(::RPG::Client::BaseGameFlowContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + CLASS_1_1B267C8FC1CD793A_METHOD_1_738259FD4C68DE6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_1DFDAFA069284AFE(::RPG::Client::BaseGameFlowContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + CLASS_1_1B267C8FC1CD793A_METHOD_1_1DFDAFA069284AFE_OFFSET))(this, a1);
	}

	::System::Void Method_1_81B3E0403F0D3681(::System::Int32 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1B267C8FC1CD793A_METHOD_1_81B3E0403F0D3681_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_628D358C65300F5A(::Class_0_16E4307DCC419505_510* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_510*))((::PBYTE)hIl2Cpp + CLASS_1_1B267C8FC1CD793A_METHOD_1_628D358C65300F5A_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B267C8FC1CD793A_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
