#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"
#include "unitysdk/RPG/Client/ByteHash16.h"

class Class_0_16E4307DCC419505_42;
class Class_1_51C874EE455D4F2F;
class Class_1_51C874EE455D4F2F_1;
class Class_1_9191E587A43FE591;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_3C8C00F3F8D7A848_1_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xFD5A160)
#define CLASS_2_3C8C00F3F8D7A848_1_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xFD59FA0)
#define CLASS_2_3C8C00F3F8D7A848_1_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xFD5A0A0)
#define CLASS_2_3C8C00F3F8D7A848_1_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xFD5A090)
#define CLASS_2_3C8C00F3F8D7A848_1_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xFD5A080)
#define CLASS_2_3C8C00F3F8D7A848_1_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xFD5A070)
#define CLASS_2_3C8C00F3F8D7A848_1_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xFD5A010)
#define CLASS_2_3C8C00F3F8D7A848_1_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xFD5A0B0)
#define CLASS_2_3C8C00F3F8D7A848_1_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0xFD5A040)
#define CLASS_2_3C8C00F3F8D7A848_1_METHOD_2_E815DACFC7B4951E_OFFSET UNITYSDK_OFFSET(0xFD5A350)
#define CLASS_2_3C8C00F3F8D7A848_1_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0xFD5A3E0)
#define CLASS_2_3C8C00F3F8D7A848_1_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0xFD5A2C0)
#define CLASS_2_3C8C00F3F8D7A848_1_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xFD5A0C0)
#define CLASS_2_3C8C00F3F8D7A848_1__CTOR_OFFSET UNITYSDK_OFFSET(0xFD5A430)
#define CLASS_2_3C8C00F3F8D7A848_1__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0xFD5A0D0)
#define CLASS_2_3C8C00F3F8D7A848_1___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xFD5A460)
#define CLASS_2_3C8C00F3F8D7A848_1___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0xFD5A470)

inline static constexpr unsigned int Class_2_3C8C00F3F8D7A848_1_TypeDefinitionIndex = 47035;

class Class_2_3C8C00F3F8D7A848_1 : public ::RPG::Client::AbsDownloadData_1<::Class_1_9191E587A43FE591*>
{
public:
	::System::Boolean _IsEnable_k__BackingField; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_DefaultAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F_1* get_RelativePath()
	{
		return ((::Class_1_51C874EE455D4F2F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_SET_ISENABLE_OFFSET))(this, value);
	}

	::Class_1_9191E587A43FE591* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_1_9191E587A43FE591*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Boolean GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_42*>* OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_42*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_2_E815DACFC7B4951E(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_METHOD_2_E815DACFC7B4951E_OFFSET))(this, a1);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_ONALLSUCCEED_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_GetServerBlockManifestName(::System::String*& P0, ::RPG::Client::ByteHash16& P1, ::System::Int64& P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, P0, P1, P2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_42*>* __iFixBaseProxy_OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_42*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET))(this);
	}
};
