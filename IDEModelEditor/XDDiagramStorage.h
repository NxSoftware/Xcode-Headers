//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "NSCoding.h"

@class DVTStackBacktrace, IDEDataModelDiagramEditor, NSDictionary, NSMutableArray, NSString;

@interface XDDiagramStorage : NSObject <NSCoding, DVTInvalidation>
{
    IDEDataModelDiagramEditor *_diagramController;
    BOOL _needsSetup;
    NSMutableArray *_graphicsLayers;
    NSMutableArray *_graphics;
    id _dataSource;
    id _delegate;
    NSDictionary *_userInfo;
    struct _XDDiagramStorageFlags _dsFlags;
}

+ (void)initialize;
@property BOOL needsSetup; // @synthesize needsSetup=_needsSetup;
- (void).cxx_destruct;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (void)markAsDirtyGraphic:(id)arg1;
- (BOOL)isMarkAsDirtyGraphicDisabled;
- (void)enableMarkAsDirtyGraphic;
- (void)disableMarkAsDirtyGraphic;
- (void)removeGraphic:(id)arg1;
- (void)moveGraphic:(id)arg1 toIndex:(long long)arg2;
- (void)moveGraphicAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)insertGraphic:(id)arg1 atIndex:(long long)arg2;
- (void)addGraphic:(id)arg1;
- (id)graphics;
- (void)removeGraphicsLayer:(id)arg1;
- (void)moveGraphicsLayer:(id)arg1 toIndex:(long long)arg2;
- (void)moveGraphicsLayerAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)insertGraphicsLayer:(id)arg1 atIndex:(long long)arg2;
- (void)addGraphicsLayer:(id)arg1;
- (id)graphicsLayers;
- (id)undoManager;
- (id)_firstDiagramViewForDiagramStorage:(id)arg1;
@property(retain) IDEDataModelDiagramEditor *diagramController; // @synthesize diagramController=_diagramController;
- (void)primitiveInvalidate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)defaultOperationColor;
- (void)setDefaultOperationColor:(id)arg1;
- (id)defaultAttributeColor;
- (void)setDefaultAttributeColor:(id)arg1;
- (id)defaultNameColor;
- (void)setDefaultNameColor:(id)arg1;
- (id)defaultOperationFont;
- (void)setDefaultOperationFont:(id)arg1;
- (id)defaultAttributeFont;
- (void)setDefaultAttributeFont:(id)arg1;
- (id)defaultNameFont;
- (void)setDefaultNameFont:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

