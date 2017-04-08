//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, NSHashTable, NSString;

@interface DVTProductCoordinator : NSObject <DVTInvalidation>
{
    NSHashTable *_products;
}

+ (void)initialize;
@property(retain) NSHashTable *products; // @synthesize products=_products;
- (void).cxx_destruct;
- (void)invalidateProducts:(id)arg1;
- (void)invalidateProduct:(id)arg1;
- (void)_forgetProduct:(id)arg1 invalidate:(BOOL)arg2;
- (void)transferProduct:(id)arg1 toCoordinator:(id)arg2;
- (void)registerProduct:(id)arg1;
- (id)malformedProductWithArchives:(id)arg1;
- (id)productWithProductIdentifier:(id)arg1 productVersions:(id)arg2;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

