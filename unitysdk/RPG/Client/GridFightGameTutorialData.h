#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightFunctionNodeType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameSession; }
namespace RPG::Client { class GridFightGameTutorialTopHintParam; }
namespace RPG::Client { class GridFightTutorialStageConfig; }
namespace RPG::GameCore { class GridFightPrepTutorialSubToastHintParam; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_CLEAROPTASKPARAM_OFFSET UNITYSDK_OFFSET(0x9399510)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93993C0)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_GETTUTORIALSTAGECONFIG_OFFSET UNITYSDK_OFFSET(0x93995C0)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_INIT_OFFSET UNITYSDK_OFFSET(0x9399190)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISSHOWEXTRAWRONGPOSTAG_OFFSET UNITYSDK_OFFSET(0x9399C60)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDAUTOSHOWSHOP_OFFSET UNITYSDK_OFFSET(0x9399A10)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDMONSTERREVEAL_OFFSET UNITYSDK_OFFSET(0x93996A0)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDROLESELL_OFFSET UNITYSDK_OFFSET(0x9399710)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDROUTESHOW_OFFSET UNITYSDK_OFFSET(0x9399B80)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDSHOWBOSSTOAST_OFFSET UNITYSDK_OFFSET(0x9399AA0)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDSHOWEQUIPRECOMMEND_OFFSET UNITYSDK_OFFSET(0x9399B10)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALUSETRIALAVATAR_OFFSET UNITYSDK_OFFSET(0x9399BF0)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_SETCONTEXT_OFFSET UNITYSDK_OFFSET(0x9399370)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_SETNODEVISIBLE_OFFSET UNITYSDK_OFFSET(0x9399D20)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_SETSHOWTOPHINT_OFFSET UNITYSDK_OFFSET(0x9399CC0)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9399DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTutorialData_TypeDefinitionIndex = 52041;

	class GridFightGameTutorialData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightFunctionNodeType, ::System::Boolean>* TutorialNodeVisibleDict; // 0x10
		::RPG::GameCore::GridFightPrepTutorialSubToastHintParam* SubToastHintParam; // 0x18
		::RPG::Client::GridFightGameTutorialTopHintParam* TopHintParam; // 0x20
		::RPG::Client::GridFightGameSession* _CurSession; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightTutorialStageConfig*>* TutorialStageConfigDict; // 0x30
		::System::Boolean ShowTopHint; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_INIT_OFFSET))(this);
		}

		::System::Void SetContext(::RPG::Client::GridFightGameSession* session)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_SETCONTEXT_OFFSET))(this, session);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::GridFightTutorialStageConfig* GetTutorialStageConfig(::System::UInt32 divisionID)
		{
			return ((::RPG::Client::GridFightTutorialStageConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_GETTUTORIALSTAGECONFIG_OFFSET))(this, divisionID);
		}

		::System::Boolean IsTutorialForbidMonsterReveal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDMONSTERREVEAL_OFFSET))(this);
		}

		::System::Boolean IsTutorialForbidRoleSell(::System::UInt32 roleUID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDROLESELL_OFFSET))(this, roleUID);
		}

		::System::Boolean IsTutorialForbidAutoShowShop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDAUTOSHOWSHOP_OFFSET))(this);
		}

		::System::Boolean IsTutorialForbidShowBossToast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDSHOWBOSSTOAST_OFFSET))(this);
		}

		::System::Boolean IsTutorialForbidShowEquipRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDSHOWEQUIPRECOMMEND_OFFSET))(this);
		}

		::System::Boolean IsTutorialForbidRouteShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDROUTESHOW_OFFSET))(this);
		}

		::System::Boolean IsTutorialUseTrialAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALUSETRIALAVATAR_OFFSET))(this);
		}

		::System::Boolean IsShowExtraWrongPosTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISSHOWEXTRAWRONGPOSTAG_OFFSET))(this);
		}

		::System::Void ClearOpTaskParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_CLEAROPTASKPARAM_OFFSET))(this);
		}

		::System::Void SetShowTopHint(::System::Boolean show, ::RPG::Client::GridFightGameTutorialTopHintParam* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::GridFightGameTutorialTopHintParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_SETSHOWTOPHINT_OFFSET))(this, show, param);
		}

		::System::Void SetNodeVisible(::RPG::GameCore::GridFightFunctionNodeType nodeType, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightFunctionNodeType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_SETNODEVISIBLE_OFFSET))(this, nodeType, visible);
		}
	};
}
