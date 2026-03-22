#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_437;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_53F0644B4D7513CF_METHOD_1_4AAED98409ECF6A0_OFFSET UNITYSDK_OFFSET(0x112140A0)
#define CLASS_1_53F0644B4D7513CF_METHOD_1_7D599D6C5F28E144_OFFSET UNITYSDK_OFFSET(0x11213C20)
#define CLASS_1_53F0644B4D7513CF_METHOD_1_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x11214180)
#define CLASS_1_53F0644B4D7513CF_METHOD_1_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x11213D40)
#define CLASS_1_53F0644B4D7513CF__CTOR_OFFSET UNITYSDK_OFFSET(0x112141D0)

inline static constexpr unsigned int Class_1_53F0644B4D7513CF_TypeDefinitionIndex = 54141;

class Class_1_53F0644B4D7513CF : public ::System::Object
{
public:
	::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_437*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53F0644B4D7513CF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7D599D6C5F28E144(::Class_0_16E4307DCC419505_437* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_437*))((::PBYTE)hIl2Cpp + CLASS_1_53F0644B4D7513CF_METHOD_1_7D599D6C5F28E144_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53F0644B4D7513CF_METHOD_1_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_437*>* Method_1_4AAED98409ECF6A0()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_437*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53F0644B4D7513CF_METHOD_1_4AAED98409ECF6A0_OFFSET))(this);
	}

	::System::Void Method_1_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53F0644B4D7513CF_METHOD_1_8B848E52913DFCE9_OFFSET))(this);
	}
};
