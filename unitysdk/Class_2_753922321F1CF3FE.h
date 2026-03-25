#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseContactEventSystem_1.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;

#define CLASS_2_753922321F1CF3FE__CTOR_OFFSET UNITYSDK_OFFSET(0x8AB6930)
#define CLASS_2_753922321F1CF3FE__UPDATENEWCONTACTPLAYERENTITIES_OFFSET UNITYSDK_OFFSET(0x8AB69E0)
#define CLASS_2_753922321F1CF3FE__UPDATEPREVCONTACTPLAYERENTITY_OFFSET UNITYSDK_OFFSET(0x8AB6E20)
#define CLASS_2_753922321F1CF3FE___IFIXBASEPROXY__UPDATENEWCONTACTPLAYERENTITIES_OFFSET UNITYSDK_OFFSET(0x8AB7280)
#define CLASS_2_753922321F1CF3FE___IFIXBASEPROXY__UPDATEPREVCONTACTPLAYERENTITY_OFFSET UNITYSDK_OFFSET(0x8AB7290)

inline static constexpr unsigned int Class_2_753922321F1CF3FE_TypeDefinitionIndex = 62760;

class Class_2_753922321F1CF3FE : public ::RPG::Client::LittleGame::FiveDim::BaseContactEventSystem_1<::Class_2_9DD8A46984F1AFFD*>
{
public:
	::Class_3_1A92845FAFA5EC77* Field_2_1; // 0x20
	::Class_1_24C2E7EF22229C6A* Field_2_0; // 0x28

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_2_753922321F1CF3FE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _UpdateNewContactPlayerEntities()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753922321F1CF3FE__UPDATENEWCONTACTPLAYERENTITIES_OFFSET))(this);
	}

	::System::Void _UpdatePrevContactPlayerEntity(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_753922321F1CF3FE__UPDATEPREVCONTACTPLAYERENTITY_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__UpdateNewContactPlayerEntities()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753922321F1CF3FE___IFIXBASEPROXY__UPDATENEWCONTACTPLAYERENTITIES_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UpdatePrevContactPlayerEntity(::System::Int32 P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_753922321F1CF3FE___IFIXBASEPROXY__UPDATEPREVCONTACTPLAYERENTITY_OFFSET))(this, P0);
	}
};
