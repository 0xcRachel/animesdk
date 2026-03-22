#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARDATACOMPOSITECOMPARER_ADDCOMPARER_OFFSET UNITYSDK_OFFSET(0x8CCD5A0)
#define RPG_CLIENT_AVATARDATACOMPOSITECOMPARER_ADDCOMPARISON_OFFSET UNITYSDK_OFFSET(0x8CCD4A0)
#define RPG_CLIENT_AVATARDATACOMPOSITECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x8CCEA30)
#define RPG_CLIENT_AVATARDATACOMPOSITECOMPARER_GETCOMPARERS_OFFSET UNITYSDK_OFFSET(0x8CCE480)
#define RPG_CLIENT_AVATARDATACOMPOSITECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x8CCD310)
#define RPG_CLIENT_AVATARDATACOMPOSITECOMPARER__REGISTERCOMPARER_OFFSET UNITYSDK_OFFSET(0x8CCE9A0)
#define RPG_CLIENT_AVATARDATACOMPOSITECOMPARER__REGISTERREVERSED_OFFSET UNITYSDK_OFFSET(0x8CCE920)
#define RPG_CLIENT_AVATARDATACOMPOSITECOMPARER__SHOULDREVERSE_OFFSET UNITYSDK_OFFSET(0x8CCEB40)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarDataCompositeComparer_TypeDefinitionIndex = 49668;

	class AvatarDataCompositeComparer : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* _ReversedComparisonIndices; // 0x10
		::System::Collections::Generic::List_1<::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>*>* _ComparerReferences; // 0x18
		::System::Collections::Generic::List_1<::System::Comparison_1<::RPG::Client::AvatarData*>*>* _Comparisons; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPOSITECOMPARER__CTOR_OFFSET))(this);
		}

		::System::Void AddComparison(::System::Comparison_1<::RPG::Client::AvatarData*>* compareDelegate, ::System::Boolean ascending)
		{
			return ((::System::Void(*)(::PVOID, ::System::Comparison_1<::RPG::Client::AvatarData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPOSITECOMPARER_ADDCOMPARISON_OFFSET))(this, compareDelegate, ascending);
		}

		::System::Void AddComparer(::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>* comparer, ::System::Boolean ascending)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPOSITECOMPARER_ADDCOMPARER_OFFSET))(this, comparer, ascending);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>*>* GetComparers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPOSITECOMPARER_GETCOMPARERS_OFFSET))(this);
		}

		::System::Int32 Compare(::RPG::Client::AvatarData* x, ::RPG::Client::AvatarData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarData*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPOSITECOMPARER_COMPARE_OFFSET))(this, x, y);
		}

		::System::Void _RegisterComparer(::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>* comparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPOSITECOMPARER__REGISTERCOMPARER_OFFSET))(this, comparer);
		}

		::System::Void _RegisterReversed(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPOSITECOMPARER__REGISTERREVERSED_OFFSET))(this, index);
		}

		::System::Boolean _ShouldReverse(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPOSITECOMPARER__SHOULDREVERSE_OFFSET))(this, index);
		}
	};
}
