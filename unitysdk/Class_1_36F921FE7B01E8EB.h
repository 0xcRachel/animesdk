#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsMessageSenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_DA5F2967E1AD1373;
namespace RPG::Client { class MessageContentBlock; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_36F921FE7B01E8EB_GET_BLOCKS_OFFSET UNITYSDK_OFFSET(0xF083E50)
#define CLASS_1_36F921FE7B01E8EB_GET_CONTENTBLOCK_OFFSET UNITYSDK_OFFSET(0xF083E30)
#define CLASS_1_36F921FE7B01E8EB_GET_ID_OFFSET UNITYSDK_OFFSET(0xF083E10)
#define CLASS_1_36F921FE7B01E8EB_GET_ISLASTMESSAGE_OFFSET UNITYSDK_OFFSET(0xF083E60)
#define CLASS_1_36F921FE7B01E8EB_GET_NEXTITEMIDS_OFFSET UNITYSDK_OFFSET(0xF083E70)
#define CLASS_1_36F921FE7B01E8EB_GET_SENDER_OFFSET UNITYSDK_OFFSET(0xF083E90)
#define CLASS_1_36F921FE7B01E8EB_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xF083EB0)
#define CLASS_1_36F921FE7B01E8EB_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xF083F20)
#define CLASS_1_36F921FE7B01E8EB_METHOD_1_3F2742B0A4846020_OFFSET UNITYSDK_OFFSET(0xF083DB0)
#define CLASS_1_36F921FE7B01E8EB_METHOD_1_6905B0491E7122CF_1_OFFSET UNITYSDK_OFFSET(0xF0841D0)
#define CLASS_1_36F921FE7B01E8EB_METHOD_1_6905B0491E7122CF_OFFSET UNITYSDK_OFFSET(0xF084080)
#define CLASS_1_36F921FE7B01E8EB_METHOD_1_7952C32242C5A7A5_OFFSET UNITYSDK_OFFSET(0xF083F80)
#define CLASS_1_36F921FE7B01E8EB_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xF083F70)
#define CLASS_1_36F921FE7B01E8EB_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xF083F10)
#define CLASS_1_36F921FE7B01E8EB_SET_CONTENTBLOCK_OFFSET UNITYSDK_OFFSET(0xF083E40)
#define CLASS_1_36F921FE7B01E8EB_SET_ID_OFFSET UNITYSDK_OFFSET(0xF083E20)
#define CLASS_1_36F921FE7B01E8EB_SET_NEXTITEMIDS_OFFSET UNITYSDK_OFFSET(0xF083E80)
#define CLASS_1_36F921FE7B01E8EB_SET_SENDER_OFFSET UNITYSDK_OFFSET(0xF083EA0)
#define CLASS_1_36F921FE7B01E8EB__CTOR_OFFSET UNITYSDK_OFFSET(0xF083CE0)

inline static constexpr unsigned int Class_1_36F921FE7B01E8EB_TypeDefinitionIndex = 68519;

class Class_1_36F921FE7B01E8EB : public ::System::Object
{
public:
	::RPG::Client::MessageContentBlock* _ContentBlock_k__BackingField; // 0x10
	::Il2CppArray<::System::UInt32>* _NextItemIDs_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::MessageContentBlock*>* _Blocks_k__BackingField; // 0x20
	::System::Boolean _IsLastMessage_k__BackingField; // 0x28
	::System::UInt32 _ID_k__BackingField; // 0x2C
	::RPG::GameCore::LimaoNewsMessageSenderType _Sender_k__BackingField; // 0x30

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_36F921FE7B01E8EB__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F921FE7B01E8EB_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_36F921FE7B01E8EB_SET_ID_OFFSET))(this, value);
	}

	::RPG::Client::MessageContentBlock* get_ContentBlock()
	{
		return ((::RPG::Client::MessageContentBlock*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F921FE7B01E8EB_GET_CONTENTBLOCK_OFFSET))(this);
	}

	::System::Void set_ContentBlock(::RPG::Client::MessageContentBlock* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + CLASS_1_36F921FE7B01E8EB_SET_CONTENTBLOCK_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::RPG::Client::MessageContentBlock*>* get_Blocks()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::MessageContentBlock*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F921FE7B01E8EB_GET_BLOCKS_OFFSET))(this);
	}

	::System::Boolean get_IsLastMessage()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F921FE7B01E8EB_GET_ISLASTMESSAGE_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* get_NextItemIDs()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F921FE7B01E8EB_GET_NEXTITEMIDS_OFFSET))(this);
	}

	::System::Void set_NextItemIDs(::Il2CppArray<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_36F921FE7B01E8EB_SET_NEXTITEMIDS_OFFSET))(this, value);
	}

	::RPG::GameCore::LimaoNewsMessageSenderType get_Sender()
	{
		return ((::RPG::GameCore::LimaoNewsMessageSenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F921FE7B01E8EB_GET_SENDER_OFFSET))(this);
	}

	::System::Void set_Sender(::RPG::GameCore::LimaoNewsMessageSenderType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LimaoNewsMessageSenderType))((::PBYTE)hIl2Cpp + CLASS_1_36F921FE7B01E8EB_SET_SENDER_OFFSET))(this, value);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F921FE7B01E8EB_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F921FE7B01E8EB_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F921FE7B01E8EB_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F921FE7B01E8EB_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_7952C32242C5A7A5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F921FE7B01E8EB_METHOD_1_7952C32242C5A7A5_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_6905B0491E7122CF()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F921FE7B01E8EB_METHOD_1_6905B0491E7122CF_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_6905B0491E7122CF_1()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F921FE7B01E8EB_METHOD_1_6905B0491E7122CF_1_OFFSET))(this);
	}

	::Class_1_DA5F2967E1AD1373* Method_1_3F2742B0A4846020()
	{
		return ((::Class_1_DA5F2967E1AD1373*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F921FE7B01E8EB_METHOD_1_3F2742B0A4846020_OFFSET))(this);
	}
};
