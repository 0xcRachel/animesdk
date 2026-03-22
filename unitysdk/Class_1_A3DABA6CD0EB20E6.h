#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C9D6FB94D3013D45;
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_A3DABA6CD0EB20E6_COMPARE_OFFSET UNITYSDK_OFFSET(0x96CB300)
#define CLASS_1_A3DABA6CD0EB20E6_METHOD_1_6504A011E3949F7F_OFFSET UNITYSDK_OFFSET(0x96CB1F0)
#define CLASS_1_A3DABA6CD0EB20E6_METHOD_1_EAC9D08FCFB0A1C9_OFFSET UNITYSDK_OFFSET(0x96CB280)
#define CLASS_1_A3DABA6CD0EB20E6__CTOR_OFFSET UNITYSDK_OFFSET(0x96CB0C0)

inline static constexpr unsigned int Class_1_A3DABA6CD0EB20E6_TypeDefinitionIndex = 49671;

class Class_1_A3DABA6CD0EB20E6 : public ::System::Object
{
public:
	::Class_2_C9D6FB94D3013D45* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::RPG::Client::AvatarData*>* a1, ::System::Comparison_1<::RPG::Client::IAvatarInfoProvider*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::AvatarData*>*, ::System::Comparison_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + CLASS_1_A3DABA6CD0EB20E6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6504A011E3949F7F(::System::Collections::Generic::IEnumerable_1<::RPG::Client::AvatarData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::AvatarData*>*))((::PBYTE)hIl2Cpp + CLASS_1_A3DABA6CD0EB20E6_METHOD_1_6504A011E3949F7F_OFFSET))(this, a1);
	}

	::System::Void Method_1_EAC9D08FCFB0A1C9(::System::Comparison_1<::RPG::Client::IAvatarInfoProvider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Comparison_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + CLASS_1_A3DABA6CD0EB20E6_METHOD_1_EAC9D08FCFB0A1C9_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::RPG::Client::AvatarData* a1, ::RPG::Client::AvatarData* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarData*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_A3DABA6CD0EB20E6_COMPARE_OFFSET))(this, a1, a2);
	}
};
