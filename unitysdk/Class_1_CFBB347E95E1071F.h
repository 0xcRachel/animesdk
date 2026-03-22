#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_42;
class Class_1_4BC7F3E0EBEF5C7F;
class Class_1_F0F5FC8CD22F7E83;
namespace RPG::Client { class AudioBundleInfoItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamReader; }

#define CLASS_1_CFBB347E95E1071F_METHOD_1_079094008F95F9BA_OFFSET UNITYSDK_OFFSET(0x89DAB50)
#define CLASS_1_CFBB347E95E1071F_METHOD_1_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x89D9760)
#define CLASS_1_CFBB347E95E1071F_METHOD_1_695DD58F941DD6C2_OFFSET UNITYSDK_OFFSET(0x89DAF50)
#define CLASS_1_CFBB347E95E1071F_METHOD_1_8CD8E4A299FB4AB6_OFFSET UNITYSDK_OFFSET(0x89DA040)
#define CLASS_1_CFBB347E95E1071F_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x89D9320)
#define CLASS_1_CFBB347E95E1071F_METHOD_1_9817EAC964C453E7_OFFSET UNITYSDK_OFFSET(0x89D9B00)
#define CLASS_1_CFBB347E95E1071F_METHOD_1_988EE78A892C77F3_OFFSET UNITYSDK_OFFSET(0x89D93F0)
#define CLASS_1_CFBB347E95E1071F_METHOD_1_A07BA60A89C4B3F2_OFFSET UNITYSDK_OFFSET(0x89DA780)
#define CLASS_1_CFBB347E95E1071F_METHOD_1_B21A07CFEAA186F9_OFFSET UNITYSDK_OFFSET(0x89D9E20)
#define CLASS_1_CFBB347E95E1071F_METHOD_1_D19B9D3CFC946396_OFFSET UNITYSDK_OFFSET(0x89DB260)
#define CLASS_1_CFBB347E95E1071F_METHOD_1_D7C3DF2CE9DAA4D7_OFFSET UNITYSDK_OFFSET(0x89DB760)
#define CLASS_1_CFBB347E95E1071F_METHOD_1_DF8C894D984131D3_OFFSET UNITYSDK_OFFSET(0x89D9590)
#define CLASS_1_CFBB347E95E1071F_METHOD_1_E0649D9261FACA8C_OFFSET UNITYSDK_OFFSET(0x89D9370)
#define CLASS_1_CFBB347E95E1071F_METHOD_1_ED8E7BD8BDD8770A_OFFSET UNITYSDK_OFFSET(0x89DB610)
#define CLASS_1_CFBB347E95E1071F_METHOD_1_FF1FC0B9BC5A6660_OFFSET UNITYSDK_OFFSET(0x89DA3F0)
#define CLASS_1_CFBB347E95E1071F__CTOR_OFFSET UNITYSDK_OFFSET(0x89DA2C0)

inline static constexpr unsigned int Class_1_CFBB347E95E1071F_TypeDefinitionIndex = 48544;

class Class_1_CFBB347E95E1071F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::AudioBundleInfoItem*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::AudioBundleInfoItem*>* Field_1_1; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFBB347E95E1071F__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFBB347E95E1071F_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_42* Method_1_E0649D9261FACA8C(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_42*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CFBB347E95E1071F_METHOD_1_E0649D9261FACA8C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_988EE78A892C77F3(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CFBB347E95E1071F_METHOD_1_988EE78A892C77F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF8C894D984131D3(::RPG::Client::AudioBundleInfoItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioBundleInfoItem*))((::PBYTE)hIl2Cpp + CLASS_1_CFBB347E95E1071F_METHOD_1_DF8C894D984131D3_OFFSET))(this, a1);
	}

	::System::Void Method_1_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFBB347E95E1071F_METHOD_1_41AA181104E03F2C_OFFSET))(this);
	}

	::System::Void Method_1_B21A07CFEAA186F9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CFBB347E95E1071F_METHOD_1_B21A07CFEAA186F9_OFFSET))(this, a1);
	}

	static ::Class_1_CFBB347E95E1071F* Method_1_8CD8E4A299FB4AB6(::System::String* a1)
	{
		return ((::Class_1_CFBB347E95E1071F*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CFBB347E95E1071F_METHOD_1_8CD8E4A299FB4AB6_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_4BC7F3E0EBEF5C7F*>* Method_1_FF1FC0B9BC5A6660(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_4BC7F3E0EBEF5C7F*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CFBB347E95E1071F_METHOD_1_FF1FC0B9BC5A6660_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_4BC7F3E0EBEF5C7F*>* Method_1_A07BA60A89C4B3F2(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_4BC7F3E0EBEF5C7F*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CFBB347E95E1071F_METHOD_1_A07BA60A89C4B3F2_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_4BC7F3E0EBEF5C7F*>* Method_1_079094008F95F9BA(::System::String* a1, ::Class_1_F0F5FC8CD22F7E83*& a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_4BC7F3E0EBEF5C7F*>*(*)(::System::String*, ::Class_1_F0F5FC8CD22F7E83*&))((::PBYTE)hIl2Cpp + CLASS_1_CFBB347E95E1071F_METHOD_1_079094008F95F9BA_OFFSET))(a1, a2);
	}

	::System::Void Method_1_9817EAC964C453E7(::System::IO::StreamReader* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamReader*))((::PBYTE)hIl2Cpp + CLASS_1_CFBB347E95E1071F_METHOD_1_9817EAC964C453E7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_695DD58F941DD6C2(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CFBB347E95E1071F_METHOD_1_695DD58F941DD6C2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_D19B9D3CFC946396(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CFBB347E95E1071F_METHOD_1_D19B9D3CFC946396_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_ED8E7BD8BDD8770A(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CFBB347E95E1071F_METHOD_1_ED8E7BD8BDD8770A_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_0_16E4307DCC419505_42* Method_1_D7C3DF2CE9DAA4D7(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_42*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CFBB347E95E1071F_METHOD_1_D7C3DF2CE9DAA4D7_OFFSET))(this, a1);
	}
};
