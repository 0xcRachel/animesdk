#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_EBD13AA6C54D68C4;
namespace RPG::Client { class HeartDialScriptInfo; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameLevelHeartDialNPCConfig; }
namespace RPG::GameCore { class LevelNPCInfoOverride; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AFDC282246B34CC6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x141717F0)
#define CLASS_1_AFDC282246B34CC6_GET_CURRENTSCRIPT_OFFSET UNITYSDK_OFFSET(0x141715A0)
#define CLASS_1_AFDC282246B34CC6_GET_EMOBLACKLIST_OFFSET UNITYSDK_OFFSET(0x141715C0)
#define CLASS_1_AFDC282246B34CC6_GET_NPCSERVERID_OFFSET UNITYSDK_OFFSET(0x14171580)
#define CLASS_1_AFDC282246B34CC6_METHOD_1_30F2CCF9AF2E250D_OFFSET UNITYSDK_OFFSET(0x141728C0)
#define CLASS_1_AFDC282246B34CC6_METHOD_1_37CF7377CBA6E635_OFFSET UNITYSDK_OFFSET(0x14171B00)
#define CLASS_1_AFDC282246B34CC6_METHOD_1_39F4A4A411885283_OFFSET UNITYSDK_OFFSET(0x14171E80)
#define CLASS_1_AFDC282246B34CC6_METHOD_1_3A6BA667BEB66A7B_OFFSET UNITYSDK_OFFSET(0x14172510)
#define CLASS_1_AFDC282246B34CC6_METHOD_1_3CD70A3F80BAB045_OFFSET UNITYSDK_OFFSET(0x14171F50)
#define CLASS_1_AFDC282246B34CC6_METHOD_1_765568A9798FAB5B_OFFSET UNITYSDK_OFFSET(0x14171E30)
#define CLASS_1_AFDC282246B34CC6_METHOD_1_7A708E07ACCF55CC_OFFSET UNITYSDK_OFFSET(0x14172910)
#define CLASS_1_AFDC282246B34CC6_METHOD_1_7BB9E3890718A48D_OFFSET UNITYSDK_OFFSET(0x14171630)
#define CLASS_1_AFDC282246B34CC6_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x14171940)
#define CLASS_1_AFDC282246B34CC6_METHOD_1_8BDE9AA6B337DB42_OFFSET UNITYSDK_OFFSET(0x14172490)
#define CLASS_1_AFDC282246B34CC6_METHOD_1_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0x14172760)
#define CLASS_1_AFDC282246B34CC6_METHOD_1_A51232E57FD58AD5_OFFSET UNITYSDK_OFFSET(0x141715F0)
#define CLASS_1_AFDC282246B34CC6_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x141715E0)
#define CLASS_1_AFDC282246B34CC6_METHOD_1_B37E1EEE95BB5119_OFFSET UNITYSDK_OFFSET(0x141719D0)
#define CLASS_1_AFDC282246B34CC6_METHOD_1_B9999439DB2F3546_OFFSET UNITYSDK_OFFSET(0x14172110)
#define CLASS_1_AFDC282246B34CC6_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14172AE0)
#define CLASS_1_AFDC282246B34CC6_METHOD_1_DEBACABDD653DD12_OFFSET UNITYSDK_OFFSET(0x14172340)
#define CLASS_1_AFDC282246B34CC6_METHOD_1_DFD8FD4BA7D3ACA8_OFFSET UNITYSDK_OFFSET(0x14172850)
#define CLASS_1_AFDC282246B34CC6_METHOD_1_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0x14172250)
#define CLASS_1_AFDC282246B34CC6_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x14172160)
#define CLASS_1_AFDC282246B34CC6_SET_CURRENTSCRIPT_OFFSET UNITYSDK_OFFSET(0x141715B0)
#define CLASS_1_AFDC282246B34CC6_SET_EMOBLACKLIST_OFFSET UNITYSDK_OFFSET(0x141715D0)
#define CLASS_1_AFDC282246B34CC6_SET_NPCSERVERID_OFFSET UNITYSDK_OFFSET(0x14171590)
#define CLASS_1_AFDC282246B34CC6__CTOR_OFFSET UNITYSDK_OFFSET(0x14171600)

inline static constexpr unsigned int Class_1_AFDC282246B34CC6_TypeDefinitionIndex = 61393;

