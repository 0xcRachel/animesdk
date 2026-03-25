#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_16;
namespace System { class Object; }

#define STRUCT_2_0B4DDB75CE25594A_7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x20EFB70)
#define STRUCT_2_0B4DDB75CE25594A_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x20F0120)
#define STRUCT_2_0B4DDB75CE25594A_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1531AB0)
#define STRUCT_2_0B4DDB75CE25594A_7_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x15318F0)
#define STRUCT_2_0B4DDB75CE25594A_7_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xD240)
#define STRUCT_2_0B4DDB75CE25594A_7_INIT_OFFSET UNITYSDK_OFFSET(0x852F0)
#define STRUCT_2_0B4DDB75CE25594A_7_METHOD_2_175892D000930F48_OFFSET UNITYSDK_OFFSET(0x16CC99D0)
#define STRUCT_2_0B4DDB75CE25594A_7_METHOD_2_53FADCED337E5C9E_OFFSET UNITYSDK_OFFSET(0x1531A90)
#define STRUCT_2_0B4DDB75CE25594A_7_METHOD_2_6BFDFBCE5CC5FA3E_OFFSET UNITYSDK_OFFSET(0x16CC9A00)
#define STRUCT_2_0B4DDB75CE25594A_7_METHOD_2_6E12E83478325A9E_1_OFFSET UNITYSDK_OFFSET(0x20F0150)
#define STRUCT_2_0B4DDB75CE25594A_7_METHOD_2_6E12E83478325A9E_OFFSET UNITYSDK_OFFSET(0x20F0130)
#define STRUCT_2_0B4DDB75CE25594A_7_METHOD_2_EDDDB51C888FFE34_OFFSET UNITYSDK_OFFSET(0x16CC9B20)
#define STRUCT_2_0B4DDB75CE25594A_7_METHOD_2_F2BE46694384B1E2_OFFSET UNITYSDK_OFFSET(0x16CC98A0)

inline static constexpr unsigned int Struct_2_0B4DDB75CE25594A_7_TypeDefinitionIndex = 22502;

struct alignas(8) Struct_2_0B4DDB75CE25594A_7
{
	::Class_0_16E4307DCC419505_16* Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x18

	::System::Void Init(::Class_0_16E4307DCC419505_16* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_16*, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_7_INIT_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_7_GET_ISVALID_OFFSET))(this);
	}

	::System::UInt32 get_Offset()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_7_GET_OFFSET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_7_DISPOSE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_F2BE46694384B1E2(::Struct_2_0B4DDB75CE25594A_7 a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::Struct_2_0B4DDB75CE25594A_7, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_7_METHOD_2_F2BE46694384B1E2_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_175892D000930F48(::System::Object* a1, ::Struct_2_0B4DDB75CE25594A_7 a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::Struct_2_0B4DDB75CE25594A_7))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_7_METHOD_2_175892D000930F48_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_6BFDFBCE5CC5FA3E(::System::Object* a1, ::Struct_2_0B4DDB75CE25594A_7 a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::Struct_2_0B4DDB75CE25594A_7))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_7_METHOD_2_6BFDFBCE5CC5FA3E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_EDDDB51C888FFE34(::Struct_2_0B4DDB75CE25594A_7 a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::Struct_2_0B4DDB75CE25594A_7, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_7_METHOD_2_EDDDB51C888FFE34_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_53FADCED337E5C9E(::Struct_2_0B4DDB75CE25594A_7 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_0B4DDB75CE25594A_7))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_7_METHOD_2_53FADCED337E5C9E_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_7_GETHASHCODE_OFFSET))(this);
	}

	/*
	::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32> Method_2_6E12E83478325A9E()
	{
		return ((::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_7_METHOD_2_6E12E83478325A9E_OFFSET))(this);
	}
	*/

	/*
	::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32> Method_2_6E12E83478325A9E_1()
	{
		return ((::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DDB75CE25594A_7_METHOD_2_6E12E83478325A9E_1_OFFSET))(this);
	}
	*/
};
