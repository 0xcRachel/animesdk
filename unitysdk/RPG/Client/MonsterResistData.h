#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_781;
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class MonsterResistEntry; }
namespace RPG::GameCore { class MonsterRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONSTERRESISTDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x98B1150)
#define RPG_CLIENT_MONSTERRESISTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x98B10F0)
#define RPG_CLIENT_MONSTERRESISTDATA_GET_RESISTLIST_OFFSET UNITYSDK_OFFSET(0x98B1D00)
#define RPG_CLIENT_MONSTERRESISTDATA_SET_RESISTLIST_OFFSET UNITYSDK_OFFSET(0x98B1D10)
#define RPG_CLIENT_MONSTERRESISTDATA__CREATEDAMAGETYPERESISTDICT_OFFSET UNITYSDK_OFFSET(0x98B1980)
#define RPG_CLIENT_MONSTERRESISTDATA__CREATERESISTLIST_OFFSET UNITYSDK_OFFSET(0x98B1240)
#define RPG_CLIENT_MONSTERRESISTDATA__CREATESTATUSRESISTLIST_OFFSET UNITYSDK_OFFSET(0x98B17D0)
#define RPG_CLIENT_MONSTERRESISTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x98B1940)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterResistData_TypeDefinitionIndex = 57177;

	class MonsterResistData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_781*>* _ResistList_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonsterResistData* Create(::RPG::GameCore::MonsterRow* row)
		{
			return ((::RPG::Client::MonsterResistData*(*)(::RPG::GameCore::MonsterRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA_CREATE_OFFSET))(row);
		}

		static ::RPG::Client::MonsterResistData* Create_1(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* damageTypeResistance, ::Il2CppArray<::RPG::GameCore::MonsterResistEntry*>* debuffResist, ::Il2CppArray<::System::String*>* customValueTags)
		{
			return ((::RPG::Client::MonsterResistData*(*)(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*, ::Il2CppArray<::RPG::GameCore::MonsterResistEntry*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA_CREATE_1_OFFSET))(damageTypeResistance, debuffResist, customValueTags);
		}

		static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_781*>* _CreateResistList(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* damageTypeResistance, ::Il2CppArray<::System::String*>* customValueTags)
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_781*>*(*)(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA__CREATERESISTLIST_OFFSET))(damageTypeResistance, customValueTags);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::Class_0_16E4307DCC419505_781*>* _CreateDamageTypeResistDict(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* damageTypeResistance)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::Class_0_16E4307DCC419505_781*>*(*)(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA__CREATEDAMAGETYPERESISTDICT_OFFSET))(damageTypeResistance);
		}

		static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_781*>* _CreateStatusResistList(::Il2CppArray<::RPG::GameCore::MonsterResistEntry*>* debuffResist)
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_781*>*(*)(::Il2CppArray<::RPG::GameCore::MonsterResistEntry*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA__CREATESTATUSRESISTLIST_OFFSET))(debuffResist);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_781*>* get_ResistList()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_781*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA_GET_RESISTLIST_OFFSET))(this);
		}

		::System::Void set_ResistList(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_781*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_781*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA_SET_RESISTLIST_OFFSET))(this, value);
		}
	};
}
