#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LogTag.h"
#include "unitysdk/Struct_2_2166A82D5C4E630D.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505;
class Class_0_16E4307DCC419505_1;
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics { class StackTrace; }
namespace System::Text { class StringBuilder; }

#define RPG_SUPERDEBUG_ASSERTFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1A6D9B00)
#define RPG_SUPERDEBUG_ASSERTFORMAT_OFFSET UNITYSDK_OFFSET(0x1A6D9880)
#define RPG_SUPERDEBUG_ASSERT_1_OFFSET UNITYSDK_OFFSET(0x1A6D9540)
#define RPG_SUPERDEBUG_ASSERT_2_OFFSET UNITYSDK_OFFSET(0x1A6D97C0)
#define RPG_SUPERDEBUG_ASSERT_OFFSET UNITYSDK_OFFSET(0x1A6D9490)
#define RPG_SUPERDEBUG_DISABLEALLTAGSWITCHES_OFFSET UNITYSDK_OFFSET(0x1A6D9D60)
#define RPG_SUPERDEBUG_DRAWARROW_OFFSET UNITYSDK_OFFSET(0x1A6D6CB0)
#define RPG_SUPERDEBUG_DRAWBOX_OFFSET UNITYSDK_OFFSET(0x1A6D6F00)
#define RPG_SUPERDEBUG_DRAWCIRCLE_1_OFFSET UNITYSDK_OFFSET(0x1A6D58C0)
#define RPG_SUPERDEBUG_DRAWCIRCLE_2_OFFSET UNITYSDK_OFFSET(0x1A6D58F0)
#define RPG_SUPERDEBUG_DRAWCIRCLE_OFFSET UNITYSDK_OFFSET(0x1A6D5890)
#define RPG_SUPERDEBUG_DRAWFANSHAPED_OFFSET UNITYSDK_OFFSET(0x1A6D5EB0)
#define RPG_SUPERDEBUG_DRAWGRID_OFFSET UNITYSDK_OFFSET(0x1A6D6710)
#define RPG_SUPERDEBUG_DRAWLINE_1_OFFSET UNITYSDK_OFFSET(0x1A6D5460)
#define RPG_SUPERDEBUG_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x1A6D5370)
#define RPG_SUPERDEBUG_DRAWMINMAXBOX_OFFSET UNITYSDK_OFFSET(0x1A6D6F10)
#define RPG_SUPERDEBUG_DRAWPOINT_OFFSET UNITYSDK_OFFSET(0x1A6D6670)
#define RPG_SUPERDEBUG_DRAWRAY_1_OFFSET UNITYSDK_OFFSET(0x1A6D56F0)
#define RPG_SUPERDEBUG_DRAWRAY_OFFSET UNITYSDK_OFFSET(0x1A6D55A0)
#define RPG_SUPERDEBUG_DRAWRECTANGLE_OFFSET UNITYSDK_OFFSET(0x1A6D6F20)
#define RPG_SUPERDEBUG_DRAWSPHERE_OFFSET UNITYSDK_OFFSET(0x1A6D6700)
#define RPG_SUPERDEBUG_ENABLEALLTAGSWITCHES_OFFSET UNITYSDK_OFFSET(0x1A6D9C20)
#define RPG_SUPERDEBUG_EXTRACTFORMATTEDSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1A6D8D70)
#define RPG_SUPERDEBUG_EXTRACTSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1A6D8D00)
#define RPG_SUPERDEBUG_GETTIMESTAMPSTRING_OFFSET UNITYSDK_OFFSET(0x1A6D7B00)
#define RPG_SUPERDEBUG_GET_TAGSWITCHES_OFFSET UNITYSDK_OFFSET(0x1A6DA070)
#define RPG_SUPERDEBUG_GET_TAGTEXTS_OFFSET UNITYSDK_OFFSET(0x1A6DA970)
#define RPG_SUPERDEBUG_LOGBLUE_OFFSET UNITYSDK_OFFSET(0x1A6D8BD0)
#define RPG_SUPERDEBUG_LOGCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1A6D8B70)
#define RPG_SUPERDEBUG_LOGCOLOR_OFFSET UNITYSDK_OFFSET(0x1A6D8B60)
#define RPG_SUPERDEBUG_LOGERRORFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1A6D9350)
#define RPG_SUPERDEBUG_LOGERRORFORMAT_OFFSET UNITYSDK_OFFSET(0x1A6D92B0)
#define RPG_SUPERDEBUG_LOGERROR_1_OFFSET UNITYSDK_OFFSET(0x1A6D9210)
#define RPG_SUPERDEBUG_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1A6D9170)
#define RPG_SUPERDEBUG_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A6D78B0)
#define RPG_SUPERDEBUG_LOGFATAL_OFFSET UNITYSDK_OFFSET(0x1A6D93F0)
#define RPG_SUPERDEBUG_LOGFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1A6D75C0)
#define RPG_SUPERDEBUG_LOGFORMAT_2_OFFSET UNITYSDK_OFFSET(0x1A6D76D0)
#define RPG_SUPERDEBUG_LOGFORMAT_3_OFFSET UNITYSDK_OFFSET(0x1A6D77A0)
#define RPG_SUPERDEBUG_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0x1A6D74F0)
#define RPG_SUPERDEBUG_LOGGREEN_OFFSET UNITYSDK_OFFSET(0x1A6D8BC0)
#define RPG_SUPERDEBUG_LOGPROFILEFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1A6D8570)
#define RPG_SUPERDEBUG_LOGPROFILEFORMAT_2_OFFSET UNITYSDK_OFFSET(0x1A6D8780)
#define RPG_SUPERDEBUG_LOGPROFILEFORMAT_3_OFFSET UNITYSDK_OFFSET(0x1A6D8950)
#define RPG_SUPERDEBUG_LOGPROFILEFORMAT_OFFSET UNITYSDK_OFFSET(0x1A6D83A0)
#define RPG_SUPERDEBUG_LOGPROFILE_1_OFFSET UNITYSDK_OFFSET(0x1A6D7DB0)
#define RPG_SUPERDEBUG_LOGPROFILE_2_OFFSET UNITYSDK_OFFSET(0x1A6D7FC0)
#define RPG_SUPERDEBUG_LOGPROFILE_3_OFFSET UNITYSDK_OFFSET(0x1A6D8190)
#define RPG_SUPERDEBUG_LOGPROFILE_OFFSET UNITYSDK_OFFSET(0x1A6D7BF0)
#define RPG_SUPERDEBUG_LOGRED_OFFSET UNITYSDK_OFFSET(0x1A6D8BA0)
#define RPG_SUPERDEBUG_LOGTOAPMDEBUG_OFFSET UNITYSDK_OFFSET(0x1A6D8D60)
#define RPG_SUPERDEBUG_LOGTOAPM_OFFSET UNITYSDK_OFFSET(0x1A6D8BE0)
#define RPG_SUPERDEBUG_LOGVERYIMPORTANTFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1A6D5150)
#define RPG_SUPERDEBUG_LOGVERYIMPORTANTFORMAT_OFFSET UNITYSDK_OFFSET(0x1A6D4F30)
#define RPG_SUPERDEBUG_LOGVERYIMPORTANT_1_OFFSET UNITYSDK_OFFSET(0x1A6D4DB0)
#define RPG_SUPERDEBUG_LOGVERYIMPORTANT_OFFSET UNITYSDK_OFFSET(0x1A6D4C30)
#define RPG_SUPERDEBUG_LOGWARNINGCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1A6D8B90)
#define RPG_SUPERDEBUG_LOGWARNINGCOLOR_OFFSET UNITYSDK_OFFSET(0x1A6D8B80)
#define RPG_SUPERDEBUG_LOGWARNINGFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1A6D7A70)
#define RPG_SUPERDEBUG_LOGWARNINGFORMAT_OFFSET UNITYSDK_OFFSET(0x1A6D79E0)
#define RPG_SUPERDEBUG_LOGWARNINGRED_OFFSET UNITYSDK_OFFSET(0x1A6D7AF0)
#define RPG_SUPERDEBUG_LOGWARNING_1_OFFSET UNITYSDK_OFFSET(0x1A6D7960)
#define RPG_SUPERDEBUG_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1A6D78E0)
#define RPG_SUPERDEBUG_LOGYELLOW_OFFSET UNITYSDK_OFFSET(0x1A6D8BB0)
#define RPG_SUPERDEBUG_LOG_1_OFFSET UNITYSDK_OFFSET(0x1A6D7210)
#define RPG_SUPERDEBUG_LOG_2_OFFSET UNITYSDK_OFFSET(0x1A6D7320)
#define RPG_SUPERDEBUG_LOG_3_OFFSET UNITYSDK_OFFSET(0x1A6D73E0)
#define RPG_SUPERDEBUG_LOG_OFFSET UNITYSDK_OFFSET(0x1A6D7150)
#define RPG_SUPERDEBUG_SETLOGINFOSENDER_OFFSET UNITYSDK_OFFSET(0x1A6D4C20)
#define RPG_SUPERDEBUG_SETLUASTACKTRACEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1A6D9B90)
#define RPG_SUPERDEBUG_SET_TAGSWITCHES_OFFSET UNITYSDK_OFFSET(0x1A6DA080)
#define RPG_SUPERDEBUG_SET_TAGTEXTS_OFFSET UNITYSDK_OFFSET(0x1A6DA980)
#define RPG_SUPERDEBUG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6DA090)
#define RPG_SUPERDEBUG__FORMATLOGMESSAGE_1_OFFSET UNITYSDK_OFFSET(0x1A6D6FF0)
#define RPG_SUPERDEBUG__FORMATLOGMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A6D6F30)
#define RPG_SUPERDEBUG__GETLUASTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1A6D9BA0)
#define RPG_SUPERDEBUG__INITDEFAULTENABLETAGSWITCHES_OFFSET UNITYSDK_OFFSET(0x1A6DA060)
#define RPG_SUPERDEBUG__INITTAGSWITCHES_OFFSET UNITYSDK_OFFSET(0x1A6D9EA0)
#define RPG_SUPERDEBUG__INITTAGTEXTS_OFFSET UNITYSDK_OFFSET(0x1A6DA560)
#define RPG_SUPERDEBUG__INITTAGVALUES_OFFSET UNITYSDK_OFFSET(0x1A6DA0B0)

