#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class AkPositionArray;
class AkRoom;
class AkRoomPortal;
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::GameCore { class AudioStateConfig; }
namespace RPG::GameCore { class DistrictAudioRTPCConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_753538C3072BF388_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C23230)
#define CLASS_2_753538C3072BF388_GET_DISTRICTNAME_OFFSET UNITYSDK_OFFSET(0x13C25DB0)
#define CLASS_2_753538C3072BF388_GET_ONCREATECONFIG_OFFSET UNITYSDK_OFFSET(0x13C25DD0)
#define CLASS_2_753538C3072BF388_METHOD_2_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x13C23FD0)
#define CLASS_2_753538C3072BF388_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x13C254F0)
#define CLASS_2_753538C3072BF388_METHOD_2_141B090286D83EEA_OFFSET UNITYSDK_OFFSET(0x13C24C30)
#define CLASS_2_753538C3072BF388_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x13C238D0)
#define CLASS_2_753538C3072BF388_METHOD_2_3AB4010736FA63A8_OFFSET UNITYSDK_OFFSET(0x13C24760)
#define CLASS_2_753538C3072BF388_METHOD_2_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x13C25820)
#define CLASS_2_753538C3072BF388_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x13C25630)
#define CLASS_2_753538C3072BF388_METHOD_2_5DDA518B69F3EEC6_OFFSET UNITYSDK_OFFSET(0x13C231D0)
#define CLASS_2_753538C3072BF388_METHOD_2_64CADF889BAAC3DD_OFFSET UNITYSDK_OFFSET(0x13C232A0)
#define CLASS_2_753538C3072BF388_METHOD_2_692CFC772E906759_OFFSET UNITYSDK_OFFSET(0x13C24BB0)
#define CLASS_2_753538C3072BF388_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x13C24460)
#define CLASS_2_753538C3072BF388_METHOD_2_8B9C60E6779B6FF4_OFFSET UNITYSDK_OFFSET(0x13C25DA0)
#define CLASS_2_753538C3072BF388_METHOD_2_A293640863057580_OFFSET UNITYSDK_OFFSET(0x13C255D0)
#define CLASS_2_753538C3072BF388_METHOD_2_A7C4A6FA5DA2B20C_OFFSET UNITYSDK_OFFSET(0x13C23AC0)
#define CLASS_2_753538C3072BF388_METHOD_2_AE828D899505A3B4_OFFSET UNITYSDK_OFFSET(0x13C25A70)
#define CLASS_2_753538C3072BF388_METHOD_2_C83B2479936B63C3_OFFSET UNITYSDK_OFFSET(0x13C241A0)
#define CLASS_2_753538C3072BF388_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13C25D90)
#define CLASS_2_753538C3072BF388_METHOD_2_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x13C23DC0)
#define CLASS_2_753538C3072BF388_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x13C23970)
#define CLASS_2_753538C3072BF388_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x13C243A0)
#define CLASS_2_753538C3072BF388_SET_DISTRICTNAME_OFFSET UNITYSDK_OFFSET(0x13C25DC0)
#define CLASS_2_753538C3072BF388_SET_ONCREATECONFIG_OFFSET UNITYSDK_OFFSET(0x13C25DE0)
#define CLASS_2_753538C3072BF388_TICK_OFFSET UNITYSDK_OFFSET(0x13C24500)
#define CLASS_2_753538C3072BF388__CTOR_OFFSET UNITYSDK_OFFSET(0x13C231C0)
#define CLASS_2_753538C3072BF388___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x13C25DF0)

inline static constexpr unsigned int Class_2_753538C3072BF388_TypeDefinitionIndex = 53461;

class Class_2_753538C3072BF388 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x18
	::RPG::Client::MapDistrictDef* Field_2_1; // 0x20
	::AkPositionArray* Field_2_2; // 0x28
	::AkRoomPortal* Field_2_3; // 0x30
	::AkRoom* Field_2_4; // 0x38
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* _OnCreateConfig_k__BackingField; // 0x40
	::System::Collections::Generic::List_1<::System::Single>* Field_2_6; // 0x48
	::System::String* _DistrictName_k__BackingField; // 0x50
	::System::Single Field_2_8; // 0x58
	::System::Boolean Field_2_9; // 0x5C
	::System::Single Field_2_10; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5DDA518B69F3EEC6(::RPG::Client::MapDistrictDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrictDef*))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_5DDA518B69F3EEC6_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_141B090286D83EEA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_141B090286D83EEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_64CADF889BAAC3DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_64CADF889BAAC3DD_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* Method_2_A293640863057580()
	{
		return ((::Il2CppArray<::RPG::GameCore::AudioStateConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_A293640863057580_OFFSET))(this);
	}

	::System::Void Method_2_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_2_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_2_AE828D899505A3B4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_AE828D899505A3B4_OFFSET))(this);
	}

	::System::Void Method_2_692CFC772E906759(::RPG::GameCore::DistrictAudioRTPCConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DistrictAudioRTPCConfig*))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_692CFC772E906759_OFFSET))(this, a1);
	}

	::System::Void Method_2_A7C4A6FA5DA2B20C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_A7C4A6FA5DA2B20C_OFFSET))(this);
	}

	::System::Void Method_2_C83B2479936B63C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_C83B2479936B63C3_OFFSET))(this);
	}

	::System::Void Method_2_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_2_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_2_3AB4010736FA63A8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_3AB4010736FA63A8_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::Client::MapDistrictDef* Method_2_8B9C60E6779B6FF4()
	{
		return ((::RPG::Client::MapDistrictDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_8B9C60E6779B6FF4_OFFSET))(this);
	}

	::System::String* get_DistrictName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_GET_DISTRICTNAME_OFFSET))(this);
	}

	::System::Void set_DistrictName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_SET_DISTRICTNAME_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::TaskConfig*>* get_OnCreateConfig()
	{
		return ((::Il2CppArray<::RPG::GameCore::TaskConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_GET_ONCREATECONFIG_OFFSET))(this);
	}

	::System::Void set_OnCreateConfig(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_SET_ONCREATECONFIG_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
