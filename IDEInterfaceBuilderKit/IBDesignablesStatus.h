//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/NSCopying-Protocol.h>

@class IBDesignablesStatusAction, NSDate, NSString;

@interface IBDesignablesStatus : NSObject <NSCopying>
{
    long long _statusValue;
    NSString *_primaryStatusText;
    NSString *_secondaryStatusText;
    NSDate *_lastUpdateDate;
    IBDesignablesStatusAction *_action;
}

+ (id)upToDateStatusWithLastUpdateDate:(id)arg1;
@property(retain, nonatomic) IBDesignablesStatusAction *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(copy, nonatomic) NSString *secondaryStatusText; // @synthesize secondaryStatusText=_secondaryStatusText;
@property(copy, nonatomic) NSString *primaryStatusText; // @synthesize primaryStatusText=_primaryStatusText;
@property(nonatomic) long long statusValue; // @synthesize statusValue=_statusValue;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStatusValue:(long long)arg1 primaryStatusText:(id)arg2 secondaryStatusText:(id)arg3 action:(id)arg4;
- (id)initWithStatusValue:(long long)arg1 primaryStatusText:(id)arg2 secondaryStatusText:(id)arg3;
- (id)initWithStatusValue:(long long)arg1 primaryStatusText:(id)arg2 secondaryStatusText:(id)arg3 lastUpdateDate:(id)arg4 action:(id)arg5;

@end

