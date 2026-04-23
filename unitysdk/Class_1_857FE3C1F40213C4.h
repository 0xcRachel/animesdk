#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_992;
namespace RPG::Client { class Booklet; }
namespace RPG::Client { class IBookletView; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_857FE3C1F40213C4_METHOD_1_3185700CAEE9FA39_1_OFFSET UNITYSDK_OFFSET(0x1093BE00)
#define CLASS_1_857FE3C1F40213C4_METHOD_1_3185700CAEE9FA39_OFFSET UNITYSDK_OFFSET(0x1093BDA0)
#define CLASS_1_857FE3C1F40213C4_METHOD_1_76873E3CC7372DE3_OFFSET UNITYSDK_OFFSET(0x1093BD80)
#define CLASS_1_857FE3C1F40213C4_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1093BFE0)
#define CLASS_1_857FE3C1F40213C4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1093BFA0)
#define CLASS_1_857FE3C1F40213C4_METHOD_1_CC03B00D7D862660_OFFSET UNITYSDK_OFFSET(0x1093BE60)
#define CLASS_1_857FE3C1F40213C4__CTOR_OFFSET UNITYSDK_OFFSET(0x1093C020)

inline static constexpr unsigned int Class_1_857FE3C1F40213C4_TypeDefinitionIndex = 66718;

class Class_1_857FE3C1F40213C4 : public ::System::Object
{
public:
	::RPG::Client::IBookletView* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_1<::Class_0_16E4307DCC419505_992*>*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_857FE3C1F40213C4__CTOR_OFFSET))(this);
	}

	::RPG::Client::Booklet* Method_1_76873E3CC7372DE3()
	{
		return ((::RPG::Client::Booklet*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_857FE3C1F40213C4_METHOD_1_76873E3CC7372DE3_OFFSET))(this);
	}

	::System::Void Method_1_3185700CAEE9FA39(::RPG::Client::IBookletView* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IBookletView*))((::PBYTE)hIl2Cpp + CLASS_1_857FE3C1F40213C4_METHOD_1_3185700CAEE9FA39_OFFSET))(this, a1);
	}

	::System::Void Method_1_3185700CAEE9FA39_1(::RPG::Client::IBookletView* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IBookletView*))((::PBYTE)hIl2Cpp + CLASS_1_857FE3C1F40213C4_METHOD_1_3185700CAEE9FA39_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CC03B00D7D862660(::Class_0_16E4307DCC419505_992* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_992*))((::PBYTE)hIl2Cpp + CLASS_1_857FE3C1F40213C4_METHOD_1_CC03B00D7D862660_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_857FE3C1F40213C4_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_857FE3C1F40213C4_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
