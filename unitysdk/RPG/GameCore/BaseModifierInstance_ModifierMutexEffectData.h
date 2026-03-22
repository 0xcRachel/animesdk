#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EffectMutexType.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_GAMECORE_BASEMODIFIERINSTANCE_MODIFIERMUTEXEFFECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA34D630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseModifierInstance_ModifierMutexEffectData_TypeDefinitionIndex = 42463;

	class BaseModifierInstance_ModifierMutexEffectData : public ::System::Object
	{
	public:
		::System::String* DynamicAttach; // 0x10
		::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* Flag; // 0x18
		::System::String* EffectPath; // 0x20
		::RPG::GameCore::EffectMutexType MutexType; // 0x28
		::System::Single MinMutexTime; // 0x2C
		::System::Int32 MaxMutexCount; // 0x30
		::RPG::MVector3 PositionOffset; // 0x34

		::System::Void _ctor(::System::String* sEffectPath, ::System::String* sDynamicAttach, ::RPG::MVector3 vPositionOffset, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* pFlag, ::RPG::GameCore::EffectMutexType pMutexType, ::System::Single fMinMutexTime, ::System::Int32 iMaxMutexCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::MVector3, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*, ::RPG::GameCore::EffectMutexType, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_MODIFIERMUTEXEFFECTDATA__CTOR_OFFSET))(this, sEffectPath, sDynamicAttach, vPositionOffset, pFlag, pMutexType, fMinMutexTime, iMaxMutexCount);
		}
	};
}
