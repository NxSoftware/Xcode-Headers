//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDESourceKitResponse : NSObject
{
    struct _sourcekit_response_s *_obj;
}

- (id)description;
- (id)error;
- (BOOL)isError;
- (id)value;
- (void)dealloc;
- (struct _sourcekit_response_s *)sourceKitObject;
- (id)initWithSourceKitObject:(struct _sourcekit_response_s *)arg1;

@end

