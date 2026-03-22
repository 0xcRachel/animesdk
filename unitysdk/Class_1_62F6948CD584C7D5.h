#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3301DE64BF05426F;
namespace RPG::Client { class AdventurePhase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_62F6948CD584C7D5_METHOD_1_3D1244D5E9F0E180_OFFSET UNITYSDK_OFFSET(0x8687060)
#define CLASS_1_62F6948CD584C7D5_METHOD_1_6E0E458A76FADEE4_OFFSET UNITYSDK_OFFSET(0x8685F40)
#define CLASS_1_62F6948CD584C7D5_METHOD_1_6F4D5205D9FD28E6_OFFSET UNITYSDK_OFFSET(0x8686470)
#define CLASS_1_62F6948CD584C7D5_METHOD_1_73814AFCB73E0F62_OFFSET UNITYSDK_OFFSET(0x8686160)
#define CLASS_1_62F6948CD584C7D5_METHOD_1_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x8686F00)
#define CLASS_1_62F6948CD584C7D5_METHOD_1_D308836DB54415C3_OFFSET UNITYSDK_OFFSET(0x8686B60)
#define CLASS_1_62F6948CD584C7D5__CTOR_OFFSET UNITYSDK_OFFSET(0x8685D80)

inline static constexpr unsigned int Class_1_62F6948CD584C7D5_TypeDefinitionIndex = 47968;

class Class_1_62F6948CD584C7D5 : public ::System::Object
{
public:
	::System::Text::StringBuilder* Field_1_0; // 0x10

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_62F6948CD584C7D5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E0E458A76FADEE4(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_1_62F6948CD584C7D5_METHOD_1_6E0E458A76FADEE4_OFFSET))(this, a1);
	}

	::System::Void Method_1_73814AFCB73E0F62(::System::Collections::Generic::HashSet_1<::Class_1_3301DE64BF05426F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::Class_1_3301DE64BF05426F*>*))((::PBYTE)hIl2Cpp + CLASS_1_62F6948CD584C7D5_METHOD_1_73814AFCB73E0F62_OFFSET))(this, a1);
	}

	::System::String* Method_1_6F4D5205D9FD28E6(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_62F6948CD584C7D5_METHOD_1_6F4D5205D9FD28E6_OFFSET))(this, a1);
	}

	::System::Void Method_1_D308836DB54415C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62F6948CD584C7D5_METHOD_1_D308836DB54415C3_OFFSET))(this);
	}

	::System::Void Method_1_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62F6948CD584C7D5_METHOD_1_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::String* Method_1_3D1244D5E9F0E180()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62F6948CD584C7D5_METHOD_1_3D1244D5E9F0E180_OFFSET))(this);
	}
};
