#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComposeItemFailedType.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

class Class_0_16E4307DCC419505_754;
namespace RPG::Client { class CheckItemReachWorldLevel; }
namespace RPG::Client { class ComposeItemData; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_67B0EA80430D1621_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xDE68B00)
#define CLASS_2_67B0EA80430D1621_METHOD_2_89852D652B67C44B_OFFSET UNITYSDK_OFFSET(0xDE68E50)
#define CLASS_2_67B0EA80430D1621__CTOR_OFFSET UNITYSDK_OFFSET(0xDE68A90)
#define CLASS_2_67B0EA80430D1621__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xDE68E00)
#define CLASS_2_67B0EA80430D1621__SUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xDE68C20)
#define CLASS_2_67B0EA80430D1621__UNSUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xDE68D10)
#define CLASS_2_67B0EA80430D1621___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xDE69160)
#define CLASS_2_67B0EA80430D1621___IFIXBASEPROXY__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xDE692B0)
#define CLASS_2_67B0EA80430D1621___IFIXBASEPROXY__SUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xDE691D0)
#define CLASS_2_67B0EA80430D1621___IFIXBASEPROXY__UNSUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xDE69240)

inline static constexpr unsigned int Class_2_67B0EA80430D1621_TypeDefinitionIndex = 60528;

class Class_2_67B0EA80430D1621 : public ::RPG::Client::SyncCheckItemBase
{
public:
	::RPG::Client::CheckItemReachWorldLevel* Field_2_2; // 0x10
	::Class_0_16E4307DCC419505_754* Field_2_1; // 0x18
	::RPG::Client::ComposeItemData* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::Client::ComposeItemData* a1, ::Class_0_16E4307DCC419505_754* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ComposeItemData*, ::Class_0_16E4307DCC419505_754*))((::PBYTE)hIl2Cpp + CLASS_2_67B0EA80430D1621__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_67B0EA80430D1621_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
	}

	::System::Void _SubscribeCustomEvent(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_67B0EA80430D1621__SUBSCRIBECUSTOMEVENT_OFFSET))(this, a1);
	}

	::System::Void _UnsubscribeCustomEvent(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_67B0EA80430D1621__UNSUBSCRIBECUSTOMEVENT_OFFSET))(this, a1);
	}

	::System::Boolean _DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67B0EA80430D1621__DOCHECKIMPL_OFFSET))(this);
	}

	::RPG::Client::ComposeItemFailedType Method_2_89852D652B67C44B()
	{
		return ((::RPG::Client::ComposeItemFailedType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67B0EA80430D1621_METHOD_2_89852D652B67C44B_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_67B0EA80430D1621___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__SubscribeCustomEvent(::System::Action* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_67B0EA80430D1621___IFIXBASEPROXY__SUBSCRIBECUSTOMEVENT_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__UnsubscribeCustomEvent(::System::Action* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_67B0EA80430D1621___IFIXBASEPROXY__UNSUBSCRIBECUSTOMEVENT_OFFSET))(this, P0);
	}

	::System::Boolean __iFixBaseProxy__DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67B0EA80430D1621___IFIXBASEPROXY__DOCHECKIMPL_OFFSET))(this);
	}
};
