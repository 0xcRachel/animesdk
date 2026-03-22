#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LOADINGWORLDIMAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16BD81E0)
#define RPG_GAMECORE_LOADINGWORLDIMAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16BD87D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadingWorldImageRow_TypeDefinitionIndex = 12706;

	class LoadingWorldImageRow : public ::System::Object
	{
	public:
		::System::String* EffectContainer; // 0x10
		::System::String* PamuPrefabName; // 0x18
		::System::String* ImagePath; // 0x20
		::System::UInt32 WorldID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGWORLDIMAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LoadingWorldImageRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoadingWorldImageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGWORLDIMAGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