namespace RPG
{
	inline static constexpr unsigned int SuperDebug_TypeDefinitionIndex = 8914;

	class SuperDebug : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::LogTag>** StaticGet__TagValues()
		{
			return (::System::Collections::Generic::List_1<::RPG::LogTag>**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x990);
		}
		static ::System::Text::StringBuilder** StaticGet__tmpSbForStackTrace()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x998);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::LogTag, ::System::Boolean>** StaticGet__TagSwitches_k__BackingField()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::LogTag, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x9A0);
		}
		static ::System::Action_1<::System::String*>** StaticGet_GameCoreLogSamplerErrorHandler()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x9A8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::LogTag, ::System::String*>** StaticGet__TagTexts_k__BackingField()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::LogTag, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x9B0);
		}
		static ::Class_0_16E4307DCC419505** StaticGet__LogInfoSender()
		{
			return (::Class_0_16E4307DCC419505**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x9B8);
		}
		static ::System::Action_3<::System::String*, ::System::String*, ::System::String*>** StaticGet_SendMessageDelg()
		{
			return (::System::Action_3<::System::String*, ::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x9C0);
		}
		static ::Class_0_16E4307DCC419505_1** StaticGet__LuaStackTraceProvider()
		{
			return (::Class_0_16E4307DCC419505_1**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x9C8);
		}
		static ::System::Boolean* StaticGet_ForbidLogFlag()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x5E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG__CCTOR_OFFSET))();
		}

		static ::System::Void SetLogInfoSender(::Class_0_16E4307DCC419505* sender)
		{
			return ((::System::Void(*)(::Class_0_16E4307DCC419505*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_SETLOGINFOSENDER_OFFSET))(sender);
		}

		static ::System::Void LogVeryImportant(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGVERYIMPORTANT_OFFSET))(message);
		}

		static ::System::Void LogVeryImportant_1(::RPG::LogTag tag, ::System::String* message)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGVERYIMPORTANT_1_OFFSET))(tag, message);
		}

		static ::System::Void LogVeryImportantFormat(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGVERYIMPORTANTFORMAT_OFFSET))(format, args);
		}

		static ::System::Void LogVeryImportantFormat_1(::RPG::LogTag tag, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGVERYIMPORTANTFORMAT_1_OFFSET))(tag, format, args);
		}

		static ::System::Void DrawLine(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWLINE_OFFSET))(start, end, color, duration, depthTest);
		}

		static ::System::Void DrawLine_1(::RPG::LogTag type, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWLINE_1_OFFSET))(type, start, end, color, duration, depthTest);
		}

		static ::System::Void DrawRay(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 direction, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWRAY_OFFSET))(start, direction, color, duration, depthTest);
		}

		static ::System::Void DrawRay_1(::RPG::LogTag type, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 direction, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWRAY_1_OFFSET))(type, start, direction, color, duration, depthTest);
		}

		static ::System::Void DrawCircle(::UnityEngine::Vector3 center, ::System::Single radius, ::System::Nullable_1<::UnityEngine::Vector3> forward, ::System::Int32 drawDensity, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Int32, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWCIRCLE_OFFSET))(center, radius, forward, drawDensity, color, duration, depthTest);
		}

		static ::System::Void DrawCircle_1(::RPG::LogTag type, ::UnityEngine::Vector3 center, ::System::Single radius, ::System::Nullable_1<::UnityEngine::Vector3> forward, ::System::Int32 drawDensity, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::UnityEngine::Vector3, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Int32, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWCIRCLE_1_OFFSET))(type, center, radius, forward, drawDensity, color, duration, depthTest);
		}

		static ::System::Void DrawCircle_2(::UnityEngine::Vector3 center, ::System::Single radius, ::UnityEngine::Vector3 forward, ::System::Int32 drawDensity, ::UnityEngine::Color color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::Color, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWCIRCLE_2_OFFSET))(center, radius, forward, drawDensity, color, duration, depthTest);
		}

		static ::System::Void DrawFanShaped(::UnityEngine::Vector3 center, ::System::Single radius, ::System::Single angle, ::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 up, ::UnityEngine::Color color, ::System::Int32 drawDensity, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWFANSHAPED_OFFSET))(center, radius, angle, forward, up, color, drawDensity, duration, depthTest);
		}

		static ::System::Void DrawPoint(::UnityEngine::Vector3 position, ::UnityEngine::Color color, ::System::Single scale)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWPOINT_OFFSET))(position, color, scale);
		}

		static ::System::Void DrawSphere(::UnityEngine::Vector3 position, ::UnityEngine::Color color, ::System::Single radius, ::System::Single duration, ::System::Int32 drawDensity, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWSPHERE_OFFSET))(position, color, radius, duration, drawDensity, depthTest);
		}

		static ::System::Void DrawGrid(::UnityEngine::Vector3 center, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 cellSize, ::System::Single duration)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWGRID_OFFSET))(center, rotation, cellSize, duration);
		}

		static ::System::Void DrawArrow(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Vector3 up, ::System::Single arrowHeadLen, ::System::Single arrowHeadAngle, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWARROW_OFFSET))(start, end, up, arrowHeadLen, arrowHeadAngle, color, duration, depthTest);
		}

		static ::System::Void DrawBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWBOX_OFFSET))(center, size, rotation, color, duration, depthTest);
		}

		static ::System::Void DrawMinMaxBox(::UnityEngine::Vector3 min, ::UnityEngine::Vector3 max, ::UnityEngine::Quaternion rotation, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWMINMAXBOX_OFFSET))(min, max, rotation, color, duration, depthTest);
		}

		static ::System::Void DrawRectangle(::UnityEngine::Vector3 center, ::UnityEngine::Vector2 size, ::UnityEngine::Quaternion rotation, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector2, ::UnityEngine::Quaternion, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWRECTANGLE_OFFSET))(center, size, rotation, color, duration, depthTest);
		}

		static ::System::String* _FormatLogMessage(::RPG::LogTag tag, ::System::String* message)
		{
			return ((::System::String*(*)(::RPG::LogTag, ::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG__FORMATLOGMESSAGE_OFFSET))(tag, message);
		}

		static ::System::String* _FormatLogMessage_1(::RPG::LogTag tag, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::RPG::LogTag, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG__FORMATLOGMESSAGE_1_OFFSET))(tag, format, args);
		}

		static ::System::Void Log(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOG_OFFSET))(message);
		}

		static ::System::Void Log_1(::Struct_2_2166A82D5C4E630D& handler)
		{
			return ((::System::Void(*)(::Struct_2_2166A82D5C4E630D&))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOG_1_OFFSET))(handler);
		}

		static ::System::Void Log_2(::RPG::LogTag tag, ::System::String* message)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOG_2_OFFSET))(tag, message);
		}

		static ::System::Void Log_3(::RPG::LogTag tag, ::Struct_2_2166A82D5C4E630D& handler)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::Struct_2_2166A82D5C4E630D&))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOG_3_OFFSET))(tag, handler);
		}

		static ::System::Void LogFormat(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGFORMAT_OFFSET))(format, args);
		}

		static ::System::Void LogFormat_1(::Struct_2_2166A82D5C4E630D& handler)
		{
			return ((::System::Void(*)(::Struct_2_2166A82D5C4E630D&))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGFORMAT_1_OFFSET))(handler);
		}

		static ::System::Void LogFormat_2(::RPG::LogTag tag, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGFORMAT_2_OFFSET))(tag, format, args);
		}

		static ::System::Void LogFormat_3(::RPG::LogTag tag, ::Struct_2_2166A82D5C4E630D& handler)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::Struct_2_2166A82D5C4E630D&))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGFORMAT_3_OFFSET))(tag, handler);
		}

		static ::System::Void LogException(::System::Exception* exception)
		{
			return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGEXCEPTION_OFFSET))(exception);
		}

		static ::System::Void LogWarning(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGWARNING_OFFSET))(message);
		}

		static ::System::Void LogWarning_1(::RPG::LogTag tag, ::System::String* message)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGWARNING_1_OFFSET))(tag, message);
		}

		static ::System::Void LogWarningFormat(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGWARNINGFORMAT_OFFSET))(format, args);
		}

		static ::System::Void LogWarningFormat_1(::RPG::LogTag tag, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGWARNINGFORMAT_1_OFFSET))(tag, format, args);
		}

		static ::System::Void LogWarningRed(::RPG::LogTag tag, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGWARNINGRED_OFFSET))(tag, format, args);
		}

		static ::System::String* GetTimestampString()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_GETTIMESTAMPSTRING_OFFSET))();
		}

		static ::System::Void LogProfile(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGPROFILE_OFFSET))(message);
		}

		static ::System::Void LogProfile_1(::Struct_2_2166A82D5C4E630D& handler)
		{
			return ((::System::Void(*)(::Struct_2_2166A82D5C4E630D&))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGPROFILE_1_OFFSET))(handler);
		}

		static ::System::Void LogProfile_2(::RPG::LogTag tag, ::System::String* message)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGPROFILE_2_OFFSET))(tag, message);
		}

		static ::System::Void LogProfile_3(::RPG::LogTag tag, ::Struct_2_2166A82D5C4E630D& handler)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::Struct_2_2166A82D5C4E630D&))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGPROFILE_3_OFFSET))(tag, handler);
		}

		static ::System::Void LogProfileFormat(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGPROFILEFORMAT_OFFSET))(format, args);
		}

		static ::System::Void LogProfileFormat_1(::Struct_2_2166A82D5C4E630D& handler)
		{
			return ((::System::Void(*)(::Struct_2_2166A82D5C4E630D&))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGPROFILEFORMAT_1_OFFSET))(handler);
		}

		static ::System::Void LogProfileFormat_2(::RPG::LogTag tag, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGPROFILEFORMAT_2_OFFSET))(tag, format, args);
		}

		static ::System::Void LogProfileFormat_3(::RPG::LogTag tag, ::Struct_2_2166A82D5C4E630D& handler)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::Struct_2_2166A82D5C4E630D&))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGPROFILEFORMAT_3_OFFSET))(tag, handler);
		}

		static ::System::Void LogColor(::System::String* c, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGCOLOR_OFFSET))(c, msg);
		}

		static ::System::Void LogColor_1(::System::String* c, ::System::String* fmt, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGCOLOR_1_OFFSET))(c, fmt, args);
		}

		static ::System::Void LogWarningColor(::System::String* c, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGWARNINGCOLOR_OFFSET))(c, msg);
		}

		static ::System::Void LogWarningColor_1(::System::String* c, ::System::String* fmt, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGWARNINGCOLOR_1_OFFSET))(c, fmt, args);
		}

		static ::System::Void LogRed(::System::String* fmt, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGRED_OFFSET))(fmt, args);
		}

		static ::System::Void LogYellow(::System::String* fmt, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGYELLOW_OFFSET))(fmt, args);
		}

		static ::System::Void LogGreen(::System::String* fmt, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGGREEN_OFFSET))(fmt, args);
		}

		static ::System::Void LogBlue(::System::String* fmt, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGBLUE_OFFSET))(fmt, args);
		}

		static ::System::Void LogToApm(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGTOAPM_OFFSET))(message);
		}

		static ::System::Void LogToApmDebug(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGTOAPMDEBUG_OFFSET))(message);
		}

		static ::System::String* ExtractStackTrace(::System::Int32 skipFrame)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_EXTRACTSTACKTRACE_OFFSET))(skipFrame);
		}

		static ::System::String* ExtractFormattedStackTrace(::System::Diagnostics::StackTrace* stackTrace)
		{
			return ((::System::String*(*)(::System::Diagnostics::StackTrace*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_EXTRACTFORMATTEDSTACKTRACE_OFFSET))(stackTrace);
		}

		static ::System::Void LogError(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGERROR_OFFSET))(message);
		}

		static ::System::Void LogError_1(::RPG::LogTag tag, ::System::String* message)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGERROR_1_OFFSET))(tag, message);
		}

		static ::System::Void LogErrorFormat(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGERRORFORMAT_OFFSET))(format, args);
		}

		static ::System::Void LogErrorFormat_1(::RPG::LogTag tag, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGERRORFORMAT_1_OFFSET))(tag, format, args);
		}

		static ::System::Void LogFatal(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGFATAL_OFFSET))(message);
		}

		static ::System::Void Assert(::System::Boolean condition)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_ASSERT_OFFSET))(condition);
		}

		static ::System::Void Assert_1(::System::Boolean condition, ::Struct_2_2166A82D5C4E630D& handler)
		{
			return ((::System::Void(*)(::System::Boolean, ::Struct_2_2166A82D5C4E630D&))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_ASSERT_1_OFFSET))(condition, handler);
		}

		static ::System::Void Assert_2(::System::Boolean condition, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_ASSERT_2_OFFSET))(condition, message);
		}

		static ::System::Void AssertFormat(::System::Boolean condition, ::Struct_2_2166A82D5C4E630D& handler)
		{
			return ((::System::Void(*)(::System::Boolean, ::Struct_2_2166A82D5C4E630D&))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_ASSERTFORMAT_OFFSET))(condition, handler);
		}

		static ::System::Void AssertFormat_1(::System::Boolean condition, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_ASSERTFORMAT_1_OFFSET))(condition, format, args);
		}

		static ::System::Void SetLuaStackTraceProvider(::Class_0_16E4307DCC419505_1* luaStackTraceProvider)
		{
			return ((::System::Void(*)(::Class_0_16E4307DCC419505_1*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_SETLUASTACKTRACEPROVIDER_OFFSET))(luaStackTraceProvider);
		}

		static ::System::String* _GetLuaStackTrace()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG__GETLUASTACKTRACE_OFFSET))();
		}

		static ::System::Void EnableAllTagSwitches()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_ENABLEALLTAGSWITCHES_OFFSET))();
		}

		static ::System::Void DisableAllTagSwitches()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DISABLEALLTAGSWITCHES_OFFSET))();
		}

		static ::System::Void _InitTagSwitches()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG__INITTAGSWITCHES_OFFSET))();
		}

		static ::System::Void _InitDefaultEnableTagSwitches()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG__INITDEFAULTENABLETAGSWITCHES_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::LogTag, ::System::Boolean>* get_TagSwitches()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::LogTag, ::System::Boolean>*(*)())((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_GET_TAGSWITCHES_OFFSET))();
		}

		static ::System::Void set_TagSwitches(::System::Collections::Generic::Dictionary_2<::RPG::LogTag, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::RPG::LogTag, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_SET_TAGSWITCHES_OFFSET))(value);
		}

		static ::System::Void _InitTagValues()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG__INITTAGVALUES_OFFSET))();
		}

		static ::System::Void _InitTagTexts()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG__INITTAGTEXTS_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::LogTag, ::System::String*>* get_TagTexts()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::LogTag, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_GET_TAGTEXTS_OFFSET))();
		}

		static ::System::Void set_TagTexts(::System::Collections::Generic::Dictionary_2<::RPG::LogTag, ::System::String*>* value)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::RPG::LogTag, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_SET_TAGTEXTS_OFFSET))(value);
		}
	};
}
