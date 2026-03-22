#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_617;
class Class_0_16E4307DCC419505_619;
namespace RPG::Client { class AvatarData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A517D819F24703FC_METHOD_1_31FD44713112CB53_OFFSET UNITYSDK_OFFSET(0x94555F0)
#define CLASS_1_A517D819F24703FC__CTOR_OFFSET UNITYSDK_OFFSET(0x9455540)

inline static constexpr unsigned int Class_1_A517D819F24703FC_TypeDefinitionIndex = 52100;

class Class_1_A517D819F24703FC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_619*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A517D819F24703FC__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_617*>* Method_1_31FD44713112CB53(::RPG::Client::AvatarData* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_617*>*(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_A517D819F24703FC_METHOD_1_31FD44713112CB53_OFFSET))(this, a1);
	}
};
