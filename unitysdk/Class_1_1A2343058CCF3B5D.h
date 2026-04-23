#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1A2343058CCF3B5D_Class_1_7A8BA05CC3614C46;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1A2343058CCF3B5D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE58E800)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_012B0B5F08D41837_OFFSET UNITYSDK_OFFSET(0xE58FAB0)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_0501CE138D550288_OFFSET UNITYSDK_OFFSET(0xE590410)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_0D1203CDD127EB22_OFFSET UNITYSDK_OFFSET(0xE591160)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_1CE2732842C89A64_OFFSET UNITYSDK_OFFSET(0xE590730)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0xE58E860)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_320D79013B813313_OFFSET UNITYSDK_OFFSET(0xE5903A0)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0xE58F270)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_4F6CB99543AF5BF6_OFFSET UNITYSDK_OFFSET(0xE58EAA0)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_520DF5925EE46A4D_OFFSET UNITYSDK_OFFSET(0xE590E80)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0xE58E760)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_60882208D099D33E_OFFSET UNITYSDK_OFFSET(0xE5901E0)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_64C0BD0A8001418C_OFFSET UNITYSDK_OFFSET(0xE58F700)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_6BE484E5F636032A_OFFSET UNITYSDK_OFFSET(0xE590050)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_7180D11BD8FDADB6_OFFSET UNITYSDK_OFFSET(0xE5910A0)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_75C4314C63283FD2_OFFSET UNITYSDK_OFFSET(0xE58F840)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_850A1E8990DC3F3C_OFFSET UNITYSDK_OFFSET(0xE590B50)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_9152E9750C76708B_OFFSET UNITYSDK_OFFSET(0xE58FB50)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0xE58EB40)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_A4ECCE0B5E009D9F_OFFSET UNITYSDK_OFFSET(0xE591670)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_CAAAA03D9552FCE2_OFFSET UNITYSDK_OFFSET(0xE591AF0)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_D63735FB49794316_OFFSET UNITYSDK_OFFSET(0xE591A20)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_DBC5F3BB0E348F90_OFFSET UNITYSDK_OFFSET(0xE590A90)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_F15D6AB771D7407B_OFFSET UNITYSDK_OFFSET(0xE5913E0)
#define CLASS_1_1A2343058CCF3B5D__CTOR_OFFSET UNITYSDK_OFFSET(0xE58E610)

inline static constexpr unsigned int Class_1_1A2343058CCF3B5D_TypeDefinitionIndex = 55848;

class Class_1_1A2343058CCF3B5D : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_1; // 0x10
	::RPG::Client::MapDef* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::PoolHashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*>* Field_1_5; // 0x20
	::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Class_1_1A2343058CCF3B5D_Class_1_7A8BA05CC3614C46*>* Field_1_2; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_1_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::String*>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelLittleGameInfo*>*>* Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Method_1_75C4314C63283FD2(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_75C4314C63283FD2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6BE484E5F636032A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_6BE484E5F636032A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_320D79013B813313(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_320D79013B813313_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0501CE138D550288(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_0501CE138D550288_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_1_4F6CB99543AF5BF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_4F6CB99543AF5BF6_OFFSET))(this);
	}

	::System::Void Method_1_64C0BD0A8001418C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_64C0BD0A8001418C_OFFSET))(this, a1);
	}

	::System::Void Method_1_DBC5F3BB0E348F90(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_DBC5F3BB0E348F90_OFFSET))(this, a1);
	}

	::System::Void Method_1_850A1E8990DC3F3C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_850A1E8990DC3F3C_OFFSET))(this, a1);
	}

	::System::Void Method_1_7180D11BD8FDADB6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_7180D11BD8FDADB6_OFFSET))(this, a1);
	}

	::System::Void Method_1_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_9AB55F553C4AC6E8_OFFSET))(this);
	}

	::System::Void Method_1_9152E9750C76708B(::System::UInt32 a1, ::RPG::GameCore::RuntimeGroupInfo* a2, ::RPG::GameCore::LevelLittleGameInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_9152E9750C76708B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_60882208D099D33E(::Class_1_1A2343058CCF3B5D_Class_1_7A8BA05CC3614C46* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A2343058CCF3B5D_Class_1_7A8BA05CC3614C46*))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_60882208D099D33E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_012B0B5F08D41837(::Class_1_1A2343058CCF3B5D_Class_1_7A8BA05CC3614C46*& a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1A2343058CCF3B5D_Class_1_7A8BA05CC3614C46*&, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_012B0B5F08D41837_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1CE2732842C89A64(::System::UInt32 a1, ::RPG::GameCore::LevelLittleGameInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_1CE2732842C89A64_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_520DF5925EE46A4D(::System::UInt32 a1, ::RPG::GameCore::LevelLittleGameInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_520DF5925EE46A4D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A4ECCE0B5E009D9F(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_A4ECCE0B5E009D9F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0D1203CDD127EB22(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LevelLittleGameInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_0D1203CDD127EB22_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F15D6AB771D7407B(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LevelLittleGameInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_F15D6AB771D7407B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CAAAA03D9552FCE2(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_CAAAA03D9552FCE2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D63735FB49794316(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_D63735FB49794316_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_229CEF33F0AF9039_OFFSET))(this);
	}
};
