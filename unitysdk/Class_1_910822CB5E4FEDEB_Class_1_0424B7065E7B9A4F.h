#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_910822CB5E4FEDEB_IntersectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_910822CB5E4FEDEB_CLASS_1_0424B7065E7B9A4F_METHOD_1_0D92A6D99073FCFA_OFFSET UNITYSDK_OFFSET(0x85E1520)
#define CLASS_1_910822CB5E4FEDEB_CLASS_1_0424B7065E7B9A4F__CTOR_OFFSET UNITYSDK_OFFSET(0x85DFA40)

inline static constexpr unsigned int Class_1_910822CB5E4FEDEB_Class_1_0424B7065E7B9A4F_TypeDefinitionIndex = 49353;

class Class_1_910822CB5E4FEDEB_Class_1_0424B7065E7B9A4F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18
	::Class_1_910822CB5E4FEDEB_IntersectType Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_CLASS_1_0424B7065E7B9A4F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0D92A6D99073FCFA(::Class_1_910822CB5E4FEDEB_Class_1_0424B7065E7B9A4F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_910822CB5E4FEDEB_Class_1_0424B7065E7B9A4F*))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_CLASS_1_0424B7065E7B9A4F_METHOD_1_0D92A6D99073FCFA_OFFSET))(this, a1);
	}
};
