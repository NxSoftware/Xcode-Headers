//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTGraphKit/DTResponsiveUISubframe.h>

@interface DTResponsiveUIMainThreadDeliverySubframe : DTResponsiveUISubframe
{
}

+ (unsigned int)_activityQoS;
+ (BOOL)_enableConcurrentActivities;
+ (BOOL)_establishesAffinity;
- (int)_handleMinorFrameWithDeadline:(unsigned long long)arg1;
- (BOOL)_providerMakingCallback:(id)arg1;
- (id)_popLatestContent:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

