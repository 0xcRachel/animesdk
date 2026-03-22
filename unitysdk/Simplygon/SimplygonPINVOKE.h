#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace Simplygon { class SimplygonPINVOKE_SWIGExceptionHelper; }
namespace Simplygon { class SimplygonPINVOKE_SWIGStringHelper; }
namespace System { class String; }

#define SIMPLYGON_SIMPLYGONPINVOKE_DEINITIALIZESIMPLYGON_OFFSET UNITYSDK_OFFSET(0x17B5F850)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPARRAY_OFFSET UNITYSDK_OFFSET(0x17B5FDC0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPCHARTAGGREGATORSETTINGS_OFFSET UNITYSDK_OFFSET(0x17B62FD0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPCOLORCASTERSETTINGS_OFFSET UNITYSDK_OFFSET(0x17B60B60)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPCOLORCASTER_OFFSET UNITYSDK_OFFSET(0x17B609C0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMAPPINGIMAGEOUTPUTMATERIALSETTINGS_OFFSET UNITYSDK_OFFSET(0x17B619F0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMAPPINGIMAGESETTINGS_OFFSET UNITYSDK_OFFSET(0x17B61870)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMAPPINGIMAGE_OFFSET UNITYSDK_OFFSET(0x17B60330)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMATERIALCASTERSETTINGS_OFFSET UNITYSDK_OFFSET(0x17B60530)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMATERIALCASTER_OFFSET UNITYSDK_OFFSET(0x17B604B0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMATERIALTABLE_OFFSET UNITYSDK_OFFSET(0x17B602B0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMATERIAL_OFFSET UNITYSDK_OFFSET(0x17B60090)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPNORMALCASTERSETTINGS_OFFSET UNITYSDK_OFFSET(0x17B61210)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPNORMALCASTER_OFFSET UNITYSDK_OFFSET(0x17B60FF0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPPIPELINESERIALIZER_OFFSET UNITYSDK_OFFSET(0x17B62E50)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPPIPELINE_OFFSET UNITYSDK_OFFSET(0x17B62D20)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPPROCESSINGOBJECT_OFFSET UNITYSDK_OFFSET(0x17B603B0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPREDUCTIONPROCESSOR_OFFSET UNITYSDK_OFFSET(0x17B61C00)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPREDUCTIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x17B613E0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPREMESHINGPROCESSOR_OFFSET UNITYSDK_OFFSET(0x17B62010)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPREMESHINGSETTINGS_OFFSET UNITYSDK_OFFSET(0x17B61D00)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSCENEEXPORTER_OFFSET UNITYSDK_OFFSET(0x17B623C0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSCENEIMPORTER_OFFSET UNITYSDK_OFFSET(0x17B625E0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSCENE_OFFSET UNITYSDK_OFFSET(0x17B62190)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSETTINGSOBJECT_OFFSET UNITYSDK_OFFSET(0x17B60430)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSHADINGNODE_OFFSET UNITYSDK_OFFSET(0x17B629A0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSHADINGTEXTURENODE_OFFSET UNITYSDK_OFFSET(0x17B62B40)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSTRINGARRAY_OFFSET UNITYSDK_OFFSET(0x17B63180)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPTABLE_OFFSET UNITYSDK_OFFSET(0x17B5FEC0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPTEXTURETABLE_OFFSET UNITYSDK_OFFSET(0x17B62920)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPTEXTURE_OFFSET UNITYSDK_OFFSET(0x17B62700)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPVALUEARRAY_OFFSET UNITYSDK_OFFSET(0x17B5FE40)
#define SIMPLYGON_SIMPLYGONPINVOKE_FAILED_OFFSET UNITYSDK_OFFSET(0x17B5F1D0)
#define SIMPLYGON_SIMPLYGONPINVOKE_GETLASTINITIALIZATIONERROR_OFFSET UNITYSDK_OFFSET(0x17B5FAC0)
#define SIMPLYGON_SIMPLYGONPINVOKE_INITIALIZESIMPLYGON__SWIG_0_OFFSET UNITYSDK_OFFSET(0x17B5F4B0)
#define SIMPLYGON_SIMPLYGONPINVOKE_INITIALIZESIMPLYGON__SWIG_1_OFFSET UNITYSDK_OFFSET(0x17B5F7B0)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CLEARERRORMESSAGES_OFFSET UNITYSDK_OFFSET(0x17B5EF60)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CLEARWARNINGMESSAGES_OFFSET UNITYSDK_OFFSET(0x17B5ECF0)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATECOLORCASTER_OFFSET UNITYSDK_OFFSET(0x17B5AE60)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATEMATERIALTABLE_OFFSET UNITYSDK_OFFSET(0x17B5A8F0)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x17B5A230)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATENORMALCASTER_OFFSET UNITYSDK_OFFSET(0x17B5B300)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATEPIPELINESERIALIZER_OFFSET UNITYSDK_OFFSET(0x17B5D7C0)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATEREDUCTIONPROCESSOR_OFFSET UNITYSDK_OFFSET(0x17B5B6C0)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATEREMESHINGPROCESSOR_OFFSET UNITYSDK_OFFSET(0x17B5BB50)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATESCENEEXPORTER_OFFSET UNITYSDK_OFFSET(0x17B5C0C0)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATESCENEIMPORTER_OFFSET UNITYSDK_OFFSET(0x17B5C560)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATESHADINGTEXTURENODE_OFFSET UNITYSDK_OFFSET(0x17B5D250)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATESTRINGARRAY_OFFSET UNITYSDK_OFFSET(0x17B5DC60)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATETEXTURETABLE_OFFSET UNITYSDK_OFFSET(0x17B5CDC0)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATETEXTURE_OFFSET UNITYSDK_OFFSET(0x17B5CA00)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_ERROROCCURRED_OFFSET UNITYSDK_OFFSET(0x17B5E520)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_GETERRORMESSAGES_OFFSET UNITYSDK_OFFSET(0x17B5EA70)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_GETWARNINGMESSAGES_OFFSET UNITYSDK_OFFSET(0x17B5E7D0)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_SENDTELEMETRY_OFFSET UNITYSDK_OFFSET(0x17B5DF90)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_WARNINGOCCURRED_OFFSET UNITYSDK_OFFSET(0x17B5E2A0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SIMPLYGON_VERSION_GET_OFFSET UNITYSDK_OFFSET(0x17B5FC20)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPARRAY_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63200)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCHARTAGGREGATORSETTINGS_SETCHARTAGGREGATORMODE_OFFSET UNITYSDK_OFFSET(0x17B62ED0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCHARTAGGREGATORSETTINGS_SETSEPARATEOVERLAPPINGCHARTS_OFFSET UNITYSDK_OFFSET(0x17B62F50)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCHARTAGGREGATORSETTINGS_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B64080)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTERSETTINGS_SETMATERIALCHANNEL_OFFSET UNITYSDK_OFFSET(0x17B60A40)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTERSETTINGS_SETOUTPUTIMAGEFILEFORMAT_OFFSET UNITYSDK_OFFSET(0x17B60AE0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTERSETTINGS_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63780)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_GETCOLORCASTERSETTINGS_OFFSET UNITYSDK_OFFSET(0x17B60940)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_GETOUTPUTFILEPATH_OFFSET UNITYSDK_OFFSET(0x17B60800)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_RUNPROCESSING_OFFSET UNITYSDK_OFFSET(0x17B608C0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_SETMAPPINGIMAGE_OFFSET UNITYSDK_OFFSET(0x17B606D0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_SETOUTPUTFILEPATH_OFFSET UNITYSDK_OFFSET(0x17B60760)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_SETSOURCEMATERIALS_OFFSET UNITYSDK_OFFSET(0x17B60640)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_SETSOURCETEXTURES_OFFSET UNITYSDK_OFFSET(0x17B605B0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63700)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGEOUTPUTMATERIALSETTINGS_SETTEXTUREHEIGHT_OFFSET UNITYSDK_OFFSET(0x17B61970)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGEOUTPUTMATERIALSETTINGS_SETTEXTUREWIDTH_OFFSET UNITYSDK_OFFSET(0x17B618F0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGEOUTPUTMATERIALSETTINGS_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63A00)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_GETCHARTAGGREGATORSETTINGS_OFFSET UNITYSDK_OFFSET(0x17B617F0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_GETOUTPUTMATERIALSETTINGS_OFFSET UNITYSDK_OFFSET(0x17B61460)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SETAPPLYNEWMATERIALIDS_OFFSET UNITYSDK_OFFSET(0x17B616F0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SETGENERATEMAPPINGIMAGE_OFFSET UNITYSDK_OFFSET(0x17B614F0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SETGENERATETANGENTS_OFFSET UNITYSDK_OFFSET(0x17B615F0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SETGENERATETEXCOORDS_OFFSET UNITYSDK_OFFSET(0x17B61570)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SETTEXCOORDGENERATORTYPE_OFFSET UNITYSDK_OFFSET(0x17B61770)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SETUSEFULLRETEXTURING_OFFSET UNITYSDK_OFFSET(0x17B61670)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63980)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGE_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63480)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIALCASTERSETTINGS_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63680)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIALCASTER_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63600)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIALTABLE_ADDMATERIAL_OFFSET UNITYSDK_OFFSET(0x17B60220)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIALTABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x17B60110)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIALTABLE_COPY_OFFSET UNITYSDK_OFFSET(0x17B60190)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIALTABLE_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63400)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIAL_ADDMATERIALCHANNEL_OFFSET UNITYSDK_OFFSET(0x17B5FF40)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIAL_SETSHADINGNETWORK_OFFSET UNITYSDK_OFFSET(0x17B5FFE0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIAL_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63380)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTERSETTINGS_SETGENERATETANGENTSPACENORMALS_OFFSET UNITYSDK_OFFSET(0x17B61190)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTERSETTINGS_SETMATERIALCHANNEL_OFFSET UNITYSDK_OFFSET(0x17B61070)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTERSETTINGS_SETOUTPUTIMAGEFILEFORMAT_OFFSET UNITYSDK_OFFSET(0x17B61110)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTERSETTINGS_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63880)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_GETNORMALCASTERSETTINGS_OFFSET UNITYSDK_OFFSET(0x17B60F70)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_GETOUTPUTFILEPATH_OFFSET UNITYSDK_OFFSET(0x17B60E30)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_RUNPROCESSING_OFFSET UNITYSDK_OFFSET(0x17B60EF0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_SETMAPPINGIMAGE_OFFSET UNITYSDK_OFFSET(0x17B60D00)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_SETOUTPUTFILEPATH_OFFSET UNITYSDK_OFFSET(0x17B60D90)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_SETSOURCEMATERIALS_OFFSET UNITYSDK_OFFSET(0x17B60C70)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_SETSOURCETEXTURES_OFFSET UNITYSDK_OFFSET(0x17B60BE0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63800)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPOBJECT_SETNAME_OFFSET UNITYSDK_OFFSET(0x17B5FD20)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPPIPELINESERIALIZER_LOADPIPELINEFROMFILE_OFFSET UNITYSDK_OFFSET(0x17B62DA0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPPIPELINESERIALIZER_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B64000)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPPIPELINE_RUNSCENEFROMFILE_OFFSET UNITYSDK_OFFSET(0x17B62BC0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPPIPELINE_RUNSCENE_OFFSET UNITYSDK_OFFSET(0x17B62C90)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPPIPELINE_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63F80)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPPROCESSINGOBJECT_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63500)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONPROCESSOR_GETREDUCTIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x17B61B80)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONPROCESSOR_RUNPROCESSING_OFFSET UNITYSDK_OFFSET(0x17B61A70)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONPROCESSOR_SETSCENE_OFFSET UNITYSDK_OFFSET(0x17B61AF0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONPROCESSOR_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63A80)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONSETTINGS_SETREDUCTIONTARGETS_OFFSET UNITYSDK_OFFSET(0x17B61290)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONSETTINGS_SETREDUCTIONTARGETTRIANGLERATIO_OFFSET UNITYSDK_OFFSET(0x17B61350)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONSETTINGS_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63900)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGPROCESSOR_GETMAPPINGIMAGESETTINGS_OFFSET UNITYSDK_OFFSET(0x17B61F90)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGPROCESSOR_GETMAPPINGIMAGE_OFFSET UNITYSDK_OFFSET(0x17B61E90)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGPROCESSOR_GETREMESHINGSETTINGS_OFFSET UNITYSDK_OFFSET(0x17B61F10)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGPROCESSOR_RUNPROCESSING_OFFSET UNITYSDK_OFFSET(0x17B61D80)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGPROCESSOR_SETSCENE_OFFSET UNITYSDK_OFFSET(0x17B61E00)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGPROCESSOR_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63B80)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGSETTINGS_SETONSCREENSIZE_OFFSET UNITYSDK_OFFSET(0x17B61C80)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGSETTINGS_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63B00)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEEXPORTER_RUN_OFFSET UNITYSDK_OFFSET(0x17B62340)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEEXPORTER_SETEXPORTFILEPATH_OFFSET UNITYSDK_OFFSET(0x17B62210)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEEXPORTER_SETSCENE_OFFSET UNITYSDK_OFFSET(0x17B622B0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEEXPORTER_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63C80)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEIMPORTER_GETSCENE_OFFSET UNITYSDK_OFFSET(0x17B624E0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEIMPORTER_RUN_OFFSET UNITYSDK_OFFSET(0x17B62560)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEIMPORTER_SETIMPORTFILEPATH_OFFSET UNITYSDK_OFFSET(0x17B62440)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEIMPORTER_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63D00)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSCENE_GETMATERIALTABLE_OFFSET UNITYSDK_OFFSET(0x17B62090)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSCENE_GETTEXTURETABLE_OFFSET UNITYSDK_OFFSET(0x17B62110)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSCENE_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63C00)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSETTINGSOBJECT_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63580)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSHADINGNODE_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63E80)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSHADINGTEXTURENODE_SETTEXCOORDLEVEL_OFFSET UNITYSDK_OFFSET(0x17B62AC0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSHADINGTEXTURENODE_SETTEXTURENAME_OFFSET UNITYSDK_OFFSET(0x17B62A20)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSHADINGTEXTURENODE_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63F00)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSTRINGARRAY_GETITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x17B63050)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSTRINGARRAY_GETITEM_OFFSET UNITYSDK_OFFSET(0x17B630D0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSTRINGARRAY_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B64100)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPTABLE_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63300)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPTEXTURETABLE_ADDTEXTURE_OFFSET UNITYSDK_OFFSET(0x17B62890)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPTEXTURETABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x17B62780)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPTEXTURETABLE_COPY_OFFSET UNITYSDK_OFFSET(0x17B62800)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPTEXTURETABLE_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63E00)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPTEXTURE_SETFILEPATH_OFFSET UNITYSDK_OFFSET(0x17B62660)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPTEXTURE_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63D80)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPVALUEARRAY_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x17B63280)
#define SIMPLYGON_SIMPLYGONPINVOKE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B5FCA0)

