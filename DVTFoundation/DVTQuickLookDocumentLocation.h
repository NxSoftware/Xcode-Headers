//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

#import <DVTFoundation/NSCoding-Protocol.h>

@class DVTQuickLookPage;

@interface DVTQuickLookDocumentLocation : DVTDocumentLocation <NSCoding>
{
    DVTQuickLookPage *_page;
}

@property(readonly) DVTQuickLookPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithDocumentURL:(id)arg1 page:(id)arg2;

@end

