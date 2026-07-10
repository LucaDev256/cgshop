#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
184,
193,
194,
195,
196,
197,
198,
199,
201,
202,
258,
259,
260,
288,
289,
290,
317,
318,
319,
405,
406,
407,
410,
442,
443,
445,
447,
449,
451,
456,
464,
465,
466,
467,
468,
469,
470,
471,
559,
566,
567,
635,
641,
644,
646,
651,
652,
654,
655,
659,
660,
662,
663,
666,
667,
668,
671,
673,
676,
678,
680,
689,
748,
750,
752,
762,
763,
764,
766,
771,
772,
773,
774,
775,
783,
784,
785,
789,
790,
792,
794,
985,
1139,
1140,
6941,
6942,
6944,
6945,
6946,
6947,
6948,
6950,
6951,
6952,
6967,
6969,
6974,
6976,
6978,
6980,
7031,
7032,
7034,
7035,
7036,
7037,
7038,
7040,
7042,
8084,
8088,
8090,
8091,
8092,
8093,
8476,
8477,
8478,
8479,
8495,
8496,
8497,
8540,
8605,
8615,
8616,
8617,
8618,
8619,
8894,
8899,
8900,
8928,
8963,
8970,
8977,
8988,
8991,
9012,
9087,
9089,
9098,
9100,
9101,
9108,
9123,
9143,
9144,
9152,
9154,
9161,
9162,
9165,
9170,
9176,
9177,
9184,
9186,
9198,
9201,
9202,
9203,
9214,
9224,
9230,
9231,
9232,
9234,
9235,
9252,
9254,
9269,
9287,
9314,
9338,
9339,
9852,
9931,
9932,
10084,
10085,
10089,
10092,
10137,
10518,
10519,
10719,
10724,
10734,
11406,
11427,
11429,
11431,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw (int,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw (int,int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsAttached_internal ();
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 184,
ves_icall_System_Array_InternalCreate,
// token 193,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 194,
ves_icall_System_Array_CanChangePrimitive,
// token 195,
ves_icall_System_Array_FastCopy,
// token 196,
ves_icall_System_Array_GetLengthInternal_raw,
// token 197,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 198,
ves_icall_System_Array_GetGenericValue_icall,
// token 199,
ves_icall_System_Array_GetValueImpl_raw,
// token 201,
ves_icall_System_Array_SetValueImpl_raw,
// token 202,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 258,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 259,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 260,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 288,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 289,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 290,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 317,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 318,
ves_icall_System_Enum_InternalGetCorElementType,
// token 319,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 405,
ves_icall_System_Environment_get_ProcessorCount,
// token 406,
ves_icall_System_Environment_get_TickCount,
// token 407,
ves_icall_System_Environment_get_TickCount64,
// token 410,
ves_icall_System_Environment_FailFast_raw,
// token 442,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 443,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 445,
ves_icall_System_GC_SuppressFinalize_raw,
// token 447,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 449,
ves_icall_System_GC_GetGCMemoryInfo,
// token 451,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 456,
ves_icall_System_Object_MemberwiseClone_raw,
// token 464,
ves_icall_System_Math_Ceiling,
// token 465,
ves_icall_System_Math_Cos,
// token 466,
ves_icall_System_Math_Floor,
// token 467,
ves_icall_System_Math_Pow,
// token 468,
ves_icall_System_Math_Sin,
// token 469,
ves_icall_System_Math_Sqrt,
// token 470,
ves_icall_System_Math_Tan,
// token 471,
ves_icall_System_Math_ModF,
// token 559,
ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw,
// token 566,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 567,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 635,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 641,
ves_icall_RuntimeType_make_array_type_raw,
// token 644,
ves_icall_RuntimeType_make_byref_type_raw,
// token 646,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 651,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 652,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 654,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 655,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 659,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 660,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 662,
ves_icall_System_RuntimeType_getFullName_raw,
// token 663,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 666,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 667,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 668,
ves_icall_RuntimeType_GetFields_native_raw,
// token 671,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 673,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 676,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 678,
ves_icall_RuntimeType_GetName_raw,
// token 680,
ves_icall_RuntimeType_GetNamespace_raw,
// token 689,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 748,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 750,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 752,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 762,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 763,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 764,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 766,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 771,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 772,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 773,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 774,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 775,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 783,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 784,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 785,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 789,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 790,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 792,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 794,
ves_icall_System_String_FastAllocateString_raw,
// token 985,
ves_icall_System_Type_internal_from_handle_raw,
// token 1139,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1140,
ves_icall_System_ValueType_Equals_raw,
// token 6941,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6942,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6944,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6945,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6946,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6947,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6948,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6950,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6951,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6952,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6967,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6969,
mono_monitor_exit_icall_raw,
// token 6974,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6976,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6978,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6980,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 7031,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 7032,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 7034,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 7035,
ves_icall_System_Threading_Thread_GetState_raw,
// token 7036,
ves_icall_System_Threading_Thread_SetState_raw,
// token 7037,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 7038,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 7040,
ves_icall_System_Threading_Thread_YieldInternal,
// token 7042,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 8084,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 8088,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 8090,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 8091,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 8092,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 8093,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 8476,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 8477,
ves_icall_System_GCHandle_InternalFree_raw,
// token 8478,
ves_icall_System_GCHandle_InternalGet_raw,
// token 8479,
ves_icall_System_GCHandle_InternalSet_raw,
// token 8495,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 8496,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 8497,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 8540,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 8605,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 8615,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 8616,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 8617,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 8618,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8619,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw,
// token 8894,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8899,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8900,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8928,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8963,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8970,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8977,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8988,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8991,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 9012,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 9087,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 9089,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9098,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 9100,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 9101,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9108,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9123,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9143,
ves_icall_reflection_get_token_raw,
// token 9144,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9152,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9154,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9161,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9162,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9165,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9170,
ves_icall_reflection_get_token_raw,
// token 9176,
ves_icall_get_method_info_raw,
// token 9177,
ves_icall_get_method_attributes,
// token 9184,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 9186,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 9198,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 9201,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 9202,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 9203,
ves_icall_reflection_get_token_raw,
// token 9214,
ves_icall_InternalInvoke_raw,
// token 9224,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 9230,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 9231,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 9232,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 9234,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 9235,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 9252,
ves_icall_InvokeClassConstructor_raw,
// token 9254,
ves_icall_InternalInvoke_raw,
// token 9269,
ves_icall_reflection_get_token_raw,
// token 9287,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 9314,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 9338,
ves_icall_reflection_get_token_raw,
// token 9339,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9852,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9931,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9932,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10084,
ves_icall_ModuleBuilder_basic_init_raw,
// token 10085,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10089,
ves_icall_ModuleBuilder_getToken_raw,
// token 10092,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 10137,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 10518,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 10519,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10719,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 10724,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 10734,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 11406,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 11427,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 11429,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 11431,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
4,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
};