namespace Simplygon
{
	inline static constexpr unsigned int SimplygonPINVOKE_TypeDefinitionIndex = 28706;

	class SimplygonPINVOKE : public ::System::Object
	{
	public:
		static ::Simplygon::SimplygonPINVOKE_SWIGStringHelper** StaticGet_swigStringHelper()
		{
			return (::Simplygon::SimplygonPINVOKE_SWIGStringHelper**)Il2CppClass::FromTypeDefinitionIndex(SimplygonPINVOKE_TypeDefinitionIndex)->GetStaticField(0x3C430);
		}
		static ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper** StaticGet_swigExceptionHelper()
		{
			return (::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper**)Il2CppClass::FromTypeDefinitionIndex(SimplygonPINVOKE_TypeDefinitionIndex)->GetStaticField(0x3C438);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE__CCTOR_OFFSET))();
		}

		static ::System::Int32 Simplygon_VERSION_get()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SIMPLYGON_VERSION_GET_OFFSET))();
		}

		static ::System::Void spObject_SetName(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPOBJECT_SETNAME_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spArray(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPARRAY_OFFSET))(jarg1);
		}

		static ::System::Void delete_spValueArray(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPVALUEARRAY_OFFSET))(jarg1);
		}

		static ::System::Void delete_spTable(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPTABLE_OFFSET))(jarg1);
		}

		static ::System::Void spMaterial_AddMaterialChannel(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIAL_ADDMATERIALCHANNEL_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spMaterial_SetShadingNetwork(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2, ::System::Runtime::InteropServices::HandleRef jarg3)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIAL_SETSHADINGNETWORK_OFFSET))(jarg1, jarg2, jarg3);
		}

		static ::System::Void delete_spMaterial(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMATERIAL_OFFSET))(jarg1);
		}

		static ::System::Void spMaterialTable_Clear(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIALTABLE_CLEAR_OFFSET))(jarg1);
		}

		static ::System::Void spMaterialTable_Copy(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIALTABLE_COPY_OFFSET))(jarg1, jarg2);
		}

		static ::System::Int32 spMaterialTable_AddMaterial(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIALTABLE_ADDMATERIAL_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spMaterialTable(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMATERIALTABLE_OFFSET))(jarg1);
		}

		static ::System::Void delete_spMappingImage(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMAPPINGIMAGE_OFFSET))(jarg1);
		}

		static ::System::Void delete_spProcessingObject(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPPROCESSINGOBJECT_OFFSET))(jarg1);
		}

		static ::System::Void delete_spSettingsObject(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSETTINGSOBJECT_OFFSET))(jarg1);
		}

		static ::System::Void delete_spMaterialCaster(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMATERIALCASTER_OFFSET))(jarg1);
		}

		static ::System::Void delete_spMaterialCasterSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMATERIALCASTERSETTINGS_OFFSET))(jarg1);
		}

		static ::System::Void spColorCaster_SetSourceTextures(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_SETSOURCETEXTURES_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spColorCaster_SetSourceMaterials(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_SETSOURCEMATERIALS_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spColorCaster_SetMappingImage(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_SETMAPPINGIMAGE_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spColorCaster_SetOutputFilePath(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_SETOUTPUTFILEPATH_OFFSET))(jarg1, jarg2);
		}

		static ::System::String* spColorCaster_GetOutputFilePath(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::String*(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_GETOUTPUTFILEPATH_OFFSET))(jarg1);
		}

		static ::System::Int32 spColorCaster_RunProcessing(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_RUNPROCESSING_OFFSET))(jarg1);
		}

		static ::System::IntPtr spColorCaster_GetColorCasterSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_GETCOLORCASTERSETTINGS_OFFSET))(jarg1);
		}

		static ::System::Void delete_spColorCaster(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPCOLORCASTER_OFFSET))(jarg1);
		}

		static ::System::Void spColorCasterSettings_SetMaterialChannel(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTERSETTINGS_SETMATERIALCHANNEL_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spColorCasterSettings_SetOutputImageFileFormat(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Int32 jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTERSETTINGS_SETOUTPUTIMAGEFILEFORMAT_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spColorCasterSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPCOLORCASTERSETTINGS_OFFSET))(jarg1);
		}

		static ::System::Void spNormalCaster_SetSourceTextures(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_SETSOURCETEXTURES_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spNormalCaster_SetSourceMaterials(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_SETSOURCEMATERIALS_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spNormalCaster_SetMappingImage(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_SETMAPPINGIMAGE_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spNormalCaster_SetOutputFilePath(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_SETOUTPUTFILEPATH_OFFSET))(jarg1, jarg2);
		}

		static ::System::String* spNormalCaster_GetOutputFilePath(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::String*(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_GETOUTPUTFILEPATH_OFFSET))(jarg1);
		}

		static ::System::Int32 spNormalCaster_RunProcessing(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_RUNPROCESSING_OFFSET))(jarg1);
		}

		static ::System::IntPtr spNormalCaster_GetNormalCasterSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_GETNORMALCASTERSETTINGS_OFFSET))(jarg1);
		}

		static ::System::Void delete_spNormalCaster(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPNORMALCASTER_OFFSET))(jarg1);
		}

		static ::System::Void spNormalCasterSettings_SetMaterialChannel(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTERSETTINGS_SETMATERIALCHANNEL_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spNormalCasterSettings_SetOutputImageFileFormat(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Int32 jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTERSETTINGS_SETOUTPUTIMAGEFILEFORMAT_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spNormalCasterSettings_SetGenerateTangentSpaceNormals(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Boolean jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTERSETTINGS_SETGENERATETANGENTSPACENORMALS_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spNormalCasterSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPNORMALCASTERSETTINGS_OFFSET))(jarg1);
		}

		static ::System::Void spReductionSettings_SetReductionTargets(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Int32 jarg2, ::System::Boolean jarg3, ::System::Boolean jarg4, ::System::Boolean jarg5, ::System::Boolean jarg6)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONSETTINGS_SETREDUCTIONTARGETS_OFFSET))(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
		}

		static ::System::Void spReductionSettings_SetReductionTargetTriangleRatio(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Single jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Single))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONSETTINGS_SETREDUCTIONTARGETTRIANGLERATIO_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spReductionSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPREDUCTIONSETTINGS_OFFSET))(jarg1);
		}

		static ::System::IntPtr spMappingImageSettings_GetOutputMaterialSettings(::System::Runtime::InteropServices::HandleRef jarg1, ::System::UInt32 jarg2)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef, ::System::UInt32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_GETOUTPUTMATERIALSETTINGS_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spMappingImageSettings_SetGenerateMappingImage(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Boolean jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SETGENERATEMAPPINGIMAGE_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spMappingImageSettings_SetGenerateTexCoords(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Boolean jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SETGENERATETEXCOORDS_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spMappingImageSettings_SetGenerateTangents(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Boolean jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SETGENERATETANGENTS_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spMappingImageSettings_SetUseFullRetexturing(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Boolean jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SETUSEFULLRETEXTURING_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spMappingImageSettings_SetApplyNewMaterialIds(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Boolean jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SETAPPLYNEWMATERIALIDS_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spMappingImageSettings_SetTexCoordGeneratorType(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Int32 jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SETTEXCOORDGENERATORTYPE_OFFSET))(jarg1, jarg2);
		}

		static ::System::IntPtr spMappingImageSettings_GetChartAggregatorSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_GETCHARTAGGREGATORSETTINGS_OFFSET))(jarg1);
		}

		static ::System::Void delete_spMappingImageSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMAPPINGIMAGESETTINGS_OFFSET))(jarg1);
		}

		static ::System::Void spMappingImageOutputMaterialSettings_SetTextureWidth(::System::Runtime::InteropServices::HandleRef jarg1, ::System::UInt32 jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::UInt32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGEOUTPUTMATERIALSETTINGS_SETTEXTUREWIDTH_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spMappingImageOutputMaterialSettings_SetTextureHeight(::System::Runtime::InteropServices::HandleRef jarg1, ::System::UInt32 jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::UInt32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGEOUTPUTMATERIALSETTINGS_SETTEXTUREHEIGHT_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spMappingImageOutputMaterialSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMAPPINGIMAGEOUTPUTMATERIALSETTINGS_OFFSET))(jarg1);
		}

		static ::System::Int32 spReductionProcessor_RunProcessing(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONPROCESSOR_RUNPROCESSING_OFFSET))(jarg1);
		}

		static ::System::Void spReductionProcessor_SetScene(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONPROCESSOR_SETSCENE_OFFSET))(jarg1, jarg2);
		}

		static ::System::IntPtr spReductionProcessor_GetReductionSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONPROCESSOR_GETREDUCTIONSETTINGS_OFFSET))(jarg1);
		}

		static ::System::Void delete_spReductionProcessor(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPREDUCTIONPROCESSOR_OFFSET))(jarg1);
		}

		static ::System::Void spRemeshingSettings_SetOnScreenSize(::System::Runtime::InteropServices::HandleRef jarg1, ::System::UInt32 jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::UInt32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGSETTINGS_SETONSCREENSIZE_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spRemeshingSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPREMESHINGSETTINGS_OFFSET))(jarg1);
		}

		static ::System::Int32 spRemeshingProcessor_RunProcessing(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGPROCESSOR_RUNPROCESSING_OFFSET))(jarg1);
		}

		static ::System::Void spRemeshingProcessor_SetScene(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGPROCESSOR_SETSCENE_OFFSET))(jarg1, jarg2);
		}

		static ::System::IntPtr spRemeshingProcessor_GetMappingImage(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGPROCESSOR_GETMAPPINGIMAGE_OFFSET))(jarg1);
		}

		static ::System::IntPtr spRemeshingProcessor_GetRemeshingSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGPROCESSOR_GETREMESHINGSETTINGS_OFFSET))(jarg1);
		}

		static ::System::IntPtr spRemeshingProcessor_GetMappingImageSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGPROCESSOR_GETMAPPINGIMAGESETTINGS_OFFSET))(jarg1);
		}

		static ::System::Void delete_spRemeshingProcessor(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPREMESHINGPROCESSOR_OFFSET))(jarg1);
		}

		static ::System::IntPtr spScene_GetMaterialTable(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSCENE_GETMATERIALTABLE_OFFSET))(jarg1);
		}

		static ::System::IntPtr spScene_GetTextureTable(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSCENE_GETTEXTURETABLE_OFFSET))(jarg1);
		}

		static ::System::Void delete_spScene(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSCENE_OFFSET))(jarg1);
		}

		static ::System::Void spSceneExporter_SetExportFilePath(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEEXPORTER_SETEXPORTFILEPATH_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spSceneExporter_SetScene(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEEXPORTER_SETSCENE_OFFSET))(jarg1, jarg2);
		}

		static ::System::Int32 spSceneExporter_Run(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEEXPORTER_RUN_OFFSET))(jarg1);
		}

		static ::System::Void delete_spSceneExporter(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSCENEEXPORTER_OFFSET))(jarg1);
		}

		static ::System::Void spSceneImporter_SetImportFilePath(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEIMPORTER_SETIMPORTFILEPATH_OFFSET))(jarg1, jarg2);
		}

		static ::System::IntPtr spSceneImporter_GetScene(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEIMPORTER_GETSCENE_OFFSET))(jarg1);
		}

		static ::System::Int32 spSceneImporter_Run(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEIMPORTER_RUN_OFFSET))(jarg1);
		}

		static ::System::Void delete_spSceneImporter(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSCENEIMPORTER_OFFSET))(jarg1);
		}

		static ::System::Void spTexture_SetFilePath(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPTEXTURE_SETFILEPATH_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spTexture(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPTEXTURE_OFFSET))(jarg1);
		}

		static ::System::Void spTextureTable_Clear(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPTEXTURETABLE_CLEAR_OFFSET))(jarg1);
		}

		static ::System::Void spTextureTable_Copy(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPTEXTURETABLE_COPY_OFFSET))(jarg1, jarg2);
		}

		static ::System::Int32 spTextureTable_AddTexture(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPTEXTURETABLE_ADDTEXTURE_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spTextureTable(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPTEXTURETABLE_OFFSET))(jarg1);
		}

		static ::System::Void delete_spShadingNode(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSHADINGNODE_OFFSET))(jarg1);
		}

		static ::System::Void spShadingTextureNode_SetTextureName(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSHADINGTEXTURENODE_SETTEXTURENAME_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spShadingTextureNode_SetTexCoordLevel(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Int32 jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSHADINGTEXTURENODE_SETTEXCOORDLEVEL_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spShadingTextureNode(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSHADINGTEXTURENODE_OFFSET))(jarg1);
		}

		static ::System::Int32 spPipeline_RunSceneFromFile(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2, ::System::String* jarg3, ::System::Int32 jarg4)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPPIPELINE_RUNSCENEFROMFILE_OFFSET))(jarg1, jarg2, jarg3, jarg4);
		}

		static ::System::Int32 spPipeline_RunScene(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2, ::System::Int32 jarg3)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPPIPELINE_RUNSCENE_OFFSET))(jarg1, jarg2, jarg3);
		}

		static ::System::Void delete_spPipeline(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPPIPELINE_OFFSET))(jarg1);
		}

		static ::System::IntPtr spPipelineSerializer_LoadPipelineFromFile(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPPIPELINESERIALIZER_LOADPIPELINEFROMFILE_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spPipelineSerializer(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPPIPELINESERIALIZER_OFFSET))(jarg1);
		}

		static ::System::Void spChartAggregatorSettings_SetChartAggregatorMode(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Int32 jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCHARTAGGREGATORSETTINGS_SETCHARTAGGREGATORMODE_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spChartAggregatorSettings_SetSeparateOverlappingCharts(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Boolean jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCHARTAGGREGATORSETTINGS_SETSEPARATEOVERLAPPINGCHARTS_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spChartAggregatorSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPCHARTAGGREGATORSETTINGS_OFFSET))(jarg1);
		}

		static ::System::UInt32 spStringArray_GetItemCount(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::UInt32(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSTRINGARRAY_GETITEMCOUNT_OFFSET))(jarg1);
		}

		static ::System::String* spStringArray_GetItem(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Int32 jarg2)
		{
			return ((::System::String*(*)(::System::Runtime::InteropServices::HandleRef, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSTRINGARRAY_GETITEM_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spStringArray(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSTRINGARRAY_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreateMaterial(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATEMATERIAL_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreateMaterialTable(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATEMATERIALTABLE_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreateColorCaster(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATECOLORCASTER_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreateNormalCaster(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATENORMALCASTER_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreateReductionProcessor(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATEREDUCTIONPROCESSOR_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreateRemeshingProcessor(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATEREMESHINGPROCESSOR_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreateSceneExporter(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATESCENEEXPORTER_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreateSceneImporter(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATESCENEIMPORTER_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreateTexture(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATETEXTURE_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreateTextureTable(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATETEXTURETABLE_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreateShadingTextureNode(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATESHADINGTEXTURENODE_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreatePipelineSerializer(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATEPIPELINESERIALIZER_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreateStringArray(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATESTRINGARRAY_OFFSET))(jarg1);
		}

		static ::System::Void ISimplygon_SendTelemetry(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2, ::System::String* jarg3, ::System::String* jarg4, ::System::String* jarg5)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_SENDTELEMETRY_OFFSET))(jarg1, jarg2, jarg3, jarg4, jarg5);
		}

		static ::System::Boolean ISimplygon_WarningOccurred(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Boolean(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_WARNINGOCCURRED_OFFSET))(jarg1);
		}

		static ::System::Boolean ISimplygon_ErrorOccurred(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Boolean(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_ERROROCCURRED_OFFSET))(jarg1);
		}

		static ::System::Void ISimplygon_GetWarningMessages(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_GETWARNINGMESSAGES_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void ISimplygon_GetErrorMessages(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_GETERRORMESSAGES_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void ISimplygon_ClearWarningMessages(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CLEARWARNINGMESSAGES_OFFSET))(jarg1);
		}

		static ::System::Void ISimplygon_ClearErrorMessages(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CLEARERRORMESSAGES_OFFSET))(jarg1);
		}

		static ::System::Boolean Failed(::System::Int32 jarg1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_FAILED_OFFSET))(jarg1);
		}

		static ::System::IntPtr InitializeSimplygon__SWIG_0(::System::String* jarg1, ::System::String* jarg2)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_INITIALIZESIMPLYGON__SWIG_0_OFFSET))(jarg1, jarg2);
		}

		static ::System::IntPtr InitializeSimplygon__SWIG_1(::System::String* jarg1)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_INITIALIZESIMPLYGON__SWIG_1_OFFSET))(jarg1);
		}

		static ::System::Void DeinitializeSimplygon(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DEINITIALIZESIMPLYGON_OFFSET))(jarg1);
		}

		static ::System::Int32 GetLastInitializationError()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_GETLASTINITIALIZATIONERROR_OFFSET))();
		}

		static ::System::IntPtr spArray_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPARRAY_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spValueArray_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPVALUEARRAY_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spTable_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPTABLE_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spMaterial_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIAL_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spMaterialTable_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIALTABLE_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spMappingImage_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGE_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spProcessingObject_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPPROCESSINGOBJECT_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spSettingsObject_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSETTINGSOBJECT_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spMaterialCaster_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIALCASTER_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spMaterialCasterSettings_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIALCASTERSETTINGS_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spColorCaster_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spColorCasterSettings_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTERSETTINGS_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spNormalCaster_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spNormalCasterSettings_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTERSETTINGS_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spReductionSettings_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONSETTINGS_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spMappingImageSettings_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spMappingImageOutputMaterialSettings_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGEOUTPUTMATERIALSETTINGS_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spReductionProcessor_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONPROCESSOR_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spRemeshingSettings_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGSETTINGS_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spRemeshingProcessor_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGPROCESSOR_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spScene_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSCENE_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spSceneExporter_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEEXPORTER_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spSceneImporter_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEIMPORTER_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spTexture_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPTEXTURE_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spTextureTable_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPTEXTURETABLE_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spShadingNode_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSHADINGNODE_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spShadingTextureNode_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSHADINGTEXTURENODE_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spPipeline_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPPIPELINE_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spPipelineSerializer_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPPIPELINESERIALIZER_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spChartAggregatorSettings_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCHARTAGGREGATORSETTINGS_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spStringArray_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSTRINGARRAY_SWIGUPCAST_OFFSET))(jarg1);
		}
	};
}
