#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueMiracleData; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define CLASS_1_EA34684135EFC9DB_CLEAR_OFFSET UNITYSDK_OFFSET(0x9451360)
#define CLASS_1_EA34684135EFC9DB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x94515F0)
#define CLASS_1_EA34684135EFC9DB_METHOD_1_50CC210EDFE9B04E_1_OFFSET UNITYSDK_OFFSET(0x94518B0)
#define CLASS_1_EA34684135EFC9DB_METHOD_1_50CC210EDFE9B04E_OFFSET UNITYSDK_OFFSET(0x94518A0)
#define CLASS_1_EA34684135EFC9DB_METHOD_1_7DF143D711C7859F_1_OFFSET UNITYSDK_OFFSET(0x94518D0)
#define CLASS_1_EA34684135EFC9DB_METHOD_1_7DF143D711C7859F_OFFSET UNITYSDK_OFFSET(0x94518C0)
#define CLASS_1_EA34684135EFC9DB_METHOD_1_84D819F0D7BEF378_1_OFFSET UNITYSDK_OFFSET(0x9451740)
#define CLASS_1_EA34684135EFC9DB_METHOD_1_84D819F0D7BEF378_OFFSET UNITYSDK_OFFSET(0x94516D0)
#define CLASS_1_EA34684135EFC9DB_METHOD_1_C1A8A7A9C8A5DDF3_1_OFFSET UNITYSDK_OFFSET(0x9451820)
#define CLASS_1_EA34684135EFC9DB_METHOD_1_C1A8A7A9C8A5DDF3_OFFSET UNITYSDK_OFFSET(0x94517B0)
#define CLASS_1_EA34684135EFC9DB_METHOD_1_C2F8771CBCB46B32_OFFSET UNITYSDK_OFFSET(0x9451660)
#define CLASS_1_EA34684135EFC9DB_METHOD_1_C76FF4CAC9BB09E4_OFFSET UNITYSDK_OFFSET(0x9451890)
#define CLASS_1_EA34684135EFC9DB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x94505F0)
#define CLASS_1_EA34684135EFC9DB__CTOR_OFFSET UNITYSDK_OFFSET(0x9450490)
#define CLASS_1_EA34684135EFC9DB___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x94518E0)

inline static constexpr unsigned int Class_1_EA34684135EFC9DB_TypeDefinitionIndex = 53670;

class Class_1_EA34684135EFC9DB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::RogueTournBuildRefTeamData*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* Field_1_2; // 0x18
	::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::RogueFormulaData*>* Field_1_6; // 0x20
	::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::RogueFormulaData*>* Field_1_7; // 0x28
	::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>* Field_1_4; // 0x30
	::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::RogueTournBuildRefTeamData*>* Field_1_5; // 0x38
	::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::RogueMiracleData*>* Field_1_8; // 0x40
	::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* Field_1_1; // 0x48
	::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>* Field_1_3; // 0x50
	::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::RogueMiracleData*>* Field_1_9; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA34684135EFC9DB__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA34684135EFC9DB_TOSTRING_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA34684135EFC9DB_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA34684135EFC9DB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C2F8771CBCB46B32(::RPG::Client::RogueTournBuildRefTeamData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournBuildRefTeamData*))((::PBYTE)hIl2Cpp + CLASS_1_EA34684135EFC9DB_METHOD_1_C2F8771CBCB46B32_OFFSET))(this, a1);
	}

	::System::Void Method_1_84D819F0D7BEF378(::RPG::Client::RogueFormulaData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + CLASS_1_EA34684135EFC9DB_METHOD_1_84D819F0D7BEF378_OFFSET))(this, a1);
	}

	::System::Void Method_1_84D819F0D7BEF378_1(::RPG::Client::RogueFormulaData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + CLASS_1_EA34684135EFC9DB_METHOD_1_84D819F0D7BEF378_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C1A8A7A9C8A5DDF3(::RPG::Client::RogueMiracleData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMiracleData*))((::PBYTE)hIl2Cpp + CLASS_1_EA34684135EFC9DB_METHOD_1_C1A8A7A9C8A5DDF3_OFFSET))(this, a1);
	}

	::System::Void Method_1_C1A8A7A9C8A5DDF3_1(::RPG::Client::RogueMiracleData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMiracleData*))((::PBYTE)hIl2Cpp + CLASS_1_EA34684135EFC9DB_METHOD_1_C1A8A7A9C8A5DDF3_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>* Method_1_C76FF4CAC9BB09E4()
	{
		return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA34684135EFC9DB_METHOD_1_C76FF4CAC9BB09E4_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* Method_1_50CC210EDFE9B04E()
	{
		return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA34684135EFC9DB_METHOD_1_50CC210EDFE9B04E_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* Method_1_50CC210EDFE9B04E_1()
	{
		return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA34684135EFC9DB_METHOD_1_50CC210EDFE9B04E_1_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::RPG::Client::RogueMiracleData*>* Method_1_7DF143D711C7859F()
	{
		return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueMiracleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA34684135EFC9DB_METHOD_1_7DF143D711C7859F_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::RPG::Client::RogueMiracleData*>* Method_1_7DF143D711C7859F_1()
	{
		return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueMiracleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA34684135EFC9DB_METHOD_1_7DF143D711C7859F_1_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA34684135EFC9DB___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
