#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_559;
class Class_0_16E4307DCC419505_69;
class Class_1_51C874EE455D4F2F;
class Class_1_51C874EE455D4F2F_1;
namespace System { class String; }

#define CLASS_1_AAE3CF8472BB8C9A_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0xE682F30)
#define CLASS_1_AAE3CF8472BB8C9A_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0xE682EB0)
#define CLASS_1_AAE3CF8472BB8C9A_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0xE682EF0)
#define CLASS_1_AAE3CF8472BB8C9A_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0xE683010)
#define CLASS_1_AAE3CF8472BB8C9A_ISPATCH_OFFSET UNITYSDK_OFFSET(0xE682FD0)
#define CLASS_1_AAE3CF8472BB8C9A_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0xE682F90)
#define CLASS_1_AAE3CF8472BB8C9A_METHOD_1_4006444678990C80_OFFSET UNITYSDK_OFFSET(0xE6831D0)
#define CLASS_1_AAE3CF8472BB8C9A_METHOD_1_BF26327FD1114250_OFFSET UNITYSDK_OFFSET(0xE683410)
#define CLASS_1_AAE3CF8472BB8C9A_METHOD_1_D0C27DAEEA53EF0D_OFFSET UNITYSDK_OFFSET(0xE6835A0)
#define CLASS_1_AAE3CF8472BB8C9A_METHOD_1_D8877F3F2CDAE711_OFFSET UNITYSDK_OFFSET(0xE683110)
#define CLASS_1_AAE3CF8472BB8C9A_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE683050)
#define CLASS_1_AAE3CF8472BB8C9A__CTOR_OFFSET UNITYSDK_OFFSET(0xE6837A0)
#define CLASS_1_AAE3CF8472BB8C9A___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE6837C0)

inline static constexpr unsigned int Class_1_AAE3CF8472BB8C9A_TypeDefinitionIndex = 54965;

class Class_1_AAE3CF8472BB8C9A : public ::System::Object
{
public:
	::Class_1_51C874EE455D4F2F* Field_1_3; // 0x10
	::Class_0_16E4307DCC419505_559* Field_1_2; // 0x18
	::System::String* Field_1_5; // 0x20
	::Class_0_16E4307DCC419505_69* Field_1_1; // 0x28
	::System::String* Field_1_11; // 0x30
	::Class_1_51C874EE455D4F2F_1* Field_1_4; // 0x38
	::System::Int64 Field_1_7; // 0x40
	::System::Boolean Field_1_8; // 0x48
	::System::Boolean Field_1_12; // 0x49
	::System::Boolean Field_1_9; // 0x4A
	::System::Boolean Field_1_10; // 0x4B
	::RPG::Client::ByteHash16 Field_1_6; // 0x4C
	::RPG::Client::ExeCode Field_1_0; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A__CTOR_OFFSET))(this);
	}

	::System::String* GetDownloadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::Int64 GetFileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A_GETFILESIZE_OFFSET))(this);
	}

	::RPG::Client::ByteHash16 GetContentHash()
	{
		return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A_GETCONTENTHASH_OFFSET))(this);
	}

	::System::Boolean IsTmpFileNameAddFileHash()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
	}

	::System::Boolean IsPatch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A_ISPATCH_OFFSET))(this);
	}

	::System::Boolean IsNeedWriteContentHashFile()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_D8877F3F2CDAE711()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A_METHOD_1_D8877F3F2CDAE711_OFFSET))(this);
	}

	::System::String* Method_1_4006444678990C80()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A_METHOD_1_4006444678990C80_OFFSET))(this);
	}

	::System::String* Method_1_BF26327FD1114250()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A_METHOD_1_BF26327FD1114250_OFFSET))(this);
	}

	::System::String* Method_1_D0C27DAEEA53EF0D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A_METHOD_1_D0C27DAEEA53EF0D_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
