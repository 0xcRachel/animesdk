#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"
#include "unitysdk/RPG/Client/ByteHash16.h"

class Class_0_16E4307DCC419505_557;
class Class_1_51C874EE455D4F2F;
class Class_1_51C874EE455D4F2F_1;
class Class_2_F9BA0CA41E0BB88E;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_458E5D5F1916A1AE_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x103A5F10)
#define CLASS_2_458E5D5F1916A1AE_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x103A5C00)
#define CLASS_2_458E5D5F1916A1AE_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x103A5CE0)
#define CLASS_2_458E5D5F1916A1AE_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x103A5CD0)
#define CLASS_2_458E5D5F1916A1AE_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x103A5CC0)
#define CLASS_2_458E5D5F1916A1AE_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x103A5CB0)
#define CLASS_2_458E5D5F1916A1AE_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x103A5C50)
#define CLASS_2_458E5D5F1916A1AE_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x103A5CF0)
#define CLASS_2_458E5D5F1916A1AE_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x103A5C80)
#define CLASS_2_458E5D5F1916A1AE_METHOD_2_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x103A6330)
#define CLASS_2_458E5D5F1916A1AE_METHOD_2_B248AA2483A0E270_OFFSET UNITYSDK_OFFSET(0x103A6160)
#define CLASS_2_458E5D5F1916A1AE_METHOD_2_E815DACFC7B4951E_OFFSET UNITYSDK_OFFSET(0x103A6080)
#define CLASS_2_458E5D5F1916A1AE_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0x103A6110)
#define CLASS_2_458E5D5F1916A1AE_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x103A5D00)
#define CLASS_2_458E5D5F1916A1AE__CTOR_OFFSET UNITYSDK_OFFSET(0x103A5D10)
#define CLASS_2_458E5D5F1916A1AE__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0x103A5E00)
#define CLASS_2_458E5D5F1916A1AE___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x103A6420)

inline static constexpr unsigned int Class_2_458E5D5F1916A1AE_TypeDefinitionIndex = 54859;

class Class_2_458E5D5F1916A1AE : public ::RPG::Client::AbsDownloadData_1<::Class_2_F9BA0CA41E0BB88E*>
{
public:
	::System::Boolean _IsEnable_k__BackingField; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_DefaultAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F_1* get_RelativePath()
	{
		return ((::Class_1_51C874EE455D4F2F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE_SET_ISENABLE_OFFSET))(this, value);
	}

	::Class_2_F9BA0CA41E0BB88E* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_2_F9BA0CA41E0BB88E*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Boolean GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_2_E815DACFC7B4951E(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE_METHOD_2_E815DACFC7B4951E_OFFSET))(this, a1);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE_ONALLSUCCEED_OFFSET))(this);
	}

	::System::Void Method_2_B248AA2483A0E270(::Class_0_16E4307DCC419505_557* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_557*))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE_METHOD_2_B248AA2483A0E270_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE_METHOD_2_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_GetServerBlockManifestName(::System::String*& P0, ::RPG::Client::ByteHash16& P1, ::System::Int64& P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, P0, P1, P2);
	}
};
