#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_42;
class Class_0_16E4307DCC419505_452;
class Class_1_51C874EE455D4F2F;
class Class_1_51C874EE455D4F2F_1;
namespace System { class String; }

#define CLASS_1_AAE3CF8472BB8C9A_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x10CCFF20)
#define CLASS_1_AAE3CF8472BB8C9A_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x10CCFEA0)
#define CLASS_1_AAE3CF8472BB8C9A_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x10CCFEE0)
#define CLASS_1_AAE3CF8472BB8C9A_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x10CD0000)
#define CLASS_1_AAE3CF8472BB8C9A_ISPATCH_OFFSET UNITYSDK_OFFSET(0x10CCFFC0)
#define CLASS_1_AAE3CF8472BB8C9A_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x10CCFF80)
#define CLASS_1_AAE3CF8472BB8C9A_METHOD_1_4006444678990C80_OFFSET UNITYSDK_OFFSET(0x10CD01C0)
#define CLASS_1_AAE3CF8472BB8C9A_METHOD_1_BF26327FD1114250_OFFSET UNITYSDK_OFFSET(0x10CD0400)
#define CLASS_1_AAE3CF8472BB8C9A_METHOD_1_D0C27DAEEA53EF0D_OFFSET UNITYSDK_OFFSET(0x10CD0590)
#define CLASS_1_AAE3CF8472BB8C9A_METHOD_1_D8877F3F2CDAE711_OFFSET UNITYSDK_OFFSET(0x10CD0100)
#define CLASS_1_AAE3CF8472BB8C9A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10CD0040)
#define CLASS_1_AAE3CF8472BB8C9A__CTOR_OFFSET UNITYSDK_OFFSET(0x10CD0790)
#define CLASS_1_AAE3CF8472BB8C9A___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10CD07B0)

inline static constexpr unsigned int Class_1_AAE3CF8472BB8C9A_TypeDefinitionIndex = 47138;

class Class_1_AAE3CF8472BB8C9A : public ::System::Object
{
public:
	::System::String* Field_1_5; // 0x10
	::Class_0_16E4307DCC419505_452* Field_1_2; // 0x18
	::System::String* Field_1_11; // 0x20
	::Class_1_51C874EE455D4F2F* Field_1_3; // 0x28
	::Class_1_51C874EE455D4F2F_1* Field_1_4; // 0x30
	::Class_0_16E4307DCC419505_42* Field_1_1; // 0x38
	::RPG::Client::ByteHash16 Field_1_6; // 0x40
	::RPG::Client::ExeCode Field_1_0; // 0x50
	::System::Boolean Field_1_12; // 0x54
	::System::Boolean Field_1_8; // 0x55
	::System::Boolean Field_1_10; // 0x56
	::System::Boolean Field_1_9; // 0x57
	::System::Int64 Field_1_7; // 0x58

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
