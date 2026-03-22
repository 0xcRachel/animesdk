#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitRemarkPosition.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitRemarkLineEffectBase; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_CREATE_OFFSET UNITYSDK_OFFSET(0x9419850)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GETBACKSHOWINGLINEPARSERS_OFFSET UNITYSDK_OFFSET(0x9427C70)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GETFRONTSHOWINGLINEPARSERS_OFFSET UNITYSDK_OFFSET(0x9427870)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GET_BACKLINEPARSERS_OFFSET UNITYSDK_OFFSET(0x94281B0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GET_FRONTLINEPARSERS_OFFSET UNITYSDK_OFFSET(0x9428190)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GET_HASREMARK_OFFSET UNITYSDK_OFFSET(0x9428120)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GET_ISSHOWBACK_OFFSET UNITYSDK_OFFSET(0x94280D0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GET_ISSHOWFRONT_OFFSET UNITYSDK_OFFSET(0x9428080)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_SET_BACKLINEPARSERS_OFFSET UNITYSDK_OFFSET(0x94281C0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_SET_FRONTLINEPARSERS_OFFSET UNITYSDK_OFFSET(0x94281A0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x9427860)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER__GETSHOWINGLINEPARSERS_OFFSET UNITYSDK_OFFSET(0x94278C0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER__HASSHOWINGEFFECT_OFFSET UNITYSDK_OFFSET(0x9427CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkParser_TypeDefinitionIndex = 52020;

	class GridFightTraitRemarkParser : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineEffectBase*>* _FrontLineParsers_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineEffectBase*>* _BackLineParsers_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightTraitRemarkParser* Create(::RPG::Client::GridFightTrait* trait)
		{
			return ((::RPG::Client::GridFightTraitRemarkParser*(*)(::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_CREATE_OFFSET))(trait);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineEffectBase*>* GetFrontShowingLineParsers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineEffectBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GETFRONTSHOWINGLINEPARSERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineEffectBase*>* GetBackShowingLineParsers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineEffectBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GETBACKSHOWINGLINEPARSERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineEffectBase*>* _GetShowingLineParsers(::RPG::GameCore::GridFightTraitRemarkPosition position)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineEffectBase*>*(*)(::PVOID, ::RPG::GameCore::GridFightTraitRemarkPosition))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER__GETSHOWINGLINEPARSERS_OFFSET))(this, position);
		}

		::System::Boolean _HasShowingEffect(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTraitRemarkLineEffectBase*>* parsers)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTraitRemarkLineEffectBase*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER__HASSHOWINGEFFECT_OFFSET))(this, parsers);
		}

		::System::Boolean get_IsShowFront()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GET_ISSHOWFRONT_OFFSET))(this);
		}

		::System::Boolean get_IsShowBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GET_ISSHOWBACK_OFFSET))(this);
		}

		::System::Boolean get_HasRemark()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GET_HASREMARK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineEffectBase*>* get_FrontLineParsers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineEffectBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GET_FRONTLINEPARSERS_OFFSET))(this);
		}

		::System::Void set_FrontLineParsers(::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineEffectBase*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineEffectBase*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_SET_FRONTLINEPARSERS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineEffectBase*>* get_BackLineParsers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineEffectBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GET_BACKLINEPARSERS_OFFSET))(this);
		}

		::System::Void set_BackLineParsers(::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineEffectBase*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineEffectBase*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_SET_BACKLINEPARSERS_OFFSET))(this, value);
		}
	};
}
