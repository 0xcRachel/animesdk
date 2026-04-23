#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_59664D23FCBEAD63_DownloadType.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"
#include "unitysdk/RPG/Client/ByteHash16.h"

class Class_0_16E4307DCC419505_69;
class Class_1_51C874EE455D4F2F;
class Class_1_51C874EE455D4F2F_1;
class Class_1_BA5CA9DD1236A9EC;
class Class_1_F077E55B6446752D;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_59664D23FCBEAD63_CLEARSERVERCACHE_OFFSET UNITYSDK_OFFSET(0x12471170)
#define CLASS_2_59664D23FCBEAD63_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x12471320)
#define CLASS_2_59664D23FCBEAD63_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x12470730)
#define CLASS_2_59664D23FCBEAD63_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x12470800)
#define CLASS_2_59664D23FCBEAD63_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x12470A20)
#define CLASS_2_59664D23FCBEAD63_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x12470A10)
#define CLASS_2_59664D23FCBEAD63_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x12470A00)
#define CLASS_2_59664D23FCBEAD63_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x124709F0)
#define CLASS_2_59664D23FCBEAD63_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x124707F0)
#define CLASS_2_59664D23FCBEAD63_GET_FORCEDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x12470BC0)
#define CLASS_2_59664D23FCBEAD63_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x12470BE0)
#define CLASS_2_59664D23FCBEAD63_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x124709C0)
#define CLASS_2_59664D23FCBEAD63_METHOD_2_06B1AE424D965250_OFFSET UNITYSDK_OFFSET(0x12470A40)
#define CLASS_2_59664D23FCBEAD63_METHOD_2_07A392F640AE50B9_OFFSET UNITYSDK_OFFSET(0x124714B0)
#define CLASS_2_59664D23FCBEAD63_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x12470C00)
#define CLASS_2_59664D23FCBEAD63_METHOD_2_1F55D6FEF27052D4_OFFSET UNITYSDK_OFFSET(0x12470C70)
#define CLASS_2_59664D23FCBEAD63_METHOD_2_2A338BBA3AB0F77E_OFFSET UNITYSDK_OFFSET(0x12471AB0)
#define CLASS_2_59664D23FCBEAD63_METHOD_2_5FC44A4D5E45027B_OFFSET UNITYSDK_OFFSET(0x12470A30)
#define CLASS_2_59664D23FCBEAD63_METHOD_2_69485D89E30086C4_OFFSET UNITYSDK_OFFSET(0x124715E0)
#define CLASS_2_59664D23FCBEAD63_METHOD_2_726FF441D405FD0E_OFFSET UNITYSDK_OFFSET(0x12470D50)
#define CLASS_2_59664D23FCBEAD63_METHOD_2_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x12470C10)
#define CLASS_2_59664D23FCBEAD63_METHOD_2_D585DE91CF2C489D_OFFSET UNITYSDK_OFFSET(0x12471290)
#define CLASS_2_59664D23FCBEAD63_METHOD_2_D68E1CAE64731ECE_OFFSET UNITYSDK_OFFSET(0x124708F0)
#define CLASS_2_59664D23FCBEAD63_METHOD_2_E714360D333E21E2_OFFSET UNITYSDK_OFFSET(0x12471210)
#define CLASS_2_59664D23FCBEAD63_METHOD_2_E815DACFC7B4951E_OFFSET UNITYSDK_OFFSET(0x12471D10)
#define CLASS_2_59664D23FCBEAD63_METHOD_2_F00C9C530ADB1CA9_OFFSET UNITYSDK_OFFSET(0x12471970)
#define CLASS_2_59664D23FCBEAD63_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0x12471DA0)
#define CLASS_2_59664D23FCBEAD63_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x12470E80)
#define CLASS_2_59664D23FCBEAD63_RESET_OFFSET UNITYSDK_OFFSET(0x124710A0)
#define CLASS_2_59664D23FCBEAD63_SET_FORCEDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x12470BD0)
#define CLASS_2_59664D23FCBEAD63_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x12470BF0)
#define CLASS_2_59664D23FCBEAD63__CTOR_OFFSET UNITYSDK_OFFSET(0x12470F10)
#define CLASS_2_59664D23FCBEAD63__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0x12470E30)
#define CLASS_2_59664D23FCBEAD63___IFIXBASEPROXY_CLEARSERVERCACHE_OFFSET UNITYSDK_OFFSET(0x12472090)
#define CLASS_2_59664D23FCBEAD63___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x12472130)
#define CLASS_2_59664D23FCBEAD63___IFIXBASEPROXY_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x12471E60)
#define CLASS_2_59664D23FCBEAD63___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x12471F50)
#define CLASS_2_59664D23FCBEAD63___IFIXBASEPROXY_RESET_OFFSET UNITYSDK_OFFSET(0x12471FC0)

