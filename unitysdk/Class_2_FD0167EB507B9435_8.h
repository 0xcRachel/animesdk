#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"

class Class_1_B9E56D0D50E02617_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FD0167EB507B9435_8_METHOD_2_4484591CA1060976_1_OFFSET UNITYSDK_OFFSET(0x86E0930)
#define CLASS_2_FD0167EB507B9435_8_METHOD_2_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0x86E0890)
#define CLASS_2_FD0167EB507B9435_8_METHOD_2_4B581D26F198C904_OFFSET UNITYSDK_OFFSET(0x86E07F0)
#define CLASS_2_FD0167EB507B9435_8_METHOD_2_729A8D13F637FBC2_OFFSET UNITYSDK_OFFSET(0x86E0520)
#define CLASS_2_FD0167EB507B9435_8_METHOD_2_75CD1D6E954B6CBD_OFFSET UNITYSDK_OFFSET(0x86E06E0)
#define CLASS_2_FD0167EB507B9435_8_UPDATE_OFFSET UNITYSDK_OFFSET(0x86E04D0)
#define CLASS_2_FD0167EB507B9435_8__CTOR_OFFSET UNITYSDK_OFFSET(0x86E04C0)
#define CLASS_2_FD0167EB507B9435_8___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x86E09D0)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_8_TypeDefinitionIndex = 51666;

class Class_2_FD0167EB507B9435_8 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_B9E56D0D50E02617_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B9E56D0D50E02617_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_B9E56D0D50E02617_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B9E56D0D50E02617_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_8_UPDATE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>* Method_2_729A8D13F637FBC2()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_8_METHOD_2_729A8D13F637FBC2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_2_75CD1D6E954B6CBD()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_8_METHOD_2_75CD1D6E954B6CBD_OFFSET))(this);
	}

	::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::UInt32>* Method_2_4B581D26F198C904()
	{
		return ((::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_8_METHOD_2_4B581D26F198C904_OFFSET))(this);
	}

	::System::UInt32 Method_2_4484591CA1060976()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_8_METHOD_2_4484591CA1060976_OFFSET))(this);
	}

	::System::UInt32 Method_2_4484591CA1060976_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_8_METHOD_2_4484591CA1060976_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Update(::Class_1_B9E56D0D50E02617_1* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B9E56D0D50E02617_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_8___IFIXBASEPROXY_UPDATE_OFFSET))(this, P0);
	}
};
