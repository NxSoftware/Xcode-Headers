//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class NSArray, NSTextView;

@interface IDEContinuousIntegrationCreateEditBotErrorSheet : DVTViewController
{
    NSArray *_validationErrors;
    NSTextView *_textView;
}

@property NSTextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSArray *validationErrors; // @synthesize validationErrors=_validationErrors;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end

