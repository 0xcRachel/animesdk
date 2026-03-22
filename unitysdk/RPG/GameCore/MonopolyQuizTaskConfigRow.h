#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16CD2400)
#define RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD2A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyQuizTaskConfigRow_TypeDefinitionIndex = 10975;

	class MonopolyQuizTaskConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PriorityPlayerIDList; // 0x10
		::System::UInt32 QuizTaskID; // 0x18
		::RPG::Client::TextID TaskDesc; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonopolyQuizTaskConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyQuizTaskConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
