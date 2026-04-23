#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightPortalData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPORTALCALCULATOR_CALCULATE_OFFSET UNITYSDK_OFFSET(0x1810B820)
#define RPG_CLIENT_GRIDFIGHTPORTALCALCULATOR__CALCULATEPORTALSCORE_OFFSET UNITYSDK_OFFSET(0x1810B870)
#define RPG_CLIENT_GRIDFIGHTPORTALCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1810BE40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPortalCalculator_TypeDefinitionIndex = 59664;

	class GridFightPortalCalculator : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightPortalData*>** StaticGet_Portals()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::GridFightPortalData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightPortalCalculator_TypeDefinitionIndex)->GetStaticField(0x2DE20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALCALCULATOR__CTOR_OFFSET))(this);
		}

		::System::Single Calculate(::RPG::Client::GridFightGameRefData* refData)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALCALCULATOR_CALCULATE_OFFSET))(this, refData);
		}

		::System::Single _CalculatePortalScore(::RPG::Client::GridFightGameRefData* refData)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALCALCULATOR__CALCULATEPORTALSCORE_OFFSET))(this, refData);
		}
	};
}
