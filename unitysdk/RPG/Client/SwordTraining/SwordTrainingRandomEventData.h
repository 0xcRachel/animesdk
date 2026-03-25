#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::SwordTraining { class SwordTrainingRandomEventOptionData; }
namespace RPG::GameCore { class SwordTrainingEventRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA518B20)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA518E50)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA5191A0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET_EVENTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xA519270)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET_EVENTTEXT1_OFFSET UNITYSDK_OFFSET(0xA519310)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET_EVENTTEXT2_OFFSET UNITYSDK_OFFSET(0xA5193E0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET_EVENTTEXT3_OFFSET UNITYSDK_OFFSET(0xA5194B0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET_RANDOMEVENTID_OFFSET UNITYSDK_OFFSET(0xA519180)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA518D30)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_SET_RANDOMEVENTID_OFFSET UNITYSDK_OFFSET(0xA519190)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA518CE0)

namespace RPG::Client::SwordTraining
{
	inline static constexpr unsigned int SwordTrainingRandomEventData_TypeDefinitionIndex = 61589;

	class SwordTrainingRandomEventData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingRandomEventOptionData*>* OptionDataList; // 0x10
		::System::UInt32 _RandomEventID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTraining::SwordTrainingRandomEventData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingRandomEventData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_CREATE_OFFSET))(id);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 get_RandomEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET_RANDOMEVENTID_OFFSET))(this);
		}

		::System::Void set_RandomEventID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_SET_RANDOMEVENTID_OFFSET))(this, value);
		}

		::RPG::GameCore::SwordTrainingEventRow* get__Row()
		{
			return ((::RPG::GameCore::SwordTrainingEventRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET_DESC_OFFSET))(this);
		}

		::System::String* get_EventImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET_EVENTIMAGEPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_EventText1()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET_EVENTTEXT1_OFFSET))(this);
		}

		::RPG::Client::TextID get_EventText2()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET_EVENTTEXT2_OFFSET))(this);
		}

		::RPG::Client::TextID get_EventText3()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET_EVENTTEXT3_OFFSET))(this);
		}
	};
}
