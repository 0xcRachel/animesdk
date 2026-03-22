#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A2C3097235CA38AC;
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueMiracleData; }
namespace RPG::Client { class RogueTournTitanBless; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1FC767549ED1B2B7_METHOD_1_186AA7EEEFC4C2FB_OFFSET UNITYSDK_OFFSET(0x104CF750)
#define CLASS_1_1FC767549ED1B2B7_METHOD_1_3A46FA91CC41DDD0_OFFSET UNITYSDK_OFFSET(0x104CEFF0)
#define CLASS_1_1FC767549ED1B2B7_METHOD_1_5DB92B0B9E1DF522_OFFSET UNITYSDK_OFFSET(0x104CF3A0)
#define CLASS_1_1FC767549ED1B2B7_METHOD_1_66FE9A93DBC78FE2_OFFSET UNITYSDK_OFFSET(0x104CEC60)
#define CLASS_1_1FC767549ED1B2B7_METHOD_1_BD7E60E01B27B70C_OFFSET UNITYSDK_OFFSET(0x104CFB00)

inline static constexpr unsigned int Class_1_1FC767549ED1B2B7_TypeDefinitionIndex = 53827;

class Class_1_1FC767549ED1B2B7 : public ::System::Object
{
public:
	static ::System::String* Method_1_66FE9A93DBC78FE2(::System::Collections::Generic::IList_1<::Class_1_A2C3097235CA38AC*>* a1)
	{
		return ((::System::String*(*)(::System::Collections::Generic::IList_1<::Class_1_A2C3097235CA38AC*>*))((::PBYTE)hIl2Cpp + CLASS_1_1FC767549ED1B2B7_METHOD_1_66FE9A93DBC78FE2_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* Method_1_3A46FA91CC41DDD0(::System::Collections::Generic::IList_1<::Class_1_A2C3097235CA38AC*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::System::Collections::Generic::IList_1<::Class_1_A2C3097235CA38AC*>*))((::PBYTE)hIl2Cpp + CLASS_1_1FC767549ED1B2B7_METHOD_1_3A46FA91CC41DDD0_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>* Method_1_5DB92B0B9E1DF522(::System::Collections::Generic::IList_1<::Class_1_A2C3097235CA38AC*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>*(*)(::System::Collections::Generic::IList_1<::Class_1_A2C3097235CA38AC*>*))((::PBYTE)hIl2Cpp + CLASS_1_1FC767549ED1B2B7_METHOD_1_5DB92B0B9E1DF522_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* Method_1_186AA7EEEFC4C2FB(::System::Collections::Generic::IList_1<::Class_1_A2C3097235CA38AC*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*(*)(::System::Collections::Generic::IList_1<::Class_1_A2C3097235CA38AC*>*))((::PBYTE)hIl2Cpp + CLASS_1_1FC767549ED1B2B7_METHOD_1_186AA7EEEFC4C2FB_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>* Method_1_BD7E60E01B27B70C(::System::Collections::Generic::IList_1<::Class_1_A2C3097235CA38AC*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>*(*)(::System::Collections::Generic::IList_1<::Class_1_A2C3097235CA38AC*>*))((::PBYTE)hIl2Cpp + CLASS_1_1FC767549ED1B2B7_METHOD_1_BD7E60E01B27B70C_OFFSET))(a1);
	}
};
