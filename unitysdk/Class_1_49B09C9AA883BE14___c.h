#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_49B09C9AA883BE14;

#define CLASS_1_49B09C9AA883BE14___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19CC8720)
#define CLASS_1_49B09C9AA883BE14___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19CC8750)
#define CLASS_1_49B09C9AA883BE14___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x19CC8760)

inline static constexpr unsigned int Class_1_49B09C9AA883BE14___c_TypeDefinitionIndex = 25271;

class Class_1_49B09C9AA883BE14___c : public ::System::Object
{
public:
	static ::Class_1_49B09C9AA883BE14___c** StaticGet___9()
	{
		return (::Class_1_49B09C9AA883BE14___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_49B09C9AA883BE14___c_TypeDefinitionIndex)->GetStaticField(0x5F5B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_49B09C9AA883BE14___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49B09C9AA883BE14___C__CTOR_OFFSET))(this);
	}

	::Class_1_49B09C9AA883BE14* __cctor_b__58_0()
	{
		return ((::Class_1_49B09C9AA883BE14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49B09C9AA883BE14___C___CCTOR_B__58_0_OFFSET))(this);
	}
};
