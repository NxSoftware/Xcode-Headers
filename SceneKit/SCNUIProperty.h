//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SCNUIProperty : NSObject
{
    BOOL readonly;
    int type;
    NSString *name;
    Class objectClass;
}

@property(retain, nonatomic) Class objectClass; // @synthesize objectClass;
@property(nonatomic) BOOL readonly; // @synthesize readonly;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;

@end

