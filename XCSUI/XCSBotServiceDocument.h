//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XCSUI/XCSBotSupportingDocument.h>

@class DVTObservingToken, NSString, XCSService;

@interface XCSBotServiceDocument : XCSBotSupportingDocument
{
    NSString *_theRealDisplayName;
    DVTObservingToken *_maintenanceTasksObserver;
    XCSService *_service;
}

+ (id)keyPathsForValuesAffectingDisplayName;
@property(retain, nonatomic) XCSService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (id)botIntegration;
- (id)bot;
- (id)displayName;
- (void)editorDocumentWillClose;
- (void)setFileURL:(id)arg1;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;

@end

