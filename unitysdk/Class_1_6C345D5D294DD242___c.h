#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChatMessageData; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_6C345D5D294DD242___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF0E85D0)
#define CLASS_1_6C345D5D294DD242___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF0E8610)
#define CLASS_1_6C345D5D294DD242___C__GETPLAYERINDEX_B__18_0_OFFSET UNITYSDK_OFFSET(0xF0E87B0)
#define CLASS_1_6C345D5D294DD242___C___REFRESHCHATMESSAGEDATALIST_B__1_0_OFFSET UNITYSDK_OFFSET(0xF0E8620)
#define CLASS_1_6C345D5D294DD242___C___REFRESHCHATMESSAGEDATALIST_B__1_1_OFFSET UNITYSDK_OFFSET(0xF0E8660)

inline static constexpr unsigned int Class_1_6C345D5D294DD242___c_TypeDefinitionIndex = 61168;

class Class_1_6C345D5D294DD242___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::RPG::Client::ChatMessageData*>** StaticGet___9__1_1()
	{
		return (::System::Predicate_1<::RPG::Client::ChatMessageData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6C345D5D294DD242___c_TypeDefinitionIndex)->GetStaticField(0x24920);
	}
	static ::System::Comparison_1<::RPG::Client::ChatMessageData*>** StaticGet___9__1_0()
	{
		return (::System::Comparison_1<::RPG::Client::ChatMessageData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6C345D5D294DD242___c_TypeDefinitionIndex)->GetStaticField(0x24928);
	}
	static ::Class_1_6C345D5D294DD242___c** StaticGet___9()
	{
		return (::Class_1_6C345D5D294DD242___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6C345D5D294DD242___c_TypeDefinitionIndex)->GetStaticField(0x24930);
	}
	static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int64>>** StaticGet___9__18_0()
	{
		return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int64>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6C345D5D294DD242___c_TypeDefinitionIndex)->GetStaticField(0x24938);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6C345D5D294DD242___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C345D5D294DD242___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __RefreshChatMessageDataList_b__1_0(::RPG::Client::ChatMessageData* a, ::RPG::Client::ChatMessageData* b)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChatMessageData*, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_6C345D5D294DD242___C___REFRESHCHATMESSAGEDATALIST_B__1_0_OFFSET))(this, a, b);
	}

	::System::Boolean __RefreshChatMessageDataList_b__1_1(::RPG::Client::ChatMessageData* msg)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_6C345D5D294DD242___C___REFRESHCHATMESSAGEDATALIST_B__1_1_OFFSET))(this, msg);
	}

	::System::Int32 _GetPlayerIndex_b__18_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int64> a, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int64> b)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int64>, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int64>))((::PBYTE)hIl2Cpp + CLASS_1_6C345D5D294DD242___C__GETPLAYERINDEX_B__18_0_OFFSET))(this, a, b);
	}
};
