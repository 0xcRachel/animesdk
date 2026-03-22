#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_777E68C60B3CC11F.h"
#include "unitysdk/RPG/Client/ActivityHipplen/StatusViewData.h"

class Class_1_7D1FC6C2A098568F;
class Class_1_DED4BA2FC834659B;
class Class_1_F9FBCC956DFCF137_11;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenIncidentOption; }
namespace RPG::GameCore { class HipplenIncidentOptionStepConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AF4DE620A0127371_METHOD_2_2CD6D17D088D5DB9_OFFSET UNITYSDK_OFFSET(0x91F85D0)
#define CLASS_2_AF4DE620A0127371_METHOD_2_4702F35034F861D9_OFFSET UNITYSDK_OFFSET(0x91F89C0)
#define CLASS_2_AF4DE620A0127371_METHOD_2_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0x91F8620)
#define CLASS_2_AF4DE620A0127371_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x91F8A90)
#define CLASS_2_AF4DE620A0127371_METHOD_2_5C14A48496CB9BA3_OFFSET UNITYSDK_OFFSET(0x91F83A0)
#define CLASS_2_AF4DE620A0127371_METHOD_2_681B1F716F37911B_OFFSET UNITYSDK_OFFSET(0x91F8700)
#define CLASS_2_AF4DE620A0127371_METHOD_2_8E0634CDC64D0684_OFFSET UNITYSDK_OFFSET(0x91F87A0)
#define CLASS_2_AF4DE620A0127371__CTOR_OFFSET UNITYSDK_OFFSET(0x91F8440)

inline static constexpr unsigned int Class_2_AF4DE620A0127371_TypeDefinitionIndex = 59944;

class Class_2_AF4DE620A0127371 : public ::Class_1_777E68C60B3CC11F
{
public:
	::RPG::GameCore::HipplenIncidentOptionStepConfig* Field_2_0; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::StatusViewData>* Field_2_1; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*>* Field_2_2; // 0x40
	::System::Int32 Field_2_3; // 0x48
	::System::Boolean Field_2_4; // 0x4C

	::System::Void _ctor(::RPG::GameCore::HipplenIncidentOptionStepConfig* a1, ::Class_1_DED4BA2FC834659B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenIncidentOptionStepConfig*, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_2_AF4DE620A0127371__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_2_AF4DE620A0127371* Method_2_5C14A48496CB9BA3(::RPG::GameCore::HipplenIncidentOptionStepConfig* a1, ::Class_1_DED4BA2FC834659B* a2)
	{
		return ((::Class_2_AF4DE620A0127371*(*)(::RPG::GameCore::HipplenIncidentOptionStepConfig*, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_2_AF4DE620A0127371_METHOD_2_5C14A48496CB9BA3_OFFSET))(a1, a2);
	}

	::System::Void Method_2_2CD6D17D088D5DB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF4DE620A0127371_METHOD_2_2CD6D17D088D5DB9_OFFSET))(this);
	}

	::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* Method_2_681B1F716F37911B()
	{
		return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF4DE620A0127371_METHOD_2_681B1F716F37911B_OFFSET))(this);
	}

	::System::Void Method_2_8E0634CDC64D0684(::Class_1_7D1FC6C2A098568F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D1FC6C2A098568F*))((::PBYTE)hIl2Cpp + CLASS_2_AF4DE620A0127371_METHOD_2_8E0634CDC64D0684_OFFSET))(this, a1);
	}

	::System::Void Method_2_4702F35034F861D9(::Class_1_F9FBCC956DFCF137_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_11*))((::PBYTE)hIl2Cpp + CLASS_2_AF4DE620A0127371_METHOD_2_4702F35034F861D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_51DEC44B986280C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF4DE620A0127371_METHOD_2_51DEC44B986280C0_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF4DE620A0127371_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
