#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueKeywordData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUEKEYWORDINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9DFDD30)
#define RPG_CLIENT_ROGUEKEYWORDINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9DFDD60)
#define RPG_CLIENT_ROGUEKEYWORDINFO___C___SORT_B__10_0_OFFSET UNITYSDK_OFFSET(0x9DFDD70)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueKeywordInfo___c_TypeDefinitionIndex = 53437;

	class RogueKeywordInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::RogueKeywordData*>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::RPG::Client::RogueKeywordData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueKeywordInfo___c_TypeDefinitionIndex)->GetStaticField(0x3E20);
		}
		static ::RPG::Client::RogueKeywordInfo___c** StaticGet___9()
		{
			return (::RPG::Client::RogueKeywordInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RogueKeywordInfo___c_TypeDefinitionIndex)->GetStaticField(0x3E28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __Sort_b__10_0(::RPG::Client::RogueKeywordData* x, ::RPG::Client::RogueKeywordData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueKeywordData*, ::RPG::Client::RogueKeywordData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO___C___SORT_B__10_0_OFFSET))(this, x, y);
		}
	};
}
