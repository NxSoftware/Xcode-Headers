//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface XCSBlockParallelResults : NSObject
{
    BOOL _hasTimedOut;
    NSDictionary *_errors;
    NSDictionary *_results;
}

+ (id)resultsWithDictionary:(id)arg1;
@property(retain, nonatomic) NSDictionary *results; // @synthesize results=_results;
@property(nonatomic) BOOL hasTimedOut; // @synthesize hasTimedOut=_hasTimedOut;
@property(retain, nonatomic) NSDictionary *errors; // @synthesize errors=_errors;
- (void).cxx_destruct;
- (id)resultForIdentifier:(id)arg1;
- (id)identifiers;
- (id)initWithResults:(id)arg1;

@end

