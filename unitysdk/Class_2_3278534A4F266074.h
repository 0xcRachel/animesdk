#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"
#include "unitysdk/RPG/Client/ByteHash16.h"

class Class_0_16E4307DCC419505_50;
class Class_1_51C874EE455D4F2F;
class Class_1_51C874EE455D4F2F_1;
namespace System { class String; }

#define CLASS_2_3278534A4F266074_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x86119E0)
#define CLASS_2_3278534A4F266074_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x8611740)
#define CLASS_2_3278534A4F266074_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x86117C0)
#define CLASS_2_3278534A4F266074_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x8611930)
#define CLASS_2_3278534A4F266074_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x8611920)
#define CLASS_2_3278534A4F266074_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x8611910)
#define CLASS_2_3278534A4F266074_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x8611900)
#define CLASS_2_3278534A4F266074_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x8611790)
#define CLASS_2_3278534A4F266074_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x8611940)
#define CLASS_2_3278534A4F266074_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x86118D0)
#define CLASS_2_3278534A4F266074_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0x8611B90)
#define CLASS_2_3278534A4F266074_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x8611950)
#define CLASS_2_3278534A4F266074__CTOR_OFFSET UNITYSDK_OFFSET(0x8611BF0)
#define CLASS_2_3278534A4F266074__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0x8611960)
#define CLASS_2_3278534A4F266074___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x8611C30)
#define CLASS_2_3278534A4F266074___IFIXBASEPROXY_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x8611C20)

inline static constexpr unsigned int Class_2_3278534A4F266074_TypeDefinitionIndex = 47042;

class Class_2_3278534A4F266074 : public ::RPG::Client::AbsDownloadData_1<::Class_0_16E4307DCC419505_50*>
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::System::Boolean Field_2_1; // 0x78
	::System::Boolean _IsEnable_k__BackingField; // 0x79

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3278534A4F266074__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3278534A4F266074_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_DefaultAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3278534A4F266074_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_BaseAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3278534A4F266074_GET_BASEABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F_1* get_RelativePath()
	{
		return ((::Class_1_51C874EE455D4F2F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3278534A4F266074_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3278534A4F266074_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3278534A4F266074_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3278534A4F266074_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3278534A4F266074_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3278534A4F266074_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3278534A4F266074_SET_ISENABLE_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_50* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_50*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3278534A4F266074__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Boolean GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_3278534A4F266074_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3278534A4F266074_ONALLSUCCEED_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* __iFixBaseProxy_get_BaseAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3278534A4F266074___IFIXBASEPROXY_GET_BASEABSOLUTEPATH_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_GetServerBlockManifestName(::System::String*& P0, ::RPG::Client::ByteHash16& P1, ::System::Int64& P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_3278534A4F266074___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, P0, P1, P2);
	}
};
