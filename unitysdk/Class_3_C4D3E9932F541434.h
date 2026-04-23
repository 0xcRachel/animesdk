#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A02A01DE35B55E23.h"

namespace RPG::GameCore { class NewFireMultiProjectiles; }
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C4D3E9932F541434_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4C7B60)
#define CLASS_3_C4D3E9932F541434_METHOD_3_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0xC4C75F0)
#define CLASS_3_C4D3E9932F541434_METHOD_3_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0xC4C78D0)
#define CLASS_3_C4D3E9932F541434_METHOD_3_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0xC4C7C00)
#define CLASS_3_C4D3E9932F541434_METHOD_3_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0xC4C70F0)
#define CLASS_3_C4D3E9932F541434_METHOD_3_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0xC4C7C10)
#define CLASS_3_C4D3E9932F541434_METHOD_3_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xC4C7BF0)
#define CLASS_3_C4D3E9932F541434__CTOR_OFFSET UNITYSDK_OFFSET(0xC4C70E0)
#define CLASS_3_C4D3E9932F541434___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4C7C20)

inline static constexpr unsigned int Class_3_C4D3E9932F541434_TypeDefinitionIndex = 50920;

class Class_3_C4D3E9932F541434 : public ::Class_2_A02A01DE35B55E23
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::NewProjectileConfig*>* Field_3_0; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NewFireMultiProjectiles* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NewFireMultiProjectiles*))((::PBYTE)hIl2Cpp + CLASS_3_C4D3E9932F541434__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C4D3E9932F541434_METHOD_3_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Void Method_3_4857357D5C1BFCE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C4D3E9932F541434_METHOD_3_4857357D5C1BFCE8_OFFSET))(this);
	}

	::System::Void Method_3_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C4D3E9932F541434_METHOD_3_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C4D3E9932F541434_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C4D3E9932F541434_METHOD_3_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_3_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C4D3E9932F541434_METHOD_3_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_3_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C4D3E9932F541434_METHOD_3_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C4D3E9932F541434___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
