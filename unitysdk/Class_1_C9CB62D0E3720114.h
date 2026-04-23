#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Struct_2_B90130297D7470CE.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_C9CB62D0E3720114_GET_CHALLENGEGROUPNAME_OFFSET UNITYSDK_OFFSET(0xE173F10)
#define CLASS_1_C9CB62D0E3720114_GET_COMEFROMGOTO_OFFSET UNITYSDK_OFFSET(0xE173EB0)
#define CLASS_1_C9CB62D0E3720114_GET_COMEFROMTEXT_OFFSET UNITYSDK_OFFSET(0xE173E90)
#define CLASS_1_C9CB62D0E3720114_GET_DESC_OFFSET UNITYSDK_OFFSET(0xE173F60)
#define CLASS_1_C9CB62D0E3720114_GET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0xE173EF0)
#define CLASS_1_C9CB62D0E3720114_GET_ICONFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xE173E70)
#define CLASS_1_C9CB62D0E3720114_GET_ICONMIDDLEPATH_OFFSET UNITYSDK_OFFSET(0xE173E50)
#define CLASS_1_C9CB62D0E3720114_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xE173F30)
#define CLASS_1_C9CB62D0E3720114_GET_ID_OFFSET UNITYSDK_OFFSET(0xE173E10)
#define CLASS_1_C9CB62D0E3720114_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE173E30)
#define CLASS_1_C9CB62D0E3720114_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xE173ED0)
#define CLASS_1_C9CB62D0E3720114_METHOD_1_BC71F75F8E31144B_OFFSET UNITYSDK_OFFSET(0xE173DC0)
#define CLASS_1_C9CB62D0E3720114_SET_CHALLENGEGROUPNAME_OFFSET UNITYSDK_OFFSET(0xE173F20)
#define CLASS_1_C9CB62D0E3720114_SET_COMEFROMGOTO_OFFSET UNITYSDK_OFFSET(0xE173EC0)
#define CLASS_1_C9CB62D0E3720114_SET_COMEFROMTEXT_OFFSET UNITYSDK_OFFSET(0xE173EA0)
#define CLASS_1_C9CB62D0E3720114_SET_DESC_OFFSET UNITYSDK_OFFSET(0xE173F70)
#define CLASS_1_C9CB62D0E3720114_SET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0xE173F00)
#define CLASS_1_C9CB62D0E3720114_SET_ICONFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xE173E80)
#define CLASS_1_C9CB62D0E3720114_SET_ICONMIDDLEPATH_OFFSET UNITYSDK_OFFSET(0xE173E60)
#define CLASS_1_C9CB62D0E3720114_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xE173F50)
#define CLASS_1_C9CB62D0E3720114_SET_ID_OFFSET UNITYSDK_OFFSET(0xE173E20)
#define CLASS_1_C9CB62D0E3720114_SET_NAME_OFFSET UNITYSDK_OFFSET(0xE173E40)
#define CLASS_1_C9CB62D0E3720114_SET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xE173EE0)
#define CLASS_1_C9CB62D0E3720114__CTOR_OFFSET UNITYSDK_OFFSET(0xE173B90)

inline static constexpr unsigned int Class_1_C9CB62D0E3720114_TypeDefinitionIndex = 69036;

class Class_1_C9CB62D0E3720114 : public ::System::Object
{
public:
	::System::String* _PrefabPath_k__BackingField; // 0x10
	::System::String* _IconMiddlePath_k__BackingField; // 0x18
	::System::String* _IconFigurePath_k__BackingField; // 0x20
	::RPG::Client::TextID _ChallengeGroupName_k__BackingField; // 0x28
	::RPG::Client::TextID _Desc_k__BackingField; // 0x38
	::System::UInt32 _ID_k__BackingField; // 0x48
	::System::UInt32 _ComeFromGoto_k__BackingField; // 0x4C
	::RPG::Client::TextID _ComeFromText_k__BackingField; // 0x50
	::Struct_2_B90130297D7470CE _Identifier_k__BackingField; // 0x60
	::RPG::Client::TextID _Name_k__BackingField; // 0x70
	::System::Int64 _ExpireTime_k__BackingField; // 0x80

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_BC71F75F8E31144B(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_METHOD_1_BC71F75F8E31144B_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_ID_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_NAME_OFFSET))(this, value);
	}

	::System::String* get_IconMiddlePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_ICONMIDDLEPATH_OFFSET))(this);
	}

	::System::Void set_IconMiddlePath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_ICONMIDDLEPATH_OFFSET))(this, value);
	}

	::System::String* get_IconFigurePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_ICONFIGUREPATH_OFFSET))(this);
	}

	::System::Void set_IconFigurePath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_ICONFIGUREPATH_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_ComeFromText()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_COMEFROMTEXT_OFFSET))(this);
	}

	::System::Void set_ComeFromText(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_COMEFROMTEXT_OFFSET))(this, value);
	}

	::System::UInt32 get_ComeFromGoto()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_COMEFROMGOTO_OFFSET))(this);
	}

	::System::Void set_ComeFromGoto(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_COMEFROMGOTO_OFFSET))(this, value);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_PREFABPATH_OFFSET))(this);
	}

	::System::Void set_PrefabPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_PREFABPATH_OFFSET))(this, value);
	}

	::System::Int64 get_ExpireTime()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_EXPIRETIME_OFFSET))(this);
	}

	::System::Void set_ExpireTime(::System::Int64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_EXPIRETIME_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_ChallengeGroupName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_CHALLENGEGROUPNAME_OFFSET))(this);
	}

	::System::Void set_ChallengeGroupName(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_CHALLENGEGROUPNAME_OFFSET))(this, value);
	}

	::Struct_2_B90130297D7470CE get_Identifier()
	{
		return ((::Struct_2_B90130297D7470CE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::Void set_Identifier(::Struct_2_B90130297D7470CE value)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_B90130297D7470CE))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_IDENTIFIER_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_DESC_OFFSET))(this, value);
	}
};
