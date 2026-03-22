#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7719342A69F338F3;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_DICECOMBATOUTOFBATTLEDICEMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x903D600)
#define RPG_CLIENT_DICECOMBATOUTOFBATTLEDICEMODEL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x90501B0)
#define RPG_CLIENT_DICECOMBATOUTOFBATTLEDICEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x9050170)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatOutOfBattleDiceModel_TypeDefinitionIndex = 50475;

	class DiceCombatOutOfBattleDiceModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_7719342A69F338F3*>* _Faces; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATOUTOFBATTLEDICEMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombatOutOfBattleDiceModel* Create(::System::UInt32 diceID, ::UnityEngine::Transform* trans)
		{
			return ((::RPG::Client::DiceCombatOutOfBattleDiceModel*(*)(::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATOUTOFBATTLEDICEMODEL_CREATE_OFFSET))(diceID, trans);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATOUTOFBATTLEDICEMODEL_ONDESTROY_OFFSET))(this);
		}
	};
}
