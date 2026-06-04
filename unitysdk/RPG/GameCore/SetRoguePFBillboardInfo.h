#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetBillboardInfo.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETROGUEPFBILLBOARDINFO_METHOD_4_A6C66B004CAC9FFA_OFFSET UNITYSDK_OFFSET(0x1A79A1F0)
#define RPG_GAMECORE_SETROGUEPFBILLBOARDINFO_METHOD_4_EA4FC2929367BC27_OFFSET UNITYSDK_OFFSET(0x1A79A170)
#define RPG_GAMECORE_SETROGUEPFBILLBOARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A79A1C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetRoguePFBillboardInfo_TypeDefinitionIndex = 20860;

	class SetRoguePFBillboardInfo : public ::RPG::GameCore::SetBillboardInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETROGUEPFBILLBOARDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EA4FC2929367BC27(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetRoguePFBillboardInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetRoguePFBillboardInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETROGUEPFBILLBOARDINFO_METHOD_4_EA4FC2929367BC27_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A6C66B004CAC9FFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetRoguePFBillboardInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetRoguePFBillboardInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETROGUEPFBILLBOARDINFO_METHOD_4_A6C66B004CAC9FFA_OFFSET))(a1, a2);
		}
	};
}
