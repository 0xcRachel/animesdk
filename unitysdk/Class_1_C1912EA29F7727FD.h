#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_0_16E4307DCC419505_471;
class Class_0_16E4307DCC419505_943;
namespace RPG::GameCore { class MiParameterConfigBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C1912EA29F7727FD_METHOD_1_63CB16AC7CD4D768_OFFSET UNITYSDK_OFFSET(0x10A4A030)
#define CLASS_1_C1912EA29F7727FD__CCTOR_OFFSET UNITYSDK_OFFSET(0x10A4F000)

inline static constexpr unsigned int Class_1_C1912EA29F7727FD_TypeDefinitionIndex = 62288;

class Class_1_C1912EA29F7727FD : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_943*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_943*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C1912EA29F7727FD_TypeDefinitionIndex)->GetStaticField(0x42420);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C1912EA29F7727FD__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_471* Method_1_63CB16AC7CD4D768(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_471*(*)(::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_C1912EA29F7727FD_METHOD_1_63CB16AC7CD4D768_OFFSET))(a1);
	}
};
