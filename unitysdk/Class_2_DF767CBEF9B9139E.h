#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2231FD56C070349F.h"

class Class_1_FF872820A2FF123B;
class Class_3_E5B65FD9338F9400;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_DF767CBEF9B9139E_METHOD_2_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0x10A57990)
#define CLASS_2_DF767CBEF9B9139E_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10A57C20)
#define CLASS_2_DF767CBEF9B9139E_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x10A57C60)
#define CLASS_2_DF767CBEF9B9139E__CTOR_OFFSET UNITYSDK_OFFSET(0x10A57970)

inline static constexpr unsigned int Class_2_DF767CBEF9B9139E_TypeDefinitionIndex = 47801;

class Class_2_DF767CBEF9B9139E : public ::Class_1_2231FD56C070349F
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* Field_2_1; // 0x20
	::Class_1_FF872820A2FF123B* Field_2_0; // 0x28

	::System::Void _ctor(::Class_3_E5B65FD9338F9400* a1, ::Class_1_FF872820A2FF123B* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E5B65FD9338F9400*, ::Class_1_FF872820A2FF123B*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_DF767CBEF9B9139E__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_1659BCB6D1A9FC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF767CBEF9B9139E_METHOD_2_1659BCB6D1A9FC34_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF767CBEF9B9139E_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF767CBEF9B9139E_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}
};
