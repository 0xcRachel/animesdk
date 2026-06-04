#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetsStaticFlag.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_70;
namespace SimpleJSON { class JSONClass; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamWriter; }

#define CLASS_1_CE2AC6C9C34CBBD2_GET_ASSETFLAGS_OFFSET UNITYSDK_OFFSET(0x1303B290)
#define CLASS_1_CE2AC6C9C34CBBD2_GET_BLOCKCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x1303B310)
#define CLASS_1_CE2AC6C9C34CBBD2_GET_BUNDLESHORTNAMEHASH_OFFSET UNITYSDK_OFFSET(0x1303B2F0)
#define CLASS_1_CE2AC6C9C34CBBD2_GET_BUNDLESHORTNAME_OFFSET UNITYSDK_OFFSET(0x1303B2D0)
#define CLASS_1_CE2AC6C9C34CBBD2_GET_FILESIZE_OFFSET UNITYSDK_OFFSET(0x1303B270)
#define CLASS_1_CE2AC6C9C34CBBD2_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1303B2B0)
#define CLASS_1_CE2AC6C9C34CBBD2_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1303B250)
#define CLASS_1_CE2AC6C9C34CBBD2_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x1303B450)
#define CLASS_1_CE2AC6C9C34CBBD2_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x1303B230)
#define CLASS_1_CE2AC6C9C34CBBD2_METHOD_1_2C4CACFCB85F415D_OFFSET UNITYSDK_OFFSET(0x1303B330)
#define CLASS_1_CE2AC6C9C34CBBD2_METHOD_1_35F10ABABB5898C9_OFFSET UNITYSDK_OFFSET(0x1303B660)
#define CLASS_1_CE2AC6C9C34CBBD2_METHOD_1_7ED10847788F63EA_OFFSET UNITYSDK_OFFSET(0x1303D6C0)
#define CLASS_1_CE2AC6C9C34CBBD2_METHOD_1_8395AB7342C6B852_OFFSET UNITYSDK_OFFSET(0x1303C580)
#define CLASS_1_CE2AC6C9C34CBBD2_METHOD_1_D78E7E5921B8B1C4_OFFSET UNITYSDK_OFFSET(0x1303B470)
#define CLASS_1_CE2AC6C9C34CBBD2_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1303B410)
#define CLASS_1_CE2AC6C9C34CBBD2_METHOD_1_F123041D2BCE0542_OFFSET UNITYSDK_OFFSET(0x1303CD80)
#define CLASS_1_CE2AC6C9C34CBBD2_SET_ASSETFLAGS_OFFSET UNITYSDK_OFFSET(0x1303B2A0)
#define CLASS_1_CE2AC6C9C34CBBD2_SET_BLOCKCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x1303B320)
#define CLASS_1_CE2AC6C9C34CBBD2_SET_BUNDLESHORTNAMEHASH_OFFSET UNITYSDK_OFFSET(0x1303B300)
#define CLASS_1_CE2AC6C9C34CBBD2_SET_BUNDLESHORTNAME_OFFSET UNITYSDK_OFFSET(0x1303B2E0)
#define CLASS_1_CE2AC6C9C34CBBD2_SET_FILESIZE_OFFSET UNITYSDK_OFFSET(0x1303B280)
#define CLASS_1_CE2AC6C9C34CBBD2_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1303B2C0)
#define CLASS_1_CE2AC6C9C34CBBD2_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1303B260)
#define CLASS_1_CE2AC6C9C34CBBD2_SET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x1303B460)
#define CLASS_1_CE2AC6C9C34CBBD2_SET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x1303B240)
#define CLASS_1_CE2AC6C9C34CBBD2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1303D7D0)
#define CLASS_1_CE2AC6C9C34CBBD2__CTOR_OFFSET UNITYSDK_OFFSET(0x1303C4F0)
#define CLASS_1_CE2AC6C9C34CBBD2___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1303DD40)

inline static constexpr unsigned int Class_1_CE2AC6C9C34CBBD2_TypeDefinitionIndex = 38466;

