//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

@class NSString;

@interface IDETestReportDocumentLocation : DVTDocumentLocation
{
    NSString *_testClassName;
    NSString *_testMethodName;
}

@property(copy) NSString *testMethodName; // @synthesize testMethodName=_testMethodName;
@property(copy) NSString *testClassName; // @synthesize testClassName=_testClassName;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 testClassName:(id)arg3 testMethodName:(id)arg4;

@end

