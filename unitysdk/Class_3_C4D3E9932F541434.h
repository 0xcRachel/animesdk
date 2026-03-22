#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_02BC09F8EF281CC4.h"

namespace RPG::GameCore { class NewFireMultiProjectiles; }
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C4D3E9932F541434_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BC24D0)
#define CLASS_3_C4D3E9932F541434_METHOD_3_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x10BC1F60)
#define CLASS_3_C4D3E9932F541434_METHOD_3_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x10BC2240)
#define CLASS_3_C4D3E9932F541434_METHOD_3_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x10BC2570)
#define CLASS_3_C4D3E9932F541434_METHOD_3_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x10BC1A60)
#define CLASS_3_C4D3E9932F541434_METHOD_3_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x10BC2580)
#define CLASS_3_C4D3E9932F541434_METHOD_3_D9E34E162363C06E_OFFSET UNITYSDK_OFFSET(0x10BC2560)
#define CLASS_3_C4D3E9932F541434__CTOR_OFFSET UNITYSDK_OFFSET(0x10BC1A50)
#define CLASS_3_C4D3E9932F541434___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BC2590)

inline static constexpr unsigned int Class_3_C4D3E9932F541434_TypeDefinitionIndex = 43160;

class Class_3_C4D3E9932F541434 : public ::Class_2_02BC09F8EF281CC4
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

	::System::Void Method_3_D9E34E162363C06E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C4D3E9932F541434_METHOD_3_D9E34E162363C06E_OFFSET))(this);
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
