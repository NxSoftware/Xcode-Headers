//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEInitialization.h"

@class DVTObservingToken;

@interface IDEKitDFRSupport : NSObject <IDEInitialization>
{
    DVTObservingToken *_runSheetSelectionObserver;
    DVTObservingToken *_runSheetContentObserver;
    DVTObservingToken *_buttonTitleObserver;
}

+ (id)sharedInstance;
+ (BOOL)ide_initializeWithOptions:(int)arg1 error:(id *)arg2;
@property(retain) DVTObservingToken *buttonTitleObserver; // @synthesize buttonTitleObserver=_buttonTitleObserver;
@property(retain) DVTObservingToken *runSheetContentObserver; // @synthesize runSheetContentObserver=_runSheetContentObserver;
@property(retain) DVTObservingToken *runSheetSelectionObserver; // @synthesize runSheetSelectionObserver=_runSheetSelectionObserver;
- (void).cxx_destruct;

@end
