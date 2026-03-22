#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EA34684135EFC9DB;
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueMiracleData; }
namespace RPG::Client { class RogueTournBuildRefTeamAvatarMemberData; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace RPG::Client { class RogueTournBuildRefTeamPathMemberData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_44891E6B33DD1044_CLEAR_OFFSET UNITYSDK_OFFSET(0xF559720)
#define CLASS_1_44891E6B33DD1044_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF559850)
#define CLASS_1_44891E6B33DD1044_METHOD_1_11737DE6A9C03437_OFFSET UNITYSDK_OFFSET(0xF55A050)
#define CLASS_1_44891E6B33DD1044_METHOD_1_250D866A6E4DA280_OFFSET UNITYSDK_OFFSET(0xF55A940)
#define CLASS_1_44891E6B33DD1044_METHOD_1_2A05933D1774078F_OFFSET UNITYSDK_OFFSET(0xF55A140)
#define CLASS_1_44891E6B33DD1044_METHOD_1_3CD89FBACA5C1996_OFFSET UNITYSDK_OFFSET(0xF55A820)
#define CLASS_1_44891E6B33DD1044_METHOD_1_4379620BD229B3DC_1_OFFSET UNITYSDK_OFFSET(0xF559A20)
#define CLASS_1_44891E6B33DD1044_METHOD_1_4379620BD229B3DC_2_OFFSET UNITYSDK_OFFSET(0xF559A90)
#define CLASS_1_44891E6B33DD1044_METHOD_1_4379620BD229B3DC_3_OFFSET UNITYSDK_OFFSET(0xF559BB0)
#define CLASS_1_44891E6B33DD1044_METHOD_1_4379620BD229B3DC_OFFSET UNITYSDK_OFFSET(0xF5598A0)
#define CLASS_1_44891E6B33DD1044_METHOD_1_79CD70BEAE04F5EF_OFFSET UNITYSDK_OFFSET(0xF55A730)
#define CLASS_1_44891E6B33DD1044_METHOD_1_7C06B19B320755A2_OFFSET UNITYSDK_OFFSET(0xF55A610)
#define CLASS_1_44891E6B33DD1044_METHOD_1_8F927199CAFA7EEA_OFFSET UNITYSDK_OFFSET(0xF559E90)
#define CLASS_1_44891E6B33DD1044_METHOD_1_970037B4AB36701F_OFFSET UNITYSDK_OFFSET(0xF559C20)
#define CLASS_1_44891E6B33DD1044_METHOD_1_A1981EE86715D725_OFFSET UNITYSDK_OFFSET(0xF559B00)
#define CLASS_1_44891E6B33DD1044_METHOD_1_A96A5B40E9CDD58F_OFFSET UNITYSDK_OFFSET(0xF559D00)
#define CLASS_1_44891E6B33DD1044_METHOD_1_FDE1F0E4D5468AAA_OFFSET UNITYSDK_OFFSET(0xF559910)
#define CLASS_1_44891E6B33DD1044__CTOR_OFFSET UNITYSDK_OFFSET(0xF55BB10)

inline static constexpr unsigned int Class_1_44891E6B33DD1044_TypeDefinitionIndex = 53672;

class Class_1_44891E6B33DD1044 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>* Field_1_4; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::RogueTournBuildRefTeamData*>* Field_1_0; // 0x28
	::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44891E6B33DD1044__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44891E6B33DD1044_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44891E6B33DD1044_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4379620BD229B3DC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44891E6B33DD1044_METHOD_1_4379620BD229B3DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_4379620BD229B3DC_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44891E6B33DD1044_METHOD_1_4379620BD229B3DC_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_4379620BD229B3DC_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44891E6B33DD1044_METHOD_1_4379620BD229B3DC_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_4379620BD229B3DC_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44891E6B33DD1044_METHOD_1_4379620BD229B3DC_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_970037B4AB36701F(::System::Int32 a1, ::System::Int32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44891E6B33DD1044_METHOD_1_970037B4AB36701F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_11737DE6A9C03437(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::IList_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_44891E6B33DD1044_METHOD_1_11737DE6A9C03437_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7C06B19B320755A2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44891E6B33DD1044_METHOD_1_7C06B19B320755A2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_3CD89FBACA5C1996(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::IList_1<::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_44891E6B33DD1044_METHOD_1_3CD89FBACA5C1996_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_EA34684135EFC9DB* Method_1_250D866A6E4DA280()
	{
		return ((::Class_1_EA34684135EFC9DB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44891E6B33DD1044_METHOD_1_250D866A6E4DA280_OFFSET))(this);
	}

	::RPG::Client::RogueFormulaData* Method_1_FDE1F0E4D5468AAA(::System::UInt32 a1)
	{
		return ((::RPG::Client::RogueFormulaData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44891E6B33DD1044_METHOD_1_FDE1F0E4D5468AAA_OFFSET))(this, a1);
	}

	::RPG::Client::RogueMiracleData* Method_1_A1981EE86715D725(::System::UInt32 a1)
	{
		return ((::RPG::Client::RogueMiracleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44891E6B33DD1044_METHOD_1_A1981EE86715D725_OFFSET))(this, a1);
	}

	::RPG::Client::RogueTournBuildRefTeamAvatarMemberData* Method_1_8F927199CAFA7EEA(::System::UInt32 a1)
	{
		return ((::RPG::Client::RogueTournBuildRefTeamAvatarMemberData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44891E6B33DD1044_METHOD_1_8F927199CAFA7EEA_OFFSET))(this, a1);
	}

	::RPG::Client::RogueTournBuildRefTeamPathMemberData* Method_1_2A05933D1774078F(::System::Collections::Generic::IList_1<::System::Int32>* a1)
	{
		return ((::RPG::Client::RogueTournBuildRefTeamPathMemberData*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_44891E6B33DD1044_METHOD_1_2A05933D1774078F_OFFSET))(this, a1);
	}

	::System::Void Method_1_A96A5B40E9CDD58F(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_44891E6B33DD1044_METHOD_1_A96A5B40E9CDD58F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_79CD70BEAE04F5EF(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_44891E6B33DD1044_METHOD_1_79CD70BEAE04F5EF_OFFSET))(this, a1, a2, a3);
	}
};
