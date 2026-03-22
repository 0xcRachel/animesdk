#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class AvatarDataCompositeComparer; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

#define RPG_CLIENT_AVATARDATACOMPARERBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x8CCD3E0)
#define RPG_CLIENT_AVATARDATACOMPARERBUILDER_CREATE_OFFSET UNITYSDK_OFFSET(0x8CCD350)
#define RPG_CLIENT_AVATARDATACOMPARERBUILDER_ORDERBYCOMPARER_OFFSET UNITYSDK_OFFSET(0x8CCD530)
#define RPG_CLIENT_AVATARDATACOMPARERBUILDER_ORDERBYCOMPARISON_OFFSET UNITYSDK_OFFSET(0x8CCD430)
#define RPG_CLIENT_AVATARDATACOMPARERBUILDER_ORDERBYKEY_OFFSET UNITYSDK_OFFSET(0x8CCD7A0)
#define RPG_CLIENT_AVATARDATACOMPARERBUILDER_ORDERBYPREDICATE_OFFSET UNITYSDK_OFFSET(0x8CCD990)
#define RPG_CLIENT_AVATARDATACOMPARERBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x8CCD2C0)
#define RPG_CLIENT_AVATARDATACOMPARERBUILDER__ORDERBYKEY_OFFSET UNITYSDK_OFFSET(0x8CCD880)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarDataComparerBuilder_TypeDefinitionIndex = 49657;

	class AvatarDataComparerBuilder : public ::System::Object
	{
	public:
		::RPG::Client::AvatarDataCompositeComparer* _CompositeComparer; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPARERBUILDER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AvatarDataComparerBuilder* Create()
		{
			return ((::RPG::Client::AvatarDataComparerBuilder*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPARERBUILDER_CREATE_OFFSET))();
		}

		::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>* Build()
		{
			return ((::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPARERBUILDER_BUILD_OFFSET))(this);
		}

		::RPG::Client::AvatarDataComparerBuilder* OrderByComparison(::System::Comparison_1<::RPG::Client::AvatarData*>* comparison, ::System::Boolean ascending)
		{
			return ((::RPG::Client::AvatarDataComparerBuilder*(*)(::PVOID, ::System::Comparison_1<::RPG::Client::AvatarData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPARERBUILDER_ORDERBYCOMPARISON_OFFSET))(this, comparison, ascending);
		}

		::RPG::Client::AvatarDataComparerBuilder* OrderByComparer(::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>* comparer, ::System::Boolean ascending)
		{
			return ((::RPG::Client::AvatarDataComparerBuilder*(*)(::PVOID, ::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPARERBUILDER_ORDERBYCOMPARER_OFFSET))(this, comparer, ascending);
		}

		::RPG::Client::AvatarDataComparerBuilder* OrderByKey(::System::Func_2<::RPG::Client::AvatarData*, ::System::Int32>* keySelector, ::System::Boolean ascending)
		{
			return ((::RPG::Client::AvatarDataComparerBuilder*(*)(::PVOID, ::System::Func_2<::RPG::Client::AvatarData*, ::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPARERBUILDER_ORDERBYKEY_OFFSET))(this, keySelector, ascending);
		}

		::RPG::Client::AvatarDataComparerBuilder* _OrderByKey(::System::Func_2<::RPG::Client::AvatarData*, ::System::Boolean>* keySelector, ::System::Boolean isFalseBeforeTrue)
		{
			return ((::RPG::Client::AvatarDataComparerBuilder*(*)(::PVOID, ::System::Func_2<::RPG::Client::AvatarData*, ::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPARERBUILDER__ORDERBYKEY_OFFSET))(this, keySelector, isFalseBeforeTrue);
		}

		::RPG::Client::AvatarDataComparerBuilder* OrderByPredicate(::System::Func_2<::RPG::Client::AvatarData*, ::System::Boolean>* isFront)
		{
			return ((::RPG::Client::AvatarDataComparerBuilder*(*)(::PVOID, ::System::Func_2<::RPG::Client::AvatarData*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPARERBUILDER_ORDERBYPREDICATE_OFFSET))(this, isFront);
		}
	};
}
