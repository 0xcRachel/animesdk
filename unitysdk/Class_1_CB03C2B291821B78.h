#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_549;
class Class_0_16E4307DCC419505_550;
class Class_0_16E4307DCC419505_551;
class Class_1_6AE08EF87FF0FFCC;
namespace RPG::AvatarSystem { class Avatar; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CB03C2B291821B78_METHOD_1_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0xEEB3270)
#define CLASS_1_CB03C2B291821B78_METHOD_1_1A7A5496048E15C2_OFFSET UNITYSDK_OFFSET(0xEEB2F70)
#define CLASS_1_CB03C2B291821B78_METHOD_1_27C2887D49F6F6B3_OFFSET UNITYSDK_OFFSET(0xEEB2A20)
#define CLASS_1_CB03C2B291821B78_METHOD_1_6EACC4FF4EF827F8_OFFSET UNITYSDK_OFFSET(0xEEB2DB0)
#define CLASS_1_CB03C2B291821B78_METHOD_1_9E992ACDF90158E8_OFFSET UNITYSDK_OFFSET(0xEEB2E80)
#define CLASS_1_CB03C2B291821B78_METHOD_1_DC962BDCFCCD521C_OFFSET UNITYSDK_OFFSET(0xEEB3350)
#define CLASS_1_CB03C2B291821B78__CTOR_OFFSET UNITYSDK_OFFSET(0xEEB42C0)

inline static constexpr unsigned int Class_1_CB03C2B291821B78_TypeDefinitionIndex = 49740;

class Class_1_CB03C2B291821B78 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_549*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_551*>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_549*>* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_550*>* Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB03C2B291821B78__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_27C2887D49F6F6B3(::Class_0_16E4307DCC419505_549* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_549*))((::PBYTE)hIl2Cpp + CLASS_1_CB03C2B291821B78_METHOD_1_27C2887D49F6F6B3_OFFSET))(this, a1);
	}

	::System::Void Method_1_6EACC4FF4EF827F8(::Class_0_16E4307DCC419505_551* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_551*))((::PBYTE)hIl2Cpp + CLASS_1_CB03C2B291821B78_METHOD_1_6EACC4FF4EF827F8_OFFSET))(this, a1);
	}

	::System::Void Method_1_9E992ACDF90158E8(::Class_0_16E4307DCC419505_550* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_550*))((::PBYTE)hIl2Cpp + CLASS_1_CB03C2B291821B78_METHOD_1_9E992ACDF90158E8_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::Avatar* Method_1_1A7A5496048E15C2(::Class_1_6AE08EF87FF0FFCC* a1)
	{
		return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID, ::Class_1_6AE08EF87FF0FFCC*))((::PBYTE)hIl2Cpp + CLASS_1_CB03C2B291821B78_METHOD_1_1A7A5496048E15C2_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB03C2B291821B78_METHOD_1_0C88AB06D46E777A_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_549*>* Method_1_DC962BDCFCCD521C(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_549*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_549*>*(*)(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_549*>*))((::PBYTE)hIl2Cpp + CLASS_1_CB03C2B291821B78_METHOD_1_DC962BDCFCCD521C_OFFSET))(a1);
	}
};
