//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTFilePath, NSArray, NSString;

@interface DVTDiagnosticsTool : NSObject
{
    NSString *_name;
    DVTFilePath *_path;
    NSArray *_arguments;
}

@property(retain, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(retain, nonatomic) DVTFilePath *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 path:(id)arg2 arguments:(id)arg3 error:(id *)arg4;

@end

