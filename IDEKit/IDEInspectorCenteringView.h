//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

@class DVTNotificationToken, NSView;

@interface IDEInspectorCenteringView : DVTLayoutView_ML
{
    NSView *centeredView;
    DVTNotificationToken *_centeredViewFrameChangeToken;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)centeredViewFrameDidChange:(id)arg1;
- (void)awakeFromNib;

@end

