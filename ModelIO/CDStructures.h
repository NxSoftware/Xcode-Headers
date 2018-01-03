//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct BSDFMaterialValues {
    struct CGColor *_field1;
    float _field2;
    struct CGColor *_field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    float _field12;
    float _field13;
    float _field14;
    float _field15;
    float _field16;
};

struct BidirectionalScatteringDistributionFunction {
    CDUnknownFunctionPointerType *_field1;
    struct BSDFMaterialValues _field2;
};

struct CGColor;

struct Detail;

struct IESData {
    int _field1;
    int _field2;
    vector_f9ed6fc8 _field3;
    vector_f9ed6fc8 _field4;
    vector_f9ed6fc8 _field5;
    float _field6;
    float _field7;
    float _field8;
};

struct MDLTextureData {
    char *topLeftBytesForMip[16];
    char *bottomLeftBytesForMip[16];
    int channelCount;
    unsigned long long dimensions__rowStride;
    _Bool isCube;
};

struct MortonCode {
    struct vector<unsigned long long, std::__1::allocator<unsigned long long>> mortonkeyX;
    struct vector<unsigned long long, std::__1::allocator<unsigned long long>> mortonkeyY;
    struct vector<unsigned long long, std::__1::allocator<unsigned long long>> mortonkeyZ;
};

struct Octree;

struct PhysicallyPlausibleDistribution {
    CDUnknownFunctionPointerType *_field1;
    struct BSDFMaterialValues _field2;
};

struct RTIESLight {
    CDUnknownFunctionPointerType *_field1;
    struct CGColor *_field2;
    id _field3;
    int _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    struct IESData _field12;
    float _field13;
};

struct RTLight {
    CDUnknownFunctionPointerType *_field1;
    struct CGColor *_field2;
    id _field3;
    int _field4;
};

struct RTRenderable;

struct SCNOctree;

struct SdfPath {
    struct intrusive_ptr<const Sdf_PathNode> _field1;
};

struct Sdf_PathNode;

struct SkyDescriptor {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    float _field12;
    float _field13;
    float _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
    struct Detail *_field19;
    unsigned int _field20;
    unsigned int _field21;
    float _field22;
    float _field23;
    float _field24;
    float _field25;
    void *_field26;
};

struct TfPointerAndBits<const TfToken::_Rep> {
    struct _Rep *_field1;
};

struct TfPointerAndBits<const VtValue::_TypeInfo> {
    struct _TypeInfo *_ptrAndBits;
};

struct TfToken {
    struct TfPointerAndBits<const TfToken::_Rep> _field1;
};

struct TimeSampledVtValue;

struct UsdAttribute {
    int _field1;
    struct Usd_PrimDataHandle _field2;
    struct SdfPath _field3;
    struct TfToken _field4;
};

struct Usd_PrimData;

struct Usd_PrimDataHandle {
    struct intrusive_ptr<const Usd_PrimData> _field1;
};

struct VtValue {
    struct aligned_storage_imp<8, 8> _storage;
    struct TfPointerAndBits<const VtValue::_TypeInfo> _info;
};

struct _Rep;

struct _TypeInfo;

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>*> *__next_;
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct a8;

struct aligned_storage_imp<8, 8> {
    union data_t data_;
};

struct intrusive_ptr<const Sdf_PathNode> {
    struct Sdf_PathNode *_field1;
};

struct intrusive_ptr<const Usd_PrimData> {
    struct Usd_PrimData *_field1;
};

struct mutex {
    struct _opaque_pthread_mutex_t {
        long long _field1;
        char _field2[56];
    } _field1;
};

struct unique_ptr<ModelIO::BidirectionalScatteringDistributionFunction, std::__1::default_delete<ModelIO::BidirectionalScatteringDistributionFunction>> {
    struct __compressed_pair<ModelIO::BidirectionalScatteringDistributionFunction *, std::__1::default_delete<ModelIO::BidirectionalScatteringDistributionFunction>> {
        struct BidirectionalScatteringDistributionFunction *__first_;
    } __ptr_;
};

struct unique_ptr<ModelIO::Octree, std::__1::default_delete<ModelIO::Octree>> {
    struct __compressed_pair<ModelIO::Octree *, std::__1::default_delete<ModelIO::Octree>> {
        struct Octree *__first_;
    } __ptr_;
};

struct unique_ptr<ModelIO::SCNOctree, std::__1::default_delete<ModelIO::SCNOctree>> {
    struct __compressed_pair<ModelIO::SCNOctree *, std::__1::default_delete<ModelIO::SCNOctree>> {
        struct SCNOctree *__first_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>*> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>*>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unordered_map<unsigned long long, int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, int>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, int>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, int>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *>*> __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::equal_to<unsigned long long>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct vector<(anonymous namespace)::TimeSampledVtValue, std::__1::allocator<(anonymous namespace)::TimeSampledVtValue>> {
    struct TimeSampledVtValue *__begin_;
    struct TimeSampledVtValue *__end_;
    struct __compressed_pair<(anonymous namespace)::TimeSampledVtValue *, std::__1::allocator<(anonymous namespace)::TimeSampledVtValue>> {
        struct TimeSampledVtValue *__first_;
    } __end_cap_;
};

struct vector<MDLLight *, std::__1::allocator<MDLLight *>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<MDLLight *__strong *, std::__1::allocator<MDLLight *>> {
        id *__first_;
    } __end_cap_;
};

struct vector<ModelIO::RTRenderable *, std::__1::allocator<ModelIO::RTRenderable *>> {
    struct RTRenderable **__begin_;
    struct RTRenderable **__end_;
    struct __compressed_pair<ModelIO::RTRenderable **, std::__1::allocator<ModelIO::RTRenderable *>> {
        struct RTRenderable **__first_;
    } __end_cap_;
};

struct vector<float, std::__1::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *_field1;
    } _field3;
};

struct vector<int, std::__1::allocator<int>> {
    int *_field1;
    int *_field2;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *_field1;
    } _field3;
};

struct vector<unsigned long long, std::__1::allocator<unsigned long long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long>> {
        unsigned long long *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

// Template types
typedef struct vector<float, std::__1::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *_field1;
    } _field3;
} vector_f9ed6fc8;

typedef struct vector<int, std::__1::allocator<int>> {
    int *_field1;
    int *_field2;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *_field1;
    } _field3;
} vector_3203cf93;

#pragma mark Named Unions

union data_t {
    char buf[8];
    struct a8 align_;
};

