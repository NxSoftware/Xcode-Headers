//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEDebugGaugeReportDocument.h>

@class iCloudController;

@interface iCloudActivityDocument : IDEDebugGaugeReportDocument
{
    unsigned char _type;
    iCloudController *_controller;
}

@property(nonatomic) unsigned char type; // @synthesize type=_type;
@property(nonatomic) __weak iCloudController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)displayName;
- (void)editorDocumentDidClose;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;

@end

