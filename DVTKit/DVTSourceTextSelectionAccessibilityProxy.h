//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTSourceTextView;

@interface DVTSourceTextSelectionAccessibilityProxy : NSObject
{
    DVTSourceTextView *_parent;
}

@property(retain) DVTSourceTextView *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (struct CGRect)frameForProxy;
- (id)initWithParent:(id)arg1;

@end

