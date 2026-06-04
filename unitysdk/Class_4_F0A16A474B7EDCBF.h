#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C3C83892C6E19EC.h"

namespace RPG::Client { class BattleSilverWolf999CustomUIData; }
namespace System { class String; }

#define CLASS_4_F0A16A474B7EDCBF_METHOD_4_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x14FBFEC0)
#define CLASS_4_F0A16A474B7EDCBF_METHOD_4_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x14FBFCD0)
#define CLASS_4_F0A16A474B7EDCBF__CTOR_OFFSET UNITYSDK_OFFSET(0x14FBFE90)
#define CLASS_4_F0A16A474B7EDCBF__ONBIND_OFFSET UNITYSDK_OFFSET(0x14FBFDE0)
#define CLASS_4_F0A16A474B7EDCBF___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x14FBFF20)

inline static constexpr unsigned int Class_4_F0A16A474B7EDCBF_TypeDefinitionIndex = 66646;

class Class_4_F0A16A474B7EDCBF : public ::Class_3_9C3C83892C6E19EC
{
public:
	// static const ::System::String* Field_4_0; // 0x0
	::RPG::Client::BattleSilverWolf999CustomUIData* Field_4_1; // 0x160

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F0A16A474B7EDCBF__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F0A16A474B7EDCBF_METHOD_4_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F0A16A474B7EDCBF__ONBIND_OFFSET))(this);
	}

	::System::Void Method_4_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F0A16A474B7EDCBF_METHOD_4_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F0A16A474B7EDCBF___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
