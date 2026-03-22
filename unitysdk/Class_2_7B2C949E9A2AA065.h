#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"

class Class_0_16E4307DCC419505_50;
class Class_1_51C874EE455D4F2F;
class Class_1_51C874EE455D4F2F_1;
class Class_2_3278534A4F266074;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_7B2C949E9A2AA065_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x878A440)
#define CLASS_2_7B2C949E9A2AA065_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x878A4C0)
#define CLASS_2_7B2C949E9A2AA065_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x878A630)
#define CLASS_2_7B2C949E9A2AA065_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x878A620)
#define CLASS_2_7B2C949E9A2AA065_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x878A610)
#define CLASS_2_7B2C949E9A2AA065_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x878A600)
#define CLASS_2_7B2C949E9A2AA065_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x878A490)
#define CLASS_2_7B2C949E9A2AA065_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x878A640)
#define CLASS_2_7B2C949E9A2AA065_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x878A5D0)
#define CLASS_2_7B2C949E9A2AA065_METHOD_2_03DB9286A30DEC00_OFFSET UNITYSDK_OFFSET(0x878A6E0)
#define CLASS_2_7B2C949E9A2AA065_METHOD_2_E815DACFC7B4951E_OFFSET UNITYSDK_OFFSET(0x878A8A0)
#define CLASS_2_7B2C949E9A2AA065_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0x878A930)
#define CLASS_2_7B2C949E9A2AA065_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x878A650)
#define CLASS_2_7B2C949E9A2AA065__CTOR_OFFSET UNITYSDK_OFFSET(0x878A990)
#define CLASS_2_7B2C949E9A2AA065__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0x878A660)
#define CLASS_2_7B2C949E9A2AA065___IFIXBASEPROXY_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x878A9C0)

inline static constexpr unsigned int Class_2_7B2C949E9A2AA065_TypeDefinitionIndex = 47027;

class Class_2_7B2C949E9A2AA065 : public ::RPG::Client::AbsDownloadData_1<::Class_0_16E4307DCC419505_50*>
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_2_3278534A4F266074* Field_2_2; // 0x78
	::System::Boolean _IsEnable_k__BackingField; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_DefaultAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_BaseAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_GET_BASEABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F_1* get_RelativePath()
	{
		return ((::Class_1_51C874EE455D4F2F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_SET_ISENABLE_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_50* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_50*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* Method_2_03DB9286A30DEC00()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_METHOD_2_03DB9286A30DEC00_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_2_E815DACFC7B4951E(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_METHOD_2_E815DACFC7B4951E_OFFSET))(this, a1);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_ONALLSUCCEED_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* __iFixBaseProxy_get_BaseAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065___IFIXBASEPROXY_GET_BASEABSOLUTEPATH_OFFSET))(this);
	}
};
