//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBViewTracker.h"

@interface IBUITableViewCellTracker : IBViewTracker
{
    struct CGRect initialFrame;
    double initialCellRowHeight;
    BOOL startedWithCustomRowHeight;
    double initialTableRowHeight;
}

- (void)trackWithEvent:(id)arg1;
- (void)placeSubviewInFrame:(struct CGRect)arg1 event:(id)arg2;
- (id)tableView;
- (id)trackedTableViewCell;

@end

