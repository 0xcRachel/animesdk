#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169.h"
#include "unitysdk/Struct_2_C983EE158040EDC8.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_0_16E4307DCC419505_27;
class Class_1_EC326A3215DF194D;
namespace RPG::Client::LittleGameShare { template <typename T> class RpcObjectPool_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_89B326182DD9AB58_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15F2CDA0)
#define CLASS_1_89B326182DD9AB58_METHOD_1_8CB13CA4C9DB66B6_OFFSET UNITYSDK_OFFSET(0x15F2CE30)
#define CLASS_1_89B326182DD9AB58_METHOD_1_D75FE65ED7767A48_OFFSET UNITYSDK_OFFSET(0x15F2CDE0)
#define CLASS_1_89B326182DD9AB58__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F2D350)
#define CLASS_1_89B326182DD9AB58__CTOR_OFFSET UNITYSDK_OFFSET(0x15F2CD90)

inline static constexpr unsigned int Class_1_89B326182DD9AB58_TypeDefinitionIndex = 27892;

class Class_1_89B326182DD9AB58 : public ::System::Object
{
public:
	static ::RPG::Client::LittleGameShare::RpcObjectPool_1<::Class_1_EC326A3215DF194D*>** StaticGet_Field_1_2()
	{
		return (::RPG::Client::LittleGameShare::RpcObjectPool_1<::Class_1_EC326A3215DF194D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_89B326182DD9AB58_TypeDefinitionIndex)->GetStaticField(0x2E210);
	}
	static ::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::RuntimeTypeHandle>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::RuntimeTypeHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_89B326182DD9AB58_TypeDefinitionIndex)->GetStaticField(0x2E218);
	}
	// static const ::System::Boolean Field_1_1; // 0x0
	::Class_0_16E4307DCC419505_27* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_27*))((::PBYTE)hIl2Cpp + CLASS_1_89B326182DD9AB58__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_89B326182DD9AB58__CCTOR_OFFSET))();
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89B326182DD9AB58_INITIALIZE_OFFSET))(this);
	}

	::System::Boolean Method_1_D75FE65ED7767A48(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_89B326182DD9AB58_METHOD_1_D75FE65ED7767A48_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8CB13CA4C9DB66B6(::Struct_2_C983EE158040EDC8 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C983EE158040EDC8, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_89B326182DD9AB58_METHOD_1_8CB13CA4C9DB66B6_OFFSET))(this, a1, a2);
	}
};
