#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4AF9BC2DDB90BD8E.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_401;
class Class_1_98133438BFCB56ED;

#define CLASS_1_B9386E07D36BAAC9_METHOD_1_B6E221A5FAF0AF49_OFFSET UNITYSDK_OFFSET(0xD2019A0)
#define CLASS_1_B9386E07D36BAAC9__CCTOR_OFFSET UNITYSDK_OFFSET(0xD201B00)

inline static constexpr unsigned int Class_1_B9386E07D36BAAC9_TypeDefinitionIndex = 44213;

class Class_1_B9386E07D36BAAC9 : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_0_16E4307DCC419505_401*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_401*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B9386E07D36BAAC9_TypeDefinitionIndex)->GetStaticField(0x230E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B9386E07D36BAAC9__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_B6E221A5FAF0AF49(::Class_1_98133438BFCB56ED* a1, ::Class_1_98133438BFCB56ED* a2, ::Struct_2_4AF9BC2DDB90BD8E& a3)
	{
		return ((::System::Boolean(*)(::Class_1_98133438BFCB56ED*, ::Class_1_98133438BFCB56ED*, ::Struct_2_4AF9BC2DDB90BD8E&))((::PBYTE)hIl2Cpp + CLASS_1_B9386E07D36BAAC9_METHOD_1_B6E221A5FAF0AF49_OFFSET))(a1, a2, a3);
	}
};
