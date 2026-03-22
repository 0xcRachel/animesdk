#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AlleyEventInfo.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AlleyGridItemData; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ALLEYMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8C75200)
#define RPG_CLIENT_ALLEYMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8C75230)
#define RPG_CLIENT_ALLEYMODULE___C___INITEVENTINFO_B__31_0_OFFSET UNITYSDK_OFFSET(0x8C75250)
#define RPG_CLIENT_ALLEYMODULE___C___INITRENOWNINFO_B__30_0_OFFSET UNITYSDK_OFFSET(0x8C75240)
#define RPG_CLIENT_ALLEYMODULE___C___ONALLEYEVENTCHANGENOTIFY_B__152_0_OFFSET UNITYSDK_OFFSET(0x8C75290)
#define RPG_CLIENT_ALLEYMODULE___C___TRYGENERATEALLEYMAPGRIDDATA_B__308_0_OFFSET UNITYSDK_OFFSET(0x8C752A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyModule___c_TypeDefinitionIndex = 49421;

	class AlleyModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::AlleyModule___c** StaticGet___9()
		{
			return (::RPG::Client::AlleyModule___c**)Il2CppClass::FromTypeDefinitionIndex(AlleyModule___c_TypeDefinitionIndex)->GetStaticField(0x2CE70);
		}
		static ::System::Comparison_1<::RPG::Client::AlleyEventInfo>** StaticGet___9__31_0()
		{
			return (::System::Comparison_1<::RPG::Client::AlleyEventInfo>**)Il2CppClass::FromTypeDefinitionIndex(AlleyModule___c_TypeDefinitionIndex)->GetStaticField(0x2CE78);
		}
		static ::System::Comparison_1<::RPG::Client::AlleyGridItemData*>** StaticGet___9__308_0()
		{
			return (::System::Comparison_1<::RPG::Client::AlleyGridItemData*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyModule___c_TypeDefinitionIndex)->GetStaticField(0x2CE80);
		}
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AlleyModule___c_TypeDefinitionIndex)->GetStaticField(0x2CE88);
		}
		static ::System::Action** StaticGet___9__152_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AlleyModule___c_TypeDefinitionIndex)->GetStaticField(0x2CE90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __InitRenownInfo_b__30_0(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYMODULE___C___INITRENOWNINFO_B__30_0_OFFSET))(this, x);
		}

		::System::Int32 __InitEventInfo_b__31_0(::RPG::Client::AlleyEventInfo a, ::RPG::Client::AlleyEventInfo b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AlleyEventInfo, ::RPG::Client::AlleyEventInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYMODULE___C___INITEVENTINFO_B__31_0_OFFSET))(this, a, b);
		}

		::System::Void __OnAlleyEventChangeNotify_b__152_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYMODULE___C___ONALLEYEVENTCHANGENOTIFY_B__152_0_OFFSET))(this);
		}

		::System::Int32 __TryGenerateAlleyMapGridData_b__308_0(::RPG::Client::AlleyGridItemData* x, ::RPG::Client::AlleyGridItemData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AlleyGridItemData*, ::RPG::Client::AlleyGridItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYMODULE___C___TRYGENERATEALLEYMAPGRIDDATA_B__308_0_OFFSET))(this, x, y);
		}
	};
}
