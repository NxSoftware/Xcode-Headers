//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

@interface _TtC18IDESourceControlUI26WorkingCopyHistoryLocation : DVTDocumentLocation
{
    // Error parsing type: , name: indexKey
    // Error parsing type: , name: index
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2;
- (BOOL)isEqualDisregardingTimestamp:(id)arg1;
- (id)copyWithURL:(id)arg1;
- (long long)compare:(id)arg1;
@property(nonatomic, readonly) long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 index:(long long)arg3;
@property(nonatomic, readonly) long long index; // @synthesize index;

@end
