#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyPreviewInfo; }
namespace RPG::GameCore { class TrainPartyActionAddBuildCoinByStepConfig; }
namespace RPG::GameCore { class TrainPartyActionAddBuildCoinConfig; }
namespace RPG::GameCore { class TrainPartyActionAddStatByStepConfig; }
namespace RPG::GameCore { class TrainPartyActionAddStatConfig; }
namespace RPG::GameCore { class TrainPartyActionConfigBase; }

#define CLASS_1_91D3B0B6E2261BA5_METHOD_1_7A6999C726659F4B_OFFSET UNITYSDK_OFFSET(0xFD12FC0)
#define CLASS_1_91D3B0B6E2261BA5_METHOD_1_BEAD9084CA000DF5_OFFSET UNITYSDK_OFFSET(0xFD12E30)
#define CLASS_1_91D3B0B6E2261BA5_METHOD_1_DEBF1AF5B14CA51C_OFFSET UNITYSDK_OFFSET(0xFD12F10)
#define CLASS_1_91D3B0B6E2261BA5_METHOD_1_E1B73FAE5F38EE33_OFFSET UNITYSDK_OFFSET(0xFD12BD0)
#define CLASS_1_91D3B0B6E2261BA5_METHOD_1_F2D216EA3577FCA1_OFFSET UNITYSDK_OFFSET(0xFD13030)

inline static constexpr unsigned int Class_1_91D3B0B6E2261BA5_TypeDefinitionIndex = 59335;

class Class_1_91D3B0B6E2261BA5 : public ::System::Object
{
public:
	static ::System::Void Method_1_E1B73FAE5F38EE33(::RPG::GameCore::TrainPartyActionConfigBase* a1, ::RPG::Client::TrainParty::TrainPartyPreviewInfo* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyActionConfigBase*, ::RPG::Client::TrainParty::TrainPartyPreviewInfo*))((::PBYTE)hIl2Cpp + CLASS_1_91D3B0B6E2261BA5_METHOD_1_E1B73FAE5F38EE33_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BEAD9084CA000DF5(::RPG::GameCore::TrainPartyActionAddStatConfig* a1, ::RPG::Client::TrainParty::TrainPartyPreviewInfo* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyActionAddStatConfig*, ::RPG::Client::TrainParty::TrainPartyPreviewInfo*))((::PBYTE)hIl2Cpp + CLASS_1_91D3B0B6E2261BA5_METHOD_1_BEAD9084CA000DF5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DEBF1AF5B14CA51C(::RPG::GameCore::TrainPartyActionAddStatByStepConfig* a1, ::RPG::Client::TrainParty::TrainPartyPreviewInfo* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyActionAddStatByStepConfig*, ::RPG::Client::TrainParty::TrainPartyPreviewInfo*))((::PBYTE)hIl2Cpp + CLASS_1_91D3B0B6E2261BA5_METHOD_1_DEBF1AF5B14CA51C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7A6999C726659F4B(::RPG::GameCore::TrainPartyActionAddBuildCoinConfig* a1, ::RPG::Client::TrainParty::TrainPartyPreviewInfo* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyActionAddBuildCoinConfig*, ::RPG::Client::TrainParty::TrainPartyPreviewInfo*))((::PBYTE)hIl2Cpp + CLASS_1_91D3B0B6E2261BA5_METHOD_1_7A6999C726659F4B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F2D216EA3577FCA1(::RPG::GameCore::TrainPartyActionAddBuildCoinByStepConfig* a1, ::RPG::Client::TrainParty::TrainPartyPreviewInfo* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyActionAddBuildCoinByStepConfig*, ::RPG::Client::TrainParty::TrainPartyPreviewInfo*))((::PBYTE)hIl2Cpp + CLASS_1_91D3B0B6E2261BA5_METHOD_1_F2D216EA3577FCA1_OFFSET))(a1, a2);
	}
};
