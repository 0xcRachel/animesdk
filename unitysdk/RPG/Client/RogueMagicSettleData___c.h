#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5CF1DDAFE12F0E87_6;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUEMAGICSETTLEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E19F70)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA___C__CREATE_B__2_0_OFFSET UNITYSDK_OFFSET(0x9E19FC0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9E19FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicSettleData___c_TypeDefinitionIndex = 53557;

	class RogueMagicSettleData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueMagicSettleData___c** StaticGet___9()
		{
			return (::RPG::Client::RogueMagicSettleData___c**)Il2CppClass::FromTypeDefinitionIndex(RogueMagicSettleData___c_TypeDefinitionIndex)->GetStaticField(0x7200);
		}
		static ::System::Comparison_1<::Class_1_5CF1DDAFE12F0E87_6*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::Class_1_5CF1DDAFE12F0E87_6*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMagicSettleData___c_TypeDefinitionIndex)->GetStaticField(0x7208);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Create_b__2_0(::Class_1_5CF1DDAFE12F0E87_6* a, ::Class_1_5CF1DDAFE12F0E87_6* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_5CF1DDAFE12F0E87_6*, ::Class_1_5CF1DDAFE12F0E87_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA___C__CREATE_B__2_0_OFFSET))(this, a, b);
		}
	};
}
