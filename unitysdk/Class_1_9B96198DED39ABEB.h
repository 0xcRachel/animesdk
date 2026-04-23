#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_21F7296E79A49D3E;
class Class_3_626F93E2306641CC;
class Class_3_C6C803F6D2DDE4D8;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9B96198DED39ABEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFFA0260)
#define CLASS_1_9B96198DED39ABEB_METHOD_1_335BA88F7978A80D_OFFSET UNITYSDK_OFFSET(0xFFA04C0)
#define CLASS_1_9B96198DED39ABEB_METHOD_1_98860D88EC1F8F43_OFFSET UNITYSDK_OFFSET(0xFFA02A0)
#define CLASS_1_9B96198DED39ABEB_METHOD_1_9E609753D60E4258_OFFSET UNITYSDK_OFFSET(0xFFA0CF0)
#define CLASS_1_9B96198DED39ABEB_METHOD_1_A94863B01245A433_OFFSET UNITYSDK_OFFSET(0xFFA07D0)
#define CLASS_1_9B96198DED39ABEB_METHOD_1_CB81EEE9CC7C2687_OFFSET UNITYSDK_OFFSET(0xFFA00B0)
#define CLASS_1_9B96198DED39ABEB_METHOD_1_DAE67D4DC8B67113_OFFSET UNITYSDK_OFFSET(0xFFA0980)
#define CLASS_1_9B96198DED39ABEB__CTOR_OFFSET UNITYSDK_OFFSET(0xFFA01C0)

inline static constexpr unsigned int Class_1_9B96198DED39ABEB_TypeDefinitionIndex = 71535;

class Class_1_9B96198DED39ABEB : public ::System::Object
{
public:
	::Class_3_626F93E2306641CC* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::CakeRace::CakeRaceEventType, ::System::Collections::Generic::List_1<::Class_1_21F7296E79A49D3E*>*>* Field_1_1; // 0x18

	::System::Void _ctor(::Class_3_626F93E2306641CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_9B96198DED39ABEB__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_9B96198DED39ABEB* Method_1_CB81EEE9CC7C2687(::Class_3_626F93E2306641CC* a1)
	{
		return ((::Class_1_9B96198DED39ABEB*(*)(::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_9B96198DED39ABEB_METHOD_1_CB81EEE9CC7C2687_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B96198DED39ABEB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_98860D88EC1F8F43(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9B96198DED39ABEB_METHOD_1_98860D88EC1F8F43_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_335BA88F7978A80D(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a1, ::Class_3_C6C803F6D2DDE4D8* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType, ::Class_3_C6C803F6D2DDE4D8*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9B96198DED39ABEB_METHOD_1_335BA88F7978A80D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A94863B01245A433(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a1, ::Class_3_C6C803F6D2DDE4D8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType, ::Class_3_C6C803F6D2DDE4D8*))((::PBYTE)hIl2Cpp + CLASS_1_9B96198DED39ABEB_METHOD_1_A94863B01245A433_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DAE67D4DC8B67113(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9B96198DED39ABEB_METHOD_1_DAE67D4DC8B67113_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_9E609753D60E4258(::Class_3_C6C803F6D2DDE4D8* a1)
	{
		return ((::System::Boolean(*)(::Class_3_C6C803F6D2DDE4D8*))((::PBYTE)hIl2Cpp + CLASS_1_9B96198DED39ABEB_METHOD_1_9E609753D60E4258_OFFSET))(a1);
	}
};
