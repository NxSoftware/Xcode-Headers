//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DebuggerUI/DBGInstructionPointerAnnotation.h>

@class DVTObservingToken;

@interface DBGOtherThreadIPAnnotation : DBGInstructionPointerAnnotation
{
    DVTObservingToken *_fileURLObserverToken;
    DVTObservingToken *_lineNumberURLObserverToken;
}

- (void).cxx_destruct;
- (void)annotationWillUninstall;
- (id)initWithDocumentLocation:(id)arg1 stackFrame:(id)arg2;
- (void)_updateLocation;

@end

