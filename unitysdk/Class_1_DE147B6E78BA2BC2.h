#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"

class Class_1_72C6D937BA5A992C;
class Class_1_A2967FAA88DD8F73;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DE147B6E78BA2BC2_GETDATETIME_OFFSET UNITYSDK_OFFSET(0xF761980)
#define CLASS_1_DE147B6E78BA2BC2_GETITEMLIST_OFFSET UNITYSDK_OFFSET(0xF7618D0)
#define CLASS_1_DE147B6E78BA2BC2_GETTIME_OFFSET UNITYSDK_OFFSET(0xF761910)
#define CLASS_1_DE147B6E78BA2BC2_GETUSERNAME_OFFSET UNITYSDK_OFFSET(0xF7619C0)
#define CLASS_1_DE147B6E78BA2BC2_GET_PRESENTPIECELIST_OFFSET UNITYSDK_OFFSET(0xF761D50)
#define CLASS_1_DE147B6E78BA2BC2_GET_PRESENTTIME_OFFSET UNITYSDK_OFFSET(0xF761D30)
#define CLASS_1_DE147B6E78BA2BC2_GET_USERID_OFFSET UNITYSDK_OFFSET(0xF761D10)
#define CLASS_1_DE147B6E78BA2BC2_ISHISTORYVALID_OFFSET UNITYSDK_OFFSET(0xF761A70)
#define CLASS_1_DE147B6E78BA2BC2_ISITEMVALID_OFFSET UNITYSDK_OFFSET(0xF761AB0)
#define CLASS_1_DE147B6E78BA2BC2_METHOD_1_A6EB043AED5D5D84_1_OFFSET UNITYSDK_OFFSET(0xF7617A0)
#define CLASS_1_DE147B6E78BA2BC2_METHOD_1_A6EB043AED5D5D84_OFFSET UNITYSDK_OFFSET(0xF761660)
#define CLASS_1_DE147B6E78BA2BC2_SET_PRESENTPIECELIST_OFFSET UNITYSDK_OFFSET(0xF761D60)
#define CLASS_1_DE147B6E78BA2BC2_SET_PRESENTTIME_OFFSET UNITYSDK_OFFSET(0xF761D40)
#define CLASS_1_DE147B6E78BA2BC2_SET_USERID_OFFSET UNITYSDK_OFFSET(0xF761D20)
#define CLASS_1_DE147B6E78BA2BC2__CTOR_OFFSET UNITYSDK_OFFSET(0xF761790)

inline static constexpr unsigned int Class_1_DE147B6E78BA2BC2_TypeDefinitionIndex = 61339;

class Class_1_DE147B6E78BA2BC2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _PresentPieceList_k__BackingField; // 0x10
	::System::UInt32 _UserID_k__BackingField; // 0x18
	::RPG::Client::DateTimePro _PresentTime_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2__CTOR_OFFSET))(this);
	}

	static ::Class_1_DE147B6E78BA2BC2* Method_1_A6EB043AED5D5D84(::Class_1_A2967FAA88DD8F73* a1)
	{
		return ((::Class_1_DE147B6E78BA2BC2*(*)(::Class_1_A2967FAA88DD8F73*))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_METHOD_1_A6EB043AED5D5D84_OFFSET))(a1);
	}

	static ::Class_1_DE147B6E78BA2BC2* Method_1_A6EB043AED5D5D84_1(::Class_1_72C6D937BA5A992C* a1)
	{
		return ((::Class_1_DE147B6E78BA2BC2*(*)(::Class_1_72C6D937BA5A992C*))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_METHOD_1_A6EB043AED5D5D84_1_OFFSET))(a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* GetItemList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_GETITEMLIST_OFFSET))(this);
	}

	::System::String* GetTime()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_GETTIME_OFFSET))(this);
	}

	::RPG::Client::DateTimePro GetDateTime()
	{
		return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_GETDATETIME_OFFSET))(this);
	}

	::System::String* GetUserName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_GETUSERNAME_OFFSET))(this);
	}

	::System::Boolean IsHistoryValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_ISHISTORYVALID_OFFSET))(this);
	}

	::System::Boolean IsItemValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_ISITEMVALID_OFFSET))(this);
	}

	::System::UInt32 get_UserID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_GET_USERID_OFFSET))(this);
	}

	::System::Void set_UserID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_SET_USERID_OFFSET))(this, value);
	}

	::RPG::Client::DateTimePro get_PresentTime()
	{
		return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_GET_PRESENTTIME_OFFSET))(this);
	}

	::System::Void set_PresentTime(::RPG::Client::DateTimePro value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_SET_PRESENTTIME_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_PresentPieceList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_GET_PRESENTPIECELIST_OFFSET))(this);
	}

	::System::Void set_PresentPieceList(::System::Collections::Generic::List_1<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_DE147B6E78BA2BC2_SET_PRESENTPIECELIST_OFFSET))(this, value);
	}
};
