#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERAWORKDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1699F350)
#define RPG_GAMECORE_CHIMERAWORKDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1699F4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraWorkDisplayRow_TypeDefinitionIndex = 11823;

	class ChimeraWorkDisplayRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID WorkName; // 0x10
		::System::UInt32 DisplayID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraWorkDisplayRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraWorkDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKDISPLAYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
