#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_618;
class Class_1_AE0CA897D782D638;
namespace RPG::Client { class AvatarData; }

#define CLASS_1_29BB2874A14511B8_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x8660B90)
#define CLASS_1_29BB2874A14511B8_METHOD_1_56B6FF7D70881B68_OFFSET UNITYSDK_OFFSET(0x8660AD0)
#define CLASS_1_29BB2874A14511B8_METHOD_1_66F6D05493E82CD1_OFFSET UNITYSDK_OFFSET(0x8660BE0)
#define CLASS_1_29BB2874A14511B8__CTOR_OFFSET UNITYSDK_OFFSET(0x8660D40)

inline static constexpr unsigned int Class_1_29BB2874A14511B8_TypeDefinitionIndex = 52116;

class Class_1_29BB2874A14511B8 : public ::System::Object
{
public:
	::Class_1_AE0CA897D782D638* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29BB2874A14511B8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_56B6FF7D70881B68(::RPG::Client::AvatarData* a1, ::Class_1_AE0CA897D782D638* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*, ::Class_1_AE0CA897D782D638*))((::PBYTE)hIl2Cpp + CLASS_1_29BB2874A14511B8_METHOD_1_56B6FF7D70881B68_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29BB2874A14511B8_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_618* Method_1_66F6D05493E82CD1()
	{
		return ((::Class_0_16E4307DCC419505_618*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29BB2874A14511B8_METHOD_1_66F6D05493E82CD1_OFFSET))(this);
	}
};