inline static constexpr unsigned int Class_2_59664D23FCBEAD63_TypeDefinitionIndex = 54848;

class Class_2_59664D23FCBEAD63 : public ::RPG::Client::AbsDownloadData_1<::Class_1_F077E55B6446752D*>
{
public:
	::System::String* Field_2_8; // 0x78
	::Class_1_51C874EE455D4F2F* Field_2_2; // 0x80
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_5; // 0x88
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_9; // 0x90
	::Class_1_BA5CA9DD1236A9EC* Field_2_1; // 0x98
	::System::Int64 Field_2_0; // 0xA0
	::Class_2_59664D23FCBEAD63_DownloadType Field_2_4; // 0xA8
	::System::Boolean _IsEnable_k__BackingField; // 0xAC
	::System::Boolean Field_2_3; // 0xAD
	::System::Boolean _ForceDownload_k__BackingField; // 0xAE

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_DefaultAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_BaseAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_GET_BASEABSOLUTEPATH_OFFSET))(this);
	}

	::System::Void Method_2_D68E1CAE64731ECE(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_METHOD_2_D68E1CAE64731ECE_OFFSET))(this, a1);
	}

	::Class_1_51C874EE455D4F2F_1* get_RelativePath()
	{
		return ((::Class_1_51C874EE455D4F2F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::Class_2_59664D23FCBEAD63_DownloadType Method_2_5FC44A4D5E45027B()
	{
		return ((::Class_2_59664D23FCBEAD63_DownloadType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_METHOD_2_5FC44A4D5E45027B_OFFSET))(this);
	}

	::System::Void Method_2_06B1AE424D965250(::Class_2_59664D23FCBEAD63_DownloadType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_59664D23FCBEAD63_DownloadType))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_METHOD_2_06B1AE424D965250_OFFSET))(this, a1);
	}

	::System::Boolean get_ForceDownload()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_GET_FORCEDOWNLOAD_OFFSET))(this);
	}

	::System::Void set_ForceDownload(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_SET_FORCEDOWNLOAD_OFFSET))(this, value);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_SET_ISENABLE_OFFSET))(this, value);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_METHOD_2_B3A88D7849969A71_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* Method_2_1F55D6FEF27052D4()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_METHOD_2_1F55D6FEF27052D4_OFFSET))(this);
	}

	::System::Void Method_2_726FF441D405FD0E(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_METHOD_2_726FF441D405FD0E_OFFSET))(this, a1);
	}

	::Class_1_F077E55B6446752D* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_1_F077E55B6446752D*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>* OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_RESET_OFFSET))(this);
	}

	::System::Void ClearServerCache()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_CLEARSERVERCACHE_OFFSET))(this);
	}

	::System::Boolean Method_2_E714360D333E21E2(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_METHOD_2_E714360D333E21E2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>* Method_2_D585DE91CF2C489D()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_METHOD_2_D585DE91CF2C489D_OFFSET))(this);
	}

	::System::Boolean GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_07A392F640AE50B9(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_METHOD_2_07A392F640AE50B9_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_69485D89E30086C4(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_METHOD_2_69485D89E30086C4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F00C9C530ADB1CA9(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_METHOD_2_F00C9C530ADB1CA9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* Method_2_2A338BBA3AB0F77E()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_METHOD_2_2A338BBA3AB0F77E_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_2_E815DACFC7B4951E(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_METHOD_2_E815DACFC7B4951E_OFFSET))(this, a1);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63_ONALLSUCCEED_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* __iFixBaseProxy_get_BaseAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63___IFIXBASEPROXY_GET_BASEABSOLUTEPATH_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>* __iFixBaseProxy_OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63___IFIXBASEPROXY_RESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_ClearServerCache()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63___IFIXBASEPROXY_CLEARSERVERCACHE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_GetServerBlockManifestName(::System::String*& P0, ::RPG::Client::ByteHash16& P1, ::System::Int64& P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_59664D23FCBEAD63___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, P0, P1, P2);
	}
};
