#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8279B347C27440A1_METHOD_1_2BFB72D7A3D3B8CB_OFFSET UNITYSDK_OFFSET(0xFCCA050)
#define CLASS_1_8279B347C27440A1_METHOD_1_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0xFCCA220)
#define CLASS_1_8279B347C27440A1_METHOD_1_3FA3BEBE945D9197_OFFSET UNITYSDK_OFFSET(0xFCCA130)
#define CLASS_1_8279B347C27440A1_METHOD_1_40D99216E041EA36_OFFSET UNITYSDK_OFFSET(0xFCC9C00)
#define CLASS_1_8279B347C27440A1_METHOD_1_425AA12430920EA1_OFFSET UNITYSDK_OFFSET(0xFCC9F60)
#define CLASS_1_8279B347C27440A1_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xFCC9ED0)
#define CLASS_1_8279B347C27440A1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0xFCCA1C0)
#define CLASS_1_8279B347C27440A1_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0xFCC97E0)
#define CLASS_1_8279B347C27440A1_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0xFCC9A40)
#define CLASS_1_8279B347C27440A1__CCTOR_OFFSET UNITYSDK_OFFSET(0xFCCA3C0)
#define CLASS_1_8279B347C27440A1__CTOR_OFFSET UNITYSDK_OFFSET(0xFCCA2F0)

inline static constexpr unsigned int Class_1_8279B347C27440A1_TypeDefinitionIndex = 67452;

class Class_1_8279B347C27440A1 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8279B347C27440A1_TypeDefinitionIndex)->GetStaticField(0x10BD0);
	}
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_2; // 0x10
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_1_3; // 0x18
	::RPG::GameCore::GameWorld* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8279B347C27440A1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8279B347C27440A1__CCTOR_OFFSET))();
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_8279B347C27440A1_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8279B347C27440A1_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_40D99216E041EA36(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraConfig* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_8279B347C27440A1_METHOD_1_40D99216E041EA36_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8279B347C27440A1_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_425AA12430920EA1(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8279B347C27440A1_METHOD_1_425AA12430920EA1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2BFB72D7A3D3B8CB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8279B347C27440A1_METHOD_1_2BFB72D7A3D3B8CB_OFFSET))(this, a1);
	}

	::System::Void Method_1_3FA3BEBE945D9197(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_1_8279B347C27440A1_METHOD_1_3FA3BEBE945D9197_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8279B347C27440A1_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_32B2368221A04800(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8279B347C27440A1_METHOD_1_32B2368221A04800_OFFSET))(this, a1);
	}
};
