//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class IDEDistributionContext, IDEDistributionItemSummaryNode, NSTextView;

@interface IDEDistributionItemSummaryViewController : IDEViewController
{
    NSTextView *_detailTextView;
    IDEDistributionItemSummaryNode *_node;
    IDEDistributionContext *_context;
}

@property(retain, nonatomic) IDEDistributionContext *context; // @synthesize context=_context;
@property(retain, nonatomic) IDEDistributionItemSummaryNode *node; // @synthesize node=_node;
@property(retain, nonatomic) NSTextView *detailTextView; // @synthesize detailTextView=_detailTextView;
- (void).cxx_destruct;
- (void)revealProfile:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNode:(id)arg1 context:(id)arg2;

@end

