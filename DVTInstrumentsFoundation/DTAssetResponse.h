//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsFoundation/NSSecureCoding-Protocol.h>

@class DTXMessage, NSData, NSString;

@interface DTAssetResponse : NSObject <NSSecureCoding>
{
    BOOL _completed;
    NSString *_identifier;
    NSData *_data;
}

+ (BOOL)supportsSecureCoding;
+ (id)completedResponseWithIdentifier:(id)arg1;
+ (id)responseWithIdentifier:(id)arg1 data:(id)arg2;
@property(readonly, nonatomic, getter=isCompleted) BOOL completed; // @synthesize completed=_completed;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) DTXMessage *message;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 data:(id)arg2 completed:(BOOL)arg3;

@end

