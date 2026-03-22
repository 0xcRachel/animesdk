#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class AkRoom;
class AkRoomPortal;
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::GameCore { class AudioStateConfig; }
namespace RPG::GameCore { class DistrictAudioRTPCConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_59410279748A81B7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFF3E1E0)
#define CLASS_2_59410279748A81B7_GET_DISTRICTNAME_OFFSET UNITYSDK_OFFSET(0xFF40C20)
#define CLASS_2_59410279748A81B7_GET_ONCREATECONFIG_OFFSET UNITYSDK_OFFSET(0xFF40C40)
#define CLASS_2_59410279748A81B7_METHOD_2_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xFF3EFC0)
#define CLASS_2_59410279748A81B7_METHOD_2_141B090286D83EEA_OFFSET UNITYSDK_OFFSET(0xFF3FB20)
#define CLASS_2_59410279748A81B7_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xFF3E8B0)
#define CLASS_2_59410279748A81B7_METHOD_2_33A1B63C191027AF_OFFSET UNITYSDK_OFFSET(0xFF3E180)
#define CLASS_2_59410279748A81B7_METHOD_2_3AB4010736FA63A8_OFFSET UNITYSDK_OFFSET(0xFF3F640)
#define CLASS_2_59410279748A81B7_METHOD_2_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0xFF406A0)
#define CLASS_2_59410279748A81B7_METHOD_2_557CBF1730FC2E87_OFFSET UNITYSDK_OFFSET(0xFF3E250)
#define CLASS_2_59410279748A81B7_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0xFF404B0)
#define CLASS_2_59410279748A81B7_METHOD_2_692CFC772E906759_OFFSET UNITYSDK_OFFSET(0xFF3FAA0)
#define CLASS_2_59410279748A81B7_METHOD_2_8B9C60E6779B6FF4_OFFSET UNITYSDK_OFFSET(0xFF40C10)
#define CLASS_2_59410279748A81B7_METHOD_2_A293640863057580_OFFSET UNITYSDK_OFFSET(0xFF40450)
#define CLASS_2_59410279748A81B7_METHOD_2_A7C4A6FA5DA2B20C_OFFSET UNITYSDK_OFFSET(0xFF3EAA0)
#define CLASS_2_59410279748A81B7_METHOD_2_AE828D899505A3B4_OFFSET UNITYSDK_OFFSET(0xFF408E0)
#define CLASS_2_59410279748A81B7_METHOD_2_EB7282B6745B4611_OFFSET UNITYSDK_OFFSET(0xFF3F190)
#define CLASS_2_59410279748A81B7_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xFF40C00)
#define CLASS_2_59410279748A81B7_METHOD_2_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0xFF3EDB0)
#define CLASS_2_59410279748A81B7_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xFF3E950)
#define CLASS_2_59410279748A81B7_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xFF3F390)
#define CLASS_2_59410279748A81B7_SET_DISTRICTNAME_OFFSET UNITYSDK_OFFSET(0xFF40C30)
#define CLASS_2_59410279748A81B7_SET_ONCREATECONFIG_OFFSET UNITYSDK_OFFSET(0xFF40C50)
#define CLASS_2_59410279748A81B7_TICK_OFFSET UNITYSDK_OFFSET(0xFF3F3D0)
#define CLASS_2_59410279748A81B7__CTOR_OFFSET UNITYSDK_OFFSET(0xFF3E0D0)
#define CLASS_2_59410279748A81B7___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xFF40C60)

inline static constexpr unsigned int Class_2_59410279748A81B7_TypeDefinitionIndex = 45030;

class Class_2_59410279748A81B7 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::Client::MapDistrictDef* Field_2_7; // 0x18
	::System::String* _DistrictName_k__BackingField; // 0x20
	::AkRoom* Field_2_8; // 0x28
	::RPG::GameCore::GameEntity* Field_2_4; // 0x30
	::AkRoomPortal* Field_2_9; // 0x38
	::System::Collections::Generic::List_1<::System::Single>* Field_2_5; // 0x40
	::RPG::GameCore::TaskContext* Field_2_6; // 0x48
	::System::String* Field_2_2; // 0x50
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* _OnCreateConfig_k__BackingField; // 0x58
	::System::Single Field_2_10; // 0x60
	::System::Boolean Field_2_3; // 0x64
	::System::Single Field_2_11; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_33A1B63C191027AF(::RPG::Client::MapDistrictDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrictDef*))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7_METHOD_2_33A1B63C191027AF_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_141B090286D83EEA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7_METHOD_2_141B090286D83EEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_557CBF1730FC2E87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7_METHOD_2_557CBF1730FC2E87_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* Method_2_A293640863057580()
	{
		return ((::Il2CppArray<::RPG::GameCore::AudioStateConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7_METHOD_2_A293640863057580_OFFSET))(this);
	}

	::System::Void Method_2_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7_METHOD_2_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_2_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7_METHOD_2_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_2_AE828D899505A3B4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7_METHOD_2_AE828D899505A3B4_OFFSET))(this);
	}

	::System::Void Method_2_692CFC772E906759(::RPG::GameCore::DistrictAudioRTPCConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DistrictAudioRTPCConfig*))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7_METHOD_2_692CFC772E906759_OFFSET))(this, a1);
	}

	::System::Void Method_2_A7C4A6FA5DA2B20C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7_METHOD_2_A7C4A6FA5DA2B20C_OFFSET))(this);
	}

	::System::Void Method_2_EB7282B6745B4611()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7_METHOD_2_EB7282B6745B4611_OFFSET))(this);
	}

	::System::Void Method_2_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7_METHOD_2_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_2_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7_METHOD_2_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_2_3AB4010736FA63A8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7_METHOD_2_3AB4010736FA63A8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::Client::MapDistrictDef* Method_2_8B9C60E6779B6FF4()
	{
		return ((::RPG::Client::MapDistrictDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7_METHOD_2_8B9C60E6779B6FF4_OFFSET))(this);
	}

	::System::String* get_DistrictName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7_GET_DISTRICTNAME_OFFSET))(this);
	}

	::System::Void set_DistrictName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7_SET_DISTRICTNAME_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::GameCore::TaskConfig*>* get_OnCreateConfig()
	{
		return ((::Il2CppArray<::RPG::GameCore::TaskConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7_GET_ONCREATECONFIG_OFFSET))(this);
	}

	::System::Void set_OnCreateConfig(::Il2CppArray<::RPG::GameCore::TaskConfig*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7_SET_ONCREATECONFIG_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59410279748A81B7___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
