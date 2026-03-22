#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MessageItemType.h"
#include "unitysdk/RPG/GameCore/SenderType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MESSAGEITEMROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x16C84500)
#define RPG_GAMECORE_MESSAGEITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C84880)
#define RPG_GAMECORE_MESSAGEITEMROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x16C86920)
#define RPG_GAMECORE_MESSAGEITEMROW_GET_CANBESENT_OFFSET UNITYSDK_OFFSET(0x16C869D0)
#define RPG_GAMECORE_MESSAGEITEMROW_GET_ISEND_OFFSET UNITYSDK_OFFSET(0x16C869B0)
#define RPG_GAMECORE_MESSAGEITEMROW_RESET_OFFSET UNITYSDK_OFFSET(0x16C86980)
#define RPG_GAMECORE_MESSAGEITEMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16C869A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageItemRow_TypeDefinitionIndex = 13127;

	class MessageItemRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NextItemIDList; // 0x10
		::System::UInt32 ID; // 0x18
		::RPG::GameCore::MessageItemType ItemType; // 0x1C
		::RPG::Client::TextID OptionText; // 0x20
		::RPG::Client::TextID MainText; // 0x30
		::System::UInt32 SectionID; // 0x40
		::System::UInt32 ContactsID; // 0x44
		::RPG::GameCore::SenderType Sender; // 0x48
		::System::UInt32 ItemContentID; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MessageItemRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MessageItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MessageItemRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MessageItemRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMROW_FROMBINARY_OFFSET))(array, val);
		}

		::System::Boolean get_IsEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMROW_GET_ISEND_OFFSET))(this);
		}

		::System::Boolean get_CanBeSent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMROW_GET_CANBESENT_OFFSET))(this);
		}
	};
}
