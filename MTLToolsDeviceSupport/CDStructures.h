//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct Argument {
    void *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned short _field5;
    unsigned short _field6;
};

struct AttachmentInfo {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
};

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct CoreFunction {
    unsigned int _field1;
    unsigned int _field2;
    unsigned short _field3;
    unsigned short _field4;
    union {
        unsigned long long _field1;
        unsigned long long _field2;
    } _field5;
    struct Argument _field6;
    struct Argument _field7[16];
    unsigned int _field8;
    unsigned int _field9;
    void *_field10;
    void *_field11;
};

struct DYMTLClearValue {
    union {
        struct {
            double _field1;
            double _field2;
            double _field3;
            double _field4;
        } _field1;
        double _field2[4];
    } _field1;
};

struct DYMTLRenderPassAttachmentDescriptor {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    struct DYMTLClearValue _field11;
    unsigned long long _field12;
};

struct DYMTLRenderPassDescriptor {
    unsigned long long _field1;
    unsigned long long _field2;
    struct DYMTLRenderPassAttachmentDescriptor _field3[8];
    struct DYMTLRenderPassAttachmentDescriptor _field4;
    struct DYMTLRenderPassAttachmentDescriptor _field5;
};

struct NSDictionary {
    Class _field1;
};

struct UniformData {
    float blendColor[4];
    unsigned int layerIndex;
    unsigned int padding[3];
};

struct __hash_node<std::__1::__hash_value_type<unsigned long long, CommandBufferInfo>, void *>;

struct __hash_node<std::__1::__hash_value_type<unsigned long long, DrawableInfo>, void *>;

struct __hash_node<std::__1::__hash_value_type<unsigned long long, EncoderInfo>, void *>;

struct __hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, void *>;

struct __hash_node<std::__1::__hash_value_type<unsigned long long, id<CAMetalDrawable>>, void *>;

struct __hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>;

struct __hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>;

struct __hash_node<unsigned long long, void *>;

struct pair<unsigned long long, MTLDebugFunctionArgument>;

