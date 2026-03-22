#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/TimeRewindView.h"

class Class_0_16E4307DCC419505_347;
class Class_1_D63DE2EC2835DB62;
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_535093A1636E616D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2D3C00)
#define CLASS_2_535093A1636E616D_METHOD_2_2195E49F2E39FE27_OFFSET UNITYSDK_OFFSET(0xB2D3EE0)
#define CLASS_2_535093A1636E616D_METHOD_2_307F2A71BD13D1FE_OFFSET UNITYSDK_OFFSET(0xB2D3A80)
#define CLASS_2_535093A1636E616D_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0xB2D4210)
#define CLASS_2_535093A1636E616D_METHOD_2_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0xB2D40F0)
#define CLASS_2_535093A1636E616D_METHOD_2_B8D62B19020E5EA4_OFFSET UNITYSDK_OFFSET(0xB2D4150)
#define CLASS_2_535093A1636E616D_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xB2D3D50)
#define CLASS_2_535093A1636E616D_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xB2D3E00)
#define CLASS_2_535093A1636E616D_TICK_OFFSET UNITYSDK_OFFSET(0xB2D3E70)
#define CLASS_2_535093A1636E616D__CTOR_OFFSET UNITYSDK_OFFSET(0xB2D42F0)
#define CLASS_2_535093A1636E616D___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xB2D4300)

inline static constexpr unsigned int Class_2_535093A1636E616D_TypeDefinitionIndex = 45246;

class Class_2_535093A1636E616D : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::EntityTimeRewindComponent* Field_2_2; // 0x18
	::Class_1_D63DE2EC2835DB62* Field_2_1; // 0x20
	::RPG::GameCore::TimeRewindView Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_535093A1636E616D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_307F2A71BD13D1FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_535093A1636E616D_METHOD_2_307F2A71BD13D1FE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_535093A1636E616D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_535093A1636E616D_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_535093A1636E616D_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_535093A1636E616D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_2195E49F2E39FE27(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_535093A1636E616D_METHOD_2_2195E49F2E39FE27_OFFSET))(this, a1);
	}

	::System::Void Method_2_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_535093A1636E616D_METHOD_2_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_2_B8D62B19020E5EA4(::RPG::GameCore::TimeRewindView a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindView))((::PBYTE)hIl2Cpp + CLASS_2_535093A1636E616D_METHOD_2_B8D62B19020E5EA4_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_535093A1636E616D_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_535093A1636E616D___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
