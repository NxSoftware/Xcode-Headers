//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class DVTDocumentLocation, DVTFilePath, DVTSourceCodeSymbolKind, NSString;

@protocol IDEOpenQuicklyIndexSymbol <NSObject>
- (DVTSourceCodeSymbolKind *)symbolKind;
- (DVTFilePath *)file;
- (DVTDocumentLocation *)location;
- (NSString *)name;
- (BOOL)isInProject;
@end

