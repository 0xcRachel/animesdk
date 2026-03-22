#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_488;
namespace RPG::Client { class MiniMapZone; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MINIMAPMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9713690)
#define RPG_CLIENT_MINIMAPMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x97136C0)
#define RPG_CLIENT_MINIMAPMANAGER___C__GETMINIMAPICONS_B__19_0_OFFSET UNITYSDK_OFFSET(0x97136D0)
#define RPG_CLIENT_MINIMAPMANAGER___C__GETMINIMAPICONS_B__19_1_OFFSET UNITYSDK_OFFSET(0x9713A10)
#define RPG_CLIENT_MINIMAPMANAGER___C___REGISTERZONEINTERNAL_B__24_0_OFFSET UNITYSDK_OFFSET(0x9713B60)

namespace RPG::Client
{
	inline static constexpr unsigned int MiniMapManager___c_TypeDefinitionIndex = 48051;

	class MiniMapManager___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_0_16E4307DCC419505_488*>** StaticGet___9__19_0()
		{
			return (::System::Comparison_1<::Class_0_16E4307DCC419505_488*>**)Il2CppClass::FromTypeDefinitionIndex(MiniMapManager___c_TypeDefinitionIndex)->GetStaticField(0x30BC0);
		}
		static ::RPG::Client::MiniMapManager___c** StaticGet___9()
		{
			return (::RPG::Client::MiniMapManager___c**)Il2CppClass::FromTypeDefinitionIndex(MiniMapManager___c_TypeDefinitionIndex)->GetStaticField(0x30BC8);
		}
		static ::System::Comparison_1<::Class_0_16E4307DCC419505_488*>** StaticGet___9__19_1()
		{
			return (::System::Comparison_1<::Class_0_16E4307DCC419505_488*>**)Il2CppClass::FromTypeDefinitionIndex(MiniMapManager___c_TypeDefinitionIndex)->GetStaticField(0x30BD0);
		}
		static ::System::Comparison_1<::RPG::Client::MiniMapZone*>** StaticGet___9__24_0()
		{
			return (::System::Comparison_1<::RPG::Client::MiniMapZone*>**)Il2CppClass::FromTypeDefinitionIndex(MiniMapManager___c_TypeDefinitionIndex)->GetStaticField(0x30BD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetMiniMapIcons_b__19_0(::Class_0_16E4307DCC419505_488* A, ::Class_0_16E4307DCC419505_488* B)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_488*, ::Class_0_16E4307DCC419505_488*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C__GETMINIMAPICONS_B__19_0_OFFSET))(this, A, B);
		}

		::System::Int32 _GetMiniMapIcons_b__19_1(::Class_0_16E4307DCC419505_488* A, ::Class_0_16E4307DCC419505_488* B)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_488*, ::Class_0_16E4307DCC419505_488*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C__GETMINIMAPICONS_B__19_1_OFFSET))(this, A, B);
		}

		::System::Int32 __RegisterZoneInternal_b__24_0(::RPG::Client::MiniMapZone* a, ::RPG::Client::MiniMapZone* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MiniMapZone*, ::RPG::Client::MiniMapZone*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C___REGISTERZONEINTERNAL_B__24_0_OFFSET))(this, a, b);
		}
	};
}
