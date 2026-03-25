#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_7.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_573;
class Class_1_3D07D3D32ECE229A;
class Class_1_B6D38458ABFFB84C;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x8B9EF60)
#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_0CDC8C66F1817736_OFFSET UNITYSDK_OFFSET(0x8B9F300)
#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_207D9AF8DA2E1EB5_1_OFFSET UNITYSDK_OFFSET(0x8B9F7F0)
#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_207D9AF8DA2E1EB5_OFFSET UNITYSDK_OFFSET(0x8B9F460)
#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_40E03D354D1ACC85_OFFSET UNITYSDK_OFFSET(0x8B9DEF0)
#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_BBCDDD8B5CBD2605_OFFSET UNITYSDK_OFFSET(0x8B9DD90)
#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_CAC610F2B9224832_OFFSET UNITYSDK_OFFSET(0x8B9EB00)
#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_E93FB50EBEA66E38_OFFSET UNITYSDK_OFFSET(0x8B9EFF0)
#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x8B9EDC0)
#define CLASS_1_6CCF78AD1D4E6598__CTOR_OFFSET UNITYSDK_OFFSET(0x8B9FB90)

inline static constexpr unsigned int Class_1_6CCF78AD1D4E6598_TypeDefinitionIndex = 62148;

class Class_1_6CCF78AD1D4E6598 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_B6D38458ABFFB84C*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Enum_3_71AA90D596A09AC8_7, ::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::Enum_3_71AA90D596A09AC8_7, ::Class_1_3D07D3D32ECE229A*>* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_573* Method_1_BBCDDD8B5CBD2605(::Enum_3_71AA90D596A09AC8_7 a1)
	{
		return ((::Class_0_16E4307DCC419505_573*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_7))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598_METHOD_1_BBCDDD8B5CBD2605_OFFSET))(this, a1);
	}

	::System::Void Method_1_CAC610F2B9224832(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B6D38458ABFFB84C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B6D38458ABFFB84C*>*))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598_METHOD_1_CAC610F2B9224832_OFFSET))(this, a1);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_B6D38458ABFFB84C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B6D38458ABFFB84C*))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_E93FB50EBEA66E38(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598_METHOD_1_E93FB50EBEA66E38_OFFSET))(this, a1);
	}

	::Class_1_B6D38458ABFFB84C* Method_1_0CDC8C66F1817736(::Enum_3_71AA90D596A09AC8_7 a1)
	{
		return ((::Class_1_B6D38458ABFFB84C*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_7))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598_METHOD_1_0CDC8C66F1817736_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* Method_1_207D9AF8DA2E1EB5(::Enum_3_71AA90D596A09AC8_7 a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_7))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598_METHOD_1_207D9AF8DA2E1EB5_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* Method_1_207D9AF8DA2E1EB5_1(::Enum_3_71AA90D596A09AC8_7 a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_7))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598_METHOD_1_207D9AF8DA2E1EB5_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598_METHOD_1_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_1_40E03D354D1ACC85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598_METHOD_1_40E03D354D1ACC85_OFFSET))(this);
	}
};
