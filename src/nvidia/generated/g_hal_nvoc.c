#define NVOC_HAL_H_PRIVATE_ACCESS_ALLOWED
#include "nvoc/runtime.h"
#include "nvoc/rtti.h"
#include "nvtypes.h"
#include "nvport/nvport.h"
#include "nvport/inline/util_valist.h"
#include "utils/nvassert.h"
#include "g_hal_nvoc.h"

#ifdef DEBUG
char __nvoc_class_id_uniqueness_check_0xe803b6 = 1;
#endif

extern const struct NVOC_CLASS_DEF __nvoc_class_def_OBJHAL;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_Object;

void __nvoc_init_OBJHAL(OBJHAL*);
void __nvoc_init_funcTable_OBJHAL(OBJHAL*);
NV_STATUS __nvoc_ctor_OBJHAL(OBJHAL*);
void __nvoc_init_dataField_OBJHAL(OBJHAL*);
void __nvoc_dtor_OBJHAL(OBJHAL*);
extern const struct NVOC_EXPORT_INFO __nvoc_export_info_OBJHAL;

static const struct NVOC_RTTI __nvoc_rtti_OBJHAL_OBJHAL = {
    /*pClassDef=*/          &__nvoc_class_def_OBJHAL,
    /*dtor=*/               (NVOC_DYNAMIC_DTOR) &__nvoc_dtor_OBJHAL,
    /*offset=*/             0,
};

static const struct NVOC_RTTI __nvoc_rtti_OBJHAL_Object = {
    /*pClassDef=*/          &__nvoc_class_def_Object,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(OBJHAL, __nvoc_base_Object),
};

static const struct NVOC_CASTINFO __nvoc_castinfo_OBJHAL = {
    /*numRelatives=*/       2,
    /*relatives=*/ {
        &__nvoc_rtti_OBJHAL_OBJHAL,
        &__nvoc_rtti_OBJHAL_Object,
    },
};

const struct NVOC_CLASS_DEF __nvoc_class_def_OBJHAL = 
{
    /*classInfo=*/ {
        /*size=*/               sizeof(OBJHAL),
        /*classId=*/            classId(OBJHAL),
        /*providerId=*/         &__nvoc_rtti_provider,
#if NV_PRINTF_STRINGS_ALLOWED
        /*name=*/               "OBJHAL",
#endif
    },
    /*objCreatefn=*/        (NVOC_DYNAMIC_OBJ_CREATE) &__nvoc_objCreateDynamic_OBJHAL,
    /*pCastInfo=*/          &__nvoc_castinfo_OBJHAL,
    /*pExportInfo=*/        &__nvoc_export_info_OBJHAL
};

// Down-thunk(s) to bridge OBJHAL methods from ancestors (if any)

// Up-thunk(s) to bridge OBJHAL methods to ancestors (if any)

const struct NVOC_EXPORT_INFO __nvoc_export_info_OBJHAL = 
{
    /*numEntries=*/     0,
    /*pExportEntries=*/  0
};

void __nvoc_dtor_Object(Object*);
void __nvoc_dtor_OBJHAL(OBJHAL *pThis) {
    __nvoc_dtor_Object(&pThis->__nvoc_base_Object);
    PORT_UNREFERENCED_VARIABLE(pThis);
}

void __nvoc_init_dataField_OBJHAL(OBJHAL *pThis) {
    PORT_UNREFERENCED_VARIABLE(pThis);
}

NV_STATUS __nvoc_ctor_Object(Object* );
NV_STATUS __nvoc_ctor_OBJHAL(OBJHAL *pThis) {
    NV_STATUS status = NV_OK;
    status = __nvoc_ctor_Object(&pThis->__nvoc_base_Object);
    if (status != NV_OK) goto __nvoc_ctor_OBJHAL_fail_Object;
    __nvoc_init_dataField_OBJHAL(pThis);
    goto __nvoc_ctor_OBJHAL_exit; // Success

__nvoc_ctor_OBJHAL_fail_Object:
__nvoc_ctor_OBJHAL_exit:

    return status;
}

// Vtable initialization
static void __nvoc_init_funcTable_OBJHAL_1(OBJHAL *pThis) {
    PORT_UNREFERENCED_VARIABLE(pThis);
} // End __nvoc_init_funcTable_OBJHAL_1


// Initialize vtable(s): Nothing to do for empty vtables
void __nvoc_init_funcTable_OBJHAL(OBJHAL *pThis) {
    __nvoc_init_funcTable_OBJHAL_1(pThis);
}

void __nvoc_init_Object(Object*);
void __nvoc_init_OBJHAL(OBJHAL *pThis) {
    pThis->__nvoc_pbase_OBJHAL = pThis;
    pThis->__nvoc_pbase_Object = &pThis->__nvoc_base_Object;
    __nvoc_init_Object(&pThis->__nvoc_base_Object);
    __nvoc_init_funcTable_OBJHAL(pThis);
}

NV_STATUS __nvoc_objCreate_OBJHAL(OBJHAL **ppThis, Dynamic *pParent, NvU32 createFlags)
{
    NV_STATUS status;
    Object *pParentObj = NULL;
    OBJHAL *pThis;

    // Assign `pThis`, allocating memory unless suppressed by flag.
    status = __nvoc_handleObjCreateMemAlloc(createFlags, sizeof(OBJHAL), (void**)&pThis, (void**)ppThis);
    if (status != NV_OK)
        return status;

    // Zero is the initial value for everything.
    portMemSet(pThis, 0, sizeof(OBJHAL));

    // Initialize runtime type information.
    __nvoc_initRtti(staticCast(pThis, Dynamic), &__nvoc_class_def_OBJHAL);

    pThis->__nvoc_base_Object.createFlags = createFlags;

    // Link the child into the parent if there is one unless flagged not to do so.
    if (pParent != NULL && !(createFlags & NVOC_OBJ_CREATE_FLAGS_PARENT_HALSPEC_ONLY))
    {
        pParentObj = dynamicCast(pParent, Object);
        objAddChild(pParentObj, &pThis->__nvoc_base_Object);
    }
    else
    {
        pThis->__nvoc_base_Object.pParent = NULL;
    }

    __nvoc_init_OBJHAL(pThis);
    status = __nvoc_ctor_OBJHAL(pThis);
    if (status != NV_OK) goto __nvoc_objCreate_OBJHAL_cleanup;

    // Assignment has no effect if NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT is set.
    *ppThis = pThis;

    return NV_OK;

__nvoc_objCreate_OBJHAL_cleanup:

    // Unlink the child from the parent if it was linked above.
    if (pParentObj != NULL)
        objRemoveChild(pParentObj, &pThis->__nvoc_base_Object);

    // Do not call destructors here since the constructor already called them.
    if (createFlags & NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT)
        portMemSet(pThis, 0, sizeof(OBJHAL));
    else
    {
        portMemFree(pThis);
        *ppThis = NULL;
    }

    // coverity[leaked_storage:FALSE]
    return status;
}

NV_STATUS __nvoc_objCreateDynamic_OBJHAL(OBJHAL **ppThis, Dynamic *pParent, NvU32 createFlags, va_list args) {
    NV_STATUS status;

    status = __nvoc_objCreate_OBJHAL(ppThis, pParent, createFlags);

    return status;
}

