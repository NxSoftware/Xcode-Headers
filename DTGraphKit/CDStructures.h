//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CALayer, CAShapeLayer, NSCache, NSColor, NSFont, NSImage, NSMutableDictionary;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct DTRealRange {
    double _field1;
    double _field2;
};

struct DTTimelineDecorationContainer;

struct DTTimelineGraphDynamicRange {
    long long low;
    long long high;
};

struct DTTimelinePlaneAccessory {
    CALayer *layer;
    CALayer *iconLayer;
    CAShapeLayer *separatorLayer;
    NSImage *image;
    NSImage *alternateImage;
    char hover;
    char selectionHidden;
    char downState;
};

struct DTTimelinePlaneGlyph {
    CALayer *layer;
    NSImage *image;
    NSImage *selectedImage;
    NSImage *selectedImageNonMainWindow;
    struct CGSize size;
    char hover;
};

struct DTTimelineRepresentativeDecoration {
    long long value;
    unsigned long long label;
    struct XRTimeRange timeRange;
    unsigned int decorationCount;
    char heterogeneousLabel;
};

struct DrawablesSettings {
    NSColor *defaultColor;
    NSFont *defaultFont;
    double defaultFontHeight;
    NSColor *defaultTextColor;
    NSImage *defaultImage;
    struct CGSize defaultImageSize;
    struct {
        unsigned long long displayType;
        unsigned long long conflictResolutionType;
        unsigned long long labelConflictResolutionType;
    } point;
    struct {
        unsigned long long displayType;
        unsigned long long conflictResolutionType;
        unsigned long long labelConflictResolutionType;
        double visualSpacing;
        unsigned long long barWidth;
        double roundedRectRadius;
    } interval;
};

struct DynamicRange {
    long long _low;
    long long _high;
};

struct LayoutRect {
    struct CGRect _field1;
    struct CGRect _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    struct CGRect _field5;
    struct CGRect _field6;
    struct CGRect _field7;
};

struct PlaneMetrics {
    struct DynamicRange _dynamicRange;
    struct ViewMetrics _currentViewMetrics;
    double _height;
    struct DrawablesSettings _drawablesSettings;
    char _decoratesMajorMinorTicks;
    char _optionalContent;
    char _ignoresTimeBoundsCheck;
    NSColor *_opaqueBackgroundColor;
    int _serialNumber;
    double _maxStringWidthInPts;
};

struct Span {
    double _field1;
    double _field2;
};

struct TileMetrics {
    struct XRTimeRange _timeRange;
    struct PlaneMetrics _planeMetrics;
};

struct TimelineViewContext {
    struct ViewMetrics _viewMetrics;
    unsigned long long _firstVisibleTile;
    unsigned long long _lastVisibleTile;
    double _hostVisibleWidth;
    long long _nanosecondOffset;
    NSCache *_tileContentByIdx;
    id _cbHandler;
    NSMutableDictionary *_visibleContentByIdx;
};

struct ViewMetrics {
    unsigned long long _tileWidth;
    double _tileWidthInPoints;
    double _displayScale;
    unsigned long long _majorTickMarkDuration;
    unsigned long long _minorTickMarkDuration;
    unsigned long long _nanosecondsPerPoint;
    struct XRTimeRange _timeBounds;
    struct shared_ptr<const std::__1::unordered_map<int, CGRect, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, CGRect>>>> _planeLayoutMapPtr;
    double _visibleHeight;
    double _yOffset;
    double _planeHandleWidth;
    char _hasDarkBackground;
};

struct XRTimeRange {
    unsigned long long start;
    unsigned long long length;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<double, NSImage *>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<double, NSImage *>, void *>*> *__next_;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, CGRect>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, CGRect>, void *>*> *_field1;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::tuple<NSColor *, CGPath *>>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::tuple<NSColor *, CGPath *>>, void *>*> *__next_;
};

