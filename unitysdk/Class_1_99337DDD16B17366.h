#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_42;
namespace RPG::Client { class VideoBundleInfoItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamReader; }

#define CLASS_1_99337DDD16B17366_METHOD_1_0DB11BF94EEA7F93_OFFSET UNITYSDK_OFFSET(0x87273A0)
#define CLASS_1_99337DDD16B17366_METHOD_1_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0x8726F90)
#define CLASS_1_99337DDD16B17366_METHOD_1_14BD16324470EC8B_OFFSET UNITYSDK_OFFSET(0x8727060)
#define CLASS_1_99337DDD16B17366_METHOD_1_59F3137268D05723_OFFSET UNITYSDK_OFFSET(0x87278C0)
#define CLASS_1_99337DDD16B17366_METHOD_1_8CD8E4A299FB4AB6_OFFSET UNITYSDK_OFFSET(0x8727510)
#define CLASS_1_99337DDD16B17366_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x8726F40)
#define CLASS_1_99337DDD16B17366_METHOD_1_D6812ED21FCF6F4E_OFFSET UNITYSDK_OFFSET(0x8728160)
#define CLASS_1_99337DDD16B17366_METHOD_1_E0649D9261FACA8C_OFFSET UNITYSDK_OFFSET(0x8726FE0)
#define CLASS_1_99337DDD16B17366_METHOD_1_E153CCD05DDC6530_OFFSET UNITYSDK_OFFSET(0x8727A90)
#define CLASS_1_99337DDD16B17366_METHOD_1_FF8B11B2A54C41B9_OFFSET UNITYSDK_OFFSET(0x8727E40)
#define CLASS_1_99337DDD16B17366__CTOR_OFFSET UNITYSDK_OFFSET(0x8727790)

inline static constexpr unsigned int Class_1_99337DDD16B17366_TypeDefinitionIndex = 48599;

class Class_1_99337DDD16B17366 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::VideoBundleInfoItem*>* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::VideoBundleInfoItem*>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_1_111E3F406ABDDAA7(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_111E3F406ABDDAA7_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_42* Method_1_E0649D9261FACA8C(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_42*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_E0649D9261FACA8C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_14BD16324470EC8B(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_14BD16324470EC8B_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::VideoBundleInfoItem* Method_1_0DB11BF94EEA7F93(::System::String* a1)
	{
		return ((::RPG::Client::VideoBundleInfoItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_0DB11BF94EEA7F93_OFFSET))(this, a1);
	}

	static ::Class_1_99337DDD16B17366* Method_1_8CD8E4A299FB4AB6(::System::String* a1)
	{
		return ((::Class_1_99337DDD16B17366*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_8CD8E4A299FB4AB6_OFFSET))(a1);
	}

	::System::Void Method_1_59F3137268D05723(::System::IO::StreamReader* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamReader*))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_59F3137268D05723_OFFSET))(this, a1);
	}

	::System::Void Method_1_E153CCD05DDC6530(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_E153CCD05DDC6530_OFFSET))(this, a1);
	}

	::System::Void Method_1_FF8B11B2A54C41B9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_FF8B11B2A54C41B9_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_42* Method_1_D6812ED21FCF6F4E(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_42*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_D6812ED21FCF6F4E_OFFSET))(this, a1);
	}
};
