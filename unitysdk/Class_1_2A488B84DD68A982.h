#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2A488B84DD68A982_Struct_2_2AB2652083820705.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_37D832480CB327E1;
class Class_2_9DD8A46984F1AFFD;
class Class_2_F47F7A3F5E97970D;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_2A488B84DD68A982_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10E2DB40)
#define CLASS_1_2A488B84DD68A982_METHOD_1_0BFF90D70CE23148_1_OFFSET UNITYSDK_OFFSET(0x10E30B10)
#define CLASS_1_2A488B84DD68A982_METHOD_1_0BFF90D70CE23148_OFFSET UNITYSDK_OFFSET(0x10E30810)
#define CLASS_1_2A488B84DD68A982_METHOD_1_112E16C9E5D22E4D_OFFSET UNITYSDK_OFFSET(0x10E2E130)
#define CLASS_1_2A488B84DD68A982_METHOD_1_18A7BF8B592973BC_OFFSET UNITYSDK_OFFSET(0x10E300D0)
#define CLASS_1_2A488B84DD68A982_METHOD_1_2B4537F30AAE252B_OFFSET UNITYSDK_OFFSET(0x10E2DC40)
#define CLASS_1_2A488B84DD68A982_METHOD_1_3D6BB57D656BFCA1_OFFSET UNITYSDK_OFFSET(0x10E2E040)
#define CLASS_1_2A488B84DD68A982_METHOD_1_41A891CB95D6C306_OFFSET UNITYSDK_OFFSET(0x10E2F850)
#define CLASS_1_2A488B84DD68A982_METHOD_1_420D0F4EA7E183CD_OFFSET UNITYSDK_OFFSET(0x10E2F210)
#define CLASS_1_2A488B84DD68A982_METHOD_1_4F1A9E39CBA40EF5_OFFSET UNITYSDK_OFFSET(0x10E2DF20)
#define CLASS_1_2A488B84DD68A982_METHOD_1_4F30F611993DFFDF_OFFSET UNITYSDK_OFFSET(0x10E2F440)
#define CLASS_1_2A488B84DD68A982_METHOD_1_6B4ECDC9C9B21298_OFFSET UNITYSDK_OFFSET(0x10E2E850)
#define CLASS_1_2A488B84DD68A982_METHOD_1_7E08EFCEB28F37EA_OFFSET UNITYSDK_OFFSET(0x10E2DEB0)
#define CLASS_1_2A488B84DD68A982_METHOD_1_8C77CC5EC838CD07_OFFSET UNITYSDK_OFFSET(0x10E2FE70)
#define CLASS_1_2A488B84DD68A982_METHOD_1_9F29B0C379622937_OFFSET UNITYSDK_OFFSET(0x10E2F7D0)
#define CLASS_1_2A488B84DD68A982_METHOD_1_B37E1EEE95BB5119_OFFSET UNITYSDK_OFFSET(0x10E306D0)
#define CLASS_1_2A488B84DD68A982_METHOD_1_C87395D4215ED771_1_OFFSET UNITYSDK_OFFSET(0x10E304B0)
#define CLASS_1_2A488B84DD68A982_METHOD_1_C87395D4215ED771_OFFSET UNITYSDK_OFFSET(0x10E2FC50)
#define CLASS_1_2A488B84DD68A982_METHOD_1_E41AA5DD98E305B9_OFFSET UNITYSDK_OFFSET(0x10E2F9D0)
#define CLASS_1_2A488B84DD68A982_METHOD_1_F5A8FCABBA1240A5_OFFSET UNITYSDK_OFFSET(0x10E30260)
#define CLASS_1_2A488B84DD68A982__CTOR_OFFSET UNITYSDK_OFFSET(0x10E2DA70)

inline static constexpr unsigned int Class_1_2A488B84DD68A982_TypeDefinitionIndex = 60600;

class Class_1_2A488B84DD68A982 : public ::System::Object
{
public:
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x10
	::Class_1_2A488B84DD68A982_Struct_2_2AB2652083820705 Field_1_2; // 0x18
	::Class_2_F47F7A3F5E97970D* Field_1_0; // 0x20

	::System::Void _ctor(::Class_2_F47F7A3F5E97970D* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F47F7A3F5E97970D*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_2A488B84DD68A982__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A488B84DD68A982_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_2B4537F30AAE252B(::System::UInt32 a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2A488B84DD68A982_METHOD_1_2B4537F30AAE252B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7E08EFCEB28F37EA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2A488B84DD68A982_METHOD_1_7E08EFCEB28F37EA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_112E16C9E5D22E4D(::Class_2_9DD8A46984F1AFFD* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_2A488B84DD68A982_METHOD_1_112E16C9E5D22E4D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6B4ECDC9C9B21298(::Class_2_9DD8A46984F1AFFD* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2A488B84DD68A982_METHOD_1_6B4ECDC9C9B21298_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4F30F611993DFFDF(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_2A488B84DD68A982_METHOD_1_4F30F611993DFFDF_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F29B0C379622937(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_2A488B84DD68A982_METHOD_1_9F29B0C379622937_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A891CB95D6C306(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2A488B84DD68A982_METHOD_1_41A891CB95D6C306_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_1_4F1A9E39CBA40EF5(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_2A488B84DD68A982_METHOD_1_4F1A9E39CBA40EF5_OFFSET))(this, a1);
	}

	::Class_2_37D832480CB327E1* Method_1_3D6BB57D656BFCA1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_2_37D832480CB327E1*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2A488B84DD68A982_METHOD_1_3D6BB57D656BFCA1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E41AA5DD98E305B9(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_2A488B84DD68A982_METHOD_1_E41AA5DD98E305B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C77CC5EC838CD07(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2A488B84DD68A982_METHOD_1_8C77CC5EC838CD07_OFFSET))(this, a1);
	}

	::System::Void Method_1_18A7BF8B592973BC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2A488B84DD68A982_METHOD_1_18A7BF8B592973BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5A8FCABBA1240A5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2A488B84DD68A982_METHOD_1_F5A8FCABBA1240A5_OFFSET))(this, a1);
	}

	::System::Void Method_1_B37E1EEE95BB5119(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2A488B84DD68A982_METHOD_1_B37E1EEE95BB5119_OFFSET))(this, a1);
	}

	::System::Void Method_1_420D0F4EA7E183CD(::Class_2_9DD8A46984F1AFFD* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2A488B84DD68A982_METHOD_1_420D0F4EA7E183CD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C87395D4215ED771(::Class_2_9DD8A46984F1AFFD* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2A488B84DD68A982_METHOD_1_C87395D4215ED771_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C87395D4215ED771_1(::Class_2_9DD8A46984F1AFFD* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2A488B84DD68A982_METHOD_1_C87395D4215ED771_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0BFF90D70CE23148(::Class_2_9DD8A46984F1AFFD* a1, ::Class_2_9DD8A46984F1AFFD* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_2_9DD8A46984F1AFFD*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2A488B84DD68A982_METHOD_1_0BFF90D70CE23148_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0BFF90D70CE23148_1(::Class_2_9DD8A46984F1AFFD* a1, ::Class_2_9DD8A46984F1AFFD* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_2_9DD8A46984F1AFFD*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2A488B84DD68A982_METHOD_1_0BFF90D70CE23148_1_OFFSET))(this, a1, a2, a3);
	}
};
