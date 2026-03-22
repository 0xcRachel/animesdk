#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_26;
class Class_1_7D8428CCA14A6C35;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class BinaryReader; }

#define CLASS_1_ECED693201306164_CLEAR_OFFSET UNITYSDK_OFFSET(0x104B79C0)
#define CLASS_1_ECED693201306164_DISPOSE_OFFSET UNITYSDK_OFFSET(0x104B7A00)
#define CLASS_1_ECED693201306164_METHOD_1_1853F89E96BB0394_1_OFFSET UNITYSDK_OFFSET(0x104B8990)
#define CLASS_1_ECED693201306164_METHOD_1_1853F89E96BB0394_OFFSET UNITYSDK_OFFSET(0x104B88E0)
#define CLASS_1_ECED693201306164_METHOD_1_2703461EC3882894_OFFSET UNITYSDK_OFFSET(0x104B7A70)
#define CLASS_1_ECED693201306164_METHOD_1_5915ACDE5D6B2D78_OFFSET UNITYSDK_OFFSET(0x104B8A40)
#define CLASS_1_ECED693201306164_METHOD_1_9B7822C92855794B_OFFSET UNITYSDK_OFFSET(0x104B91B0)
#define CLASS_1_ECED693201306164__CTOR_OFFSET UNITYSDK_OFFSET(0x104B9350)

inline static constexpr unsigned int Class_1_ECED693201306164_TypeDefinitionIndex = 53711;

class Class_1_ECED693201306164 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECED693201306164__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECED693201306164_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECED693201306164_DISPOSE_OFFSET))(this);
	}

	::Class_1_7D8428CCA14A6C35* Method_1_2703461EC3882894(::System::String* a1)
	{
		return ((::Class_1_7D8428CCA14A6C35*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ECED693201306164_METHOD_1_2703461EC3882894_OFFSET))(this, a1);
	}

	::System::Void Method_1_1853F89E96BB0394(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::IO::BinaryReader* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + CLASS_1_ECED693201306164_METHOD_1_1853F89E96BB0394_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1853F89E96BB0394_1(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::IO::BinaryReader* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + CLASS_1_ECED693201306164_METHOD_1_1853F89E96BB0394_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5915ACDE5D6B2D78(::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_26*>* a1, ::System::IO::BinaryReader* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_26*>*, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + CLASS_1_ECED693201306164_METHOD_1_5915ACDE5D6B2D78_OFFSET))(this, a1, a2);
	}

	::Class_1_7807B2B04302CD7B_26* Method_1_9B7822C92855794B(::System::IO::BinaryReader* a1)
	{
		return ((::Class_1_7807B2B04302CD7B_26*(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + CLASS_1_ECED693201306164_METHOD_1_9B7822C92855794B_OFFSET))(this, a1);
	}
};
