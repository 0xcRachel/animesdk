#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C47A94CAC1F5CB89;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_8CAAB3EB14D5C9CA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B47E60)
#define CLASS_2_8CAAB3EB14D5C9CA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16B47EA0)
#define CLASS_2_8CAAB3EB14D5C9CA___C__SENDTRAINCAKECATCHCATGODINTERACTCSREQ_B__2_0_OFFSET UNITYSDK_OFFSET(0x16B47EB0)

inline static constexpr unsigned int Class_2_8CAAB3EB14D5C9CA___c_TypeDefinitionIndex = 74301;

class Class_2_8CAAB3EB14D5C9CA___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_C47A94CAC1F5CB89*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_1_C47A94CAC1F5CB89*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8CAAB3EB14D5C9CA___c_TypeDefinitionIndex)->GetStaticField(0x602E0);
	}
	static ::Class_2_8CAAB3EB14D5C9CA___c** StaticGet___9()
	{
		return (::Class_2_8CAAB3EB14D5C9CA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8CAAB3EB14D5C9CA___c_TypeDefinitionIndex)->GetStaticField(0x602E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8CAAB3EB14D5C9CA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CAAB3EB14D5C9CA___C__CTOR_OFFSET))(this);
	}

	::System::Void _SendTrainCakeCatchCatGodInteractCsReq_b__2_0(::Class_1_C47A94CAC1F5CB89* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C47A94CAC1F5CB89*))((::PBYTE)hIl2Cpp + CLASS_2_8CAAB3EB14D5C9CA___C__SENDTRAINCAKECATCHCATGODINTERACTCSREQ_B__2_0_OFFSET))(this, a1);
	}
};
