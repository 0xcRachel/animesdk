#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_478;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER___C__AWAKE_B__3_0_OFFSET UNITYSDK_OFFSET(0x9852350)
#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9852300)
#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9852340)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPlayerAttachmentController___c_TypeDefinitionIndex = 47642;

	class MonoPlayerAttachmentController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_0_16E4307DCC419505_478*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::Class_0_16E4307DCC419505_478*>**)Il2CppClass::FromTypeDefinitionIndex(MonoPlayerAttachmentController___c_TypeDefinitionIndex)->GetStaticField(0x3DA40);
		}
		static ::RPG::Client::MonoPlayerAttachmentController___c** StaticGet___9()
		{
			return (::RPG::Client::MonoPlayerAttachmentController___c**)Il2CppClass::FromTypeDefinitionIndex(MonoPlayerAttachmentController___c_TypeDefinitionIndex)->GetStaticField(0x3DA48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Awake_b__3_0(::Class_0_16E4307DCC419505_478* a, ::Class_0_16E4307DCC419505_478* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_478*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER___C__AWAKE_B__3_0_OFFSET))(this, a, b);
		}
	};
}
