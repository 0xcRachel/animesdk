#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_598;
namespace RPG::Client { class MiniMapZone; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MINIMAPMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1474C120)
#define RPG_CLIENT_MINIMAPMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1474C150)
#define RPG_CLIENT_MINIMAPMANAGER___C__GETMINIMAPICONS_B__20_0_OFFSET UNITYSDK_OFFSET(0x1474C160)
#define RPG_CLIENT_MINIMAPMANAGER___C__GETMINIMAPICONS_B__20_1_OFFSET UNITYSDK_OFFSET(0x1474C4A0)
#define RPG_CLIENT_MINIMAPMANAGER___C___REGISTERZONEINTERNAL_B__25_0_OFFSET UNITYSDK_OFFSET(0x1474C5F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MiniMapManager___c_TypeDefinitionIndex = 55936;

	class MiniMapManager___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_0_16E4307DCC419505_598*>** StaticGet___9__20_0()
		{
			return (::System::Comparison_1<::Class_0_16E4307DCC419505_598*>**)Il2CppClass::FromTypeDefinitionIndex(MiniMapManager___c_TypeDefinitionIndex)->GetStaticField(0x57690);
		}
		static ::System::Comparison_1<::Class_0_16E4307DCC419505_598*>** StaticGet___9__20_1()
		{
			return (::System::Comparison_1<::Class_0_16E4307DCC419505_598*>**)Il2CppClass::FromTypeDefinitionIndex(MiniMapManager___c_TypeDefinitionIndex)->GetStaticField(0x57698);
		}
		static ::System::Comparison_1<::RPG::Client::MiniMapZone*>** StaticGet___9__25_0()
		{
			return (::System::Comparison_1<::RPG::Client::MiniMapZone*>**)Il2CppClass::FromTypeDefinitionIndex(MiniMapManager___c_TypeDefinitionIndex)->GetStaticField(0x576A0);
		}
		static ::RPG::Client::MiniMapManager___c** StaticGet___9()
		{
			return (::RPG::Client::MiniMapManager___c**)Il2CppClass::FromTypeDefinitionIndex(MiniMapManager___c_TypeDefinitionIndex)->GetStaticField(0x576A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetMiniMapIcons_b__20_0(::Class_0_16E4307DCC419505_598* A, ::Class_0_16E4307DCC419505_598* B)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_598*, ::Class_0_16E4307DCC419505_598*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C__GETMINIMAPICONS_B__20_0_OFFSET))(this, A, B);
		}

		::System::Int32 _GetMiniMapIcons_b__20_1(::Class_0_16E4307DCC419505_598* A, ::Class_0_16E4307DCC419505_598* B)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_598*, ::Class_0_16E4307DCC419505_598*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C__GETMINIMAPICONS_B__20_1_OFFSET))(this, A, B);
		}

		::System::Int32 __RegisterZoneInternal_b__25_0(::RPG::Client::MiniMapZone* a, ::RPG::Client::MiniMapZone* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MiniMapZone*, ::RPG::Client::MiniMapZone*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C___REGISTERZONEINTERNAL_B__25_0_OFFSET))(this, a, b);
		}
	};
}
