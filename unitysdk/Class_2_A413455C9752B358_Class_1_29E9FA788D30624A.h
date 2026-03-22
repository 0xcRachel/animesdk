#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3A335394524C9E44.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_2_A413455C9752B358_CLASS_1_29E9FA788D30624A_METHOD_1_107F2BA13CF67ACC_OFFSET UNITYSDK_OFFSET(0x85CA7A0)
#define CLASS_2_A413455C9752B358_CLASS_1_29E9FA788D30624A_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x85CCAD0)
#define CLASS_2_A413455C9752B358_CLASS_1_29E9FA788D30624A__CTOR_OFFSET UNITYSDK_OFFSET(0x85CAD60)

inline static constexpr unsigned int Class_2_A413455C9752B358_Class_1_29E9FA788D30624A_TypeDefinitionIndex = 57069;

class Class_2_A413455C9752B358_Class_1_29E9FA788D30624A : public ::System::Object
{
public:
	::UnityEngine::Vector2 Field_1_1; // 0x10
	::UnityEngine::Vector2 Field_1_2; // 0x18
	::System::Single Field_1_3; // 0x20
	::System::Single Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A413455C9752B358_CLASS_1_29E9FA788D30624A__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_107F2BA13CF67ACC(::Struct_2_3A335394524C9E44 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::Struct_2_3A335394524C9E44))((::PBYTE)hIl2Cpp + CLASS_2_A413455C9752B358_CLASS_1_29E9FA788D30624A_METHOD_1_107F2BA13CF67ACC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A413455C9752B358_CLASS_1_29E9FA788D30624A_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
