#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MissionChronicleMainPathData; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_HANDBOOKCHAPTERDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9481840)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9481880)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA___C__ISPROCESSING_B__49_0_OFFSET UNITYSDK_OFFSET(0x94818D0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA___C__SETMAINPATHLIST_B__48_0_OFFSET UNITYSDK_OFFSET(0x9481890)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA___C__SETMAINPATHLIST_B__48_1_OFFSET UNITYSDK_OFFSET(0x94818B0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookChapterData___c_TypeDefinitionIndex = 52142;

	class HandbookChapterData___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>** StaticGet___9__48_0()
		{
			return (::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>**)Il2CppClass::FromTypeDefinitionIndex(HandbookChapterData___c_TypeDefinitionIndex)->GetStaticField(0xB740);
		}
		static ::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>** StaticGet___9__49_0()
		{
			return (::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>**)Il2CppClass::FromTypeDefinitionIndex(HandbookChapterData___c_TypeDefinitionIndex)->GetStaticField(0xB748);
		}
		static ::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>** StaticGet___9__48_1()
		{
			return (::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>**)Il2CppClass::FromTypeDefinitionIndex(HandbookChapterData___c_TypeDefinitionIndex)->GetStaticField(0xB750);
		}
		static ::RPG::Client::HandbookChapterData___c** StaticGet___9()
		{
			return (::RPG::Client::HandbookChapterData___c**)Il2CppClass::FromTypeDefinitionIndex(HandbookChapterData___c_TypeDefinitionIndex)->GetStaticField(0xB758);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetMainPathList_b__48_0(::RPG::Client::MissionChronicleMainPathData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA___C__SETMAINPATHLIST_B__48_0_OFFSET))(this, x);
		}

		::System::Boolean _SetMainPathList_b__48_1(::RPG::Client::MissionChronicleMainPathData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA___C__SETMAINPATHLIST_B__48_1_OFFSET))(this, x);
		}

		::System::Boolean _IsProcessing_b__49_0(::RPG::Client::MissionChronicleMainPathData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA___C__ISPROCESSING_B__49_0_OFFSET))(this, x);
		}
	};
}
