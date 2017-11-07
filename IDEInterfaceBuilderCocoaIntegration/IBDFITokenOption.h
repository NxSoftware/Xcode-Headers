//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaIntegration/NSCoding-Protocol.h>

@class NSString;

@interface IBDFITokenOption : NSObject <NSCoding>
{
    BOOL _isLabel;
    BOOL _isHidden;
    NSString *_editingString;
    NSString *_displayString;
    NSString *_menuString;
}

+ (id)tokenOptionWithEditingString:(id)arg1 displayString:(id)arg2 menuString:(id)arg3 hidden:(BOOL)arg4 label:(BOOL)arg5;
@property BOOL isHidden; // @synthesize isHidden=_isHidden;
@property BOOL isLabel; // @synthesize isLabel=_isLabel;
@property(copy, nonatomic) NSString *menuString; // @synthesize menuString=_menuString;
@property(copy, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
@property(copy, nonatomic) NSString *editingString; // @synthesize editingString=_editingString;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEditingString:(id)arg1 displayString:(id)arg2 menuString:(id)arg3 hidden:(BOOL)arg4 label:(BOOL)arg5;

@end

