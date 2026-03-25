#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_939;
class Class_0_16E4307DCC419505_940;
class Class_0_16E4307DCC419505_943;
class Class_1_44D5AE5377975AEE;
class Class_1_BE0E97EFC15B9DBB;
namespace RPG::Client::NavMap { class ITrackPointInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8C34CD01A4AC374C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8DDCAB0)
#define CLASS_1_8C34CD01A4AC374C_METHOD_1_11398F23753C8D9F_OFFSET UNITYSDK_OFFSET(0x8DDCDF0)
#define CLASS_1_8C34CD01A4AC374C_METHOD_1_14AD238643AF23B4_OFFSET UNITYSDK_OFFSET(0x8DDCC90)
#define CLASS_1_8C34CD01A4AC374C_METHOD_1_1DCBBC1819728B10_OFFSET UNITYSDK_OFFSET(0x8DDD3A0)
#define CLASS_1_8C34CD01A4AC374C_METHOD_1_250203490119AF47_OFFSET UNITYSDK_OFFSET(0x8DDCA30)
#define CLASS_1_8C34CD01A4AC374C_METHOD_1_87BCF7BDB2D057F0_OFFSET UNITYSDK_OFFSET(0x8DDD8A0)
#define CLASS_1_8C34CD01A4AC374C_METHOD_1_8BAE8C2D2ED8323C_OFFSET UNITYSDK_OFFSET(0x8DDD130)
#define CLASS_1_8C34CD01A4AC374C_METHOD_1_A4670B7EB1CA5826_OFFSET UNITYSDK_OFFSET(0x8DDCB10)
#define CLASS_1_8C34CD01A4AC374C_METHOD_1_D4D9F21FCFB1BBCC_OFFSET UNITYSDK_OFFSET(0x8DDD430)
#define CLASS_1_8C34CD01A4AC374C__CTOR_OFFSET UNITYSDK_OFFSET(0x8DDCAA0)

inline static constexpr unsigned int Class_1_8C34CD01A4AC374C_TypeDefinitionIndex = 61319;

class Class_1_8C34CD01A4AC374C : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_939* Field_1_3; // 0x10
	::Class_0_16E4307DCC419505_939* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_4; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_2; // 0x28
	::Class_1_BE0E97EFC15B9DBB* Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C34CD01A4AC374C__CTOR_OFFSET))(this);
	}

	static ::Class_1_8C34CD01A4AC374C* Method_1_250203490119AF47(::Class_1_BE0E97EFC15B9DBB* a1)
	{
		return ((::Class_1_8C34CD01A4AC374C*(*)(::Class_1_BE0E97EFC15B9DBB*))((::PBYTE)hIl2Cpp + CLASS_1_8C34CD01A4AC374C_METHOD_1_250203490119AF47_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C34CD01A4AC374C_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::NavMap::ITrackPointInfo* Method_1_14AD238643AF23B4(::RPG::Client::NavMap::ITrackPointInfo* a1)
	{
		return ((::RPG::Client::NavMap::ITrackPointInfo*(*)(::PVOID, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_8C34CD01A4AC374C_METHOD_1_14AD238643AF23B4_OFFSET))(this, a1);
	}

	::System::Single Method_1_1DCBBC1819728B10(::RPG::Client::NavMap::ITrackPointInfo* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_8C34CD01A4AC374C_METHOD_1_1DCBBC1819728B10_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_11398F23753C8D9F(::RPG::Client::NavMap::ITrackPointInfo* a1, ::Class_1_44D5AE5377975AEE*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::ITrackPointInfo*, ::Class_1_44D5AE5377975AEE*&))((::PBYTE)hIl2Cpp + CLASS_1_8C34CD01A4AC374C_METHOD_1_11398F23753C8D9F_OFFSET))(this, a1, a2);
	}

	::Class_1_44D5AE5377975AEE* Method_1_D4D9F21FCFB1BBCC(::Class_0_16E4307DCC419505_943* a1, ::Class_0_16E4307DCC419505_940* a2, ::Class_0_16E4307DCC419505_943* a3, ::Class_0_16E4307DCC419505_940* a4)
	{
		return ((::Class_1_44D5AE5377975AEE*(*)(::PVOID, ::Class_0_16E4307DCC419505_943*, ::Class_0_16E4307DCC419505_940*, ::Class_0_16E4307DCC419505_943*, ::Class_0_16E4307DCC419505_940*))((::PBYTE)hIl2Cpp + CLASS_1_8C34CD01A4AC374C_METHOD_1_D4D9F21FCFB1BBCC_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::NavMap::ITrackPointInfo* Method_1_8BAE8C2D2ED8323C(::Class_1_44D5AE5377975AEE* a1)
	{
		return ((::RPG::Client::NavMap::ITrackPointInfo*(*)(::PVOID, ::Class_1_44D5AE5377975AEE*))((::PBYTE)hIl2Cpp + CLASS_1_8C34CD01A4AC374C_METHOD_1_8BAE8C2D2ED8323C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_87BCF7BDB2D057F0(::Class_0_16E4307DCC419505_939* a1, ::Class_0_16E4307DCC419505_940* a2, ::System::Boolean a3)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_939*, ::Class_0_16E4307DCC419505_940*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8C34CD01A4AC374C_METHOD_1_87BCF7BDB2D057F0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A4670B7EB1CA5826(::Class_0_16E4307DCC419505_939* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_939*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_8C34CD01A4AC374C_METHOD_1_A4670B7EB1CA5826_OFFSET))(this, a1, a2);
	}
};
