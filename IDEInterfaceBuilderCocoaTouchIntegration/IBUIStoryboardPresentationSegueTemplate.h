//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIStoryboardSegueTemplate.h>

#import "IBDocumentArchiving.h"

@class NSString;

@interface IBUIStoryboardPresentationSegueTemplate : IBUIStoryboardSegueTemplate <IBDocumentArchiving>
{
    BOOL _useDefaultModalPresentationStyle;
    BOOL _useDefaultModalTransitionStyle;
    int _modalPresentationStyle;
    int _modalTransitionStyle;
}

+ (id)segueTemplateWithIdentifier:(id)arg1 trigger:(id)arg2 segueClassName:(id)arg3 destinationControllerIdentifier:(id)arg4 modalPresentationStyleOrNilForDefault:(id)arg5 modalTransitionStyleOrNilForDefault:(id)arg6 animates:(BOOL)arg7;
@property(nonatomic) int modalTransitionStyle; // @synthesize modalTransitionStyle=_modalTransitionStyle;
@property(nonatomic) int modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
@property(nonatomic) BOOL useDefaultModalTransitionStyle; // @synthesize useDefaultModalTransitionStyle=_useDefaultModalTransitionStyle;
@property(nonatomic) BOOL useDefaultModalPresentationStyle; // @synthesize useDefaultModalPresentationStyle=_useDefaultModalPresentationStyle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (id)ibLocalAttributeKeyPaths;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

