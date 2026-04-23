#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AsyncCheckItemBase.h"
#include "unitysdk/RPG/Client/NotifyType.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_278490190A5A4506_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xFF8A380)
#define CLASS_2_278490190A5A4506_GETCHECKITEMINFO_OFFSET UNITYSDK_OFFSET(0xFF8A6F0)
#define CLASS_2_278490190A5A4506_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0xFF8A6B0)
#define CLASS_2_278490190A5A4506_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFF8A600)
#define CLASS_2_278490190A5A4506__CTOR_OFFSET UNITYSDK_OFFSET(0xFF8A350)
#define CLASS_2_278490190A5A4506__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xFF8A410)
#define CLASS_2_278490190A5A4506__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0xFF8A4C0)
#define CLASS_2_278490190A5A4506__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0xFF8A560)
#define CLASS_2_278490190A5A4506___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xFF8A8C0)
#define CLASS_2_278490190A5A4506___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFF8AAB0)
#define CLASS_2_278490190A5A4506___IFIXBASEPROXY__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xFF8A930)
#define CLASS_2_278490190A5A4506___IFIXBASEPROXY__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0xFF8A9A0)
#define CLASS_2_278490190A5A4506___IFIXBASEPROXY__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0xFF8AA10)

inline static constexpr unsigned int Class_2_278490190A5A4506_TypeDefinitionIndex = 55248;

class Class_2_278490190A5A4506 : public ::RPG::Client::AsyncCheckItemBase
{
public:
	::System::UInt32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_278490190A5A4506__CTOR_OFFSET))(this, a1);
	}

	::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_278490190A5A4506_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
	}

	::System::Boolean _DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_278490190A5A4506__DOCHECKIMPL_OFFSET))(this);
	}

	::System::Boolean _IsDataReadyImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_278490190A5A4506__ISDATAREADYIMPL_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _PrepareDataImpl()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_278490190A5A4506__PREPAREDATAIMPL_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_278490190A5A4506_TOSTRING_OFFSET))(this);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_278490190A5A4506_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}

	::System::String* GetCheckItemInfo()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_278490190A5A4506_GETCHECKITEMINFO_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_278490190A5A4506___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET))(this, P0);
	}

	::System::Boolean __iFixBaseProxy__DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_278490190A5A4506___IFIXBASEPROXY__DOCHECKIMPL_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__IsDataReadyImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_278490190A5A4506___IFIXBASEPROXY__ISDATAREADYIMPL_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __iFixBaseProxy__PrepareDataImpl()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_278490190A5A4506___IFIXBASEPROXY__PREPAREDATAIMPL_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_278490190A5A4506___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