struct set<id, std::__1::less<id>, std::__1::allocator<id>> {
    struct __tree<id, std::__1::less<id>, std::__1::allocator<id>> {
        struct __tree_node<id, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<id, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
                struct __tree_node_base<void *> *__left_;
            } __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::less<id>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long>;

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, CommandBufferInfo>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, CommandBufferInfo>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, CommandBufferInfo>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, CommandBufferInfo>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<unsigned long long, CommandBufferInfo>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, CommandBufferInfo>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, CommandBufferInfo>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DrawableInfo>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DrawableInfo>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DrawableInfo>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DrawableInfo>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<unsigned long long, DrawableInfo>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DrawableInfo>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DrawableInfo>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, EncoderInfo>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, EncoderInfo>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, EncoderInfo>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, EncoderInfo>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<unsigned long long, EncoderInfo>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, EncoderInfo>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, EncoderInfo>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id<CAMetalDrawable>>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id<CAMetalDrawable>>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id<CAMetalDrawable>>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id<CAMetalDrawable>>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<unsigned long long, id<CAMetalDrawable>>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id<CAMetalDrawable>>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id<CAMetalDrawable>>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node<unsigned long long, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<unsigned long long, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *>*>>> {
        struct __hash_node<unsigned long long, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unordered_map<unsigned long long, CommandBufferInfo, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, CommandBufferInfo>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, CommandBufferInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, CommandBufferInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, CommandBufferInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, CommandBufferInfo>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, CommandBufferInfo>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, CommandBufferInfo>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, CommandBufferInfo>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, CommandBufferInfo>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, CommandBufferInfo>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<unsigned long long, CommandBufferInfo>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, CommandBufferInfo>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, CommandBufferInfo>, std::__1::equal_to<unsigned long long>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_map<unsigned long long, DrawableInfo, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, DrawableInfo>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, DrawableInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, DrawableInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, DrawableInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, DrawableInfo>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DrawableInfo>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DrawableInfo>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DrawableInfo>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DrawableInfo>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DrawableInfo>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<unsigned long long, DrawableInfo>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, DrawableInfo>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, DrawableInfo>, std::__1::equal_to<unsigned long long>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_map<unsigned long long, EncoderInfo, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, EncoderInfo>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, EncoderInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, EncoderInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, EncoderInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, EncoderInfo>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, EncoderInfo>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, EncoderInfo>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, EncoderInfo>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, EncoderInfo>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, EncoderInfo>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<unsigned long long, EncoderInfo>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, EncoderInfo>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, EncoderInfo>, std::__1::equal_to<unsigned long long>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_map<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>, std::__1::equal_to<unsigned long long>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_map<unsigned long long, id, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, id>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, id>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, id>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, id>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, id>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, id>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, id>, std::__1::equal_to<unsigned long long>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_map<unsigned long long, id<CAMetalDrawable>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, id<CAMetalDrawable>>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, id<CAMetalDrawable>>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, id<CAMetalDrawable>>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, id<CAMetalDrawable>>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, id<CAMetalDrawable>>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id<CAMetalDrawable>>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id<CAMetalDrawable>>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id<CAMetalDrawable>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id<CAMetalDrawable>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id<CAMetalDrawable>>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<unsigned long long, id<CAMetalDrawable>>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, id<CAMetalDrawable>>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, id<CAMetalDrawable>>, std::__1::equal_to<unsigned long long>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_map<unsigned long long, unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned long long>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned long long>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::equal_to<unsigned long long>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long>> {
    struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long>> {
        struct unique_ptr<std::__1::__hash_node<unsigned long long, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *>*>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *>*> {
                struct __hash_node<unsigned long long, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::hash<unsigned long long>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::equal_to<unsigned long long>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct vector<std::__1::pair<unsigned long long, MTLDebugFunctionArgument>, std::__1::allocator<std::__1::pair<unsigned long long, MTLDebugFunctionArgument>>> {
    struct pair<unsigned long long, MTLDebugFunctionArgument> *__begin_;
    struct pair<unsigned long long, MTLDebugFunctionArgument> *__end_;
    struct __compressed_pair<std::__1::pair<unsigned long long, MTLDebugFunctionArgument>*, std::__1::allocator<std::__1::pair<unsigned long long, MTLDebugFunctionArgument>>> {
        struct pair<unsigned long long, MTLDebugFunctionArgument> *__first_;
    } __end_cap_;
};

struct vector<std::__1::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long>, std::__1::allocator<std::__1::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long>>> {
    struct tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long> *__begin_;
    struct tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long> *__end_;
    struct __compressed_pair<std::__1::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long>*, std::__1::allocator<std::__1::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long>>> {
        struct tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long> *__first_;
    } __end_cap_;
};

struct vector<unsigned long long, std::__1::allocator<unsigned long long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long>> {
        unsigned long long *__first_;
    } __end_cap_;
};

struct vector<unsigned long, std::__1::allocator<unsigned long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long>> {
        unsigned long long *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct unordered_map<unsigned long long, EncoderInfo, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, EncoderInfo>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, EncoderInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, EncoderInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, EncoderInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, EncoderInfo>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, EncoderInfo>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, EncoderInfo>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, EncoderInfo>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, EncoderInfo>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, EncoderInfo>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<unsigned long long, EncoderInfo>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, EncoderInfo>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, EncoderInfo>, std::__1::equal_to<unsigned long long>, true>> {
            float __first_;
        } __p3_;
    } __table_;
} unordered_map_ca22002e;

typedef struct unordered_map<unsigned long long, id, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, id>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, id>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, id>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, id>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, id>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, id>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, id>, std::__1::equal_to<unsigned long long>, true>> {
            float __first_;
        } __p3_;
    } __table_;
} unordered_map_d8b431c8;

typedef struct vector<std::__1::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long>, std::__1::allocator<std::__1::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long>>> {
    struct tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long> *__begin_;
    struct tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long> *__end_;
    struct __compressed_pair<std::__1::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long>*, std::__1::allocator<std::__1::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long>>> {
        struct tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long> *__first_;
    } __end_cap_;
} vector_5b503382;
