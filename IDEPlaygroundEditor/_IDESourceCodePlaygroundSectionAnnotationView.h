//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEPlaygroundEditor/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDESourceCodePlaygroundSectionAnnotationViewController, NSString;

@interface _IDESourceCodePlaygroundSectionAnnotationView : NSView <DVTInvalidation>
{
    IDESourceCodePlaygroundSectionAnnotationViewController *_viewController;
}

+ (void)initialize;
@property(retain) IDESourceCodePlaygroundSectionAnnotationViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)primitiveInvalidate;
- (void)resetCursorRects;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

