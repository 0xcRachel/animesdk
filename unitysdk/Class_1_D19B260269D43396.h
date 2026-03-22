#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E8ABABA004CAAEA3;
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D19B260269D43396__CTOR_OFFSET UNITYSDK_OFFSET(0x103B0870)

inline static constexpr unsigned int Class_1_D19B260269D43396_TypeDefinitionIndex = 56780;

class Class_1_D19B260269D43396 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_1; // 0x10
	::System::Collections::Generic::ICollection_1<::Class_1_E8ABABA004CAAEA3*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D19B260269D43396__CTOR_OFFSET))(this);
	}
};
