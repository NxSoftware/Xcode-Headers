//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class DVTBorderedView, DVTReplacementView;

@interface DVTDevicesWindowContentAreaViewController : DVTViewController
{
    DVTReplacementView *_replacementView;
    DVTBorderedView *_borderedView;
}

@property(retain) DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
- (void).cxx_destruct;
- (id)_borderColor;
- (void)primitiveInvalidate;
- (void)viewDidLoad;

@end

