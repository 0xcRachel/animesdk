#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_459;
namespace RPG::Client { class MusicVisualization_SpectrumEffectBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FBA2F7F034B595FB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x85376D0)
#define CLASS_1_FBA2F7F034B595FB_GET_PLAYINGID_OFFSET UNITYSDK_OFFSET(0x85390F0)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_25E17FAC20C3D4A5_OFFSET UNITYSDK_OFFSET(0x8537D40)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_3B258437A86233AC_1_OFFSET UNITYSDK_OFFSET(0x8538120)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x8537FC0)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_3EBB8CC7CE9832B7_OFFSET UNITYSDK_OFFSET(0x85384D0)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_47A586EC7DE271D5_OFFSET UNITYSDK_OFFSET(0x8538590)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_4B54CFD4A08A13DB_OFFSET UNITYSDK_OFFSET(0x8537C90)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_6E57D3559C10FFA9_1_OFFSET UNITYSDK_OFFSET(0x85377F0)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x85377A0)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_70F996834AEFED46_OFFSET UNITYSDK_OFFSET(0x8537840)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_84EDE99A0157AA80_OFFSET UNITYSDK_OFFSET(0x8537DF0)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_BC34D12C14FA32D8_OFFSET UNITYSDK_OFFSET(0x8537C00)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x8539110)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x8537AE0)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_EDDD1B285B468C3C_OFFSET UNITYSDK_OFFSET(0x8538280)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_F56205DA0E1D126B_OFFSET UNITYSDK_OFFSET(0x8537A00)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_FA62BCB480AFF4EA_OFFSET UNITYSDK_OFFSET(0x8537A50)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x8537B70)
#define CLASS_1_FBA2F7F034B595FB_SET_PLAYINGID_OFFSET UNITYSDK_OFFSET(0x8539100)
#define CLASS_1_FBA2F7F034B595FB__CTOR_OFFSET UNITYSDK_OFFSET(0x8537630)

inline static constexpr unsigned int Class_1_FBA2F7F034B595FB_TypeDefinitionIndex = 47304;

class Class_1_FBA2F7F034B595FB : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_8 = 0x200; // 0x0
	::System::Collections::Generic::List_1<::RPG::Client::MusicVisualization_SpectrumEffectBase*>* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_459*>* Field_1_3; // 0x18
	::Il2CppArray<::System::Single>* Field_1_7; // 0x20
	::System::UInt32 Field_1_1; // 0x28
	::System::Int32 Field_1_2; // 0x2C
	::System::UInt32 _PlayingID_k__BackingField; // 0x30
	::System::Single Field_1_6; // 0x34
	::System::Single Field_1_5; // 0x38

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E57D3559C10FFA9_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_6E57D3559C10FFA9_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_70F996834AEFED46(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_70F996834AEFED46_OFFSET))(this, a1);
	}

	::System::Single Method_1_F56205DA0E1D126B(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_F56205DA0E1D126B_OFFSET))(this, a1);
	}

	::System::Single Method_1_FA62BCB480AFF4EA(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_FA62BCB480AFF4EA_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_1_FAA945ED465745BC(::Class_0_16E4307DCC419505_459* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_459*))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_BC34D12C14FA32D8(::Class_0_16E4307DCC419505_459* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_459*))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_BC34D12C14FA32D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_4B54CFD4A08A13DB(::RPG::Client::MusicVisualization_SpectrumEffectBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicVisualization_SpectrumEffectBase*))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_4B54CFD4A08A13DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_25E17FAC20C3D4A5(::RPG::Client::MusicVisualization_SpectrumEffectBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicVisualization_SpectrumEffectBase*))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_25E17FAC20C3D4A5_OFFSET))(this, a1);
	}

	::System::Void Method_1_84EDE99A0157AA80(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_84EDE99A0157AA80_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Method_1_3B258437A86233AC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_3B258437A86233AC_1_OFFSET))(this);
	}

	::System::Void Method_1_EDDD1B285B468C3C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_EDDD1B285B468C3C_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Single>* Method_1_3EBB8CC7CE9832B7()
	{
		return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_3EBB8CC7CE9832B7_OFFSET))(this);
	}

	::System::Void Method_1_47A586EC7DE271D5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_47A586EC7DE271D5_OFFSET))(this, a1);
	}

	::System::UInt32 get_PlayingID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_GET_PLAYINGID_OFFSET))(this);
	}

	::System::Void set_PlayingID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_SET_PLAYINGID_OFFSET))(this, value);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
