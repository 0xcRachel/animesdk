#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_0_16E4307DCC419505_474;
class Class_1_47EB23CB5C4B2615_34_Class_1_9A90CD018E72DF20_5;
namespace RPG::GameCore { class MiConditionConfigBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E05490DCDB7BF768_METHOD_1_D5E2637FA5F9A935_OFFSET UNITYSDK_OFFSET(0xFE85590)
#define CLASS_1_E05490DCDB7BF768__CCTOR_OFFSET UNITYSDK_OFFSET(0xFE85810)

inline static constexpr unsigned int Class_1_E05490DCDB7BF768_TypeDefinitionIndex = 47487;

class Class_1_E05490DCDB7BF768 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_474*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_474*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E05490DCDB7BF768_TypeDefinitionIndex)->GetStaticField(0x14350);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E05490DCDB7BF768__CCTOR_OFFSET))();
	}

	static ::Class_1_47EB23CB5C4B2615_34_Class_1_9A90CD018E72DF20_5* Method_1_D5E2637FA5F9A935(::RPG::GameCore::MiConditionConfigBase* a1)
	{
		return ((::Class_1_47EB23CB5C4B2615_34_Class_1_9A90CD018E72DF20_5*(*)(::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_E05490DCDB7BF768_METHOD_1_D5E2637FA5F9A935_OFFSET))(a1);
	}
};
