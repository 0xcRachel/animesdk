#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_19E4B3A9FB984FA0;
namespace RPG::Client::NavMap { class MapData; }
namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace RPG::Client::NavMap::FiveDim { class Face; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D978E2CF43110520_GET_CARTOGRAPHY_OFFSET UNITYSDK_OFFSET(0xFEEE860)
#define CLASS_1_D978E2CF43110520_GET_CHEATSHEET_OFFSET UNITYSDK_OFFSET(0xFEEE800)
#define CLASS_1_D978E2CF43110520_GET_CONTAINERGROUPID_OFFSET UNITYSDK_OFFSET(0xFEEE7E0)
#define CLASS_1_D978E2CF43110520_GET_CONTAINERINSTANCEID_OFFSET UNITYSDK_OFFSET(0xFEEE7F0)
#define CLASS_1_D978E2CF43110520_GET_MAPSCALE_OFFSET UNITYSDK_OFFSET(0xFEEE840)
#define CLASS_1_D978E2CF43110520_GET_UNITLENGTH_OFFSET UNITYSDK_OFFSET(0xFEEE820)
#define CLASS_1_D978E2CF43110520_METHOD_1_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0xFEEF060)
#define CLASS_1_D978E2CF43110520_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xFEEEE10)
#define CLASS_1_D978E2CF43110520_METHOD_1_1F9015108CCAC51A_OFFSET UNITYSDK_OFFSET(0xFEEE870)
#define CLASS_1_D978E2CF43110520_METHOD_1_53988DA44D39D8E9_1_OFFSET UNITYSDK_OFFSET(0xFEEEF80)
#define CLASS_1_D978E2CF43110520_METHOD_1_53988DA44D39D8E9_OFFSET UNITYSDK_OFFSET(0xFEEEEA0)
#define CLASS_1_D978E2CF43110520_METHOD_1_5DDAD68FA6C5F659_OFFSET UNITYSDK_OFFSET(0xFEEE880)
#define CLASS_1_D978E2CF43110520_METHOD_1_6AC5E93F815FAFFC_OFFSET UNITYSDK_OFFSET(0xFEEE900)
#define CLASS_1_D978E2CF43110520_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xFEEEB40)
#define CLASS_1_D978E2CF43110520_METHOD_1_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0xFEEEC20)
#define CLASS_1_D978E2CF43110520_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0xFEEEAF0)
#define CLASS_1_D978E2CF43110520_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0xFEEE8A0)
#define CLASS_1_D978E2CF43110520_SET_CHEATSHEET_OFFSET UNITYSDK_OFFSET(0xFEEE810)
#define CLASS_1_D978E2CF43110520_SET_MAPSCALE_OFFSET UNITYSDK_OFFSET(0xFEEE850)
#define CLASS_1_D978E2CF43110520_SET_UNITLENGTH_OFFSET UNITYSDK_OFFSET(0xFEEE830)
#define CLASS_1_D978E2CF43110520__CTOR_OFFSET UNITYSDK_OFFSET(0xFEEEA90)

inline static constexpr unsigned int Class_1_D978E2CF43110520_TypeDefinitionIndex = 59641;

class Class_1_D978E2CF43110520 : public ::System::Object
{
public:
	::Class_1_19E4B3A9FB984FA0* _CheatSheet_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::Face*>* Field_1_6; // 0x18
	::RPG::Client::NavMap::FiveDim::CartographyFiveDim* _Cartography_k__BackingField; // 0x20
	::System::UInt32 _ContainerInstanceID_k__BackingField; // 0x28
	::System::UInt32 _ContainerGroupID_k__BackingField; // 0x2C
	::System::Single _UnitLength_k__BackingField; // 0x30
	::System::Single _MapScale_k__BackingField; // 0x34

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_19E4B3A9FB984FA0* a3, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_1_19E4B3A9FB984FA0*, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim*))((::PBYTE)hIl2Cpp + CLASS_1_D978E2CF43110520__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 get_ContainerGroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D978E2CF43110520_GET_CONTAINERGROUPID_OFFSET))(this);
	}

	::System::UInt32 get_ContainerInstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D978E2CF43110520_GET_CONTAINERINSTANCEID_OFFSET))(this);
	}

	::Class_1_19E4B3A9FB984FA0* get_CheatSheet()
	{
		return ((::Class_1_19E4B3A9FB984FA0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D978E2CF43110520_GET_CHEATSHEET_OFFSET))(this);
	}

	::System::Void set_CheatSheet(::Class_1_19E4B3A9FB984FA0* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_19E4B3A9FB984FA0*))((::PBYTE)hIl2Cpp + CLASS_1_D978E2CF43110520_SET_CHEATSHEET_OFFSET))(this, value);
	}

	::System::Single get_UnitLength()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D978E2CF43110520_GET_UNITLENGTH_OFFSET))(this);
	}

	::System::Void set_UnitLength(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D978E2CF43110520_SET_UNITLENGTH_OFFSET))(this, value);
	}

	::System::Single get_MapScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D978E2CF43110520_GET_MAPSCALE_OFFSET))(this);
	}

	::System::Void set_MapScale(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D978E2CF43110520_SET_MAPSCALE_OFFSET))(this, value);
	}

	::RPG::Client::NavMap::FiveDim::CartographyFiveDim* get_Cartography()
	{
		return ((::RPG::Client::NavMap::FiveDim::CartographyFiveDim*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D978E2CF43110520_GET_CARTOGRAPHY_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::FiveDim::Face*>* Method_1_1F9015108CCAC51A()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::FiveDim::Face*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D978E2CF43110520_METHOD_1_1F9015108CCAC51A_OFFSET))(this);
	}

	::RPG::Client::NavMap::MapData* Method_1_5DDAD68FA6C5F659()
	{
		return ((::RPG::Client::NavMap::MapData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D978E2CF43110520_METHOD_1_5DDAD68FA6C5F659_OFFSET))(this);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D978E2CF43110520_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	static ::Class_1_D978E2CF43110520* Method_1_6AC5E93F815FAFFC(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim* a3)
	{
		return ((::Class_1_D978E2CF43110520*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim*))((::PBYTE)hIl2Cpp + CLASS_1_D978E2CF43110520_METHOD_1_6AC5E93F815FAFFC_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D978E2CF43110520_METHOD_1_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D978E2CF43110520_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D978E2CF43110520_METHOD_1_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_1_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D978E2CF43110520_METHOD_1_921C3C3E09D59CD4_OFFSET))(this);
	}

	::RPG::Client::NavMap::FiveDim::Face* Method_1_53988DA44D39D8E9(::System::UInt32 a1)
	{
		return ((::RPG::Client::NavMap::FiveDim::Face*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D978E2CF43110520_METHOD_1_53988DA44D39D8E9_OFFSET))(this, a1);
	}

	::RPG::Client::NavMap::FiveDim::Face* Method_1_53988DA44D39D8E9_1(::System::UInt32 a1)
	{
		return ((::RPG::Client::NavMap::FiveDim::Face*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D978E2CF43110520_METHOD_1_53988DA44D39D8E9_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_04DE4FBB293DFBD6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D978E2CF43110520_METHOD_1_04DE4FBB293DFBD6_OFFSET))(this, a1);
	}
};
