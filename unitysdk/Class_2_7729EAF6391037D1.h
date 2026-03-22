#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AD6EAABC8C018C94.h"

class Class_1_6CF32442E7A80121;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ChessRogueCabinetDataItem; }
namespace RPG::Client { class ChessRogueData; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7729EAF6391037D1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFEAC450)
#define CLASS_2_7729EAF6391037D1_METHOD_2_04EAA728819FA889_OFFSET UNITYSDK_OFFSET(0xFEAC4E0)
#define CLASS_2_7729EAF6391037D1_METHOD_2_27C5766ACD13DC01_OFFSET UNITYSDK_OFFSET(0xFEAC610)
#define CLASS_2_7729EAF6391037D1_METHOD_2_C958C75CB08323C3_OFFSET UNITYSDK_OFFSET(0xFEACF50)
#define CLASS_2_7729EAF6391037D1_METHOD_2_E284293239A22A56_OFFSET UNITYSDK_OFFSET(0xFEABBE0)
#define CLASS_2_7729EAF6391037D1_METHOD_2_EA15897E495C822D_OFFSET UNITYSDK_OFFSET(0xFEAC890)
#define CLASS_2_7729EAF6391037D1_METHOD_2_F89C48EE20723849_OFFSET UNITYSDK_OFFSET(0xFEACD30)
#define CLASS_2_7729EAF6391037D1__CTOR_OFFSET UNITYSDK_OFFSET(0xFEABBA0)
#define CLASS_2_7729EAF6391037D1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFEAD010)

inline static constexpr unsigned int Class_2_7729EAF6391037D1_TypeDefinitionIndex = 53340;

class Class_2_7729EAF6391037D1 : public ::Class_1_AD6EAABC8C018C94
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::ChessRogueCabinetDataItem*>* Field_2_0; // 0x38
	::RPG::Client::Promises::Promise* Field_2_1; // 0x40
	::System::Boolean Field_2_2; // 0x48

	::System::Void _ctor(::RPG::Client::ChessRogueData* a1, ::Class_1_6CF32442E7A80121* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueData*, ::Class_1_6CF32442E7A80121*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7729EAF6391037D1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7729EAF6391037D1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_04EAA728819FA889()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7729EAF6391037D1_METHOD_2_04EAA728819FA889_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_27C5766ACD13DC01()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7729EAF6391037D1_METHOD_2_27C5766ACD13DC01_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_EA15897E495C822D()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7729EAF6391037D1_METHOD_2_EA15897E495C822D_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_F89C48EE20723849()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7729EAF6391037D1_METHOD_2_F89C48EE20723849_OFFSET))(this);
	}

	::System::Void Method_2_C958C75CB08323C3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7729EAF6391037D1_METHOD_2_C958C75CB08323C3_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ChessRogueCabinetDataItem*>* Method_2_E284293239A22A56(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueCabinetDataItem*>*(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_7729EAF6391037D1_METHOD_2_E284293239A22A56_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7729EAF6391037D1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
