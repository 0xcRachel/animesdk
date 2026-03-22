#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_74F732AB6D78C9D0_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x15E3A540)
#define CLASS_1_74F732AB6D78C9D0_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x15E3A5A0)
#define CLASS_1_74F732AB6D78C9D0_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x15E3A5E0)
#define CLASS_1_74F732AB6D78C9D0_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x15E3A620)
#define CLASS_1_74F732AB6D78C9D0_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x15E3A530)
#define CLASS_1_74F732AB6D78C9D0_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x15E3A700)
#define CLASS_1_74F732AB6D78C9D0_ISPATCH_OFFSET UNITYSDK_OFFSET(0x15E3A740)
#define CLASS_1_74F732AB6D78C9D0_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x15E3A780)
#define CLASS_1_74F732AB6D78C9D0_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15E3A6C0)
#define CLASS_1_74F732AB6D78C9D0_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15E3A7C0)
#define CLASS_1_74F732AB6D78C9D0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E088D0)
#define CLASS_1_74F732AB6D78C9D0___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15E3A880)

inline static constexpr unsigned int Class_1_74F732AB6D78C9D0_TypeDefinitionIndex = 31215;

class Class_1_74F732AB6D78C9D0 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::Client::ByteHash16 Field_1_1; // 0x18
	::System::Int64 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F732AB6D78C9D0__CTOR_OFFSET))(this);
	}

	::System::Int32 get_SubPackId()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F732AB6D78C9D0_GET_SUBPACKID_OFFSET))(this);
	}

	::RPG::Client::ByteHash16 GetContentHash()
	{
		return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F732AB6D78C9D0_GETCONTENTHASH_OFFSET))(this);
	}

	::System::String* GetDownloadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F732AB6D78C9D0_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::Int64 GetFileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F732AB6D78C9D0_GETFILESIZE_OFFSET))(this);
	}

	::System::String* GetLoadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F732AB6D78C9D0_GETLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F732AB6D78C9D0_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean IsNeedWriteContentHashFile()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F732AB6D78C9D0_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
	}

	::System::Boolean IsPatch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F732AB6D78C9D0_ISPATCH_OFFSET))(this);
	}

	::System::Boolean IsTmpFileNameAddFileHash()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F732AB6D78C9D0_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F732AB6D78C9D0_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F732AB6D78C9D0___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