class Class_1_AFDC282246B34CC6 : public ::System::Object
{
public:
	::Class_1_EBD13AA6C54D68C4* Field_1_0; // 0x10
	::RPG::Client::MapNpcDef* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::RPG::Client::HeartDialScriptInfo* _currentScript_k__BackingField; // 0x28
	::RPG::GameCore::GameLevelHeartDialNPCConfig* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>* _EmoBlackList_k__BackingField; // 0x38
	::System::Boolean Field_1_6; // 0x40
	::System::UInt32 _NpcServerID_k__BackingField; // 0x44
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_8; // 0x48

	::System::Void _ctor(::RPG::GameCore::GameLevelHeartDialNPCConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameLevelHeartDialNPCConfig*))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_NpcServerID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_GET_NPCSERVERID_OFFSET))(this);
	}

	::System::Void set_NpcServerID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_SET_NPCSERVERID_OFFSET))(this, a1);
	}

	::RPG::Client::HeartDialScriptInfo* get_currentScript()
	{
		return ((::RPG::Client::HeartDialScriptInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_GET_CURRENTSCRIPT_OFFSET))(this);
	}

	::System::Void set_currentScript(::RPG::Client::HeartDialScriptInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::HeartDialScriptInfo*))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_SET_CURRENTSCRIPT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>* get_EmoBlackList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_GET_EMOBLACKLIST_OFFSET))(this);
	}

	::System::Void set_EmoBlackList(::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>*))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_SET_EMOBLACKLIST_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::RPG::Client::MapNpcDef* Method_1_A51232E57FD58AD5()
	{
		return ((::RPG::Client::MapNpcDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_METHOD_1_A51232E57FD58AD5_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_B37E1EEE95BB5119(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_METHOD_1_B37E1EEE95BB5119_OFFSET))(this, a1);
	}

	::System::Void Method_1_765568A9798FAB5B(::RPG::Client::HeartDialScriptInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::HeartDialScriptInfo*))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_METHOD_1_765568A9798FAB5B_OFFSET))(this, a1);
	}

	::System::Void Method_1_39F4A4A411885283(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_METHOD_1_39F4A4A411885283_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::RPG::Client::MapNpcDef* Method_1_3CD70A3F80BAB045()
	{
		return ((::RPG::Client::MapNpcDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_METHOD_1_3CD70A3F80BAB045_OFFSET))(this);
	}

	::System::Void Method_1_B9999439DB2F3546()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_METHOD_1_B9999439DB2F3546_OFFSET))(this);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_1_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_METHOD_1_EAC2737A96E071C9_OFFSET))(this);
	}

	::System::Void Method_1_8BDE9AA6B337DB42(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_METHOD_1_8BDE9AA6B337DB42_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFD8FD4BA7D3ACA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_METHOD_1_DFD8FD4BA7D3ACA8_OFFSET))(this);
	}

	::System::Void Method_1_3A6BA667BEB66A7B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_METHOD_1_3A6BA667BEB66A7B_OFFSET))(this, a1);
	}

	::System::Void Method_1_9D455FE4693966A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_METHOD_1_9D455FE4693966A8_OFFSET))(this);
	}

	::RPG::GameCore::LevelNPCInfoOverride* Method_1_DEBACABDD653DD12(::RPG::Client::MapNpcDef* a1)
	{
		return ((::RPG::GameCore::LevelNPCInfoOverride*(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_METHOD_1_DEBACABDD653DD12_OFFSET))(this, a1);
	}

	::System::Void Method_1_7BB9E3890718A48D(::RPG::GameCore::GameLevelHeartDialNPCConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameLevelHeartDialNPCConfig*))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_METHOD_1_7BB9E3890718A48D_OFFSET))(this, a1);
	}

	::System::Void Method_1_30F2CCF9AF2E250D(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_METHOD_1_30F2CCF9AF2E250D_OFFSET))(this, a1);
	}

	::System::Void Method_1_37CF7377CBA6E635()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_METHOD_1_37CF7377CBA6E635_OFFSET))(this);
	}

	::System::Void Method_1_7A708E07ACCF55CC(::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>*))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_METHOD_1_7A708E07ACCF55CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFDC282246B34CC6_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
