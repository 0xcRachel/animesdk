#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_618;
class Class_1_AE0CA897D782D638;
namespace RPG::Client { class AvatarData; }

#define CLASS_1_3E024EFE4FEE811E_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x8583C70)
#define CLASS_1_3E024EFE4FEE811E_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x8583BC0)
#define CLASS_1_3E024EFE4FEE811E_METHOD_1_A7064B88FDB61D47_OFFSET UNITYSDK_OFFSET(0x8583CB0)
#define CLASS_1_3E024EFE4FEE811E_METHOD_1_C0F1CFEE93E7828C_OFFSET UNITYSDK_OFFSET(0x8583C10)
#define CLASS_1_3E024EFE4FEE811E__CTOR_OFFSET UNITYSDK_OFFSET(0x8583D90)

inline static constexpr unsigned int Class_1_3E024EFE4FEE811E_TypeDefinitionIndex = 52119;

class Class_1_3E024EFE4FEE811E : public ::System::Object
{
public:
	::Class_1_AE0CA897D782D638* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E024EFE4FEE811E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3E024EFE4FEE811E_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_C0F1CFEE93E7828C(::RPG::Client::AvatarData* a1, ::Class_1_AE0CA897D782D638* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*, ::Class_1_AE0CA897D782D638*))((::PBYTE)hIl2Cpp + CLASS_1_3E024EFE4FEE811E_METHOD_1_C0F1CFEE93E7828C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E024EFE4FEE811E_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_618* Method_1_A7064B88FDB61D47()
	{
		return ((::Class_0_16E4307DCC419505_618*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E024EFE4FEE811E_METHOD_1_A7064B88FDB61D47_OFFSET))(this);
	}
};
