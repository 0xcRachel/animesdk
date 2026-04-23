#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EReplayTag.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4219ACB5C27E17AA_METHOD_1_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xD1D21E0)
#define CLASS_1_4219ACB5C27E17AA_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0xD1D1F90)
#define CLASS_1_4219ACB5C27E17AA_METHOD_1_56FD732C92374785_OFFSET UNITYSDK_OFFSET(0xD1D20E0)
#define CLASS_1_4219ACB5C27E17AA_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xD1D21A0)
#define CLASS_1_4219ACB5C27E17AA_METHOD_1_62165C025F5C0B19_OFFSET UNITYSDK_OFFSET(0xD1D1F30)
#define CLASS_1_4219ACB5C27E17AA_METHOD_1_74C1EEC8D942703B_OFFSET UNITYSDK_OFFSET(0xD1D1940)
#define CLASS_1_4219ACB5C27E17AA_METHOD_1_9D1D78F50D8E3CB3_1_OFFSET UNITYSDK_OFFSET(0xD1D1910)
#define CLASS_1_4219ACB5C27E17AA_METHOD_1_9D1D78F50D8E3CB3_OFFSET UNITYSDK_OFFSET(0xD1D18E0)
#define CLASS_1_4219ACB5C27E17AA__CCTOR_OFFSET UNITYSDK_OFFSET(0xD1D2240)

inline static constexpr unsigned int Class_1_4219ACB5C27E17AA_TypeDefinitionIndex = 51787;

class Class_1_4219ACB5C27E17AA : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4219ACB5C27E17AA_TypeDefinitionIndex)->GetStaticField(0x2EA90);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4219ACB5C27E17AA_TypeDefinitionIndex)->GetStaticField(0x2EA98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4219ACB5C27E17AA__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* Method_1_9D1D78F50D8E3CB3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4219ACB5C27E17AA_METHOD_1_9D1D78F50D8E3CB3_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* Method_1_9D1D78F50D8E3CB3_1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4219ACB5C27E17AA_METHOD_1_9D1D78F50D8E3CB3_1_OFFSET))();
	}

	static ::System::Void Method_1_74C1EEC8D942703B(::RPG::GameCore::EReplayTag a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::EReplayTag, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4219ACB5C27E17AA_METHOD_1_74C1EEC8D942703B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_62165C025F5C0B19()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4219ACB5C27E17AA_METHOD_1_62165C025F5C0B19_OFFSET))();
	}

	static ::System::Void Method_1_56FD732C92374785(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4219ACB5C27E17AA_METHOD_1_56FD732C92374785_OFFSET))(a1);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4219ACB5C27E17AA_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_078D85152011B919()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4219ACB5C27E17AA_METHOD_1_078D85152011B919_OFFSET))();
	}

	static ::System::Void Method_1_0868EF727040C390()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4219ACB5C27E17AA_METHOD_1_0868EF727040C390_OFFSET))();
	}
};
