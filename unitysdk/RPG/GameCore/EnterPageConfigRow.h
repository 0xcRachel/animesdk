#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ENTERPAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16A70850)
#define RPG_GAMECORE_ENTERPAGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16A70900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnterPageConfigRow_TypeDefinitionIndex = 12004;

	class EnterPageConfigRow : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERPAGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::EnterPageConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterPageConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERPAGECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
