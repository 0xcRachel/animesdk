#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_344;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class MapEntityDef; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_53086B7ED462336C_GET_NEWMAPENTITIES_OFFSET UNITYSDK_OFFSET(0xCCD8BD0)
#define CLASS_1_53086B7ED462336C_GET_REMOVEDLOCALENTITIES_OFFSET UNITYSDK_OFFSET(0xCCD8BF0)
#define CLASS_1_53086B7ED462336C_GET_REMOVEDSERVERENTITIES_OFFSET UNITYSDK_OFFSET(0xCCD8BE0)
#define CLASS_1_53086B7ED462336C_METHOD_1_0E47EFD20438C011_OFFSET UNITYSDK_OFFSET(0xCCD8630)
#define CLASS_1_53086B7ED462336C_METHOD_1_18712DB3B1B723E8_OFFSET UNITYSDK_OFFSET(0xCCD7E90)
#define CLASS_1_53086B7ED462336C_METHOD_1_28D9E7A4B48A5364_OFFSET UNITYSDK_OFFSET(0xCCD8B20)
#define CLASS_1_53086B7ED462336C_METHOD_1_2B38081604F7A2F2_OFFSET UNITYSDK_OFFSET(0xCCD8A00)
#define CLASS_1_53086B7ED462336C_METHOD_1_34AB0387E935271C_OFFSET UNITYSDK_OFFSET(0xCCD8700)
#define CLASS_1_53086B7ED462336C_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xCCD8C00)
#define CLASS_1_53086B7ED462336C_METHOD_1_8C8A67573CEC8204_OFFSET UNITYSDK_OFFSET(0xCCD8A90)
#define CLASS_1_53086B7ED462336C_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0xCCD7D20)
#define CLASS_1_53086B7ED462336C_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0xCCD7FC0)
#define CLASS_1_53086B7ED462336C_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0xCCD8390)
#define CLASS_1_53086B7ED462336C_METHOD_1_CDCC06C4E7F19251_OFFSET UNITYSDK_OFFSET(0xCCD8020)
#define CLASS_1_53086B7ED462336C__CTOR_OFFSET UNITYSDK_OFFSET(0xCCD7C10)

inline static constexpr unsigned int Class_1_53086B7ED462336C_TypeDefinitionIndex = 57332;

class Class_1_53086B7ED462336C : public ::System::Object
{
public:
	::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>* _RemovedServerEntities_k__BackingField; // 0x10
	::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>* _RemovedLocalEntities_k__BackingField; // 0x18
	::Collections::Pooled::PooledList_1<::Class_0_16E4307DCC419505_344*>* Field_1_6; // 0x20
	::System::Action* Field_1_5; // 0x28
	::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>* _NewMapEntities_k__BackingField; // 0x30
	::System::Boolean Field_1_3; // 0x38
	::System::Boolean Field_1_4; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_METHOD_1_96A53A17AC5D0E93_OFFSET))(this);
	}

	::Class_1_53086B7ED462336C* Method_1_18712DB3B1B723E8()
	{
		return ((::Class_1_53086B7ED462336C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_METHOD_1_18712DB3B1B723E8_OFFSET))(this);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::System::Boolean Method_1_CDCC06C4E7F19251()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_METHOD_1_CDCC06C4E7F19251_OFFSET))(this);
	}

	::System::Void Method_1_0E47EFD20438C011(::RPG::Client::MapEntityDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_METHOD_1_0E47EFD20438C011_OFFSET))(this, a1);
	}

	::System::Void Method_1_34AB0387E935271C(::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_METHOD_1_34AB0387E935271C_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B38081604F7A2F2(::RPG::Client::MapEntityDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_METHOD_1_2B38081604F7A2F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C8A67573CEC8204(::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_METHOD_1_8C8A67573CEC8204_OFFSET))(this, a1);
	}

	::System::Void Method_1_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_METHOD_1_B06F516E4459C742_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* Method_1_28D9E7A4B48A5364()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_METHOD_1_28D9E7A4B48A5364_OFFSET))(this);
	}

	::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>* get_NewMapEntities()
	{
		return ((::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_GET_NEWMAPENTITIES_OFFSET))(this);
	}

	::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>* get_RemovedServerEntities()
	{
		return ((::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_GET_REMOVEDSERVERENTITIES_OFFSET))(this);
	}

	::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>* get_RemovedLocalEntities()
	{
		return ((::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_GET_REMOVEDLOCALENTITIES_OFFSET))(this);
	}

	::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_METHOD_1_83DA3EC57FF907F4_OFFSET))(this);
	}
};
