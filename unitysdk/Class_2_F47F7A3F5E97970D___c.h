#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9DD8A46984F1AFFD;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_F47F7A3F5E97970D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x161BD6C0)
#define CLASS_2_F47F7A3F5E97970D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x161BD6F0)
#define CLASS_2_F47F7A3F5E97970D___C___CTOR_B__163_0_OFFSET UNITYSDK_OFFSET(0x161BD700)
#define CLASS_2_F47F7A3F5E97970D___C___CTOR_B__163_1_OFFSET UNITYSDK_OFFSET(0x161BD730)

inline static constexpr unsigned int Class_2_F47F7A3F5E97970D___c_TypeDefinitionIndex = 31606;

class Class_2_F47F7A3F5E97970D___c : public ::System::Object
{
public:
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__163_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F47F7A3F5E97970D___c_TypeDefinitionIndex)->GetStaticField(0xA5D0);
	}
	static ::System::Func_1<::Class_2_9DD8A46984F1AFFD*>** StaticGet___9__163_1()
	{
		return (::System::Func_1<::Class_2_9DD8A46984F1AFFD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F47F7A3F5E97970D___c_TypeDefinitionIndex)->GetStaticField(0xA5D8);
	}
	static ::Class_2_F47F7A3F5E97970D___c** StaticGet___9()
	{
		return (::Class_2_F47F7A3F5E97970D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F47F7A3F5E97970D___c_TypeDefinitionIndex)->GetStaticField(0xA5E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F47F7A3F5E97970D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F47F7A3F5E97970D___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__163_0(::Entitas::IEntity* entity)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F47F7A3F5E97970D___C___CTOR_B__163_0_OFFSET))(this, entity);
	}

	::Class_2_9DD8A46984F1AFFD* __ctor_b__163_1()
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F47F7A3F5E97970D___C___CTOR_B__163_1_OFFSET))(this);
	}
};
