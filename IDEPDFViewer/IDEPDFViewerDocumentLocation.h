//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

@interface IDEPDFViewerDocumentLocation : DVTDocumentLocation
{
    unsigned long long _pageIndex;
    struct CGPoint _point;
}

@property(readonly) struct CGPoint point; // @synthesize point=_point;
@property(readonly) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithPDFDestination:(id)arg1 inPDFDocument:(id)arg2 atURL:(id)arg3;

@end

