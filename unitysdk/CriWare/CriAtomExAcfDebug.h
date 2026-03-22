#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_AisacControlInfo.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_AisacControlInfoForMarshaling.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_CategoryInfo.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_CategoryInfoForMarshaling.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_DspBusInfo.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_DspBusInfoForMarshaling.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_GlobalAisacInfo.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_GlobalAisacInfoForMarshaling.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_SelectorInfo.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_SelectorInfoForMarshaling.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_SelectorLabelInfo.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_SelectorLabelInfoForMarshaling.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETAISACCONTROLIDBYNAME_OFFSET UNITYSDK_OFFSET(0x1129A1A0)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETAISACCONTROLINFO_OFFSET UNITYSDK_OFFSET(0x1129A030)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETAISACCONTROLNAMEBYID_OFFSET UNITYSDK_OFFSET(0x1129A2F0)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETCATEGORYINFOBYID_OFFSET UNITYSDK_OFFSET(0x11299960)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETCATEGORYINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x112997E0)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETCATEGORYINFO_OFFSET UNITYSDK_OFFSET(0x11299600)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETDSPBUSINFORMATION_OFFSET UNITYSDK_OFFSET(0x11299CB0)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETGLOBALAISACINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x1129A740)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETGLOBALAISACINFO_OFFSET UNITYSDK_OFFSET(0x1129A550)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETNUMAISACCONTROLS_OFFSET UNITYSDK_OFFSET(0x11299EF0)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETNUMBUSES_OFFSET UNITYSDK_OFFSET(0x11299A70)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETNUMCATEGORIES_OFFSET UNITYSDK_OFFSET(0x112994A0)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETNUMGLOBALAISACS_OFFSET UNITYSDK_OFFSET(0x1129A3F0)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETNUMSELECTORS_OFFSET UNITYSDK_OFFSET(0x1129A860)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETSELECTORINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x1129A9B0)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETSELECTORINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x1129AB70)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETSELECTORLABELINFO_OFFSET UNITYSDK_OFFSET(0x1129AD10)
#define CRIWARE_CRIATOMEXACFDEBUG_GETAISACCONTROLIDBYNAME_OFFSET UNITYSDK_OFFSET(0x1129A100)
#define CRIWARE_CRIATOMEXACFDEBUG_GETAISACCONTROLINFO_OFFSET UNITYSDK_OFFSET(0x11299F70)
#define CRIWARE_CRIATOMEXACFDEBUG_GETAISACCONTROLNAMEBYID_OFFSET UNITYSDK_OFFSET(0x1129A240)
#define CRIWARE_CRIATOMEXACFDEBUG_GETCATEGORYINFOBYID_OFFSET UNITYSDK_OFFSET(0x11299880)
#define CRIWARE_CRIATOMEXACFDEBUG_GETCATEGORYINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x11299520)
#define CRIWARE_CRIATOMEXACFDEBUG_GETCATEGORYINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x112996E0)
#define CRIWARE_CRIATOMEXACFDEBUG_GETDSPBUSINFORMATION_OFFSET UNITYSDK_OFFSET(0x11299AF0)
#define CRIWARE_CRIATOMEXACFDEBUG_GETGLOBALAISACINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x1129A640)
#define CRIWARE_CRIATOMEXACFDEBUG_GETGLOBALAISACINFO_OFFSET UNITYSDK_OFFSET(0x1129A470)
#define CRIWARE_CRIATOMEXACFDEBUG_GETNUMAISACCONTROLS_OFFSET UNITYSDK_OFFSET(0x11299E70)
#define CRIWARE_CRIATOMEXACFDEBUG_GETNUMBUSES_OFFSET UNITYSDK_OFFSET(0x112999F0)
#define CRIWARE_CRIATOMEXACFDEBUG_GETNUMCATEGORIES_OFFSET UNITYSDK_OFFSET(0x11299420)
#define CRIWARE_CRIATOMEXACFDEBUG_GETNUMGLOBALAISACS_OFFSET UNITYSDK_OFFSET(0x1129A370)
#define CRIWARE_CRIATOMEXACFDEBUG_GETNUMSELECTORS_OFFSET UNITYSDK_OFFSET(0x1129A7E0)
#define CRIWARE_CRIATOMEXACFDEBUG_GETSELECTORINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x1129A8E0)
#define CRIWARE_CRIATOMEXACFDEBUG_GETSELECTORINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x1129AA90)
#define CRIWARE_CRIATOMEXACFDEBUG_GETSELECTORLABELINFO_OFFSET UNITYSDK_OFFSET(0x1129AC10)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcfDebug_TypeDefinitionIndex = 30320;

	class CriAtomExAcfDebug : public ::System::Object
	{
	public:
		static ::System::Int32 GetNumCategories()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETNUMCATEGORIES_OFFSET))();
		}

		static ::System::Boolean GetCategoryInfoByIndex(::System::UInt16 index, ::CriWare::CriAtomExAcfDebug_CategoryInfo& categoryInfo)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomExAcfDebug_CategoryInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETCATEGORYINFOBYINDEX_OFFSET))(index, categoryInfo);
		}

		static ::System::Boolean GetCategoryInfoByName(::System::String* name, ::CriWare::CriAtomExAcfDebug_CategoryInfo& categoryInfo)
		{
			return ((::System::Boolean(*)(::System::String*, ::CriWare::CriAtomExAcfDebug_CategoryInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETCATEGORYINFOBYNAME_OFFSET))(name, categoryInfo);
		}

		static ::System::Boolean GetCategoryInfoById(::System::UInt32 id, ::CriWare::CriAtomExAcfDebug_CategoryInfo& categoryInfo)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::CriWare::CriAtomExAcfDebug_CategoryInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETCATEGORYINFOBYID_OFFSET))(id, categoryInfo);
		}

		static ::System::Int32 GetNumBuses()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETNUMBUSES_OFFSET))();
		}

		static ::System::Boolean GetDspBusInformation(::System::UInt16 index, ::CriWare::CriAtomExAcfDebug_DspBusInfo& dspBusInfo)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomExAcfDebug_DspBusInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETDSPBUSINFORMATION_OFFSET))(index, dspBusInfo);
		}

		static ::System::Int32 GetNumAisacControls()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETNUMAISACCONTROLS_OFFSET))();
		}

		static ::System::Boolean GetAisacControlInfo(::System::UInt16 index, ::CriWare::CriAtomExAcfDebug_AisacControlInfo& info)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomExAcfDebug_AisacControlInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETAISACCONTROLINFO_OFFSET))(index, info);
		}

		static ::System::UInt32 GetAisacControlIdByName(::System::String* name)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETAISACCONTROLIDBYNAME_OFFSET))(name);
		}

		static ::System::String* GetAisacControlNameById(::System::UInt32 id)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETAISACCONTROLNAMEBYID_OFFSET))(id);
		}

		static ::System::Int32 GetNumGlobalAisacs()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETNUMGLOBALAISACS_OFFSET))();
		}

		static ::System::Boolean GetGlobalAisacInfo(::System::UInt16 index, ::CriWare::CriAtomExAcfDebug_GlobalAisacInfo& info)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomExAcfDebug_GlobalAisacInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETGLOBALAISACINFO_OFFSET))(index, info);
		}

		static ::System::Boolean GetGlobalAisacInfoByName(::System::String* name, ::CriWare::CriAtomExAcfDebug_GlobalAisacInfo& info)
		{
			return ((::System::Boolean(*)(::System::String*, ::CriWare::CriAtomExAcfDebug_GlobalAisacInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETGLOBALAISACINFOBYNAME_OFFSET))(name, info);
		}

		static ::System::Int32 GetNumSelectors()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETNUMSELECTORS_OFFSET))();
		}

		static ::System::Boolean GetSelectorInfoByIndex(::System::UInt16 index, ::CriWare::CriAtomExAcfDebug_SelectorInfo& info)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomExAcfDebug_SelectorInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETSELECTORINFOBYINDEX_OFFSET))(index, info);
		}

		static ::System::Boolean GetSelectorInfoByName(::System::String* name, ::CriWare::CriAtomExAcfDebug_SelectorInfo& info)
		{
			return ((::System::Boolean(*)(::System::String*, ::CriWare::CriAtomExAcfDebug_SelectorInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETSELECTORINFOBYNAME_OFFSET))(name, info);
		}

		static ::System::Boolean GetSelectorLabelInfo(::CriWare::CriAtomExAcfDebug_SelectorInfo& selectorInfo, ::System::UInt16 index, ::CriWare::CriAtomExAcfDebug_SelectorLabelInfo& labelInfo)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExAcfDebug_SelectorInfo&, ::System::UInt16, ::CriWare::CriAtomExAcfDebug_SelectorLabelInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETSELECTORLABELINFO_OFFSET))(selectorInfo, index, labelInfo);
		}

		static ::System::Int32 criAtomExAcf_GetNumCategories()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETNUMCATEGORIES_OFFSET))();
		}

		static ::System::Int32 criAtomExAcf_GetCategoryInfo(::System::UInt16 index, ::CriWare::CriAtomExAcfDebug_CategoryInfoForMarshaling& categoryInfo)
		{
			return ((::System::Int32(*)(::System::UInt16, ::CriWare::CriAtomExAcfDebug_CategoryInfoForMarshaling&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETCATEGORYINFO_OFFSET))(index, categoryInfo);
		}

		static ::System::Int32 criAtomExAcf_GetCategoryInfoByName(::System::String* name, ::CriWare::CriAtomExAcfDebug_CategoryInfoForMarshaling& categoryInfo)
		{
			return ((::System::Int32(*)(::System::String*, ::CriWare::CriAtomExAcfDebug_CategoryInfoForMarshaling&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETCATEGORYINFOBYNAME_OFFSET))(name, categoryInfo);
		}

		static ::System::Int32 criAtomExAcf_GetCategoryInfoById(::System::UInt32 id, ::CriWare::CriAtomExAcfDebug_CategoryInfoForMarshaling& categoryInfo)
		{
			return ((::System::Int32(*)(::System::UInt32, ::CriWare::CriAtomExAcfDebug_CategoryInfoForMarshaling&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETCATEGORYINFOBYID_OFFSET))(id, categoryInfo);
		}

		static ::System::Int32 criAtomExAcf_GetNumBuses()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETNUMBUSES_OFFSET))();
		}

		static ::System::Int32 criAtomExAcf_GetDspBusInformation(::System::UInt16 index, ::CriWare::CriAtomExAcfDebug_DspBusInfoForMarshaling& dspBusInfo)
		{
			return ((::System::Int32(*)(::System::UInt16, ::CriWare::CriAtomExAcfDebug_DspBusInfoForMarshaling&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETDSPBUSINFORMATION_OFFSET))(index, dspBusInfo);
		}

		static ::System::Int32 criAtomExAcf_GetNumAisacControls()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETNUMAISACCONTROLS_OFFSET))();
		}

		static ::System::Int32 criAtomExAcf_GetAisacControlInfo(::System::UInt16 index, ::CriWare::CriAtomExAcfDebug_AisacControlInfoForMarshaling& info)
		{
			return ((::System::Int32(*)(::System::UInt16, ::CriWare::CriAtomExAcfDebug_AisacControlInfoForMarshaling&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETAISACCONTROLINFO_OFFSET))(index, info);
		}

		static ::System::UInt32 criAtomExAcf_GetAisacControlIdByName(::System::String* name)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETAISACCONTROLIDBYNAME_OFFSET))(name);
		}

		static ::System::IntPtr criAtomExAcf_GetAisacControlNameById(::System::UInt32 id)
		{
			return ((::System::IntPtr(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETAISACCONTROLNAMEBYID_OFFSET))(id);
		}

		static ::System::Int32 criAtomExAcf_GetNumGlobalAisacs()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETNUMGLOBALAISACS_OFFSET))();
		}

		static ::System::Int32 criAtomExAcf_GetGlobalAisacInfo(::System::UInt16 index, ::CriWare::CriAtomExAcfDebug_GlobalAisacInfoForMarshaling& info)
		{
			return ((::System::Int32(*)(::System::UInt16, ::CriWare::CriAtomExAcfDebug_GlobalAisacInfoForMarshaling&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETGLOBALAISACINFO_OFFSET))(index, info);
		}

		static ::System::Int32 criAtomExAcf_GetGlobalAisacInfoByName(::System::String* name, ::CriWare::CriAtomExAcfDebug_GlobalAisacInfoForMarshaling& info)
		{
			return ((::System::Int32(*)(::System::String*, ::CriWare::CriAtomExAcfDebug_GlobalAisacInfoForMarshaling&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETGLOBALAISACINFOBYNAME_OFFSET))(name, info);
		}

		static ::System::Int32 criAtomExAcf_GetNumSelectors()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETNUMSELECTORS_OFFSET))();
		}

		static ::System::Int32 criAtomExAcf_GetSelectorInfoByIndex(::System::UInt16 index, ::CriWare::CriAtomExAcfDebug_SelectorInfoForMarshaling& info)
		{
			return ((::System::Int32(*)(::System::UInt16, ::CriWare::CriAtomExAcfDebug_SelectorInfoForMarshaling&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETSELECTORINFOBYINDEX_OFFSET))(index, info);
		}

		static ::System::Int32 criAtomExAcf_GetSelectorInfoByName(::System::String* name, ::CriWare::CriAtomExAcfDebug_SelectorInfoForMarshaling& info)
		{
			return ((::System::Int32(*)(::System::String*, ::CriWare::CriAtomExAcfDebug_SelectorInfoForMarshaling&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETSELECTORINFOBYNAME_OFFSET))(name, info);
		}

		static ::System::Int32 criAtomExAcf_GetSelectorLabelInfo(::CriWare::CriAtomExAcfDebug_SelectorInfoForMarshaling& info, ::System::UInt16 labelIndex, ::CriWare::CriAtomExAcfDebug_SelectorLabelInfoForMarshaling& label_info)
		{
			return ((::System::Int32(*)(::CriWare::CriAtomExAcfDebug_SelectorInfoForMarshaling&, ::System::UInt16, ::CriWare::CriAtomExAcfDebug_SelectorLabelInfoForMarshaling&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETSELECTORLABELINFO_OFFSET))(info, labelIndex, label_info);
		}
	};
}
