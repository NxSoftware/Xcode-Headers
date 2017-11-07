//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDESourceEditor/DVTInvalidation-Protocol.h>
#import <IDESourceEditor/NSObject-Protocol.h>

@class DVTSDK, DVTSourceExpression, DVTSourceLanguageService, NSString;

@protocol DVTSourceExpressionSource <NSObject, DVTInvalidation>
@property(readonly, nonatomic) DVTSourceExpression *mouseOverExpression;
@property(readonly, nonatomic) struct CGRect currentSelectionFrame;
@property(readonly) DVTSourceExpression *contextMenuExpression;
@property(readonly, nonatomic) DVTSourceExpression *selectedExpression;
- (struct CGRect)expressionFrameForExpression:(DVTSourceExpression *)arg1;

@optional
@property(readonly) DVTSDK *sdk;
@property(readonly, nonatomic) DVTSourceLanguageService *languageService;
@property(readonly, nonatomic) NSString *selectedText;
@property(readonly) DVTSourceExpression *quickHelpExpression;
@end

