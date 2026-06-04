#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseContactEventSystem_1.h"

class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;

#define CLASS_2_AEACE4A11643D23F__CTOR_OFFSET UNITYSDK_OFFSET(0x169D92F0)
#define CLASS_2_AEACE4A11643D23F__UPDATENEWCONTACTPLAYERENTITIES_OFFSET UNITYSDK_OFFSET(0x169D93C0)
#define CLASS_2_AEACE4A11643D23F__UPDATEPREVCONTACTPLAYERENTITY_OFFSET UNITYSDK_OFFSET(0x169D96A0)
#define CLASS_2_AEACE4A11643D23F___IFIXBASEPROXY__UPDATENEWCONTACTPLAYERENTITIES_OFFSET UNITYSDK_OFFSET(0x169D99A0)
#define CLASS_2_AEACE4A11643D23F___IFIXBASEPROXY__UPDATEPREVCONTACTPLAYERENTITY_OFFSET UNITYSDK_OFFSET(0x169D99B0)

inline static constexpr unsigned int Class_2_AEACE4A11643D23F_TypeDefinitionIndex = 71599;

class Class_2_AEACE4A11643D23F : public ::RPG::Client::LittleGame::FiveDim::BaseContactEventSystem_1<::Class_2_B9E8C2EEAA5C96EC*>
{
public:
	::Class_3_1E4F9B0ED3BF21DE* Field_2_0; // 0x20
	::Class_1_B4357A1C72BABC6B* Field_2_1; // 0x28

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_2_AEACE4A11643D23F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _UpdateNewContactPlayerEntities()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEACE4A11643D23F__UPDATENEWCONTACTPLAYERENTITIES_OFFSET))(this);
	}

	::System::Void _UpdatePrevContactPlayerEntity(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AEACE4A11643D23F__UPDATEPREVCONTACTPLAYERENTITY_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__UpdateNewContactPlayerEntities()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEACE4A11643D23F___IFIXBASEPROXY__UPDATENEWCONTACTPLAYERENTITIES_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UpdatePrevContactPlayerEntity(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AEACE4A11643D23F___IFIXBASEPROXY__UPDATEPREVCONTACTPLAYERENTITY_OFFSET))(this, a1);
	}
};
