#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_866;
class Class_1_A9BFC150668414F7;
class Class_1_C9755E532821B8B5;
class Class_1_FD0C1FDFC981C0D8;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class LevelNavNodeInfo; }
namespace RPG::GameCore { class LevelNavNodeTransitInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CB7B16F9E4FDC07C_METHOD_1_04EEDB331274CC96_OFFSET UNITYSDK_OFFSET(0x11146400)
#define CLASS_1_CB7B16F9E4FDC07C_METHOD_1_457E58CBA89C9A1F_OFFSET UNITYSDK_OFFSET(0x111450B0)
#define CLASS_1_CB7B16F9E4FDC07C_METHOD_1_4649371C2F4940AD_OFFSET UNITYSDK_OFFSET(0x11145F60)
#define CLASS_1_CB7B16F9E4FDC07C_METHOD_1_655DDB722F1FDE73_OFFSET UNITYSDK_OFFSET(0x11145490)
#define CLASS_1_CB7B16F9E4FDC07C_METHOD_1_6DC60149A270E0D4_OFFSET UNITYSDK_OFFSET(0x11145430)
#define CLASS_1_CB7B16F9E4FDC07C_METHOD_1_911114191B8645A9_OFFSET UNITYSDK_OFFSET(0x111450D0)
#define CLASS_1_CB7B16F9E4FDC07C_METHOD_1_9154909C0DA9C56E_OFFSET UNITYSDK_OFFSET(0x11146530)
#define CLASS_1_CB7B16F9E4FDC07C_METHOD_1_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x11145740)
#define CLASS_1_CB7B16F9E4FDC07C_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x11145A70)
#define CLASS_1_CB7B16F9E4FDC07C_METHOD_1_CBBB30978BA34B92_OFFSET UNITYSDK_OFFSET(0x11146460)
#define CLASS_1_CB7B16F9E4FDC07C_METHOD_1_FD509156BCE51F7E_OFFSET UNITYSDK_OFFSET(0x11145360)
#define CLASS_1_CB7B16F9E4FDC07C__CTOR_OFFSET UNITYSDK_OFFSET(0x11145250)

inline static constexpr unsigned int Class_1_CB7B16F9E4FDC07C_TypeDefinitionIndex = 59583;

class Class_1_CB7B16F9E4FDC07C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo*>* Field_1_1; // 0x10
	::Class_1_A9BFC150668414F7* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo*>*>* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_5; // 0x28
	::System::Collections::Generic::List_1<::Class_1_FD0C1FDFC981C0D8*>* Field_1_3; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C9755E532821B8B5*>* Field_1_4; // 0x38

	::System::Void _ctor(::Class_1_A9BFC150668414F7* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo*>* a2, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo*>*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A9BFC150668414F7*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo*>*, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_CB7B16F9E4FDC07C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::NavMap::IMapDataSource* Method_1_457E58CBA89C9A1F()
	{
		return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7B16F9E4FDC07C_METHOD_1_457E58CBA89C9A1F_OFFSET))(this);
	}

	static ::Class_1_CB7B16F9E4FDC07C* Method_1_911114191B8645A9(::Class_1_A9BFC150668414F7* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo*>* a2, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo*>*>* a3)
	{
		return ((::Class_1_CB7B16F9E4FDC07C*(*)(::Class_1_A9BFC150668414F7*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo*>*, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_CB7B16F9E4FDC07C_METHOD_1_911114191B8645A9_OFFSET))(a1, a2, a3);
	}

	::System::UInt32 Method_1_FD509156BCE51F7E(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CB7B16F9E4FDC07C_METHOD_1_FD509156BCE51F7E_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DC60149A270E0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7B16F9E4FDC07C_METHOD_1_6DC60149A270E0D4_OFFSET))(this);
	}

	::System::Void Method_1_655DDB722F1FDE73()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7B16F9E4FDC07C_METHOD_1_655DDB722F1FDE73_OFFSET))(this);
	}

	::System::Void Method_1_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7B16F9E4FDC07C_METHOD_1_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Void Method_1_4649371C2F4940AD(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CB7B16F9E4FDC07C_METHOD_1_4649371C2F4940AD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7B16F9E4FDC07C_METHOD_1_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyCollection_1<::Class_1_C9755E532821B8B5*>* Method_1_04EEDB331274CC96()
	{
		return ((::System::Collections::Generic::IReadOnlyCollection_1<::Class_1_C9755E532821B8B5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7B16F9E4FDC07C_METHOD_1_04EEDB331274CC96_OFFSET))(this);
	}

	::Class_1_C9755E532821B8B5* Method_1_CBBB30978BA34B92(::System::UInt32 a1)
	{
		return ((::Class_1_C9755E532821B8B5*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CB7B16F9E4FDC07C_METHOD_1_CBBB30978BA34B92_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9154909C0DA9C56E(::UnityEngine::Vector3 a1, ::Class_0_16E4307DCC419505_866*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::Class_0_16E4307DCC419505_866*&))((::PBYTE)hIl2Cpp + CLASS_1_CB7B16F9E4FDC07C_METHOD_1_9154909C0DA9C56E_OFFSET))(this, a1, a2);
	}
};
