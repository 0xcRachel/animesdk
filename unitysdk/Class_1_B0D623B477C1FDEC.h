#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_B0D623B477C1FDEC_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xCAE4200)
#define CLASS_1_B0D623B477C1FDEC_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xCAE40E0)
#define CLASS_1_B0D623B477C1FDEC_METHOD_1_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0xCAE4240)
#define CLASS_1_B0D623B477C1FDEC_METHOD_1_BF3A97FF800F0C24_1_OFFSET UNITYSDK_OFFSET(0xCAE43D0)
#define CLASS_1_B0D623B477C1FDEC_METHOD_1_BF3A97FF800F0C24_OFFSET UNITYSDK_OFFSET(0xCAE4330)
#define CLASS_1_B0D623B477C1FDEC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCAE4390)
#define CLASS_1_B0D623B477C1FDEC_METHOD_1_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0xCAE4120)
#define CLASS_1_B0D623B477C1FDEC__CTOR_OFFSET UNITYSDK_OFFSET(0xCAE40D0)

inline static constexpr unsigned int Class_1_B0D623B477C1FDEC_TypeDefinitionIndex = 55765;

class Class_1_B0D623B477C1FDEC : public ::System::Object
{
public:
	::RPG::Client::UIController* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B0D623B477C1FDEC__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0D623B477C1FDEC_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0D623B477C1FDEC_METHOD_1_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void Method_1_51AC7912135C5E23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0D623B477C1FDEC_METHOD_1_51AC7912135C5E23_OFFSET))(this);
	}

	::System::Void Method_1_BF3A97FF800F0C24(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B0D623B477C1FDEC_METHOD_1_BF3A97FF800F0C24_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0D623B477C1FDEC_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_BF3A97FF800F0C24_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B0D623B477C1FDEC_METHOD_1_BF3A97FF800F0C24_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0D623B477C1FDEC_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
