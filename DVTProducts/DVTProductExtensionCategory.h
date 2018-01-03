//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTProductExtensionCategory : NSObject
{
    NSString *_userDescription;
    long long _sortOrder;
    NSString *_identifier;
    NSString *_imageName;
}

+ (id)productExtensionCategoryForExtensionPointIdentifier:(id)arg1;
+ (id)identifierToProductExtensionCategory;
+ (id)productExtensions;
@property(readonly) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) long long sortOrder; // @synthesize sortOrder=_sortOrder;
@property(readonly) NSString *userDescription; // @synthesize userDescription=_userDescription;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 userDescription:(id)arg2 sortOrder:(long long)arg3 imageName:(id)arg4;

@end

