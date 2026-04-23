#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ACCESSORSCANNOTHAVEBYREFARGS_1_OFFSET UNITYSDK_OFFSET(0x1842DD60)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ACCESSORSCANNOTHAVEBYREFARGS_OFFSET UNITYSDK_OFFSET(0x1842DCB0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ACCESSORSCANNOTHAVEVARARGS_OFFSET UNITYSDK_OFFSET(0x1842DC00)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_AMBIGUOUSJUMP_OFFSET UNITYSDK_OFFSET(0x18432AC0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_AMBIGUOUSMATCHINEXPANDOOBJECT_OFFSET UNITYSDK_OFFSET(0x18417EB0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTCANNOTBEOFTYPEVOID_OFFSET UNITYSDK_OFFSET(0x18432710)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMEMBERNOTDECLONTYPE_1_OFFSET UNITYSDK_OFFSET(0x184308E0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMEMBERNOTDECLONTYPE_OFFSET UNITYSDK_OFFSET(0x184307F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEARRAYINDEXTYPE_OFFSET UNITYSDK_OFFSET(0x18430020)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEARRAY_OFFSET UNITYSDK_OFFSET(0x1842F920)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1842F9D0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEFIELDINFOORPROPERTYINFOORMETHOD_1_OFFSET UNITYSDK_OFFSET(0x1842FB30)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEFIELDINFOORPROPERTYINFOORMETHOD_OFFSET UNITYSDK_OFFSET(0x1842FA80)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINSTANCEMEMBER_1_OFFSET UNITYSDK_OFFSET(0x1842FD10)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINSTANCEMEMBER_OFFSET UNITYSDK_OFFSET(0x1842FC60)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINTEGER_1_OFFSET UNITYSDK_OFFSET(0x1842FEF0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINTEGER_OFFSET UNITYSDK_OFFSET(0x1842FE40)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBESINGLEDIMENSIONALARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x184300D0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTNOTHAVEVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1842E6A0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTOUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x1842A930)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTTYPEDOESNOTMATCHMEMBER_1_OFFSET UNITYSDK_OFFSET(0x18430670)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTTYPEDOESNOTMATCHMEMBER_OFFSET UNITYSDK_OFFSET(0x18430580)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTTYPESMUSTMATCH_OFFSET UNITYSDK_OFFSET(0x18430180)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_BINARYOPERATORNOTDEFINED_OFFSET UNITYSDK_OFFSET(0x1842F4C0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_BODYOFCATCHMUSTHAVESAMETYPEASBODYOFTRY_OFFSET UNITYSDK_OFFSET(0x1842EF80)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_BOTHACCESSORSMUSTBESTATIC_OFFSET UNITYSDK_OFFSET(0x1842E1E0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_BOUNDSCANNOTBELESSTHANONE_OFFSET UNITYSDK_OFFSET(0x1842DF20)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_CANNOTAUTOINITIALIZEVALUETYPEMEMBERTHROUGHPROPERTY_OFFSET UNITYSDK_OFFSET(0x18430220)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_COALESCEUSEDONNONNULLTYPE_OFFSET UNITYSDK_OFFSET(0x184303F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_COERCIONOPERATORNOTDEFINED_OFFSET UNITYSDK_OFFSET(0x1842F2E0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_COLLECTIONMODIFIEDWHILEENUMERATING_OFFSET UNITYSDK_OFFSET(0x1841AA40)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_COLLECTIONREADONLY_OFFSET UNITYSDK_OFFSET(0x1841AD70)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTENTEREXPRESSION_OFFSET UNITYSDK_OFFSET(0x18432C40)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTENTERTRY_OFFSET UNITYSDK_OFFSET(0x18432BA0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTLEAVEFILTERTEST_OFFSET UNITYSDK_OFFSET(0x18432A20)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTLEAVEFINALLY_OFFSET UNITYSDK_OFFSET(0x18432980)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_CONVERSIONISNOTSUPPORTEDFORARITHMETICTYPES_OFFSET UNITYSDK_OFFSET(0x1842F880)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_DUPLICATEVARIABLE_1_OFFSET UNITYSDK_OFFSET(0x1842ECB0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_DUPLICATEVARIABLE_OFFSET UNITYSDK_OFFSET(0x1842EBC0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ENUMERATIONISDONE_OFFSET UNITYSDK_OFFSET(0x18433500)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONMUSTBEREADABLE_1_OFFSET UNITYSDK_OFFSET(0x1841D880)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONMUSTBEREADABLE_OFFSET UNITYSDK_OFFSET(0x18433A40)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONMUSTBEWRITEABLE_OFFSET UNITYSDK_OFFSET(0x1842E5F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPECANNOTINITIALIZEARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x18430490)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x18430B50)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHCONSTRUCTORPARAMETER_1_OFFSET UNITYSDK_OFFSET(0x1841D3E0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHCONSTRUCTORPARAMETER_OFFSET UNITYSDK_OFFSET(0x18433950)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHLABEL_OFFSET UNITYSDK_OFFSET(0x18430C40)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHMETHODPARAMETER_1_OFFSET UNITYSDK_OFFSET(0x1841D6E0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHMETHODPARAMETER_OFFSET UNITYSDK_OFFSET(0x18433760)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHPARAMETER_1_OFFSET UNITYSDK_OFFSET(0x1841D560)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHPARAMETER_OFFSET UNITYSDK_OFFSET(0x18433860)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHRETURN_OFFSET UNITYSDK_OFFSET(0x18430A60)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPENOTINVOCABLE_OFFSET UNITYSDK_OFFSET(0x18430D30)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXTENSIONNODEMUSTOVERRIDEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1842F020)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_FAULTCANNOTHAVECATCHORFINALLY_OFFSET UNITYSDK_OFFSET(0x1842EE30)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_FIELDINFONOTDEFINEDFORTYPE_OFFSET UNITYSDK_OFFSET(0x18430F10)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_GENERICMETHODWITHARGSDOESNOTEXISTONTYPE_OFFSET UNITYSDK_OFFSET(0x18432530)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_GETPARAMNAME_OFFSET UNITYSDK_OFFSET(0x1842DE90)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFARGUMENTSFORMEMBERS_OFFSET UNITYSDK_OFFSET(0x184311E0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFCONSTRUCTORARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1841CDC0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFINDEXES_OFFSET UNITYSDK_OFFSET(0x18431000)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFLAMBDAARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1841CE60)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFLAMBDADECLARATIONPARAMETERS_OFFSET UNITYSDK_OFFSET(0x184310A0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFMEMBERSFORGIVENCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x18431140)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFMETHODCALLARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1841CF00)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTTYPEFORTYPEAS_OFFSET UNITYSDK_OFFSET(0x18430300)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INDEXESOFSETGETMUSTMATCH_OFFSET UNITYSDK_OFFSET(0x1842DB50)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INSTANCEANDMETHODTYPEMISMATCH_OFFSET UNITYSDK_OFFSET(0x18431EA0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INSTANCEFIELDNOTDEFINEDFORTYPE_OFFSET UNITYSDK_OFFSET(0x18430E20)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INSTANCEPROPERTYNOTDEFINEDFORTYPE_OFFSET UNITYSDK_OFFSET(0x18431DB0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDARGUMENTVALUE_OFFSET UNITYSDK_OFFSET(0x1841C2F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDLVALUE_OFFSET UNITYSDK_OFFSET(0x18432DC0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDNULLVALUE_OFFSET UNITYSDK_OFFSET(0x18433AF0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDPROGRAM_OFFSET UNITYSDK_OFFSET(0x18433450)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDTYPEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18433BE0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDUNBOXTYPE_OFFSET UNITYSDK_OFFSET(0x1842E540)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_KEYDOESNOTEXISTINEXPANDO_OFFSET UNITYSDK_OFFSET(0x184195C0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_LABELMUSTBEVOIDORHAVEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1842E7F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_LABELTARGETALREADYDEFINED_OFFSET UNITYSDK_OFFSET(0x184327C0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_LABELTARGETUNDEFINED_OFFSET UNITYSDK_OFFSET(0x184328A0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_LAMBDATYPEMUSTBEDERIVEDFROMSYSTEMDELEGATE_OFFSET UNITYSDK_OFFSET(0x18431280)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_LOGICALOPERATORMUSTHAVEBOOLEANOPERATORS_OFFSET UNITYSDK_OFFSET(0x18432350)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_MEMBERNOTFIELDORPROPERTY_OFFSET UNITYSDK_OFFSET(0x18431330)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODCONTAINSGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x18431420)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODISGENERIC_OFFSET UNITYSDK_OFFSET(0x18431510)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODNOTPROPERTYACCESSOR_1_OFFSET UNITYSDK_OFFSET(0x184316F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODNOTPROPERTYACCESSOR_OFFSET UNITYSDK_OFFSET(0x18431600)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODWITHARGSDOESNOTEXISTONTYPE_OFFSET UNITYSDK_OFFSET(0x18432440)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODWITHMORETHANONEMATCH_OFFSET UNITYSDK_OFFSET(0x18432620)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTBEREDUCIBLE_OFFSET UNITYSDK_OFFSET(0x1842E750)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREDUCETODIFFERENT_OFFSET UNITYSDK_OFFSET(0x1842D8B0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREWRITECHILDTOSAMETYPE_OFFSET UNITYSDK_OFFSET(0x18433070)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREWRITETOSAMENODE_OFFSET UNITYSDK_OFFSET(0x18432F80)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREWRITEWITHOUTMETHOD_OFFSET UNITYSDK_OFFSET(0x18433160)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_NONABSTRACTCONSTRUCTORREQUIRED_OFFSET UNITYSDK_OFFSET(0x184333B0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_NONLOCALJUMPWITHVALUE_OFFSET UNITYSDK_OFFSET(0x18432CE0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_NONSTATICCONSTRUCTORREQUIRED_OFFSET UNITYSDK_OFFSET(0x18433300)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_NOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x18433250)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ONLYSTATICFIELDSHAVENULLINSTANCE_OFFSET UNITYSDK_OFFSET(0x1842E290)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ONLYSTATICMETHODSHAVENULLINSTANCE_OFFSET UNITYSDK_OFFSET(0x1842E3F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ONLYSTATICPROPERTIESHAVENULLINSTANCE_OFFSET UNITYSDK_OFFSET(0x1842E340)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_OPERANDTYPESDONOTMATCHPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1842F6A0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_OVERLOADOPERATORTYPEDOESNOTMATCHCONVERSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1842F790)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PARAMETEREXPRESSIONNOTVALIDASDELEGATE_OFFSET UNITYSDK_OFFSET(0x18431BD0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYCANNOTHAVEREFTYPE_OFFSET UNITYSDK_OFFSET(0x1842DAA0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYDOESNOTHAVEACCESSOR_OFFSET UNITYSDK_OFFSET(0x18431AE0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYDOESNOTHAVEGETTER_1_OFFSET UNITYSDK_OFFSET(0x18431960)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYDOESNOTHAVEGETTER_OFFSET UNITYSDK_OFFSET(0x18431870)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYNOTDEFINEDFORTYPE_OFFSET UNITYSDK_OFFSET(0x18431CC0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYTYPECANNOTBEVOID_OFFSET UNITYSDK_OFFSET(0x1842E490)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYTYPEMUSTMATCHGETTER_OFFSET UNITYSDK_OFFSET(0x1842E080)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYTYPEMUSTMATCHSETTER_OFFSET UNITYSDK_OFFSET(0x1842E130)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_QUOTEDEXPRESSIONMUSTBELAMBDA_OFFSET UNITYSDK_OFFSET(0x1842E8A0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_REDUCEDNOTCOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1842D950)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_REDUCIBLEMUSTOVERRIDEREDUCE_OFFSET UNITYSDK_OFFSET(0x1842D810)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_REFERENCEEQUALITYNOTDEFINED_OFFSET UNITYSDK_OFFSET(0x1842F5B0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_RETHROWREQUIRESCATCH_OFFSET UNITYSDK_OFFSET(0x18432EE0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_SAMEKEYEXISTSINEXPANDO_OFFSET UNITYSDK_OFFSET(0x18418760)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_SETTERHASNOPARAMS_OFFSET UNITYSDK_OFFSET(0x1842D9F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_SETTERMUSTBEVOID_OFFSET UNITYSDK_OFFSET(0x1842DFD0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TRYMUSTHAVECATCHFINALLYORFAULT_OFFSET UNITYSDK_OFFSET(0x1842EEE0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPECONTAINSGENERICPARAMETERS_1_OFFSET UNITYSDK_OFFSET(0x18421A70)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPECONTAINSGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x18433580)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEISGENERIC_1_OFFSET UNITYSDK_OFFSET(0x18421BF0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEISGENERIC_OFFSET UNITYSDK_OFFSET(0x18433670)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEMUSTNOTBEBYREF_OFFSET UNITYSDK_OFFSET(0x18421910)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEMUSTNOTBEPOINTER_OFFSET UNITYSDK_OFFSET(0x184219C0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_UNARYOPERATORNOTDEFINED_OFFSET UNITYSDK_OFFSET(0x1842F3D0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_UNHANDLEDBINARY_OFFSET UNITYSDK_OFFSET(0x18431F90)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_UNHANDLEDUNARY_OFFSET UNITYSDK_OFFSET(0x18432080)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPERATORMUSTBESTATIC_OFFSET UNITYSDK_OFFSET(0x1842F100)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPERATORMUSTNOTBEVOID_OFFSET UNITYSDK_OFFSET(0x1842F1F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPMUSTHAVECONSISTENTTYPES_OFFSET UNITYSDK_OFFSET(0x18432170)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPMUSTHAVEVALIDRETURNTYPE_OFFSET UNITYSDK_OFFSET(0x18432260)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_VARIABLEMUSTNOTBEBYREF_1_OFFSET UNITYSDK_OFFSET(0x1842EA40)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_VARIABLEMUSTNOTBEBYREF_OFFSET UNITYSDK_OFFSET(0x1842E950)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Error_TypeDefinitionIndex = 3203;

	class Error : public ::System::Object
	{
	public:
		static ::System::Exception* ReducibleMustOverrideReduce()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_REDUCIBLEMUSTOVERRIDEREDUCE_OFFSET))();
		}

		static ::System::Exception* AmbiguousMatchInExpandoObject(::System::Object* p0)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_AMBIGUOUSMATCHINEXPANDOOBJECT_OFFSET))(p0);
		}

		static ::System::Exception* SameKeyExistsInExpando(::System::Object* key)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_SAMEKEYEXISTSINEXPANDO_OFFSET))(key);
		}

		static ::System::Exception* KeyDoesNotExistInExpando(::System::Object* p0)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_KEYDOESNOTEXISTINEXPANDO_OFFSET))(p0);
		}

		static ::System::Exception* CollectionModifiedWhileEnumerating()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_COLLECTIONMODIFIEDWHILEENUMERATING_OFFSET))();
		}

		static ::System::Exception* CollectionReadOnly()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_COLLECTIONREADONLY_OFFSET))();
		}

		static ::System::Exception* MustReduceToDifferent()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREDUCETODIFFERENT_OFFSET))();
		}

		static ::System::Exception* ReducedNotCompatible()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_REDUCEDNOTCOMPATIBLE_OFFSET))();
		}

		static ::System::Exception* SetterHasNoParams(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_SETTERHASNOPARAMS_OFFSET))(paramName);
		}

		static ::System::Exception* PropertyCannotHaveRefType(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYCANNOTHAVEREFTYPE_OFFSET))(paramName);
		}

		static ::System::Exception* IndexesOfSetGetMustMatch(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INDEXESOFSETGETMUSTMATCH_OFFSET))(paramName);
		}

		static ::System::Exception* AccessorsCannotHaveVarArgs(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ACCESSORSCANNOTHAVEVARARGS_OFFSET))(paramName);
		}

		static ::System::Exception* AccessorsCannotHaveByRefArgs(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ACCESSORSCANNOTHAVEBYREFARGS_OFFSET))(paramName);
		}

		static ::System::Exception* AccessorsCannotHaveByRefArgs_1(::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ACCESSORSCANNOTHAVEBYREFARGS_1_OFFSET))(paramName, index);
		}

		static ::System::Exception* BoundsCannotBeLessThanOne(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_BOUNDSCANNOTBELESSTHANONE_OFFSET))(paramName);
		}

		static ::System::Exception* TypeMustNotBeByRef(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEMUSTNOTBEBYREF_OFFSET))(paramName);
		}

		static ::System::Exception* TypeMustNotBePointer(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEMUSTNOTBEPOINTER_OFFSET))(paramName);
		}

		static ::System::Exception* SetterMustBeVoid(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_SETTERMUSTBEVOID_OFFSET))(paramName);
		}

		static ::System::Exception* PropertyTypeMustMatchGetter(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYTYPEMUSTMATCHGETTER_OFFSET))(paramName);
		}

		static ::System::Exception* PropertyTypeMustMatchSetter(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYTYPEMUSTMATCHSETTER_OFFSET))(paramName);
		}

		static ::System::Exception* BothAccessorsMustBeStatic(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_BOTHACCESSORSMUSTBESTATIC_OFFSET))(paramName);
		}

		static ::System::Exception* OnlyStaticFieldsHaveNullInstance(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ONLYSTATICFIELDSHAVENULLINSTANCE_OFFSET))(paramName);
		}

		static ::System::Exception* OnlyStaticPropertiesHaveNullInstance(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ONLYSTATICPROPERTIESHAVENULLINSTANCE_OFFSET))(paramName);
		}

		static ::System::Exception* OnlyStaticMethodsHaveNullInstance()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ONLYSTATICMETHODSHAVENULLINSTANCE_OFFSET))();
		}

		static ::System::Exception* PropertyTypeCannotBeVoid(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYTYPECANNOTBEVOID_OFFSET))(paramName);
		}

		static ::System::Exception* InvalidUnboxType(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDUNBOXTYPE_OFFSET))(paramName);
		}

		static ::System::Exception* ExpressionMustBeWriteable(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONMUSTBEWRITEABLE_OFFSET))(paramName);
		}

		static ::System::Exception* ArgumentMustNotHaveValueType(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTNOTHAVEVALUETYPE_OFFSET))(paramName);
		}

		static ::System::Exception* MustBeReducible()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTBEREDUCIBLE_OFFSET))();
		}

		static ::System::Exception* LabelMustBeVoidOrHaveExpression(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_LABELMUSTBEVOIDORHAVEEXPRESSION_OFFSET))(paramName);
		}

		static ::System::Exception* QuotedExpressionMustBeLambda(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_QUOTEDEXPRESSIONMUSTBELAMBDA_OFFSET))(paramName);
		}

		static ::System::Exception* VariableMustNotBeByRef(::System::Object* p0, ::System::Object* p1, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_VARIABLEMUSTNOTBEBYREF_OFFSET))(p0, p1, paramName);
		}

		static ::System::Exception* VariableMustNotBeByRef_1(::System::Object* p0, ::System::Object* p1, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_VARIABLEMUSTNOTBEBYREF_1_OFFSET))(p0, p1, paramName, index);
		}

		static ::System::Exception* DuplicateVariable(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_DUPLICATEVARIABLE_OFFSET))(p0, paramName);
		}

		static ::System::Exception* DuplicateVariable_1(::System::Object* p0, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_DUPLICATEVARIABLE_1_OFFSET))(p0, paramName, index);
		}

		static ::System::Exception* FaultCannotHaveCatchOrFinally(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_FAULTCANNOTHAVECATCHORFINALLY_OFFSET))(paramName);
		}

		static ::System::Exception* TryMustHaveCatchFinallyOrFault()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TRYMUSTHAVECATCHFINALLYORFAULT_OFFSET))();
		}

		static ::System::Exception* BodyOfCatchMustHaveSameTypeAsBodyOfTry()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_BODYOFCATCHMUSTHAVESAMETYPEASBODYOFTRY_OFFSET))();
		}

		static ::System::Exception* ExtensionNodeMustOverrideProperty(::System::Object* p0)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXTENSIONNODEMUSTOVERRIDEPROPERTY_OFFSET))(p0);
		}

		static ::System::Exception* UserDefinedOperatorMustBeStatic(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPERATORMUSTBESTATIC_OFFSET))(p0, paramName);
		}

		static ::System::Exception* UserDefinedOperatorMustNotBeVoid(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPERATORMUSTNOTBEVOID_OFFSET))(p0, paramName);
		}

		static ::System::Exception* CoercionOperatorNotDefined(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_COERCIONOPERATORNOTDEFINED_OFFSET))(p0, p1);
		}

		static ::System::Exception* UnaryOperatorNotDefined(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_UNARYOPERATORNOTDEFINED_OFFSET))(p0, p1);
		}

		static ::System::Exception* BinaryOperatorNotDefined(::System::Object* p0, ::System::Object* p1, ::System::Object* p2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_BINARYOPERATORNOTDEFINED_OFFSET))(p0, p1, p2);
		}

		static ::System::Exception* ReferenceEqualityNotDefined(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_REFERENCEEQUALITYNOTDEFINED_OFFSET))(p0, p1);
		}

		static ::System::Exception* OperandTypesDoNotMatchParameters(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_OPERANDTYPESDONOTMATCHPARAMETERS_OFFSET))(p0, p1);
		}

		static ::System::Exception* OverloadOperatorTypeDoesNotMatchConversionType(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_OVERLOADOPERATORTYPEDOESNOTMATCHCONVERSIONTYPE_OFFSET))(p0, p1);
		}

		static ::System::Exception* ConversionIsNotSupportedForArithmeticTypes()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_CONVERSIONISNOTSUPPORTEDFORARITHMETICTYPES_OFFSET))();
		}

		static ::System::Exception* ArgumentMustBeArray(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEARRAY_OFFSET))(paramName);
		}

		static ::System::Exception* ArgumentMustBeBoolean(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEBOOLEAN_OFFSET))(paramName);
		}

		static ::System::Exception* ArgumentMustBeFieldInfoOrPropertyInfoOrMethod(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEFIELDINFOORPROPERTYINFOORMETHOD_OFFSET))(paramName);
		}

		static ::System::Exception* ArgumentMustBeFieldInfoOrPropertyInfoOrMethod_1(::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEFIELDINFOORPROPERTYINFOORMETHOD_1_OFFSET))(paramName, index);
		}

		static ::System::Exception* ArgumentMustBeInstanceMember(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINSTANCEMEMBER_OFFSET))(paramName);
		}

		static ::System::Exception* ArgumentMustBeInstanceMember_1(::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINSTANCEMEMBER_1_OFFSET))(paramName, index);
		}

		static ::System::Exception* ArgumentMustBeInteger(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINTEGER_OFFSET))(paramName);
		}

		static ::System::Exception* ArgumentMustBeInteger_1(::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINTEGER_1_OFFSET))(paramName, index);
		}

		static ::System::Exception* ArgumentMustBeArrayIndexType(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEARRAYINDEXTYPE_OFFSET))(paramName);
		}

		static ::System::Exception* ArgumentMustBeSingleDimensionalArrayType(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBESINGLEDIMENSIONALARRAYTYPE_OFFSET))(paramName);
		}

		static ::System::Exception* ArgumentTypesMustMatch()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTTYPESMUSTMATCH_OFFSET))();
		}

		static ::System::Exception* CannotAutoInitializeValueTypeMemberThroughProperty(::System::Object* p0)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_CANNOTAUTOINITIALIZEVALUETYPEMEMBERTHROUGHPROPERTY_OFFSET))(p0);
		}

		static ::System::Exception* IncorrectTypeForTypeAs(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTTYPEFORTYPEAS_OFFSET))(p0, paramName);
		}

		static ::System::Exception* CoalesceUsedOnNonNullType()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_COALESCEUSEDONNONNULLTYPE_OFFSET))();
		}

		static ::System::Exception* ExpressionTypeCannotInitializeArrayType(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPECANNOTINITIALIZEARRAYTYPE_OFFSET))(p0, p1);
		}

		static ::System::Exception* ArgumentTypeDoesNotMatchMember(::System::Object* p0, ::System::Object* p1, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTTYPEDOESNOTMATCHMEMBER_OFFSET))(p0, p1, paramName);
		}

		static ::System::Exception* ArgumentTypeDoesNotMatchMember_1(::System::Object* p0, ::System::Object* p1, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTTYPEDOESNOTMATCHMEMBER_1_OFFSET))(p0, p1, paramName, index);
		}

		static ::System::Exception* ArgumentMemberNotDeclOnType(::System::Object* p0, ::System::Object* p1, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMEMBERNOTDECLONTYPE_OFFSET))(p0, p1, paramName);
		}

		static ::System::Exception* ArgumentMemberNotDeclOnType_1(::System::Object* p0, ::System::Object* p1, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMEMBERNOTDECLONTYPE_1_OFFSET))(p0, p1, paramName, index);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchReturn(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHRETURN_OFFSET))(p0, p1);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchAssignment(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHASSIGNMENT_OFFSET))(p0, p1);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchLabel(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHLABEL_OFFSET))(p0, p1);
		}

		static ::System::Exception* ExpressionTypeNotInvocable(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPENOTINVOCABLE_OFFSET))(p0, paramName);
		}

		static ::System::Exception* InstanceFieldNotDefinedForType(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INSTANCEFIELDNOTDEFINEDFORTYPE_OFFSET))(p0, p1);
		}

		static ::System::Exception* FieldInfoNotDefinedForType(::System::Object* p0, ::System::Object* p1, ::System::Object* p2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_FIELDINFONOTDEFINEDFORTYPE_OFFSET))(p0, p1, p2);
		}

		static ::System::Exception* IncorrectNumberOfIndexes()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFINDEXES_OFFSET))();
		}

		static ::System::Exception* IncorrectNumberOfLambdaDeclarationParameters()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFLAMBDADECLARATIONPARAMETERS_OFFSET))();
		}

		static ::System::Exception* IncorrectNumberOfMembersForGivenConstructor()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFMEMBERSFORGIVENCONSTRUCTOR_OFFSET))();
		}

		static ::System::Exception* IncorrectNumberOfArgumentsForMembers()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFARGUMENTSFORMEMBERS_OFFSET))();
		}

		static ::System::Exception* LambdaTypeMustBeDerivedFromSystemDelegate(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_LAMBDATYPEMUSTBEDERIVEDFROMSYSTEMDELEGATE_OFFSET))(paramName);
		}

		static ::System::Exception* MemberNotFieldOrProperty(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_MEMBERNOTFIELDORPROPERTY_OFFSET))(p0, paramName);
		}

		static ::System::Exception* MethodContainsGenericParameters(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODCONTAINSGENERICPARAMETERS_OFFSET))(p0, paramName);
		}

		static ::System::Exception* MethodIsGeneric(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODISGENERIC_OFFSET))(p0, paramName);
		}

		static ::System::Exception* MethodNotPropertyAccessor(::System::Object* p0, ::System::Object* p1, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODNOTPROPERTYACCESSOR_OFFSET))(p0, p1, paramName);
		}

		static ::System::Exception* MethodNotPropertyAccessor_1(::System::Object* p0, ::System::Object* p1, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODNOTPROPERTYACCESSOR_1_OFFSET))(p0, p1, paramName, index);
		}

		static ::System::Exception* PropertyDoesNotHaveGetter(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYDOESNOTHAVEGETTER_OFFSET))(p0, paramName);
		}

		static ::System::Exception* PropertyDoesNotHaveGetter_1(::System::Object* p0, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYDOESNOTHAVEGETTER_1_OFFSET))(p0, paramName, index);
		}

		static ::System::Exception* PropertyDoesNotHaveAccessor(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYDOESNOTHAVEACCESSOR_OFFSET))(p0, paramName);
		}

		static ::System::Exception* ParameterExpressionNotValidAsDelegate(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PARAMETEREXPRESSIONNOTVALIDASDELEGATE_OFFSET))(p0, p1);
		}

		static ::System::Exception* PropertyNotDefinedForType(::System::Object* p0, ::System::Object* p1, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYNOTDEFINEDFORTYPE_OFFSET))(p0, p1, paramName);
		}

		static ::System::Exception* InstancePropertyNotDefinedForType(::System::Object* p0, ::System::Object* p1, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INSTANCEPROPERTYNOTDEFINEDFORTYPE_OFFSET))(p0, p1, paramName);
		}

		static ::System::Exception* InstanceAndMethodTypeMismatch(::System::Object* p0, ::System::Object* p1, ::System::Object* p2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INSTANCEANDMETHODTYPEMISMATCH_OFFSET))(p0, p1, p2);
		}

		static ::System::Exception* UnhandledBinary(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_UNHANDLEDBINARY_OFFSET))(p0, paramName);
		}

		static ::System::Exception* UnhandledUnary(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_UNHANDLEDUNARY_OFFSET))(p0, paramName);
		}

		static ::System::Exception* UserDefinedOpMustHaveConsistentTypes(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPMUSTHAVECONSISTENTTYPES_OFFSET))(p0, p1);
		}

		static ::System::Exception* UserDefinedOpMustHaveValidReturnType(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPMUSTHAVEVALIDRETURNTYPE_OFFSET))(p0, p1);
		}

		static ::System::Exception* LogicalOperatorMustHaveBooleanOperators(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_LOGICALOPERATORMUSTHAVEBOOLEANOPERATORS_OFFSET))(p0, p1);
		}

		static ::System::Exception* MethodWithArgsDoesNotExistOnType(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODWITHARGSDOESNOTEXISTONTYPE_OFFSET))(p0, p1);
		}

		static ::System::Exception* GenericMethodWithArgsDoesNotExistOnType(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_GENERICMETHODWITHARGSDOESNOTEXISTONTYPE_OFFSET))(p0, p1);
		}

		static ::System::Exception* MethodWithMoreThanOneMatch(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODWITHMORETHANONEMATCH_OFFSET))(p0, p1);
		}

		static ::System::Exception* ArgumentCannotBeOfTypeVoid(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTCANNOTBEOFTYPEVOID_OFFSET))(paramName);
		}

		static ::System::Exception* LabelTargetAlreadyDefined(::System::Object* p0)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_LABELTARGETALREADYDEFINED_OFFSET))(p0);
		}

		static ::System::Exception* LabelTargetUndefined(::System::Object* p0)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_LABELTARGETUNDEFINED_OFFSET))(p0);
		}

		static ::System::Exception* ControlCannotLeaveFinally()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTLEAVEFINALLY_OFFSET))();
		}

		static ::System::Exception* ControlCannotLeaveFilterTest()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTLEAVEFILTERTEST_OFFSET))();
		}

		static ::System::Exception* AmbiguousJump(::System::Object* p0)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_AMBIGUOUSJUMP_OFFSET))(p0);
		}

		static ::System::Exception* ControlCannotEnterTry()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTENTERTRY_OFFSET))();
		}

		static ::System::Exception* ControlCannotEnterExpression()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTENTEREXPRESSION_OFFSET))();
		}

		static ::System::Exception* NonLocalJumpWithValue(::System::Object* p0)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_NONLOCALJUMPWITHVALUE_OFFSET))(p0);
		}

		static ::System::Exception* InvalidLvalue(::System::Linq::Expressions::ExpressionType p0)
		{
			return ((::System::Exception*(*)(::System::Linq::Expressions::ExpressionType))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDLVALUE_OFFSET))(p0);
		}

		static ::System::Exception* RethrowRequiresCatch()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_RETHROWREQUIRESCATCH_OFFSET))();
		}

		static ::System::Exception* MustRewriteToSameNode(::System::Object* p0, ::System::Object* p1, ::System::Object* p2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREWRITETOSAMENODE_OFFSET))(p0, p1, p2);
		}

		static ::System::Exception* MustRewriteChildToSameType(::System::Object* p0, ::System::Object* p1, ::System::Object* p2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREWRITECHILDTOSAMETYPE_OFFSET))(p0, p1, p2);
		}

		static ::System::Exception* MustRewriteWithoutMethod(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREWRITEWITHOUTMETHOD_OFFSET))(p0, p1);
		}

		static ::System::Exception* ArgumentOutOfRange(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTOUTOFRANGE_OFFSET))(paramName);
		}

		static ::System::Exception* NotSupported()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_NOTSUPPORTED_OFFSET))();
		}

		static ::System::Exception* NonStaticConstructorRequired(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_NONSTATICCONSTRUCTORREQUIRED_OFFSET))(paramName);
		}

		static ::System::Exception* NonAbstractConstructorRequired()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_NONABSTRACTCONSTRUCTORREQUIRED_OFFSET))();
		}

		static ::System::Exception* InvalidProgram()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDPROGRAM_OFFSET))();
		}

		static ::System::Exception* EnumerationIsDone()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ENUMERATIONISDONE_OFFSET))();
		}

		static ::System::Exception* TypeContainsGenericParameters(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPECONTAINSGENERICPARAMETERS_OFFSET))(p0, paramName);
		}

		static ::System::Exception* TypeContainsGenericParameters_1(::System::Object* p0, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPECONTAINSGENERICPARAMETERS_1_OFFSET))(p0, paramName, index);
		}

		static ::System::Exception* TypeIsGeneric(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEISGENERIC_OFFSET))(p0, paramName);
		}

		static ::System::Exception* TypeIsGeneric_1(::System::Object* p0, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEISGENERIC_1_OFFSET))(p0, paramName, index);
		}

		static ::System::Exception* IncorrectNumberOfConstructorArguments()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFCONSTRUCTORARGUMENTS_OFFSET))();
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchMethodParameter(::System::Object* p0, ::System::Object* p1, ::System::Object* p2, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHMETHODPARAMETER_OFFSET))(p0, p1, p2, paramName);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchMethodParameter_1(::System::Object* p0, ::System::Object* p1, ::System::Object* p2, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHMETHODPARAMETER_1_OFFSET))(p0, p1, p2, paramName, index);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchParameter(::System::Object* p0, ::System::Object* p1, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHPARAMETER_OFFSET))(p0, p1, paramName);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchParameter_1(::System::Object* p0, ::System::Object* p1, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHPARAMETER_1_OFFSET))(p0, p1, paramName, index);
		}

		static ::System::Exception* IncorrectNumberOfLambdaArguments()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFLAMBDAARGUMENTS_OFFSET))();
		}

		static ::System::Exception* IncorrectNumberOfMethodCallArguments(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFMETHODCALLARGUMENTS_OFFSET))(p0, paramName);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchConstructorParameter(::System::Object* p0, ::System::Object* p1, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHCONSTRUCTORPARAMETER_OFFSET))(p0, p1, paramName);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchConstructorParameter_1(::System::Object* p0, ::System::Object* p1, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHCONSTRUCTORPARAMETER_1_OFFSET))(p0, p1, paramName, index);
		}

		static ::System::Exception* ExpressionMustBeReadable(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONMUSTBEREADABLE_OFFSET))(paramName);
		}

		static ::System::Exception* ExpressionMustBeReadable_1(::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONMUSTBEREADABLE_1_OFFSET))(paramName, index);
		}

		static ::System::Exception* InvalidArgumentValue(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDARGUMENTVALUE_OFFSET))(paramName);
		}

		static ::System::Exception* InvalidNullValue(::System::Type* type, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDNULLVALUE_OFFSET))(type, paramName);
		}

		static ::System::Exception* InvalidTypeException(::System::Object* value, ::System::Type* type, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDTYPEEXCEPTION_OFFSET))(value, type, paramName);
		}

		static ::System::String* GetParamName(::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_GETPARAMNAME_OFFSET))(paramName, index);
		}
	};
}
