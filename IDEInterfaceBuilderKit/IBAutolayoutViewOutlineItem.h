//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAutolayoutIssueOutlineItem.h>

@class NSObject;
@protocol IBIDEAutolayoutItem;

@interface IBAutolayoutViewOutlineItem : IBAutolayoutIssueOutlineItem
{
    NSObject<IBIDEAutolayoutItem> *_view;
}

@property(readonly, nonatomic) NSObject<IBIDEAutolayoutItem> *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)initWithView:(id)arg1;

@end

