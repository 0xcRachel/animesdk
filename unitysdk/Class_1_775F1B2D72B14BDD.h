#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_617;
class Class_0_16E4307DCC419505_618;
class Class_0_16E4307DCC419505_619;
class Class_0_16E4307DCC419505_620;
class Class_1_3E024EFE4FEE811E;
class Class_1_AE0CA897D782D638;
namespace RPG::Client { class AvatarData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_775F1B2D72B14BDD_METHOD_1_31FD44713112CB53_OFFSET UNITYSDK_OFFSET(0xAC75860)
#define CLASS_1_775F1B2D72B14BDD_METHOD_1_46432BC2D8AE120D_OFFSET UNITYSDK_OFFSET(0xAC760D0)
#define CLASS_1_775F1B2D72B14BDD_METHOD_1_7B2415EF3B4401A0_OFFSET UNITYSDK_OFFSET(0xAC75FE0)
#define CLASS_1_775F1B2D72B14BDD_METHOD_1_E022AC1192F19F6C_OFFSET UNITYSDK_OFFSET(0xAC75B40)
#define CLASS_1_775F1B2D72B14BDD__CTOR_OFFSET UNITYSDK_OFFSET(0xAC75660)

inline static constexpr unsigned int Class_1_775F1B2D72B14BDD_TypeDefinitionIndex = 52105;

class Class_1_775F1B2D72B14BDD : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	::Class_1_3E024EFE4FEE811E* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_620*>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_619*>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_775F1B2D72B14BDD__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_617*>* Method_1_31FD44713112CB53(::RPG::Client::AvatarData* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_617*>*(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_775F1B2D72B14BDD_METHOD_1_31FD44713112CB53_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_618*>* Method_1_E022AC1192F19F6C(::RPG::Client::AvatarData* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_618*>*(*)(::PVOID, ::RPG::Client::AvatarData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_775F1B2D72B14BDD_METHOD_1_E022AC1192F19F6C_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_618* Method_1_46432BC2D8AE120D(::RPG::Client::AvatarData* a1, ::Class_1_AE0CA897D782D638* a2)
	{
		return ((::Class_0_16E4307DCC419505_618*(*)(::PVOID, ::RPG::Client::AvatarData*, ::Class_1_AE0CA897D782D638*))((::PBYTE)hIl2Cpp + CLASS_1_775F1B2D72B14BDD_METHOD_1_46432BC2D8AE120D_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_7B2415EF3B4401A0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_775F1B2D72B14BDD_METHOD_1_7B2415EF3B4401A0_OFFSET))(this);
	}
};
