//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/NSCoding-Protocol.h>

@class NSString;

@interface IBAttributePlaceholder : NSObject <NSCoding>
{
    id _object;
    NSString *_name;
}

@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)didCompileDocument:(id)arg1;
- (void)willCompileDocument:(id)arg1;
- (id)archiveConnection;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1 andName:(id)arg2;

@end

