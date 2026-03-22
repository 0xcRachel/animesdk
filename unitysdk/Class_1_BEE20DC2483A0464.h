#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_618;
class Class_1_AE0CA897D782D638;
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class BaseGachaPoolData; }

#define CLASS_1_BEE20DC2483A0464_METHOD_1_17B794D886466CBC_OFFSET UNITYSDK_OFFSET(0x842CE60)
#define CLASS_1_BEE20DC2483A0464_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x842CE10)
#define CLASS_1_BEE20DC2483A0464_METHOD_1_E1684D6DC9B03443_OFFSET UNITYSDK_OFFSET(0x842CB80)
#define CLASS_1_BEE20DC2483A0464_METHOD_1_FCF7CC0F344612FB_OFFSET UNITYSDK_OFFSET(0x842CBF0)
#define CLASS_1_BEE20DC2483A0464__CTOR_OFFSET UNITYSDK_OFFSET(0x842CFE0)

inline static constexpr unsigned int Class_1_BEE20DC2483A0464_TypeDefinitionIndex = 52118;

class Class_1_BEE20DC2483A0464 : public ::System::Object
{
public:
	::RPG::Client::BaseGachaPoolData* Field_1_1; // 0x10
	::Class_1_AE0CA897D782D638* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEE20DC2483A0464__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E1684D6DC9B03443(::RPG::Client::AvatarData* a1, ::Class_1_AE0CA897D782D638* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*, ::Class_1_AE0CA897D782D638*))((::PBYTE)hIl2Cpp + CLASS_1_BEE20DC2483A0464_METHOD_1_E1684D6DC9B03443_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEE20DC2483A0464_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_618* Method_1_17B794D886466CBC()
	{
		return ((::Class_0_16E4307DCC419505_618*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEE20DC2483A0464_METHOD_1_17B794D886466CBC_OFFSET))(this);
	}

	::RPG::Client::BaseGachaPoolData* Method_1_FCF7CC0F344612FB(::System::UInt32 a1)
	{
		return ((::RPG::Client::BaseGachaPoolData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BEE20DC2483A0464_METHOD_1_FCF7CC0F344612FB_OFFSET))(this, a1);
	}
};
