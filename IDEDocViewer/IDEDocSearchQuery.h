//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTSourceCodeLanguage, NSString;

@interface IDEDocSearchQuery : NSObject
{
    NSString *_searchString;
    unsigned long long _matchType;
    DVTSourceCodeLanguage *_language;
    NSString *_tokenScope;
}

+ (id)searchQueryWithSearchString:(id)arg1 matchType:(unsigned long long)arg2 language:(id)arg3 tokenScope:(id)arg4;
@property(readonly, copy) NSString *tokenScope; // @synthesize tokenScope=_tokenScope;
@property(readonly, copy) DVTSourceCodeLanguage *language; // @synthesize language=_language;
@property(readonly) unsigned long long matchType; // @synthesize matchType=_matchType;
@property(readonly, copy) NSString *searchString; // @synthesize searchString=_searchString;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithSearchString:(id)arg1 matchType:(unsigned long long)arg2 language:(id)arg3 tokenScope:(id)arg4;

@end

