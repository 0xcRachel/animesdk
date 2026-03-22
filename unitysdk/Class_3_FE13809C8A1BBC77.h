#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::Client::LittleGame { template <typename T> class NavigationRequest_1; }
namespace RPG::GameCore { class ST_Main_ElfMoveToPosition; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_FE13809C8A1BBC77_DISPOSE_OFFSET UNITYSDK_OFFSET(0x105343D0)
#define CLASS_3_FE13809C8A1BBC77_METHOD_3_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x10534870)
#define CLASS_3_FE13809C8A1BBC77_METHOD_3_46DAD143CF78A79D_OFFSET UNITYSDK_OFFSET(0x10534910)
#define CLASS_3_FE13809C8A1BBC77_METHOD_3_672D56D99D734395_OFFSET UNITYSDK_OFFSET(0x105340A0)
#define CLASS_3_FE13809C8A1BBC77_METHOD_3_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x10534BC0)
#define CLASS_3_FE13809C8A1BBC77_METHOD_3_972DBDE8A873D51A_OFFSET UNITYSDK_OFFSET(0x10534410)
#define CLASS_3_FE13809C8A1BBC77_METHOD_3_BD5B14E333F744D7_OFFSET UNITYSDK_OFFSET(0x10533BF0)
#define CLASS_3_FE13809C8A1BBC77_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10533070)
#define CLASS_3_FE13809C8A1BBC77_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10533410)
#define CLASS_3_FE13809C8A1BBC77_TICK_OFFSET UNITYSDK_OFFSET(0x10533600)
#define CLASS_3_FE13809C8A1BBC77__CTOR_OFFSET UNITYSDK_OFFSET(0x10532FF0)
#define CLASS_3_FE13809C8A1BBC77___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10534C80)
#define CLASS_3_FE13809C8A1BBC77___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x10534C70)

inline static constexpr unsigned int Class_3_FE13809C8A1BBC77_TypeDefinitionIndex = 41137;

class Class_3_FE13809C8A1BBC77 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfMoveToPosition*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_5; // 0x28
	::RPG::Client::ElfRestaurantGameInstance* Field_3_4; // 0x30
	::RPG::Client::LittleGame::NavigationRequest_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* Field_3_6; // 0x38
	::System::Boolean Field_3_3; // 0x40
	::System::Single Field_3_0; // 0x44
	::System::Single Field_3_1; // 0x48
	::System::Single Field_3_2; // 0x4C
	::UnityEngine::Vector3 Field_3_7; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfMoveToPosition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfMoveToPosition*))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_3_BD5B14E333F744D7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77_METHOD_3_BD5B14E333F744D7_OFFSET))(this);
	}

	::System::Void Method_3_972DBDE8A873D51A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77_METHOD_3_972DBDE8A873D51A_OFFSET))(this, a1);
	}

	::System::Void Method_3_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77_METHOD_3_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_3_46DAD143CF78A79D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77_METHOD_3_46DAD143CF78A79D_OFFSET))(this, a1);
	}

	::System::Void Method_3_672D56D99D734395()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77_METHOD_3_672D56D99D734395_OFFSET))(this);
	}

	::System::Void Method_3_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77_METHOD_3_8B848E52913DFCE9_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
