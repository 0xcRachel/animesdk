#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_618;
class Class_1_AE0CA897D782D638;
namespace RPG::Client { class AvatarData; }

#define CLASS_1_7CA6FCBEAD8A3172_METHOD_1_2E7C9236490EC44C_OFFSET UNITYSDK_OFFSET(0x10F286C0)
#define CLASS_1_7CA6FCBEAD8A3172_METHOD_1_7CB4BF39BF8A51BE_OFFSET UNITYSDK_OFFSET(0x10F28780)
#define CLASS_1_7CA6FCBEAD8A3172_METHOD_1_C0F1CFEE93E7828C_OFFSET UNITYSDK_OFFSET(0x10F28660)
#define CLASS_1_7CA6FCBEAD8A3172__CTOR_OFFSET UNITYSDK_OFFSET(0x10F288D0)

inline static constexpr unsigned int Class_1_7CA6FCBEAD8A3172_TypeDefinitionIndex = 52117;

class Class_1_7CA6FCBEAD8A3172 : public ::System::Object
{
public:
	::Class_1_AE0CA897D782D638* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CA6FCBEAD8A3172__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C0F1CFEE93E7828C(::RPG::Client::AvatarData* a1, ::Class_1_AE0CA897D782D638* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*, ::Class_1_AE0CA897D782D638*))((::PBYTE)hIl2Cpp + CLASS_1_7CA6FCBEAD8A3172_METHOD_1_C0F1CFEE93E7828C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2E7C9236490EC44C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CA6FCBEAD8A3172_METHOD_1_2E7C9236490EC44C_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_618* Method_1_7CB4BF39BF8A51BE()
	{
		return ((::Class_0_16E4307DCC419505_618*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CA6FCBEAD8A3172_METHOD_1_7CB4BF39BF8A51BE_OFFSET))(this);
	}
};
