#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_30AB994DC28D8209___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1638C150)
#define CLASS_1_30AB994DC28D8209___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1638C180)
#define CLASS_1_30AB994DC28D8209___C___CLOSESCREENTRANSFER_B__23_0_OFFSET UNITYSDK_OFFSET(0x1638C190)

inline static constexpr unsigned int Class_1_30AB994DC28D8209___c_TypeDefinitionIndex = 61833;

class Class_1_30AB994DC28D8209___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__23_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30AB994DC28D8209___c_TypeDefinitionIndex)->GetStaticField(0x52F40);
	}
	static ::Class_1_30AB994DC28D8209___c** StaticGet___9()
	{
		return (::Class_1_30AB994DC28D8209___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30AB994DC28D8209___c_TypeDefinitionIndex)->GetStaticField(0x52F48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_30AB994DC28D8209___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AB994DC28D8209___C__CTOR_OFFSET))(this);
	}

	::System::Void __CloseScreenTransfer_b__23_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AB994DC28D8209___C___CLOSESCREENTRANSFER_B__23_0_OFFSET))(this);
	}
};
