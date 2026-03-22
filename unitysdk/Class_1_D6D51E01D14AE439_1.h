#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeData; }
namespace System { class Action; }

#define CLASS_1_D6D51E01D14AE439_1_METHOD_1_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x10C57260)
#define CLASS_1_D6D51E01D14AE439_1_METHOD_1_25F6F1B55C6B901F_OFFSET UNITYSDK_OFFSET(0x10C57450)
#define CLASS_1_D6D51E01D14AE439_1_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10C57090)
#define CLASS_1_D6D51E01D14AE439_1_METHOD_1_7DF075E665CB5282_1_OFFSET UNITYSDK_OFFSET(0x10C573F0)
#define CLASS_1_D6D51E01D14AE439_1_METHOD_1_7DF075E665CB5282_OFFSET UNITYSDK_OFFSET(0x10C57350)
#define CLASS_1_D6D51E01D14AE439_1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10C573B0)
#define CLASS_1_D6D51E01D14AE439_1_METHOD_1_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0x10C570D0)
#define CLASS_1_D6D51E01D14AE439_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10C574A0)

inline static constexpr unsigned int Class_1_D6D51E01D14AE439_1_TypeDefinitionIndex = 47884;

class Class_1_D6D51E01D14AE439_1 : public ::System::Object
{
public:
	::RPG::Client::ChallengeData* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6D51E01D14AE439_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6D51E01D14AE439_1_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6D51E01D14AE439_1_METHOD_1_D14D1C669EDC2D6B_OFFSET))(this);
	}

	::System::Void Method_1_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6D51E01D14AE439_1_METHOD_1_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Void Method_1_7DF075E665CB5282(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D6D51E01D14AE439_1_METHOD_1_7DF075E665CB5282_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6D51E01D14AE439_1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_7DF075E665CB5282_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D6D51E01D14AE439_1_METHOD_1_7DF075E665CB5282_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_25F6F1B55C6B901F(::RPG::Client::ChallengeData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + CLASS_1_D6D51E01D14AE439_1_METHOD_1_25F6F1B55C6B901F_OFFSET))(this, a1);
	}
};
