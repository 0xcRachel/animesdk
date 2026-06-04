#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AsyncCheckItemBase.h"
#include "unitysdk/RPG/Client/NotifyType.h"

class Class_2_86FD4FDC75007EDF_1;
class Class_2_C0950EB832EDE5B7_1;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_9C5E5E2C62F491CB_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x12CC4170)
#define CLASS_2_9C5E5E2C62F491CB_FILLRSPCMDIDSTO_OFFSET UNITYSDK_OFFSET(0x12CC40B0)
#define CLASS_2_9C5E5E2C62F491CB_GETCHECKITEMINFO_OFFSET UNITYSDK_OFFSET(0x12CC45A0)
#define CLASS_2_9C5E5E2C62F491CB_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x12CC45F0)
#define CLASS_2_9C5E5E2C62F491CB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12CC44F0)
#define CLASS_2_9C5E5E2C62F491CB__CTOR_OFFSET UNITYSDK_OFFSET(0x12CC3EE0)
#define CLASS_2_9C5E5E2C62F491CB__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x12CC41E0)
#define CLASS_2_9C5E5E2C62F491CB__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0x12CC42B0)
#define CLASS_2_9C5E5E2C62F491CB__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0x12CC4380)
#define CLASS_2_9C5E5E2C62F491CB___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x12CC4690)
#define CLASS_2_9C5E5E2C62F491CB___IFIXBASEPROXY_FILLRSPCMDIDSTO_OFFSET UNITYSDK_OFFSET(0x12CC4630)
#define CLASS_2_9C5E5E2C62F491CB___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12CC4850)
#define CLASS_2_9C5E5E2C62F491CB___IFIXBASEPROXY__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x12CC46F0)
#define CLASS_2_9C5E5E2C62F491CB___IFIXBASEPROXY__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0x12CC4750)
#define CLASS_2_9C5E5E2C62F491CB___IFIXBASEPROXY__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0x12CC47B0)

inline static constexpr unsigned int Class_2_9C5E5E2C62F491CB_TypeDefinitionIndex = 55990;

class Class_2_9C5E5E2C62F491CB : public ::RPG::Client::AsyncCheckItemBase
{
public:
	::Class_2_C0950EB832EDE5B7_1* Field_2_0; // 0x10
	::Class_2_86FD4FDC75007EDF_1* Field_2_1; // 0x18
	::System::UInt32 Field_2_2; // 0x20

	::System::Void _ctor(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9C5E5E2C62F491CB__CTOR_OFFSET))(this, a1);
	}

	::System::Void FillRspCmdIDsTo(::System::Collections::Generic::HashSet_1<::System::UInt16>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt16>*))((::PBYTE)hIl2Cpp + CLASS_2_9C5E5E2C62F491CB_FILLRSPCMDIDSTO_OFFSET))(this, a1);
	}

	::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_9C5E5E2C62F491CB_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
	}

	::System::Boolean _DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C5E5E2C62F491CB__DOCHECKIMPL_OFFSET))(this);
	}

	::System::Boolean _IsDataReadyImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C5E5E2C62F491CB__ISDATAREADYIMPL_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _PrepareDataImpl()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C5E5E2C62F491CB__PREPAREDATAIMPL_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C5E5E2C62F491CB_TOSTRING_OFFSET))(this);
	}

	::System::String* GetCheckItemInfo()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C5E5E2C62F491CB_GETCHECKITEMINFO_OFFSET))(this);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C5E5E2C62F491CB_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_FillRspCmdIDsTo(::System::Collections::Generic::HashSet_1<::System::UInt16>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt16>*))((::PBYTE)hIl2Cpp + CLASS_2_9C5E5E2C62F491CB___IFIXBASEPROXY_FILLRSPCMDIDSTO_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_9C5E5E2C62F491CB___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy__DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C5E5E2C62F491CB___IFIXBASEPROXY__DOCHECKIMPL_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__IsDataReadyImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C5E5E2C62F491CB___IFIXBASEPROXY__ISDATAREADYIMPL_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __iFixBaseProxy__PrepareDataImpl()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C5E5E2C62F491CB___IFIXBASEPROXY__PREPAREDATAIMPL_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C5E5E2C62F491CB___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
