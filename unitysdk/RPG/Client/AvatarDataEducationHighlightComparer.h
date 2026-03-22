#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_AVATARDATAEDUCATIONHIGHLIGHTCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x8CCF3A0)
#define RPG_CLIENT_AVATARDATAEDUCATIONHIGHLIGHTCOMPARER_SETCACHEDNEWAVATARIDS_OFFSET UNITYSDK_OFFSET(0x8CCF1B0)
#define RPG_CLIENT_AVATARDATAEDUCATIONHIGHLIGHTCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x8CCEBA0)
#define RPG_CLIENT_AVATARDATAEDUCATIONHIGHLIGHTCOMPARER__ISENHANCED_OFFSET UNITYSDK_OFFSET(0x8CCF2E0)
#define RPG_CLIENT_AVATARDATAEDUCATIONHIGHLIGHTCOMPARER__ISNEW_OFFSET UNITYSDK_OFFSET(0x8CCF250)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarDataEducationHighlightComparer_TypeDefinitionIndex = 49672;

	class AvatarDataEducationHighlightComparer : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _NewAvatarIDs; // 0x10
		::System::Comparison_1<::RPG::Client::AvatarData*>* _Compare; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATAEDUCATIONHIGHLIGHTCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Void SetCachedNewAvatarIDs(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* newAvatarIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATAEDUCATIONHIGHLIGHTCOMPARER_SETCACHEDNEWAVATARIDS_OFFSET))(this, newAvatarIDs);
		}

		::System::Boolean _IsNew(::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATAEDUCATIONHIGHLIGHTCOMPARER__ISNEW_OFFSET))(this, avatarData);
		}

		static ::System::Boolean _IsEnhanced(::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Boolean(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATAEDUCATIONHIGHLIGHTCOMPARER__ISENHANCED_OFFSET))(avatarData);
		}

		::System::Int32 Compare(::RPG::Client::AvatarData* x, ::RPG::Client::AvatarData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarData*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATAEDUCATIONHIGHLIGHTCOMPARER_COMPARE_OFFSET))(this, x, y);
		}
	};
}
