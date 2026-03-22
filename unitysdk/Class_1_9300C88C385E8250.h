#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DA7373FBD5F460E0;
namespace RPG::GameCore { class HoyoTag; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9300C88C385E8250__CTOR_OFFSET UNITYSDK_OFFSET(0x9EEF060)

inline static constexpr unsigned int Class_1_9300C88C385E8250_TypeDefinitionIndex = 58791;

class Class_1_9300C88C385E8250 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HoyoTag*, ::Class_1_DA7373FBD5F460E0*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9300C88C385E8250__CTOR_OFFSET))(this);
	}
};
