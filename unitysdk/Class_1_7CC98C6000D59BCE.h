#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PamChatQuickFunctionType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PamChatQuickFunctionConfigRow; }
namespace System { class String; }

#define CLASS_1_7CC98C6000D59BCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x89CB320)
#define CLASS_1_7CC98C6000D59BCE_GET_SENDTEXT_OFFSET UNITYSDK_OFFSET(0x89CB340)
#define CLASS_1_7CC98C6000D59BCE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x89CB300)
#define CLASS_1_7CC98C6000D59BCE_METHOD_1_4836F6CEA0EAF731_OFFSET UNITYSDK_OFFSET(0x89CB360)
#define CLASS_1_7CC98C6000D59BCE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x89CB330)
#define CLASS_1_7CC98C6000D59BCE_SET_SENDTEXT_OFFSET UNITYSDK_OFFSET(0x89CB350)
#define CLASS_1_7CC98C6000D59BCE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x89CB310)
#define CLASS_1_7CC98C6000D59BCE__CTOR_OFFSET UNITYSDK_OFFSET(0x89CB2D0)

inline static constexpr unsigned int Class_1_7CC98C6000D59BCE_TypeDefinitionIndex = 50226;

class Class_1_7CC98C6000D59BCE : public ::System::Object
{
public:
	::RPG::Client::TextID _Name_k__BackingField; // 0x10
	::RPG::Client::TextID _SendText_k__BackingField; // 0x20
	::RPG::Client::PamChatQuickFunctionType _Type_k__BackingField; // 0x30

	::System::Void _ctor(::RPG::GameCore::PamChatQuickFunctionConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PamChatQuickFunctionConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_7CC98C6000D59BCE__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::PamChatQuickFunctionType get_Type()
	{
		return ((::RPG::Client::PamChatQuickFunctionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CC98C6000D59BCE_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::Client::PamChatQuickFunctionType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatQuickFunctionType))((::PBYTE)hIl2Cpp + CLASS_1_7CC98C6000D59BCE_SET_TYPE_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CC98C6000D59BCE_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_7CC98C6000D59BCE_SET_NAME_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_SendText()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CC98C6000D59BCE_GET_SENDTEXT_OFFSET))(this);
	}

	::System::Void set_SendText(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_7CC98C6000D59BCE_SET_SENDTEXT_OFFSET))(this, value);
	}

	static ::System::String* Method_1_4836F6CEA0EAF731(::RPG::Client::PamChatQuickFunctionType a1)
	{
		return ((::System::String*(*)(::RPG::Client::PamChatQuickFunctionType))((::PBYTE)hIl2Cpp + CLASS_1_7CC98C6000D59BCE_METHOD_1_4836F6CEA0EAF731_OFFSET))(a1);
	}
};
