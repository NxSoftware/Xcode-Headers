//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUTraceModelFactory.h"

@class GPUGLTraceOutline, NSMapTable;

__attribute__((visibility("hidden")))
@interface GPUGLModelFactory : GPUTraceModelFactory
{
    NSMapTable *_resourceTypeToViewMaptable;
    GPUGLTraceOutline *_outline;
}

+ (id)_keyForResourceItem:(id)arg1;
+ (Class)renderJobClass;
+ (Class)imageResourceSettingBubbleClass;
+ (Class)textureInfoBubbleClass;
+ (Class)depthStencilInfoBubbleClass;
+ (Class)colorInfoBubbleClass;
+ (Class)captureSessionInfoClassWithAPI:(unsigned int)arg1;
@property(retain, nonatomic) GPUGLTraceOutline *outline; // @synthesize outline=_outline;
- (void).cxx_destruct;
- (id)createInfoBubbleForImageResource:(id)arg1 parentView:(id)arg2 owner:(id)arg3 renderingAttributes:(id)arg4;
- (int)openGLAPI;
- (id)resourceItemOfType:(unsigned int)arg1 resourceID:(unsigned int)arg2 forFunctionIndex:(unsigned int)arg3;
- (id)storedRenderingAttributesForResourceItem:(id)arg1;
- (id)resolveCurrentResourceItemWithPreviousItem:(id)arg1 currentMainEditorItem:(id)arg2 topLevelObjects:(id)arg3;
- (void)establishChildrenForProgramItem:(id)arg1;
- (id)programObjectFromProgramItem:(id)arg1 shaderType:(unsigned int)arg2;
- (void)generateResourcesForGroup:(id)arg1 apiItem:(id)arg2 boundOnly:(BOOL)arg3;
- (void)createParentResourceGroupsForAPIItem:(id)arg1;
- (id)_createResourceGroup:(id)arg1 parentItem:(id)arg2 boundOnly:(BOOL)arg3;
- (void)primitiveInvalidate;
- (id)apiItemFromDisplayIndex:(unsigned int)arg1;
- (id)locateDisplayableItemToDraw:(id)arg1 isAssociatedWithStateItem:(char *)arg2;
- (id)apiItemForTrueFunctionIndex:(unsigned int)arg1;
- (id)apiItemFromFunctionIndex:(unsigned int)arg1;
- (void)invalidateModel;
- (void)generateModelWithTraceSession:(id)arg1;
- (id)resourceTypeToViewClassMaptable;
- (id)domainProviderRootProgramGroup;
- (id)domainProviderRootResourceGroup;
- (id)allAPIItems;
- (id)allMarkerItems;
- (id)allDisplayableItems;
- (id)lastDisplayableItem;
- (id)allPrograms;
- (id)allTraceItems;
- (id)rootProcessItem;
- (id)initWithController:(id)arg1 variablesViewContentProviderClass:(Class)arg2 pluginFactory:(id)arg3;

@end

