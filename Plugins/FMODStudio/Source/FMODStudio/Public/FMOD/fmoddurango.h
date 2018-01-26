#ifndef _FMODDURANGO_H
#define _FMODDURANGO_H

/*
[ENUM] 
[
    [DESCRIPTION]
    Cores available for mapping threads onto.

    [REMARKS]

    [SEE_ALSO]
    FMOD_DURANGO_THREADAFFINITY
]
*/
typedef enum
{
    FMOD_THREAD_DEFAULT = 0,    /* Use default thread assignment. */
    FMOD_THREAD_CORE0   = 1 << 0,
    FMOD_THREAD_CORE1   = 1 << 1,
    FMOD_THREAD_CORE2   = 1 << 2,      /* Default for all threads. */
    FMOD_THREAD_CORE3   = 1 << 3,
    FMOD_THREAD_CORE4   = 1 << 4,
    FMOD_THREAD_CORE5   = 1 << 5,
    FMOD_THREAD_CORE6   = 1 << 6,
} FMOD_THREAD;


/*
[STRUCTURE] 
[
    [DESCRIPTION]   
    Mapping of cores to threads.

    [REMARKS]

    [SEE_ALSO]
    FMOD_THREAD
    FMOD_Durango_SetThreadAffinity
]
*/
typedef struct FMOD_DURANGO_THREADAFFINITY
{
    unsigned int mixer;             /* Software mixer thread. */
    unsigned int feeder;            /* Audio hardware feeder (including mmdevapi.dll) thread. */
    unsigned int stream;            /* Stream thread. */
    unsigned int nonblocking;       /* Asynchronous sound loading thread. */
    unsigned int file;              /* File thread. */
    unsigned int geometry;          /* Geometry processing thread. */
    unsigned int acp;               /* ACP update thread. */
    unsigned int studioUpdate;      /* Studio update thread. */
    unsigned int studioLoadBank;    /* Studio bank loading thread. */
    unsigned int studioLoadSample;  /* Studio sample loading thread. */
} FMOD_DURANGO_THREADAFFINITY;


/*
[API]
[
    [DESCRIPTION]
    Control which core particular FMOD threads are created on.

    [PARAMETERS]
    'affinity'    Pointer to a structure that describes the affinity for each thread.

    [REMARKS]
    Call before System::init or affinity values will not apply.

    [SEE_ALSO]
    FMOD_DURANGO_THREADAFFINITY
]
*/
extern "C" FMOD_RESULT F_API FMOD_Durango_SetThreadAffinity(FMOD_DURANGO_THREADAFFINITY *affinity);

struct ID3D12Device;

/*
[API]
[
[DESCRIPTION]
Provide FMOD with the applications D3D12 device so it can allocate resources and
offload processing to the GPU.

[PARAMETERS]
'device'    The applications device.

[REMARKS]

[SEE_ALSO]
FMOD_Durango_ReleaseComputeDevice
]
*/
extern "C" FMOD_RESULT F_API FMOD_Durango_SetComputeDevice(ID3D12Device *device, int pipe, int queue, void* garlicMem, int garlicMemSize, void* onionMem, int onionMemSize);

/*
[API]
[
[DESCRIPTION]
Release all GPU compute resources and no longer offload processing.

[REMARKS]

[SEE_ALSO]
FMOD_Durango_SetComputeDevice
]
*/
extern "C" FMOD_RESULT F_API FMOD_Durango_ReleaseComputeDevice();

#endif /* _FMODDURANGO_H */
