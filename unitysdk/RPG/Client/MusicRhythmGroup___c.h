#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicRhythmLevel; }
namespace RPG::Client { class MusicRhythmTrack; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MUSICRHYTHMGROUP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F21AA0)
#define RPG_CLIENT_MUSICRHYTHMGROUP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F21AE0)
#define RPG_CLIENT_MUSICRHYTHMGROUP___C__GETALLLEVELS_B__5_0_OFFSET UNITYSDK_OFFSET(0x15F21B20)
#define RPG_CLIENT_MUSICRHYTHMGROUP___C__GETALLTRACKS_B__4_0_OFFSET UNITYSDK_OFFSET(0x15F21AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmGroup___c_TypeDefinitionIndex = 57017;

	class MusicRhythmGroup___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MusicRhythmGroup___c** StaticGet___9()
		{
			return (::RPG::Client::MusicRhythmGroup___c**)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmGroup___c_TypeDefinitionIndex)->GetStaticField(0x60280);
		}
		static ::System::Comparison_1<::RPG::Client::MusicRhythmLevel*>** StaticGet___9__5_0()
		{
			return (::System::Comparison_1<::RPG::Client::MusicRhythmLevel*>**)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmGroup___c_TypeDefinitionIndex)->GetStaticField(0x60288);
		}
		static ::System::Comparison_1<::RPG::Client::MusicRhythmTrack*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::RPG::Client::MusicRhythmTrack*>**)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmGroup___c_TypeDefinitionIndex)->GetStaticField(0x60290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAllTracks_b__4_0(::RPG::Client::MusicRhythmTrack* a, ::RPG::Client::MusicRhythmTrack* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MusicRhythmTrack*, ::RPG::Client::MusicRhythmTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP___C__GETALLTRACKS_B__4_0_OFFSET))(this, a, b);
		}

		::System::Int32 _GetAllLevels_b__5_0(::RPG::Client::MusicRhythmLevel* a, ::RPG::Client::MusicRhythmLevel* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MusicRhythmLevel*, ::RPG::Client::MusicRhythmLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP___C__GETALLLEVELS_B__5_0_OFFSET))(this, a, b);
		}
	};
}
