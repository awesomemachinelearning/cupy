// Stub header file of cuTENSOR

#ifndef INCLUDE_GUARD_CUPY_CUTENSOR_H
#define INCLUDE_GUARD_CUPY_CUTENSOR_H

#ifndef CUPY_NO_CUDA

#include <library_types.h>
#include <cutensor.h>

#else // #ifndef CUPY_NO_CUDA

extern "C" {

    typedef enum {} cudaDataType_t;

    typedef enum {
	CUTENSOR_STATUS_SUCCESS = 0,
    } cutensorStatus_t;

    typedef enum {} cutensorAlgo_t;
    typedef enum {} cutensorOperator_t;
    typedef enum {} cutensorWorksizePreference_t;

    typedef void* cutensorHandle_t;
    typedef void* cutensorTensorDescriptor_t;

    cutensorStatus_t cutensorCreate(...) {
	return CUTENSOR_STATUS_SUCCESS;
    }

    cutensorStatus_t cutensorDestroy(...) {
	return CUTENSOR_STATUS_SUCCESS;
    }

    cutensorStatus_t cutensorCreateTensorDescriptor(...) {
	return CUTENSOR_STATUS_SUCCESS;
    }

    cutensorStatus_t cutensorDestroyTensorDescriptor(...) {
	return CUTENSOR_STATUS_SUCCESS;
    }

    cutensorStatus_t cutensorElementwiseTrinary(...) {
	return CUTENSOR_STATUS_SUCCESS;
    }

    cutensorStatus_t cutensorElementwiseBinary(...) {
	return CUTENSOR_STATUS_SUCCESS;
    }

    cutensorStatus_t cutensorContraction(...) {
	return CUTENSOR_STATUS_SUCCESS;
    }

    cutensorStatus_t cutensorContractionGetWorkspace(...) {
	return CUTENSOR_STATUS_SUCCESS;
    }

    cutensorStatus_t cutensorContractionMaxAlgos(...) {
	return CUTENSOR_STATUS_SUCCESS;
    }

    const char* cutensorGetErrorString(...) {
	return NULL;
    }

} // extern "C"

#endif // #ifndef CUPY_NO_CUDA

#endif // #ifndef INCLUDE_GUARD_CUPY_CUTENSOR_H