class Class_1_CE2AC6C9C34CBBD2 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* _BlockContentHash_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_70*>* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::String* _BundleShortName_k__BackingField; // 0x38
	::System::String* _RelativePath_k__BackingField; // 0x40
	::System::Int32 Field_1_7; // 0x48
	::System::Boolean _IsValid_k__BackingField; // 0x4C
	::RPG::Client::AssetsStaticFlag _AssetFlags_k__BackingField; // 0x4E
	::System::Int64 _FileSize_k__BackingField; // 0x50
	::System::Int32 _SubPackId_k__BackingField; // 0x58
	::System::UInt32 _Offset_k__BackingField; // 0x5C
	::System::UInt64 _BundleShortNameHash_k__BackingField; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2__CTOR_OFFSET))(this);
	}

	::System::Int32 get_SubPackId()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_GET_SUBPACKID_OFFSET))(this);
	}

	::System::Void set_SubPackId(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_SET_SUBPACKID_OFFSET))(this, a1);
	}

	::System::UInt32 get_Offset()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_GET_OFFSET_OFFSET))(this);
	}

	::System::Void set_Offset(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_SET_OFFSET_OFFSET))(this, a1);
	}

	::System::Int64 get_FileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_GET_FILESIZE_OFFSET))(this);
	}

	::System::Void set_FileSize(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_SET_FILESIZE_OFFSET))(this, a1);
	}

	::RPG::Client::AssetsStaticFlag get_AssetFlags()
	{
		return ((::RPG::Client::AssetsStaticFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_GET_ASSETFLAGS_OFFSET))(this);
	}

	::System::Void set_AssetFlags(::RPG::Client::AssetsStaticFlag a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetsStaticFlag))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_SET_ASSETFLAGS_OFFSET))(this, a1);
	}

	::System::Boolean get_IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_GET_ISVALID_OFFSET))(this);
	}

	::System::Void set_IsValid(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_SET_ISVALID_OFFSET))(this, a1);
	}

	::System::String* get_BundleShortName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_GET_BUNDLESHORTNAME_OFFSET))(this);
	}

	::System::Void set_BundleShortName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_SET_BUNDLESHORTNAME_OFFSET))(this, a1);
	}

	::System::UInt64 get_BundleShortNameHash()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_GET_BUNDLESHORTNAMEHASH_OFFSET))(this);
	}

	::System::Void set_BundleShortNameHash(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_SET_BUNDLESHORTNAMEHASH_OFFSET))(this, a1);
	}

	::System::String* get_BlockContentHash()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_GET_BLOCKCONTENTHASH_OFFSET))(this);
	}

	::System::Void set_BlockContentHash(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_SET_BLOCKCONTENTHASH_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2C4CACFCB85F415D(::Class_1_CE2AC6C9C34CBBD2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CE2AC6C9C34CBBD2*))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_METHOD_1_2C4CACFCB85F415D_OFFSET))(this, a1);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* get_RelativePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::Void set_RelativePath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_SET_RELATIVEPATH_OFFSET))(this, a1);
	}

	::System::Void Method_1_D78E7E5921B8B1C4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_METHOD_1_D78E7E5921B8B1C4_OFFSET))(this, a1);
	}

	static ::Class_1_CE2AC6C9C34CBBD2* Method_1_35F10ABABB5898C9(::System::String* a1)
	{
		return ((::Class_1_CE2AC6C9C34CBBD2*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_METHOD_1_35F10ABABB5898C9_OFFSET))(a1);
	}

	::SimpleJSON::JSONClass* Method_1_8395AB7342C6B852()
	{
		return ((::SimpleJSON::JSONClass*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_METHOD_1_8395AB7342C6B852_OFFSET))(this);
	}

	::System::Void Method_1_F123041D2BCE0542(::System::IO::StreamWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_METHOD_1_F123041D2BCE0542_OFFSET))(this, a1);
	}

	::System::Void Method_1_7ED10847788F63EA(::System::IO::StreamWriter* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_METHOD_1_7ED10847788F63EA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE2AC6C9C34CBBD2___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
