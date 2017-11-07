//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBGViewDebuggerDocument, DBGViewDebuggerDocumentLocation, DBGViewSurface, NSString;

@interface DBGViewDebuggerIssue : NSObject
{
    unsigned long long _issueType;
    DBGViewDebuggerDocument *_document;
    DBGViewDebuggerDocumentLocation *_documentLocation;
    NSString *_messageExcludingViewReference;
    NSString *_messageIncludingViewReference;
    DBGViewSurface *_affectedView;
}

@property(readonly) DBGViewSurface *affectedView; // @synthesize affectedView=_affectedView;
@property(readonly) DBGViewDebuggerDocument *document; // @synthesize document=_document;
@property(readonly) unsigned long long issueType; // @synthesize issueType=_issueType;
- (void).cxx_destruct;
- (id)messageIncludingReferenceToView:(BOOL)arg1;
@property(readonly) DBGViewDebuggerDocumentLocation *documentLocation;
- (id)initWithDocument:(id)arg1 affectedView:(id)arg2 issueType:(unsigned long long)arg3;

@end

