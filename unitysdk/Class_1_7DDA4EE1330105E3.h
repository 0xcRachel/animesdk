#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_1_37676B2FB4322E20;
class Class_1_A4D134A7DAD941E3;
class Class_1_EE726428476CB38C;
class Class_1_FD3C35FC150AF234;
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7DDA4EE1330105E3_METHOD_1_DAF492D6D1F5AAF9_OFFSET UNITYSDK_OFFSET(0xB2C2BD0)
#define CLASS_1_7DDA4EE1330105E3_METHOD_1_E18CA95C66C0EDEC_OFFSET UNITYSDK_OFFSET(0xB2C29F0)
#define CLASS_1_7DDA4EE1330105E3__CTOR_OFFSET UNITYSDK_OFFSET(0xB2C2940)

inline static constexpr unsigned int Class_1_7DDA4EE1330105E3_TypeDefinitionIndex = 49861;

class Class_1_7DDA4EE1330105E3 : public ::System::Object
{
public:
	::Class_1_FD3C35FC150AF234* Field_1_0; // 0x10
	::Class_1_37676B2FB4322E20* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_FD3C35FC150AF234* a1, ::Class_1_37676B2FB4322E20* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FD3C35FC150AF234*, ::Class_1_37676B2FB4322E20*))((::PBYTE)hIl2Cpp + CLASS_1_7DDA4EE1330105E3__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_EE726428476CB38C* Method_1_E18CA95C66C0EDEC(::Struct_2_AAD4F4215611A944& a1, ::RPG::GameCore::SpecialAvatarRow* a2)
	{
		return ((::Class_1_EE726428476CB38C*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + CLASS_1_7DDA4EE1330105E3_METHOD_1_E18CA95C66C0EDEC_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_A4D134A7DAD941E3*>* Method_1_DAF492D6D1F5AAF9(::RPG::GameCore::SpecialAvatarRow* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_A4D134A7DAD941E3*>*(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + CLASS_1_7DDA4EE1330105E3_METHOD_1_DAF492D6D1F5AAF9_OFFSET))(this, a1);
	}
};
