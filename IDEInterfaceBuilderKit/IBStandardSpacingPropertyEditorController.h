//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAutolayoutPropertyEditingController.h>

@interface IBStandardSpacingPropertyEditorController : IBAutolayoutPropertyEditingController
{
}

- (void)decrementValue;
- (void)incrementValue;
- (void)syncUIFromModel;
- (BOOL)allObjectsShareValue:(id *)arg1;
- (id)valueForEditedObject:(id)arg1;
- (void)setValue:(id)arg1 forEditedObject:(id)arg2;
- (void)syncModelFromUI;
- (void)_applyValueUsingBlock:(CDUnknownBlockType)arg1;
- (void)didSelectUseStandardValue:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)populateMenu:(id)arg1;
- (void)populateObservingTokens:(id)arg1;
- (id)modelKeyPath;
- (void)setTextField:(id)arg1;

@end

