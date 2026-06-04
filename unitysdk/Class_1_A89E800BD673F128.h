#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_507;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterAnimZone; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A89E800BD673F128_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17707510)
#define CLASS_1_A89E800BD673F128_GET_CHARACTERANIMZONEREF_OFFSET UNITYSDK_OFFSET(0x17708FE0)
#define CLASS_1_A89E800BD673F128_GET_CURRENTLOGICSTATETYPE_OFFSET UNITYSDK_OFFSET(0x17709000)
#define CLASS_1_A89E800BD673F128_GET_HASMOVESINCETELEPORT_OFFSET UNITYSDK_OFFSET(0x17709020)
#define CLASS_1_A89E800BD673F128_METHOD_1_07BB45288DFF8852_OFFSET UNITYSDK_OFFSET(0x17708D40)
#define CLASS_1_A89E800BD673F128_METHOD_1_0A99B4412D79936D_OFFSET UNITYSDK_OFFSET(0x17708770)
#define CLASS_1_A89E800BD673F128_METHOD_1_11D5322717FDFD9D_OFFSET UNITYSDK_OFFSET(0x177069D0)
#define CLASS_1_A89E800BD673F128_METHOD_1_132F118CDF0E4ABA_OFFSET UNITYSDK_OFFSET(0x17707560)
#define CLASS_1_A89E800BD673F128_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x17708510)
#define CLASS_1_A89E800BD673F128_METHOD_1_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x17708B60)
#define CLASS_1_A89E800BD673F128_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17708BD0)
#define CLASS_1_A89E800BD673F128_METHOD_1_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0x177088C0)
#define CLASS_1_A89E800BD673F128_METHOD_1_387EA1BE4F9FC1D2_OFFSET UNITYSDK_OFFSET(0x17708DA0)
#define CLASS_1_A89E800BD673F128_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17708B10)
#define CLASS_1_A89E800BD673F128_METHOD_1_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0x177089C0)
#define CLASS_1_A89E800BD673F128_METHOD_1_672E3DECEBB4A051_OFFSET UNITYSDK_OFFSET(0x17708C50)
#define CLASS_1_A89E800BD673F128_METHOD_1_8B6CCAB22CD6DA6F_OFFSET UNITYSDK_OFFSET(0x17707760)
#define CLASS_1_A89E800BD673F128_METHOD_1_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x17708630)
#define CLASS_1_A89E800BD673F128_METHOD_1_D83735EA5298EFC6_OFFSET UNITYSDK_OFFSET(0x17707030)
#define CLASS_1_A89E800BD673F128_METHOD_1_FE327FD0760E1514_1_OFFSET UNITYSDK_OFFSET(0x177087D0)
#define CLASS_1_A89E800BD673F128_METHOD_1_FE327FD0760E1514_OFFSET UNITYSDK_OFFSET(0x17707650)
#define CLASS_1_A89E800BD673F128_SET_CHARACTERANIMZONEREF_OFFSET UNITYSDK_OFFSET(0x17708FF0)
#define CLASS_1_A89E800BD673F128_SET_CURRENTLOGICSTATETYPE_OFFSET UNITYSDK_OFFSET(0x17709010)
#define CLASS_1_A89E800BD673F128_SET_HASMOVESINCETELEPORT_OFFSET UNITYSDK_OFFSET(0x17709030)
#define CLASS_1_A89E800BD673F128__CTOR_OFFSET UNITYSDK_OFFSET(0x177068D0)

inline static constexpr unsigned int Class_1_A89E800BD673F128_TypeDefinitionIndex = 52167;

class Class_1_A89E800BD673F128 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	::RPG::GameCore::CharacterAnimZone* _CharacterAnimZoneRef_k__BackingField; // 0x10
	::RPG::GameCore::GameEntity* Field_1_2; // 0x18
	::Class_0_16E4307DCC419505_507* Field_1_3; // 0x20
	::RPG::GameCore::AdventureCharacterController* Field_1_4; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureAnimStateType, ::Class_0_16E4307DCC419505_507*>* Field_1_5; // 0x30
	::RPG::GameCore::AdventureAnimStateType _CurrentLogicStateType_k__BackingField; // 0x38
	::System::Single Field_1_7; // 0x3C
	::System::Boolean _HasMoveSinceTeleport_k__BackingField; // 0x40
	::System::Boolean Field_1_9; // 0x41

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::RPG::GameCore::CharacterAnimZone* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::RPG::GameCore::CharacterAnimZone*))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AdventureAnimStateType Method_1_132F118CDF0E4ABA()
	{
		return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128_METHOD_1_132F118CDF0E4ABA_OFFSET))(this);
	}

	::System::Void Method_1_FE327FD0760E1514(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128_METHOD_1_FE327FD0760E1514_OFFSET))(this, a1);
	}

	::System::Void Method_1_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128_METHOD_1_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_1_FE327FD0760E1514_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128_METHOD_1_FE327FD0760E1514_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_0A99B4412D79936D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128_METHOD_1_0A99B4412D79936D_OFFSET))(this);
	}

	::System::Void Method_1_D83735EA5298EFC6(::RPG::GameCore::AdventureAnimStateType a1, ::System::Boolean a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128_METHOD_1_D83735EA5298EFC6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128_METHOD_1_1F130271093617A5_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_11D5322717FDFD9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128_METHOD_1_11D5322717FDFD9D_OFFSET))(this);
	}

	::System::Boolean Method_1_3845AD389B8E1E47()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128_METHOD_1_3845AD389B8E1E47_OFFSET))(this);
	}

	::System::Void Method_1_8B6CCAB22CD6DA6F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128_METHOD_1_8B6CCAB22CD6DA6F_OFFSET))(this, a1);
	}

	::System::Void Method_1_672E3DECEBB4A051(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128_METHOD_1_672E3DECEBB4A051_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_07BB45288DFF8852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128_METHOD_1_07BB45288DFF8852_OFFSET))(this);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_1_4A41C63BFE58D26F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128_METHOD_1_4A41C63BFE58D26F_OFFSET))(this);
	}

	::System::Boolean Method_1_387EA1BE4F9FC1D2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128_METHOD_1_387EA1BE4F9FC1D2_OFFSET))(this);
	}

	::RPG::GameCore::CharacterAnimZone* get_CharacterAnimZoneRef()
	{
		return ((::RPG::GameCore::CharacterAnimZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128_GET_CHARACTERANIMZONEREF_OFFSET))(this);
	}

	::System::Void set_CharacterAnimZoneRef(::RPG::GameCore::CharacterAnimZone* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterAnimZone*))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128_SET_CHARACTERANIMZONEREF_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureAnimStateType get_CurrentLogicStateType()
	{
		return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128_GET_CURRENTLOGICSTATETYPE_OFFSET))(this);
	}

	::System::Void set_CurrentLogicStateType(::RPG::GameCore::AdventureAnimStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128_SET_CURRENTLOGICSTATETYPE_OFFSET))(this, a1);
	}

	::System::Boolean get_HasMoveSinceTeleport()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128_GET_HASMOVESINCETELEPORT_OFFSET))(this);
	}

	::System::Void set_HasMoveSinceTeleport(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A89E800BD673F128_SET_HASMOVESINCETELEPORT_OFFSET))(this, a1);
	}
};
