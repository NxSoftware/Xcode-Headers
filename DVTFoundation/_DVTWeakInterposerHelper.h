//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTWeakInterposer_ProxyHelperReference;

@interface _DVTWeakInterposerHelper : NSObject
{
    BOOL _assertOnRetain;
    BOOL _isAsserting;
    DVTWeakInterposer_ProxyHelperReference *_interposer;
    id _representedObject;
}

@property id representedObject; // @synthesize representedObject=_representedObject;
@property(retain) DVTWeakInterposer_ProxyHelperReference *interposer; // @synthesize interposer=_interposer;
- (void)dealloc;
- (id)retain;

@end

