#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_27E511E181CEAAFF_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x16F82650)
#define CLASS_1_27E511E181CEAAFF_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x16F82420)
#define CLASS_1_27E511E181CEAAFF_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x16F824D0)
#define CLASS_1_27E511E181CEAAFF_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x16F82330)
#define CLASS_1_27E511E181CEAAFF_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x16F82B60)
#define CLASS_1_27E511E181CEAAFF_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x16F82B20)
#define CLASS_1_27E511E181CEAAFF_ISPATCH_OFFSET UNITYSDK_OFFSET(0x16F82AE0)
#define CLASS_1_27E511E181CEAAFF_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x16F82950)
#define CLASS_1_27E511E181CEAAFF_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x16F822E0)
#define CLASS_1_27E511E181CEAAFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16F82870)
#define CLASS_1_27E511E181CEAAFF__CTOR_OFFSET UNITYSDK_OFFSET(0x16F822C0)
#define CLASS_1_27E511E181CEAAFF___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16F82B70)

inline static constexpr unsigned int Class_1_27E511E181CEAAFF_TypeDefinitionIndex = 37716;

class Class_1_27E511E181CEAAFF : public ::System::Object
{
public:
	// static const ::System::Byte Field_1_0 = 0x7; // 0x0
	::Il2CppArray<::System::UInt32>* Field_1_2; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::RPG::Client::ByteHash16 Field_1_3; // 0x1C
	::System::Int64 Field_1_4; // 0x30
	::System::Byte Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27E511E181CEAAFF__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27E511E181CEAAFF_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* GetLoadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27E511E181CEAAFF_GETLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::String* GetDownloadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27E511E181CEAAFF_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::Int64 GetFileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27E511E181CEAAFF_GETFILESIZE_OFFSET))(this);
	}

	::RPG::Client::ByteHash16 GetContentHash()
	{
		return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27E511E181CEAAFF_GETCONTENTHASH_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27E511E181CEAAFF_TOSTRING_OFFSET))(this);
	}

	::System::Boolean IsTmpFileNameAddFileHash()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27E511E181CEAAFF_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
	}

	::System::Boolean IsPatch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27E511E181CEAAFF_ISPATCH_OFFSET))(this);
	}

	::System::Boolean IsNeedWriteContentHashFile()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27E511E181CEAAFF_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
	}

	::System::Int32 get_SubPackId()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27E511E181CEAAFF_GET_SUBPACKID_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27E511E181CEAAFF___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