struct __shared_weak_count;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct map<XRTimeRange, DTTimelineInspectionDecoration *, std::__1::less<XRTimeRange>, std::__1::allocator<std::__1::pair<const XRTimeRange, DTTimelineInspectionDecoration *>>> {
    struct __tree<std::__1::__value_type<XRTimeRange, DTTimelineInspectionDecoration *>, std::__1::__map_value_compare<XRTimeRange, std::__1::__value_type<XRTimeRange, DTTimelineInspectionDecoration *>, std::__1::less<XRTimeRange>, true>, std::__1::allocator<std::__1::__value_type<XRTimeRange, DTTimelineInspectionDecoration *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<XRTimeRange, DTTimelineInspectionDecoration *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<XRTimeRange, std::__1::__value_type<XRTimeRange, DTTimelineInspectionDecoration *>, std::__1::less<XRTimeRange>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct pair<DTTimelineInternal::DynamicRange, NSArray *>;

struct shared_ptr<DTTimelineDecorationContainer> {
    struct DTTimelineDecorationContainer *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<const std::__1::unordered_map<int, CGRect, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, CGRect>>>> {
    unordered_map_b8b4eb21 *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct tuple<unsigned int, DTItemIndexAndFlags, DTMemoryGraphItem *>;

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<double, NSImage *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<double, NSImage *>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<double, NSImage *>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<double, NSImage *>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<double, NSImage *>, void *>*> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<double, NSImage *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<double, NSImage *>, void *>*>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, CGRect>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, CGRect>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, CGRect>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, CGRect>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, CGRect>, void *>*> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, CGRect>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, CGRect>, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::tuple<NSColor *, CGPath *>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::tuple<NSColor *, CGPath *>>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::tuple<NSColor *, CGPath *>>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::tuple<NSColor *, CGPath *>>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::tuple<NSColor *, CGPath *>>, void *>*> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::tuple<NSColor *, CGPath *>>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::tuple<NSColor *, CGPath *>>, void *>*>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unordered_map<double, NSImage *, std::__1::hash<double>, std::__1::equal_to<double>, std::__1::allocator<std::__1::pair<const double, NSImage *>>> {
    struct __hash_table<std::__1::__hash_value_type<double, NSImage *>, std::__1::__unordered_map_hasher<double, std::__1::__hash_value_type<double, NSImage *>, std::__1::hash<double>, true>, std::__1::__unordered_map_equal<double, std::__1::__hash_value_type<double, NSImage *>, std::__1::equal_to<double>, true>, std::__1::allocator<std::__1::__hash_value_type<double, NSImage *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<double, NSImage *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<double, NSImage *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<double, NSImage *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<double, NSImage *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<double, NSImage *>, void *>*> __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<double, std::__1::__hash_value_type<double, NSImage *>, std::__1::hash<double>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<double, std::__1::__hash_value_type<double, NSImage *>, std::__1::equal_to<double>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_map<int, CGRect, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, CGRect>>> {
    struct __hash_table<std::__1::__hash_value_type<int, CGRect>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, CGRect>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, CGRect>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, CGRect>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, CGRect>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, CGRect>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, CGRect>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, CGRect>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, CGRect>, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, CGRect>, std::__1::hash<int>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, CGRect>, std::__1::equal_to<int>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct unordered_map<unsigned long, std::__1::tuple<NSColor *, CGPath *>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::tuple<NSColor *, CGPath *>>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long, std::__1::tuple<NSColor *, CGPath *>>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, std::__1::tuple<NSColor *, CGPath *>>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, std::__1::tuple<NSColor *, CGPath *>>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, std::__1::tuple<NSColor *, CGPath *>>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::tuple<NSColor *, CGPath *>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::tuple<NSColor *, CGPath *>>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::tuple<NSColor *, CGPath *>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::tuple<NSColor *, CGPath *>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::tuple<NSColor *, CGPath *>>, void *>*> __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, std::__1::tuple<NSColor *, CGPath *>>, std::__1::hash<unsigned long>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, std::__1::tuple<NSColor *, CGPath *>>, std::__1::equal_to<unsigned long>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct vector<std::__1::pair<DTTimelineInternal::DynamicRange, NSArray *>, std::__1::allocator<std::__1::pair<DTTimelineInternal::DynamicRange, NSArray *>>> {
    struct pair<DTTimelineInternal::DynamicRange, NSArray *> *__begin_;
    struct pair<DTTimelineInternal::DynamicRange, NSArray *> *__end_;
    struct __compressed_pair<std::__1::pair<DTTimelineInternal::DynamicRange, NSArray *>*, std::__1::allocator<std::__1::pair<DTTimelineInternal::DynamicRange, NSArray *>>> {
        struct pair<DTTimelineInternal::DynamicRange, NSArray *> *__first_;
    } __end_cap_;
};

struct vector<std::__1::tuple<unsigned int, DTItemIndexAndFlags, DTMemoryGraphItem *>, std::__1::allocator<std::__1::tuple<unsigned int, DTItemIndexAndFlags, DTMemoryGraphItem *>>> {
    struct tuple<unsigned int, DTItemIndexAndFlags, DTMemoryGraphItem *> *_field1;
    struct tuple<unsigned int, DTItemIndexAndFlags, DTMemoryGraphItem *> *_field2;
    struct __compressed_pair<std::__1::tuple<unsigned int, DTItemIndexAndFlags, DTMemoryGraphItem *>*, std::__1::allocator<std::__1::tuple<unsigned int, DTItemIndexAndFlags, DTMemoryGraphItem *>>> {
        struct tuple<unsigned int, DTItemIndexAndFlags, DTMemoryGraphItem *> *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned int _field2;
    unsigned long long _field3;
} CDStruct_8b65991f;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned long long _field1;
    unsigned int :60;
    unsigned int :4;
    id _field2;
} CDStruct_599faf0f;

// Template types
typedef struct shared_ptr<DTTimelineDecorationContainer> {
    struct DTTimelineDecorationContainer *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_1f7ca383;

typedef struct unordered_map<int, CGRect, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, CGRect>>> {
    struct __hash_table<std::__1::__hash_value_type<int, CGRect>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, CGRect>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, CGRect>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, CGRect>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, CGRect>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, CGRect>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, CGRect>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, CGRect>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, CGRect>, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, CGRect>, std::__1::hash<int>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, CGRect>, std::__1::equal_to<int>, true>> {
            float _field1;
        } _field4;
    } _field1;
} unordered_map_b8b4eb21;

