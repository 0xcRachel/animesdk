#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::GameCore { class BattleFailureTipsConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D42203C3868EBCB8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12C97A70)
#define CLASS_2_D42203C3868EBCB8_INIT_OFFSET UNITYSDK_OFFSET(0x12C97110)
#define CLASS_2_D42203C3868EBCB8_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x12C97230)
#define CLASS_2_D42203C3868EBCB8_METHOD_2_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x12C97B50)
#define CLASS_2_D42203C3868EBCB8__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x12C97B10)
#define CLASS_2_D42203C3868EBCB8__CTOR_OFFSET UNITYSDK_OFFSET(0x12C97BF0)
#define CLASS_2_D42203C3868EBCB8___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12C97CA0)
#define CLASS_2_D42203C3868EBCB8___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x12C97C10)
#define CLASS_2_D42203C3868EBCB8___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x12C97CB0)

inline static constexpr unsigned int Class_2_D42203C3868EBCB8_TypeDefinitionIndex = 57933;

class Class_2_D42203C3868EBCB8 : public ::RPG::Client::BaseModule
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_1; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::BattleFailureTipsConfigRow*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D42203C3868EBCB8__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D42203C3868EBCB8_INIT_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D42203C3868EBCB8_DISPOSE_OFFSET))(this);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D42203C3868EBCB8__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D42203C3868EBCB8_METHOD_2_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D42203C3868EBCB8_METHOD_2_489E0B827662C211_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D42203C3868EBCB8___IFIXBASEPROXY_INIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D42203C3868EBCB8___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D42203C3868EBCB8___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
	}
};
